xquery version "3.0";

(:
 : Copyright (c) 2010-2011
 :     John Snelson. All rights reserved.
 :
 : Licensed under the Apache License, Version 2.0 (the "License");
 : you may not use this file except in compliance with the License.
 : You may obtain a copy of the License at
 :
 :     http://www.apache.org/licenses/LICENSE-2.0
 :
 : Unless required by applicable law or agreed to in writing, software
 : distributed under the License is distributed on an "AS IS" BASIS,
 : WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 : See the License for the specific language governing permissions and
 : limitations under the License.
 :)

module namespace xqilla="http://xqilla.sourceforge.net/Functions";

(:----------------------------------------------------------------------------------------------------:)
(: JSON parsing :)

declare function xqilla:parse-json($json as xs:string)
  as element()?
{
  let $res := xqilla:parseValue(xqilla:tokenize($json))
  return
    if(empty(tail($res))) then head($res)
    else xqilla:parseError($res[2])
};

declare %private function xqilla:parseValue($tokens as element(token)*)
{
  let $token := head($tokens)
  let $tokens := tail($tokens)
  return
    switch($token/@t)
    case "lbrace" return
      let $res := xqilla:parseObject($tokens)
      let $tokens := tail($res)
      return (
        element json {
          attribute type { "object" },
          head($res)/node()
        },
        $tokens
      )
    case "lsquare" return
      let $res := xqilla:parseArray($tokens)
      let $tokens := tail($res)
      return (
        element json {
          attribute type { "array" },
          head($res)/node()
        },
        $tokens
      )
    case "number" return (
      element json {
        attribute type { "number" },
        text { $token }
      },
      $tokens
    )
    case "string" return (
      element json {
        attribute type { "string" },
        text { xqilla:unescape-json-string($token) }
      },
      $tokens
    )
    case "true"
    case "false" return (
      element json {
        attribute type { "boolean" },
        text { $token }
      },
      $tokens
    )
    case "null" return (
      element json {
        attribute type { "null" }
      },
      $tokens
    )
    default return xqilla:parseError($token)
};

declare %private function xqilla:parseObject($tokens as element(token)*)
{
  let $token1 := head($tokens)
  let $tokens := tail($tokens)
  return
    if(not($token1/@t = "string")) then xqilla:parseError($token1) else
      let $token2 := head($tokens)
      let $tokens := tail($tokens)
      return
        if(not($token2/@t = "colon")) then xqilla:parseError($token2) else
          let $res := xqilla:parseValue($tokens)
          let $tokens := tail($res)
          let $pair := element pair {
            attribute name { $token1 },
            head($res)/(@*,node())
          }
          let $token := head($tokens)
          let $tokens := tail($tokens)
          return
            switch($token/@t)
            case "comma" return
              let $res := xqilla:parseObject($tokens)
              let $tokens := tail($res)
              return (
                element json {
                  $pair,
                  head($res)/node()
                },
                $tokens
              )
            case "rbrace" return (
              element json {
                $pair
              },
              $tokens
            )
            default return xqilla:parseError($token)
};

declare %private function xqilla:parseArray($tokens as element(token)*)
{
  let $res := xqilla:parseValue($tokens)
  let $tokens := tail($res)
  let $item := element item {
    head($res)/(@*,node())
  }
  let $token := head($tokens)
  let $tokens := tail($tokens)
  return
    switch($token/@t)
    case "comma" return
      let $res := xqilla:parseArray($tokens)
      let $tokens := tail($res)
      return (
        element json {
          $item,
          head($res)/node()
        },
        $tokens
      )
    case "rsquare" return (
      element json {
        $item
      },
      $tokens
    )
    default return xqilla:parseError($token)
};

declare %private function xqilla:parseError($token as element(token))
  as empty-sequence()
{
  error(xs:QName("xqilla:PARSEJSON01"),
    concat("Unexpected token: ", string($token/@t), " (""", string($token), """)"))
};

declare %private function xqilla:tokenize($json as xs:string)
  as element(token)*
{
  let $tokens := ("\{", "\}", "\[", "\]", ":", ",", "true", "false", "null", "\s+",
    '"([^"\\]|\\"|\\\\|\\/|\\b|\\f|\\n|\\r|\\t|\\u[A-Fa-f0-9][A-Fa-f0-9][A-Fa-f0-9][A-Fa-f0-9])*"',
    "-?(0|[1-9][0-9]*)(\.[0-9]+)?([eE][+-]?[0-9]+)?")
  let $regex := string-join(for $t in $tokens return concat("(",$t,")"),"|")
  for $match in analyze-string($json, $regex)/*
  return
    switch($match/*:group/@nr)
    case "1" return xqilla:token("lbrace", string($match))
    case "2" return xqilla:token("rbrace", string($match))
    case "3" return xqilla:token("lsquare", string($match))
    case "4" return xqilla:token("rsquare", string($match))
    case "5" return xqilla:token("colon", string($match))
    case "6" return xqilla:token("comma", string($match))
    case "7" return xqilla:token("true", string($match))
    case "8" return xqilla:token("false", string($match))
    case "9" return xqilla:token("null", string($match))
    case "10" return () (:ignore whitespace:)
    case "11" return
      let $v := string($match)
      let $len := string-length($v)
      return xqilla:token("string", substring($v, 2, $len - 2))
    case "13" return xqilla:token("number", string($match))
    default return xqilla:token("error", string($match))
};

declare %private function xqilla:token($t, $value)
{
  <token t="{$t}">{ string($value) }</token>
};

(:----------------------------------------------------------------------------------------------------:)
(: JSON serializing :)

declare function xqilla:serialize-json($json-xml as element()?)
  as xs:string?
{
  if(empty($json-xml)) then () else

  string-join(
    xqilla:serializeJSONElement($json-xml)
  )
};

declare %private function xqilla:serializeJSONElement($e as element())
  as xs:string*
{
  switch($e/@type)
  case "object" return xqilla:serializeJSONObject($e)
  case "array" return xqilla:serializeJSONArray($e)
  case "null" return "null"
  case "boolean" return string($e)
  case "number" return string($e)
  default return ('"', xqilla:escape-json-string($e), '"')
};

declare %private function xqilla:serializeJSONObject($e as element())
  as xs:string*
{
  "{",
  $e/*/(
    if(position() = 1) then () else ",",
    '"', xqilla:escape-json-string(@name), '":',
    xqilla:serializeJSONElement(.)
  ),
  "}"
};

declare %private function xqilla:serializeJSONArray($e as element())
  as xs:string*
{
  "[",
  $e/*/(
    if(position() = 1) then () else ",",
    xqilla:serializeJSONElement(.)
  ),
  "]"
};

(:----------------------------------------------------------------------------------------------------:)
(: JSON unescaping :)

declare function xqilla:unescape-json-string($val as xs:string)
  as xs:string
{
  string-join(
    let $regex := '[^\\]+|(\\")|(\\\\)|(\\/)|(\\b)|(\\f)|(\\n)|(\\r)|(\\t)|(\\u[A-Fa-f0-9][A-Fa-f0-9][A-Fa-f0-9][A-Fa-f0-9])'
    for $match in analyze-string($val, $regex)/*
    return
      switch($match/*:group/@nr)
      case "1" return """"
      case "2" return "\"
      case "3" return "/"
      (: case "4" return "&#x08;" :)
      (: case "5" return "&#x0C;" :)
      case "6" return "&#x0A;"
      case "7" return "&#x0D;"
      case "8" return "&#x09;"
      case "9" return
        codepoints-to-string(xqilla:decode-hex-string(substring($match, 3)))
      default return string($match)
  )
};

declare function xqilla:escape-json-string($val as xs:string)
  as xs:string
{
  string-join(
    let $regex := '(")|(\\)|(/)|(&#x0A;)|(&#x0D;)|(&#x09;)|[^"\\/&#x0A;&#x0D;&#x09;]+'
    for $match in analyze-string($val, $regex)/*
    return
      switch($match/*:group/@nr)
      case "1" return "\"""
      case "2" return "\\"
      case "3" return "\/"
      case "4" return "\n"
      case "5" return "\r"
      case "6" return "\t"
      default return string($match)
  )
};
declare function xqilla:decode-hex-string($val as xs:string)
  as xs:integer
{
  xqilla:decodeHexStringHelper(string-to-codepoints($val), 0)
};

declare %private function xqilla:decodeHexChar($val as xs:integer)
  as xs:integer
{
  let $tmp := $val - 48 (: '0' :)
  let $tmp := if($tmp <= 9) then $tmp else $tmp - (65-48) (: 'A'-'0' :)
  let $tmp := if($tmp <= 15) then $tmp else $tmp - (97-65) (: 'a'-'A' :)
  return $tmp
};

declare %private function xqilla:decodeHexStringHelper($chars as xs:integer*, $acc as xs:integer)
  as xs:integer
{
  if(empty($chars)) then $acc
  else xqilla:decodeHexStringHelper(tail($chars), ($acc * 16) + xqilla:decodeHexChar(head($chars)))
};
