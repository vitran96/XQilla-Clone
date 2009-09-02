/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MYEOF = 0,
     _LANG_XPATH2_ = 258,
     _LANG_XQUERY_ = 259,
     _LANG_XQUERY_FULLTEXT_ = 260,
     _LANG_XQUERY_UPDATE_ = 261,
     _LANG_XQUERY_FULLTEXT_UPDATE_ = 262,
     _LANG_XSLT2_ = 263,
     _DOLLAR_ = 264,
     _COLON_EQUALS_ = 265,
     _ASTERISK_ = 266,
     _BAR_ = 267,
     _BANG_EQUALS_ = 268,
     _LESS_THAN_EQUALS_ = 269,
     _GREATER_THAN_ = 270,
     _GREATER_THAN_EQUALS_ = 271,
     _LESS_THAN_LESS_THAN_ = 272,
     _GREATER_THAN_GREATER_THAN_ = 273,
     _COLON_COLON_ = 274,
     _AT_SIGN_ = 275,
     _LSQUARE_ = 276,
     _RSQUARE_ = 277,
     _QUESTION_MARK_ = 278,
     _LESS_THAN_OP_OR_TAG_ = 279,
     _START_TAG_CLOSE_ = 280,
     _END_TAG_CLOSE_ = 281,
     _PI_START_ = 282,
     _XML_COMMENT_START_ = 283,
     _XML_COMMENT_END_ = 284,
     _SLASH_SLASH_ = 285,
     _END_TAG_OPEN_ = 286,
     _PRAGMA_OPEN_ = 287,
     _COMMA_ = 288,
     _PLUS_ = 289,
     _MINUS_ = 290,
     _SLASH_ = 291,
     _EQUALS_ = 292,
     _DOT_ = 293,
     _DOT_DOT_ = 294,
     _LPAR_ = 295,
     _RPAR_ = 296,
     _EMPTY_TAG_CLOSE_ = 297,
     _VALUE_INDICATOR_ = 298,
     _OPEN_QUOT_ = 299,
     _CLOSE_QUOT_ = 300,
     _OPEN_APOS_ = 301,
     _CLOSE_APOS_ = 302,
     _LBRACE_ = 303,
     _LBRACE_EXPR_ENCLOSURE_ = 304,
     _RBRACE_ = 305,
     _SEMICOLON_ = 306,
     _HASH_ = 307,
     _INTEGER_LITERAL_ = 308,
     _DECIMAL_LITERAL_ = 309,
     _DOUBLE_LITERAL_ = 310,
     _ATTRIBUTE_ = 311,
     _COMMENT_ = 312,
     _DOCUMENT_NODE_ = 313,
     _NODE_ = 314,
     _PROCESSING_INSTRUCTION_ = 315,
     _SCHEMA_ATTRIBUTE_ = 316,
     _SCHEMA_ELEMENT_ = 317,
     _TEXT_ = 318,
     _EMPTY_SEQUENCE_ = 319,
     _BOUNDARY_SPACE_ = 320,
     _FT_OPTION_ = 321,
     _BASE_URI_ = 322,
     _LAX_ = 323,
     _STRICT_ = 324,
     _IDIV_ = 325,
     _CHILD_ = 326,
     _DESCENDANT_ = 327,
     _SELF_ = 328,
     _DESCENDANT_OR_SELF_ = 329,
     _FOLLOWING_SIBLING_ = 330,
     _FOLLOWING_ = 331,
     _PARENT_ = 332,
     _ANCESTOR_ = 333,
     _PRECEDING_SIBLING_ = 334,
     _PRECEDING_ = 335,
     _ANCESTOR_OR_SELF_ = 336,
     _DOCUMENT_ = 337,
     _NOT_ = 338,
     _SENSITIVE_ = 339,
     _INSENSITIVE_ = 340,
     _DIACRITICS_ = 341,
     _WITHOUT_ = 342,
     _WITHOUT_C_ = 343,
     _STEMMING_ = 344,
     _THESAURUS_ = 345,
     _STOP_ = 346,
     _WILDCARDS_ = 347,
     _ENTIRE_ = 348,
     _CONTENT_ = 349,
     _WORD_ = 350,
     _TYPE_ = 351,
     _START_ = 352,
     _END_ = 353,
     _MOST_ = 354,
     _SKIP_ = 355,
     _COPY_ = 356,
     _VALUE_ = 357,
     _WHITESPACE_ = 358,
     _PI_CONTENT_ = 359,
     _XML_COMMENT_CONTENT_ = 360,
     _EQ_ = 361,
     _NE_ = 362,
     _LT_ = 363,
     _LE_ = 364,
     _GT_ = 365,
     _GE_ = 366,
     _AT_ = 367,
     _QUOT_ATTR_CONTENT_ = 368,
     _APOS_ATTR_CONTENT_ = 369,
     _WHITESPACE_ELEMENT_CONTENT_ = 370,
     _ELEMENT_CONTENT_ = 371,
     _AT_LM_ = 372,
     _ORDERED_ = 373,
     _UNORDERED_ = 374,
     _QNAME_ = 375,
     _XMLNS_QNAME_ = 376,
     _CONSTR_QNAME_ = 377,
     _STRING_LITERAL_ = 378,
     _VARIABLE_ = 379,
     _NCNAME_COLON_STAR_ = 380,
     _STAR_COLON_NCNAME_ = 381,
     _PI_TARGET_ = 382,
     _PRAGMA_CONTENT_ = 383,
     _RETURN_ = 384,
     _FOR_ = 385,
     _IN_ = 386,
     _LET_ = 387,
     _WHERE_ = 388,
     _BY_ = 389,
     _ORDER_ = 390,
     _STABLE_ = 391,
     _ASCENDING_ = 392,
     _DESCENDING_ = 393,
     _EMPTY_ = 394,
     _GREATEST_ = 395,
     _LEAST_ = 396,
     _COLLATION_ = 397,
     _SOME_ = 398,
     _EVERY_ = 399,
     _SATISFIES_ = 400,
     _TYPESWITCH_ = 401,
     _CASE_ = 402,
     _CASE_S_ = 403,
     _AS_ = 404,
     _IF_ = 405,
     _THEN_ = 406,
     _ELSE_ = 407,
     _OR_ = 408,
     _AND_ = 409,
     _INSTANCE_ = 410,
     _OF_ = 411,
     _CASTABLE_ = 412,
     _TO_ = 413,
     _DIV_ = 414,
     _MOD_ = 415,
     _UNION_ = 416,
     _INTERSECT_ = 417,
     _EXCEPT_ = 418,
     _VALIDATE_ = 419,
     _CAST_ = 420,
     _TREAT_ = 421,
     _IS_ = 422,
     _PRESERVE_ = 423,
     _STRIP_ = 424,
     _NAMESPACE_ = 425,
     _ITEM_ = 426,
     _EXTERNAL_ = 427,
     _ENCODING_ = 428,
     _NO_PRESERVE_ = 429,
     _INHERIT_ = 430,
     _NO_INHERIT_ = 431,
     _DECLARE_ = 432,
     _CONSTRUCTION_ = 433,
     _ORDERING_ = 434,
     _DEFAULT_ = 435,
     _COPY_NAMESPACES_ = 436,
     _OPTION_ = 437,
     _XQUERY_ = 438,
     _VERSION_ = 439,
     _IMPORT_ = 440,
     _SCHEMA_ = 441,
     _MODULE_ = 442,
     _ELEMENT_ = 443,
     _FUNCTION_ = 444,
     _FUNCTION_EXT_ = 445,
     _SCORE_ = 446,
     _FTCONTAINS_ = 447,
     _WEIGHT_ = 448,
     _WINDOW_ = 449,
     _DISTANCE_ = 450,
     _OCCURS_ = 451,
     _TIMES_ = 452,
     _SAME_ = 453,
     _DIFFERENT_ = 454,
     _LOWERCASE_ = 455,
     _UPPERCASE_ = 456,
     _RELATIONSHIP_ = 457,
     _LEVELS_ = 458,
     _LANGUAGE_ = 459,
     _ANY_ = 460,
     _ALL_ = 461,
     _PHRASE_ = 462,
     _EXACTLY_ = 463,
     _FROM_ = 464,
     _WORDS_ = 465,
     _SENTENCES_ = 466,
     _PARAGRAPHS_ = 467,
     _SENTENCE_ = 468,
     _PARAGRAPH_ = 469,
     _REPLACE_ = 470,
     _MODIFY_ = 471,
     _FIRST_ = 472,
     _INSERT_ = 473,
     _BEFORE_ = 474,
     _AFTER_ = 475,
     _REVALIDATION_ = 476,
     _WITH_ = 477,
     _WITH_FT_ = 478,
     _NODES_ = 479,
     _RENAME_ = 480,
     _LAST_ = 481,
     _DELETE_ = 482,
     _INTO_ = 483,
     _UPDATING_ = 484,
     _ID_ = 485,
     _KEY_ = 486,
     _TEMPLATE_ = 487,
     _MATCHES_ = 488,
     _NAME_ = 489,
     _CALL_ = 490,
     _APPLY_ = 491,
     _TEMPLATES_ = 492,
     _MODE_ = 493,
     _FTOR_ = 494,
     _FTAND_ = 495,
     _FTNOT_ = 496,
     _XSLT_END_ELEMENT_ = 497,
     _XSLT_STYLESHEET_ = 498,
     _XSLT_TEMPLATE_ = 499,
     _XSLT_VALUE_OF_ = 500,
     _XSLT_TEXT_ = 501,
     _XSLT_APPLY_TEMPLATES_ = 502,
     _XSLT_CALL_TEMPLATE_ = 503,
     _XSLT_WITH_PARAM_ = 504,
     _XSLT_SEQUENCE_ = 505,
     _XSLT_PARAM_ = 506,
     _XSLT_FUNCTION_ = 507,
     _XSLT_CHOOSE_ = 508,
     _XSLT_WHEN_ = 509,
     _XSLT_OTHERWISE_ = 510,
     _XSLT_IF_ = 511,
     _XSLT_VARIABLE_ = 512,
     _XSLT_COMMENT_ = 513,
     _XSLT_PI_ = 514,
     _XSLT_DOCUMENT_ = 515,
     _XSLT_ATTRIBUTE_ = 516,
     _XSLT_NAMESPACE_ = 517,
     _XSLT_ELEMENT_ = 518,
     _XSLT_ANALYZE_STRING_ = 519,
     _XSLT_MATCHING_SUBSTRING_ = 520,
     _XSLT_NON_MATCHING_SUBSTRING_ = 521,
     _XSLT_COPY_OF_ = 522,
     _XSLT_COPY_ = 523,
     _XSLT_FOR_EACH_ = 524,
     _XSLT_OUTPUT_ = 525,
     _XSLT_IMPORT_SCHEMA_ = 526,
     _XSLT_VERSION_ = 527,
     _XSLT_MODE_ = 528,
     _XSLT_NAME_ = 529,
     _XSLT_DOCTYPE_PUBLIC_ = 530,
     _XSLT_DOCTYPE_SYSTEM_ = 531,
     _XSLT_ENCODING_ = 532,
     _XSLT_MEDIA_TYPE_ = 533,
     _XSLT_NORMALIZATION_FORM_ = 534,
     _XSLT_STANDALONE_ = 535,
     _XSLT_EXCLUDE_RESULT_PREFIXES_ = 536,
     _XSLT_NAMESPACE_STR_ = 537,
     _XSLT_SCHEMA_LOCATION_ = 538,
     _XSLT_TUNNEL_ = 539,
     _XSLT_REQUIRED_ = 540,
     _XSLT_OVERRIDE_ = 541,
     _XSLT_COPY_NAMESPACES_ = 542,
     _XSLT_INHERIT_NAMESPACES_ = 543,
     _XSLT_BYTE_ORDER_MARK_ = 544,
     _XSLT_ESCAPE_URI_ATTRIBUTES_ = 545,
     _XSLT_INCLUDE_CONTENT_TYPE_ = 546,
     _XSLT_INDENT_ = 547,
     _XSLT_OMIT_XML_DECLARATION_ = 548,
     _XSLT_UNDECLARE_PREFIXES_ = 549,
     _XSLT_MATCH_ = 550,
     _XSLT_AS_ = 551,
     _XSLT_SELECT_ = 552,
     _XSLT_PRIORITY_ = 553,
     _XSLT_TEST_ = 554,
     _XSLT_SEPARATOR_ = 555,
     _XSLT_NAMESPACE_A_ = 556,
     _XSLT_REGEX_ = 557,
     _XSLT_FLAGS_ = 558,
     _XSLT_METHOD_ = 559,
     _XSLT_CDATA_SECTION_ELEMENTS_ = 560,
     _XSLT_USE_CHARACTER_MAPS_ = 561,
     _XSLT_ELEMENT_NAME_ = 562,
     _XSLT_XMLNS_ATTR_ = 563,
     _XSLT_ATTR_NAME_ = 564,
     _XSLT_TEXT_NODE_ = 565,
     _XSLT_WS_TEXT_NODE_ = 566,
     _HASH_DEFAULT_ = 567,
     _HASH_ALL_ = 568,
     _HASH_CURRENT_ = 569,
     _XML_ = 570,
     _HTML_ = 571,
     _XHTML_ = 572
   };
#endif
/* Tokens.  */
#define MYEOF 0
#define _LANG_XPATH2_ 258
#define _LANG_XQUERY_ 259
#define _LANG_XQUERY_FULLTEXT_ 260
#define _LANG_XQUERY_UPDATE_ 261
#define _LANG_XQUERY_FULLTEXT_UPDATE_ 262
#define _LANG_XSLT2_ 263
#define _DOLLAR_ 264
#define _COLON_EQUALS_ 265
#define _ASTERISK_ 266
#define _BAR_ 267
#define _BANG_EQUALS_ 268
#define _LESS_THAN_EQUALS_ 269
#define _GREATER_THAN_ 270
#define _GREATER_THAN_EQUALS_ 271
#define _LESS_THAN_LESS_THAN_ 272
#define _GREATER_THAN_GREATER_THAN_ 273
#define _COLON_COLON_ 274
#define _AT_SIGN_ 275
#define _LSQUARE_ 276
#define _RSQUARE_ 277
#define _QUESTION_MARK_ 278
#define _LESS_THAN_OP_OR_TAG_ 279
#define _START_TAG_CLOSE_ 280
#define _END_TAG_CLOSE_ 281
#define _PI_START_ 282
#define _XML_COMMENT_START_ 283
#define _XML_COMMENT_END_ 284
#define _SLASH_SLASH_ 285
#define _END_TAG_OPEN_ 286
#define _PRAGMA_OPEN_ 287
#define _COMMA_ 288
#define _PLUS_ 289
#define _MINUS_ 290
#define _SLASH_ 291
#define _EQUALS_ 292
#define _DOT_ 293
#define _DOT_DOT_ 294
#define _LPAR_ 295
#define _RPAR_ 296
#define _EMPTY_TAG_CLOSE_ 297
#define _VALUE_INDICATOR_ 298
#define _OPEN_QUOT_ 299
#define _CLOSE_QUOT_ 300
#define _OPEN_APOS_ 301
#define _CLOSE_APOS_ 302
#define _LBRACE_ 303
#define _LBRACE_EXPR_ENCLOSURE_ 304
#define _RBRACE_ 305
#define _SEMICOLON_ 306
#define _HASH_ 307
#define _INTEGER_LITERAL_ 308
#define _DECIMAL_LITERAL_ 309
#define _DOUBLE_LITERAL_ 310
#define _ATTRIBUTE_ 311
#define _COMMENT_ 312
#define _DOCUMENT_NODE_ 313
#define _NODE_ 314
#define _PROCESSING_INSTRUCTION_ 315
#define _SCHEMA_ATTRIBUTE_ 316
#define _SCHEMA_ELEMENT_ 317
#define _TEXT_ 318
#define _EMPTY_SEQUENCE_ 319
#define _BOUNDARY_SPACE_ 320
#define _FT_OPTION_ 321
#define _BASE_URI_ 322
#define _LAX_ 323
#define _STRICT_ 324
#define _IDIV_ 325
#define _CHILD_ 326
#define _DESCENDANT_ 327
#define _SELF_ 328
#define _DESCENDANT_OR_SELF_ 329
#define _FOLLOWING_SIBLING_ 330
#define _FOLLOWING_ 331
#define _PARENT_ 332
#define _ANCESTOR_ 333
#define _PRECEDING_SIBLING_ 334
#define _PRECEDING_ 335
#define _ANCESTOR_OR_SELF_ 336
#define _DOCUMENT_ 337
#define _NOT_ 338
#define _SENSITIVE_ 339
#define _INSENSITIVE_ 340
#define _DIACRITICS_ 341
#define _WITHOUT_ 342
#define _WITHOUT_C_ 343
#define _STEMMING_ 344
#define _THESAURUS_ 345
#define _STOP_ 346
#define _WILDCARDS_ 347
#define _ENTIRE_ 348
#define _CONTENT_ 349
#define _WORD_ 350
#define _TYPE_ 351
#define _START_ 352
#define _END_ 353
#define _MOST_ 354
#define _SKIP_ 355
#define _COPY_ 356
#define _VALUE_ 357
#define _WHITESPACE_ 358
#define _PI_CONTENT_ 359
#define _XML_COMMENT_CONTENT_ 360
#define _EQ_ 361
#define _NE_ 362
#define _LT_ 363
#define _LE_ 364
#define _GT_ 365
#define _GE_ 366
#define _AT_ 367
#define _QUOT_ATTR_CONTENT_ 368
#define _APOS_ATTR_CONTENT_ 369
#define _WHITESPACE_ELEMENT_CONTENT_ 370
#define _ELEMENT_CONTENT_ 371
#define _AT_LM_ 372
#define _ORDERED_ 373
#define _UNORDERED_ 374
#define _QNAME_ 375
#define _XMLNS_QNAME_ 376
#define _CONSTR_QNAME_ 377
#define _STRING_LITERAL_ 378
#define _VARIABLE_ 379
#define _NCNAME_COLON_STAR_ 380
#define _STAR_COLON_NCNAME_ 381
#define _PI_TARGET_ 382
#define _PRAGMA_CONTENT_ 383
#define _RETURN_ 384
#define _FOR_ 385
#define _IN_ 386
#define _LET_ 387
#define _WHERE_ 388
#define _BY_ 389
#define _ORDER_ 390
#define _STABLE_ 391
#define _ASCENDING_ 392
#define _DESCENDING_ 393
#define _EMPTY_ 394
#define _GREATEST_ 395
#define _LEAST_ 396
#define _COLLATION_ 397
#define _SOME_ 398
#define _EVERY_ 399
#define _SATISFIES_ 400
#define _TYPESWITCH_ 401
#define _CASE_ 402
#define _CASE_S_ 403
#define _AS_ 404
#define _IF_ 405
#define _THEN_ 406
#define _ELSE_ 407
#define _OR_ 408
#define _AND_ 409
#define _INSTANCE_ 410
#define _OF_ 411
#define _CASTABLE_ 412
#define _TO_ 413
#define _DIV_ 414
#define _MOD_ 415
#define _UNION_ 416
#define _INTERSECT_ 417
#define _EXCEPT_ 418
#define _VALIDATE_ 419
#define _CAST_ 420
#define _TREAT_ 421
#define _IS_ 422
#define _PRESERVE_ 423
#define _STRIP_ 424
#define _NAMESPACE_ 425
#define _ITEM_ 426
#define _EXTERNAL_ 427
#define _ENCODING_ 428
#define _NO_PRESERVE_ 429
#define _INHERIT_ 430
#define _NO_INHERIT_ 431
#define _DECLARE_ 432
#define _CONSTRUCTION_ 433
#define _ORDERING_ 434
#define _DEFAULT_ 435
#define _COPY_NAMESPACES_ 436
#define _OPTION_ 437
#define _XQUERY_ 438
#define _VERSION_ 439
#define _IMPORT_ 440
#define _SCHEMA_ 441
#define _MODULE_ 442
#define _ELEMENT_ 443
#define _FUNCTION_ 444
#define _FUNCTION_EXT_ 445
#define _SCORE_ 446
#define _FTCONTAINS_ 447
#define _WEIGHT_ 448
#define _WINDOW_ 449
#define _DISTANCE_ 450
#define _OCCURS_ 451
#define _TIMES_ 452
#define _SAME_ 453
#define _DIFFERENT_ 454
#define _LOWERCASE_ 455
#define _UPPERCASE_ 456
#define _RELATIONSHIP_ 457
#define _LEVELS_ 458
#define _LANGUAGE_ 459
#define _ANY_ 460
#define _ALL_ 461
#define _PHRASE_ 462
#define _EXACTLY_ 463
#define _FROM_ 464
#define _WORDS_ 465
#define _SENTENCES_ 466
#define _PARAGRAPHS_ 467
#define _SENTENCE_ 468
#define _PARAGRAPH_ 469
#define _REPLACE_ 470
#define _MODIFY_ 471
#define _FIRST_ 472
#define _INSERT_ 473
#define _BEFORE_ 474
#define _AFTER_ 475
#define _REVALIDATION_ 476
#define _WITH_ 477
#define _WITH_FT_ 478
#define _NODES_ 479
#define _RENAME_ 480
#define _LAST_ 481
#define _DELETE_ 482
#define _INTO_ 483
#define _UPDATING_ 484
#define _ID_ 485
#define _KEY_ 486
#define _TEMPLATE_ 487
#define _MATCHES_ 488
#define _NAME_ 489
#define _CALL_ 490
#define _APPLY_ 491
#define _TEMPLATES_ 492
#define _MODE_ 493
#define _FTOR_ 494
#define _FTAND_ 495
#define _FTNOT_ 496
#define _XSLT_END_ELEMENT_ 497
#define _XSLT_STYLESHEET_ 498
#define _XSLT_TEMPLATE_ 499
#define _XSLT_VALUE_OF_ 500
#define _XSLT_TEXT_ 501
#define _XSLT_APPLY_TEMPLATES_ 502
#define _XSLT_CALL_TEMPLATE_ 503
#define _XSLT_WITH_PARAM_ 504
#define _XSLT_SEQUENCE_ 505
#define _XSLT_PARAM_ 506
#define _XSLT_FUNCTION_ 507
#define _XSLT_CHOOSE_ 508
#define _XSLT_WHEN_ 509
#define _XSLT_OTHERWISE_ 510
#define _XSLT_IF_ 511
#define _XSLT_VARIABLE_ 512
#define _XSLT_COMMENT_ 513
#define _XSLT_PI_ 514
#define _XSLT_DOCUMENT_ 515
#define _XSLT_ATTRIBUTE_ 516
#define _XSLT_NAMESPACE_ 517
#define _XSLT_ELEMENT_ 518
#define _XSLT_ANALYZE_STRING_ 519
#define _XSLT_MATCHING_SUBSTRING_ 520
#define _XSLT_NON_MATCHING_SUBSTRING_ 521
#define _XSLT_COPY_OF_ 522
#define _XSLT_COPY_ 523
#define _XSLT_FOR_EACH_ 524
#define _XSLT_OUTPUT_ 525
#define _XSLT_IMPORT_SCHEMA_ 526
#define _XSLT_VERSION_ 527
#define _XSLT_MODE_ 528
#define _XSLT_NAME_ 529
#define _XSLT_DOCTYPE_PUBLIC_ 530
#define _XSLT_DOCTYPE_SYSTEM_ 531
#define _XSLT_ENCODING_ 532
#define _XSLT_MEDIA_TYPE_ 533
#define _XSLT_NORMALIZATION_FORM_ 534
#define _XSLT_STANDALONE_ 535
#define _XSLT_EXCLUDE_RESULT_PREFIXES_ 536
#define _XSLT_NAMESPACE_STR_ 537
#define _XSLT_SCHEMA_LOCATION_ 538
#define _XSLT_TUNNEL_ 539
#define _XSLT_REQUIRED_ 540
#define _XSLT_OVERRIDE_ 541
#define _XSLT_COPY_NAMESPACES_ 542
#define _XSLT_INHERIT_NAMESPACES_ 543
#define _XSLT_BYTE_ORDER_MARK_ 544
#define _XSLT_ESCAPE_URI_ATTRIBUTES_ 545
#define _XSLT_INCLUDE_CONTENT_TYPE_ 546
#define _XSLT_INDENT_ 547
#define _XSLT_OMIT_XML_DECLARATION_ 548
#define _XSLT_UNDECLARE_PREFIXES_ 549
#define _XSLT_MATCH_ 550
#define _XSLT_AS_ 551
#define _XSLT_SELECT_ 552
#define _XSLT_PRIORITY_ 553
#define _XSLT_TEST_ 554
#define _XSLT_SEPARATOR_ 555
#define _XSLT_NAMESPACE_A_ 556
#define _XSLT_REGEX_ 557
#define _XSLT_FLAGS_ 558
#define _XSLT_METHOD_ 559
#define _XSLT_CDATA_SECTION_ELEMENTS_ 560
#define _XSLT_USE_CHARACTER_MAPS_ 561
#define _XSLT_ELEMENT_NAME_ 562
#define _XSLT_XMLNS_ATTR_ 563
#define _XSLT_ATTR_NAME_ 564
#define _XSLT_TEXT_NODE_ 565
#define _XSLT_WS_TEXT_NODE_ 566
#define _HASH_DEFAULT_ 567
#define _HASH_ALL_ 568
#define _HASH_CURRENT_ 569
#define _XML_ 570
#define _HTML_ 571
#define _XHTML_ 572




/* Copy the first part of user declarations.  */
#line 20 "../src/parser/XQParser.y"


#if defined(WIN32) && !defined(__CYGWIN__)
// turn off the warnings "switch statement contains 'default' but no 'case' labels"
//                       "'yyerrlab1' : unreferenced label"
#pragma warning(disable : 4065 4102)
#endif

#include <cstdio>
#include <iostream>
#include <sstream>

#include <xqilla/utils/UTF8Str.hpp>

#include "../lexer/XQLexer.hpp"

#include <xqilla/simple-api/XQQuery.hpp>
#include <xqilla/ast/XQFunction.hpp>
#include <xqilla/ast/XQDocumentConstructor.hpp>
#include <xqilla/ast/XQElementConstructor.hpp>
#include <xqilla/ast/XQAttributeConstructor.hpp>
#include <xqilla/ast/XQNamespaceConstructor.hpp>
#include <xqilla/ast/XQPIConstructor.hpp>
#include <xqilla/ast/XQCommentConstructor.hpp>
#include <xqilla/ast/XQTextConstructor.hpp>
#include <xqilla/ast/XQQuantified.hpp>
#include <xqilla/ast/XQTypeswitch.hpp>
#include <xqilla/ast/XQValidate.hpp>
#include <xqilla/ast/XQGlobalVariable.hpp>
#include <xqilla/ast/XQFunctionCall.hpp>
#include <xqilla/ast/XQOrderingChange.hpp>
#include <xqilla/ast/XQDocumentOrder.hpp>
#include <xqilla/ast/XQReturn.hpp>
#include <xqilla/ast/XQNamespaceBinding.hpp>

#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xercesc/dom/DOMXPathNSResolver.hpp>

#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/ast/XQNav.hpp>
#include <xqilla/ast/XQStep.hpp>
#include <xqilla/ast/XQLiteral.hpp>
#include <xqilla/ast/XQVariable.hpp>
#include <xqilla/ast/XQInstanceOf.hpp>
#include <xqilla/ast/XQCastAs.hpp>
#include <xqilla/ast/XQCastableAs.hpp>
#include <xqilla/ast/XQTreatAs.hpp>
#include <xqilla/ast/XQFunctionConversion.hpp>
#include <xqilla/ast/XQAnalyzeString.hpp>
#include <xqilla/ast/XQCopyOf.hpp>
#include <xqilla/ast/XQCopy.hpp>
#include <xqilla/ast/XQAtomize.hpp>
#include <xqilla/ast/ConvertFunctionArg.hpp>
#include <xqilla/ast/XQIf.hpp>
#include <xqilla/ast/XQContextItem.hpp>
#include <xqilla/ast/XQPredicate.hpp>
#include <xqilla/ast/XQApplyTemplates.hpp>
#include <xqilla/ast/XQInlineFunction.hpp>
#include <xqilla/ast/XQFunctionDeref.hpp>
#include <xqilla/ast/XQFunctionRef.hpp>
#include <xqilla/ast/XQMap.hpp>

#include <xqilla/fulltext/FTContains.hpp>
#include <xqilla/fulltext/FTOr.hpp>
#include <xqilla/fulltext/FTAnd.hpp>
#include <xqilla/fulltext/FTMildnot.hpp>
#include <xqilla/fulltext/FTUnaryNot.hpp>
#include <xqilla/fulltext/FTOrder.hpp>
#include <xqilla/fulltext/FTDistance.hpp>
#include <xqilla/fulltext/FTScope.hpp>
#include <xqilla/fulltext/FTContent.hpp>
#include <xqilla/fulltext/FTWindow.hpp>

#include <xqilla/update/UDelete.hpp>
#include <xqilla/update/URename.hpp>
#include <xqilla/update/UReplace.hpp>
#include <xqilla/update/UReplaceValueOf.hpp>
#include <xqilla/update/UInsertAsFirst.hpp>
#include <xqilla/update/UInsertAsLast.hpp>
#include <xqilla/update/UInsertInto.hpp>
#include <xqilla/update/UInsertAfter.hpp>
#include <xqilla/update/UInsertBefore.hpp>
#include <xqilla/update/UTransform.hpp>
#include <xqilla/update/UApplyUpdates.hpp>

#include <xqilla/ast/ContextTuple.hpp>
#include <xqilla/ast/ForTuple.hpp>
#include <xqilla/ast/LetTuple.hpp>
#include <xqilla/ast/WhereTuple.hpp>
#include <xqilla/ast/OrderByTuple.hpp>

#include <xqilla/parser/QName.hpp>

#include <xqilla/operators/Equals.hpp>
#include <xqilla/operators/GeneralComp.hpp>
#include <xqilla/operators/NotEquals.hpp>
#include <xqilla/operators/LessThan.hpp>
#include <xqilla/operators/GreaterThan.hpp>
#include <xqilla/operators/LessThanEqual.hpp>
#include <xqilla/operators/GreaterThanEqual.hpp>
#include <xqilla/operators/Plus.hpp>
#include <xqilla/operators/Minus.hpp>
#include <xqilla/operators/Multiply.hpp>
#include <xqilla/operators/Divide.hpp>
#include <xqilla/operators/IntegerDivide.hpp>
#include <xqilla/operators/Mod.hpp>
#include <xqilla/operators/UnaryMinus.hpp>
#include <xqilla/operators/NodeComparison.hpp>
#include <xqilla/operators/OrderComparison.hpp>
#include <xqilla/operators/Intersect.hpp>
#include <xqilla/operators/Except.hpp>
#include <xqilla/operators/Union.hpp>
#include <xqilla/operators/Or.hpp>
#include <xqilla/operators/And.hpp>
#include <xqilla/operators/Range.hpp>

#include <xqilla/functions/FunctionConstructor.hpp>
#include <xqilla/functions/FunctionRoot.hpp>
#include <xqilla/functions/FunctionQName.hpp>
#include <xqilla/functions/FunctionId.hpp>
#include <xqilla/functions/FunctionExists.hpp>
#include <xqilla/functions/XQillaFunction.hpp>

#include <xqilla/axis/NodeTest.hpp>

#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/NamespaceLookupException.hpp>
#include <xqilla/exceptions/ContextException.hpp>

#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/utils/UTF8Str.hpp>
#include "../config/xqilla_config.h"

#define YYPARSE_PARAM qp
#define YYDEBUG 1
#define YYERROR_VERBOSE

// this removes a memory leak occurring when an error is found in the query (we throw an exception from inside
// yyerror, preventing the bison-generated code from cleaning up the memory); by defining this macro we use 
// stack-based memory instead of the heap
#define YYSTACK_USE_ALLOCA  1
#if HAVE_ALLOCA_H
#include <alloca.h>
#elif defined __GNUC__
#undef alloca
#define alloca __builtin_alloca
#elif defined _AIX
#define alloca __alloca
#elif defined _MSC_VER
#include <malloc.h>
#else
#include <stddef.h>
#ifdef __cplusplus
extern "C"
#endif
void *alloca (size_t);
#endif

#define QP       ((XQParserArgs*)qp)
#define CONTEXT  (QP->_context)
#define LANGUAGE (QP->_lexer->getLanguage())
#define MEMMGR   (CONTEXT->getMemoryManager())

#define REJECT_NOT_XQUERY(where,pos)      if(!QP->_lexer->isXQuery()) { yyerror(LANGUAGE, #where, (pos).first_line, (pos).first_column); }
#define REJECT_NOT_EXTENSION(where,pos)   if(!QP->_lexer->isExtensions()) { yyerror(LANGUAGE, #where, (pos).first_line, (pos).first_column); }

#define WRAP(pos,object)        (wrapForDebug((QP), (object), (pos).first_line, (pos).first_column))

#define LOCATION(pos,name) LocationInfo name(QP->_query->getFile(), (pos).first_line, (pos).first_column)

#define GET_NAVIGATION(pos, object) (((object)->getType() == ASTNode::NAVIGATION) ? (XQNav*)(object) : WRAP(pos, new (MEMMGR) XQNav((object), MEMMGR)))

#define PRESERVE_NS(pos, object) (QP->_lexer->getNSResolver() == 0 ? (object) : WRAP((pos), new (MEMMGR) XQNamespaceBinding(QP->_lexer->getNSResolver(), (object), MEMMGR)))

#define BIT_ORDERING_SPECIFIED                  0
#define BIT_BOUNDARY_SPECIFIED                  1
#define BIT_COLLATION_SPECIFIED                 2
#define BIT_BASEURI_SPECIFIED                   3
#define BIT_CONSTRUCTION_SPECIFIED              4
#define BIT_EMPTYORDERING_SPECIFIED             5
#define BIT_COPYNAMESPACE_SPECIFIED             6
#define BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED   7
#define BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED  8
#define BIT_DECLARE_SECOND_STEP                 9
#define BIT_REVALIDATION_SPECIFIED              10

#define CHECK_SECOND_STEP(pos, name) { \
  if(QP->_flags.get(BIT_DECLARE_SECOND_STEP)) \
    yyerror((pos), "Prolog contains " name " declaration after a variable, function or option declaration"); \
}

#define CHECK_SPECIFIED(pos, bit, name, error) { \
  if(QP->_flags.get(bit)) \
    yyerror((pos), "Prolog contains more than one " name " declaration [err:" error "]"); \
  QP->_flags.set(bit); \
}

#define SET_NAMESPACE(pos, prefix, uri) { \
  if(QP->_namespaceDecls.containsKey((prefix))) \
    yyerror((pos), "Namespace prefix has already been bound to a namespace [err:XQST0033]"); \
  QP->_namespaceDecls.put((prefix), NULL); \
  CONTEXT->setNamespaceBinding((prefix), (uri)); \
}

#undef yylex
#define yylex QP->_lexer->yylex
#undef yyerror
#define yyerror QP->_lexer->error

XERCES_CPP_NAMESPACE_USE;
using namespace std;

static const XMLCh sz1_0[] = { chDigit_1, chPeriod, chDigit_0, chNull };
static const XMLCh option_projection[] = { 'p', 'r', 'o', 'j', 'e', 'c', 't', 'i', 'o', 'n', 0 };
static const XMLCh option_psvi[] = { 'p', 's', 'v', 'i', 0 };
static const XMLCh option_lint[] = { 'l', 'i', 'n', 't', 0 };
static const XMLCh var_name[] = { 'n', 'a', 'm', 'e', 0 };

static inline VectorOfASTNodes packageArgs(ASTNode *arg1Impl, ASTNode *arg2Impl, XPath2MemoryManager* memMgr)
{
  VectorOfASTNodes args=VectorOfASTNodes(2,(ASTNode*)NULL,XQillaAllocator<ASTNode*>(memMgr));
  args[0]=arg1Impl;
  args[1]=arg2Impl;

  return args;
}

static inline TupleNode *getLastAncestor(TupleNode *node)
{
  while(node->getParent()) node = const_cast<TupleNode*>(node->getParent());
  return node;
}

static inline TupleNode *setLastAncestor(TupleNode *node, TupleNode *ancestor)
{
  getLastAncestor(node)->setParent(ancestor);
  return node;
}

template<typename TYPE>
TYPE *wrapForDebug(XQParserArgs *qp, TYPE* pObjToWrap, unsigned int line, unsigned int column)
{
  if(pObjToWrap->getLine() == 0)
    pObjToWrap->setLocationInfo(QP->_query->getFile(), line, column);
  return pObjToWrap;
}

#define RESOLVE_QNAME(pos, qname) const XMLCh *uri, *name; resolveQName((pos), QP, (qname), uri, name)

static void resolveQName(const yyltype &pos, XQParserArgs *qp, const XMLCh *qname, const XMLCh *&uri, const XMLCh *&name)
{
  const XMLCh *prefix = XPath2NSUtils::getPrefix(qname, MEMMGR);
  name = XPath2NSUtils::getLocalName(qname);

  if(prefix == 0 || *prefix == 0) {
    uri = 0;
  }
  else {
    if(QP->_lexer->getNSResolver() == 0) {
      if(prefix == 0 || *prefix == 0)
        uri = CONTEXT->getDefaultElementAndTypeNS();
      else uri = CONTEXT->getNSResolver()->lookupNamespaceURI(prefix);
    }
    else {
      uri = QP->_lexer->getNSResolver()->lookupNamespaceURI(prefix);
    }

    if(uri == 0 || *uri == 0) {
      ostringstream oss;
      oss << "No namespace binding for prefix '" << UTF8(prefix) << "' [err:XTSE0280]";
      yyerror(pos, oss.str().c_str());
    }
  }
}

#define XSLT_VARIABLE_VALUE(pos, select, seqConstruct, seqType) variableValueXSLT((pos), QP, (select), (seqConstruct), (seqType))

static ASTNode *variableValueXSLT(const yyltype &pos, XQParserArgs *qp, ASTNode *select, XQSequence *seqConstruct, SequenceType *seqType)
{
  if(!seqConstruct->getChildren().empty()) {
    if(select != 0) return 0; // signifies an error
    
    if(seqType == 0) {
      return WRAP(pos, new (MEMMGR) XQDocumentConstructor(seqConstruct, MEMMGR));
    }

    return WRAP(pos, new (MEMMGR) XQFunctionConversion(seqConstruct, seqType, MEMMGR));
  }

  if(select != 0) {
    if(seqType == 0) return select;

    return WRAP(pos, new (MEMMGR) XQFunctionConversion(select, seqType, MEMMGR));
  }

  if(seqType == 0) {
    return WRAP(pos, new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  XMLUni::fgZeroLenString, AnyAtomicType::STRING,
                  MEMMGR));
  }

  return WRAP(pos, new (MEMMGR) XQFunctionConversion(WRAP(pos, new (MEMMGR) XQSequence(MEMMGR)), seqType, MEMMGR));
}

namespace XQParser {



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 1065 "../src/parser/XQParser.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  321
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7916

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  318
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  335
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1004
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1648

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   572

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    15,    18,    21,    23,
      28,    30,    31,    34,    37,    38,    41,    44,    47,    50,
      53,    56,    61,    63,    67,    70,    74,    78,    82,    83,
      86,    89,    92,    94,    96,    98,   103,   105,   108,   112,
     115,   116,   119,   123,   125,   128,   132,   136,   139,   142,
     146,   148,   151,   155,   159,   162,   165,   169,   171,   174,
     178,   182,   185,   187,   190,   194,   197,   201,   204,   207,
     210,   213,   216,   219,   222,   225,   228,   231,   234,   238,
     241,   243,   245,   247,   249,   251,   253,   256,   259,   261,
     264,   267,   271,   275,   280,   281,   285,   288,   289,   292,
     295,   296,   299,   302,   305,   307,   309,   311,   313,   315,
     317,   319,   321,   323,   325,   327,   329,   331,   333,   335,
     337,   339,   341,   345,   347,   351,   355,   359,   361,   363,
     367,   369,   373,   377,   379,   381,   383,   384,   387,   391,
     393,   396,   397,   400,   404,   406,   409,   413,   417,   420,
     423,   427,   431,   435,   440,   442,   445,   449,   453,   454,
     458,   463,   465,   469,   473,   477,   478,   482,   483,   487,
     492,   494,   497,   501,   505,   509,   511,   515,   519,   521,
     525,   529,   533,   535,   539,   541,   545,   549,   553,   557,
     561,   563,   567,   571,   575,   577,   581,   585,   588,   590,
     594,   597,   601,   603,   606,   609,   613,   615,   619,   623,
     625,   627,   629,   631,   633,   635,   640,   647,   649,   651,
     653,   655,   657,   660,   664,   668,   672,   676,   679,   681,
     685,   689,   692,   693,   698,   701,   704,   706,   708,   711,
     714,   715,   719,   723,   727,   731,   735,   739,   743,   747,
     749,   751,   753,   755,   757,   759,   761,   767,   775,   781,
     789,   791,   793,   796,   799,   801,   803,   806,   809,   810,
     814,   818,   822,   826,   830,   834,   838,   842,   846,   849,
     852,   854,   856,   859,   862,   863,   867,   871,   875,   879,
     883,   887,   891,   895,   898,   901,   903,   905,   910,   917,
     920,   923,   930,   931,   935,   939,   943,   947,   951,   955,
     959,   963,   967,   969,   971,   973,   975,   977,   979,   981,
     983,   985,   987,   989,   995,   999,  1003,  1009,  1015,  1020,
    1024,  1028,  1032,  1038,  1044,  1050,  1052,  1054,  1056,  1058,
    1063,  1067,  1073,  1078,  1079,  1082,  1086,  1090,  1094,  1102,
    1107,  1114,  1117,  1119,  1123,  1127,  1134,  1143,  1150,  1159,
    1162,  1166,  1167,  1169,  1173,  1175,  1179,  1183,  1187,  1189,
    1193,  1195,  1197,  1199,  1201,  1203,  1205,  1207,  1209,  1211,
    1213,  1215,  1217,  1219,  1223,  1227,  1230,  1233,  1235,  1238,
    1241,  1243,  1245,  1248,  1252,  1254,  1262,  1263,  1267,  1268,
    1272,  1275,  1279,  1281,  1287,  1293,  1296,  1300,  1305,  1309,
    1311,  1315,  1321,  1323,  1324,  1326,  1328,  1329,  1332,  1335,
    1340,  1345,  1349,  1351,  1357,  1364,  1367,  1369,  1375,  1379,
    1384,  1392,  1401,  1405,  1407,  1411,  1413,  1417,  1421,  1422,
    1427,  1431,  1435,  1439,  1443,  1447,  1451,  1455,  1459,  1463,
    1467,  1471,  1475,  1477,  1481,  1486,  1488,  1492,  1494,  1498,
    1502,  1504,  1508,  1512,  1516,  1520,  1522,  1526,  1530,  1532,
    1536,  1540,  1542,  1547,  1549,  1554,  1556,  1561,  1563,  1568,
    1570,  1573,  1576,  1578,  1580,  1582,  1584,  1589,  1595,  1601,
    1605,  1610,  1612,  1615,  1620,  1622,  1625,  1627,  1630,  1633,
    1635,  1637,  1641,  1645,  1647,  1649,  1651,  1654,  1657,  1660,
    1662,  1665,  1668,  1671,  1674,  1677,  1680,  1683,  1686,  1689,
    1691,  1694,  1696,  1699,  1702,  1705,  1708,  1711,  1713,  1715,
    1717,  1719,  1721,  1723,  1725,  1727,  1730,  1731,  1736,  1738,
    1740,  1742,  1744,  1746,  1748,  1750,  1752,  1754,  1756,  1758,
    1760,  1762,  1764,  1766,  1769,  1771,  1775,  1778,  1780,  1785,
    1790,  1794,  1799,  1803,  1805,  1807,  1809,  1811,  1813,  1815,
    1821,  1832,  1834,  1836,  1837,  1845,  1853,  1854,  1856,  1860,
    1864,  1868,  1872,  1873,  1876,  1879,  1880,  1883,  1886,  1887,
    1890,  1893,  1894,  1897,  1900,  1901,  1904,  1907,  1910,  1913,
    1917,  1918,  1920,  1924,  1926,  1929,  1931,  1933,  1935,  1937,
    1939,  1941,  1946,  1950,  1952,  1956,  1959,  1963,  1967,  1972,
    1977,  1981,  1983,  1987,  1990,  1994,  1997,  1998,  2000,  2001,
    2004,  2007,  2011,  2012,  2014,  2016,  2018,  2020,  2024,  2026,
    2028,  2030,  2032,  2034,  2036,  2038,  2040,  2042,  2044,  2046,
    2048,  2050,  2054,  2058,  2063,  2068,  2072,  2076,  2080,  2085,
    2090,  2094,  2099,  2106,  2108,  2110,  2115,  2117,  2121,  2126,
    2133,  2141,  2143,  2145,  2150,  2152,  2154,  2156,  2158,  2160,
    2164,  2165,  2168,  2169,  2172,  2176,  2178,  2182,  2184,  2189,
    2191,  2194,  2196,  2198,  2201,  2204,  2208,  2210,  2213,  2218,
    2222,  2227,  2228,  2230,  2233,  2235,  2238,  2240,  2241,  2245,
    2248,  2252,  2256,  2261,  2263,  2267,  2271,  2274,  2277,  2280,
    2283,  2286,  2288,  2290,  2292,  2294,  2296,  2298,  2301,  2303,
    2305,  2307,  2309,  2311,  2313,  2315,  2317,  2320,  2323,  2325,
    2327,  2330,  2333,  2336,  2339,  2343,  2347,  2354,  2361,  2364,
    2365,  2369,  2372,  2377,  2382,  2389,  2395,  2399,  2405,  2406,
    2409,  2412,  2416,  2418,  2422,  2425,  2428,  2431,  2434,  2437,
    2441,  2445,  2449,  2453,  2457,  2464,  2471,  2476,  2481,  2486,
    2489,  2492,  2495,  2498,  2501,  2509,  2515,  2521,  2528,  2532,
    2534,  2539,  2541,  2543,  2545,  2547,  2549,  2551,  2557,  2565,
    2574,  2585,  2592,  2601,  2602,  2605,  2608,  2612,  2613,  2616,
    2618,  2622,  2624,  2626,  2628,  2632,  2640,  2644,  2652,  2658,
    2668,  2670,  2672,  2674,  2676,  2680,  2686,  2688,  2690,  2694,
    2699,  2703,  2708,  2712,  2718,  2725,  2727,  2731,  2735,  2737,
    2739,  2741,  2743,  2745,  2747,  2749,  2751,  2753,  2755,  2757,
    2759,  2761,  2763,  2765,  2767,  2769,  2771,  2773,  2775,  2777,
    2779,  2781,  2783,  2785,  2787,  2789,  2791,  2793,  2795,  2797,
    2799,  2801,  2803,  2805,  2807,  2809,  2811,  2813,  2815,  2817,
    2819,  2821,  2823,  2825,  2827,  2829,  2831,  2833,  2835,  2837,
    2839,  2841,  2843,  2845,  2847,  2849,  2851,  2853,  2855,  2857,
    2859,  2861,  2863,  2865,  2867,  2869,  2871,  2873,  2875,  2877,
    2879,  2881,  2883,  2885,  2887,  2889,  2891,  2893,  2895,  2897,
    2899,  2901,  2903,  2905,  2907,  2909,  2911,  2913,  2915,  2917,
    2919,  2921,  2923,  2925,  2927,  2929,  2931,  2933,  2935,  2937,
    2939,  2941,  2943,  2945,  2947,  2949,  2951,  2953,  2955,  2957,
    2959,  2961,  2963,  2965,  2967,  2969,  2971,  2973,  2975,  2977,
    2979,  2981,  2983,  2985,  2987,  2989,  2991,  2993,  2995,  2997,
    2999,  3001,  3003,  3005,  3007,  3009,  3011,  3013,  3015,  3017,
    3019,  3021,  3023,  3025,  3027,  3029,  3031,  3033,  3035,  3037,
    3039,  3041,  3043,  3045,  3047,  3049,  3051,  3053,  3055,  3057,
    3059,  3061,  3063,  3065,  3067
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     319,     0,    -1,     3,   453,    -1,     4,   404,    -1,     5,
     411,    -1,     6,   415,    -1,     7,   419,    -1,     8,   320,
      -1,   321,    -1,   243,   322,   323,   242,    -1,   343,    -1,
      -1,   322,   272,    -1,   322,   281,    -1,    -1,   323,   324,
      -1,   323,   328,    -1,   323,   333,    -1,   323,   335,    -1,
     323,   337,    -1,   323,   341,    -1,   325,   330,   346,   242,
      -1,   244,    -1,   325,   295,   394,    -1,   325,   274,    -1,
     325,   298,   327,    -1,   325,   273,   326,    -1,   325,   296,
     561,    -1,    -1,   326,   120,    -1,   326,   312,    -1,   326,
     313,    -1,    53,    -1,    54,    -1,    55,    -1,   329,   330,
     346,   242,    -1,   252,    -1,   329,   274,    -1,   329,   296,
     561,    -1,   329,   286,    -1,    -1,   330,   331,    -1,   332,
     346,   242,    -1,   251,    -1,   332,   274,    -1,   332,   297,
     454,    -1,   332,   296,   561,    -1,   332,   285,    -1,   332,
     284,    -1,   334,   346,   242,    -1,   251,    -1,   334,   274,
      -1,   334,   297,   454,    -1,   334,   296,   561,    -1,   334,
     285,    -1,   334,   284,    -1,   336,   346,   242,    -1,   257,
      -1,   336,   274,    -1,   336,   297,   454,    -1,   336,   296,
     561,    -1,   338,   242,    -1,   270,    -1,   338,   274,    -1,
     338,   304,   339,    -1,   338,   289,    -1,   338,   305,   340,
      -1,   338,   275,    -1,   338,   276,    -1,   338,   277,    -1,
     338,   290,    -1,   338,   291,    -1,   338,   292,    -1,   338,
     278,    -1,   338,   279,    -1,   338,   293,    -1,   338,   280,
      -1,   338,   294,    -1,   338,   306,   340,    -1,   338,   272,
      -1,   315,    -1,   316,    -1,   317,    -1,    63,    -1,   120,
      -1,   120,    -1,   340,   120,    -1,   342,   242,    -1,   271,
      -1,   271,   282,    -1,   271,   283,    -1,   271,   282,   283,
      -1,   271,   283,   282,    -1,   307,   344,   346,   242,    -1,
      -1,   344,   309,   345,    -1,   344,   308,    -1,    -1,   345,
     452,    -1,   345,   113,    -1,    -1,   346,   351,    -1,   346,
     343,    -1,   346,   347,    -1,   348,    -1,   350,    -1,   352,
      -1,   356,    -1,   361,    -1,   365,    -1,   363,    -1,   374,
      -1,   376,    -1,   378,    -1,   380,    -1,   382,    -1,   384,
      -1,   386,    -1,   370,    -1,   388,    -1,   390,    -1,   392,
      -1,   349,   346,   242,    -1,   245,    -1,   349,   297,   454,
      -1,   349,   300,   345,    -1,   246,   351,   242,    -1,   310,
      -1,   311,    -1,   353,   355,   242,    -1,   247,    -1,   353,
     297,   454,    -1,   353,   273,   354,    -1,   120,    -1,   312,
      -1,   314,    -1,    -1,   355,   359,    -1,   357,   358,   242,
      -1,   248,    -1,   357,   274,    -1,    -1,   358,   359,    -1,
     360,   346,   242,    -1,   249,    -1,   360,   274,    -1,   360,
     297,   454,    -1,   360,   296,   561,    -1,   360,   284,    -1,
     362,   242,    -1,   250,   297,   454,    -1,   364,   346,   242,
      -1,   256,   299,   454,    -1,   253,   366,   369,   242,    -1,
     367,    -1,   366,   367,    -1,   368,   346,   242,    -1,   254,
     299,   454,    -1,    -1,   255,   346,   242,    -1,   371,   372,
     373,   242,    -1,   264,    -1,   371,   297,   454,    -1,   371,
     302,   345,    -1,   371,   303,   345,    -1,    -1,   265,   346,
     242,    -1,    -1,   266,   346,   242,    -1,   375,   346,   242,
     346,    -1,   257,    -1,   375,   274,    -1,   375,   297,   454,
      -1,   375,   296,   561,    -1,   377,   346,   242,    -1,   258,
      -1,   377,   297,   454,    -1,   379,   346,   242,    -1,   259,
      -1,   379,   274,   345,    -1,   379,   297,   454,    -1,   381,
     346,   242,    -1,   260,    -1,   383,   346,   242,    -1,   261,
      -1,   383,   274,   345,    -1,   383,   301,   345,    -1,   383,
     297,   454,    -1,   383,   300,   345,    -1,   385,   346,   242,
      -1,   262,    -1,   385,   274,   345,    -1,   385,   297,   454,
      -1,   387,   346,   242,    -1,   263,    -1,   387,   274,   345,
      -1,   387,   301,   345,    -1,   389,   242,    -1,   267,    -1,
     389,   297,   454,    -1,   389,   287,    -1,   391,   346,   242,
      -1,   268,    -1,   391,   287,    -1,   391,   288,    -1,   393,
     346,   242,    -1,   269,    -1,   393,   297,   454,    -1,   394,
      12,   395,    -1,   395,    -1,   400,    -1,    36,    -1,   397,
      -1,    36,    -1,    30,    -1,   230,    40,   398,    41,    -1,
     231,    40,   630,    33,   399,    41,    -1,   630,    -1,   522,
      -1,   520,    -1,   522,    -1,   401,    -1,   396,   401,    -1,
     397,    36,   401,    -1,   397,    30,   401,    -1,   400,    36,
     401,    -1,   400,    30,   401,    -1,   402,   403,    -1,   514,
      -1,    71,    19,   514,    -1,    56,    19,   514,    -1,    20,
     514,    -1,    -1,   518,    21,   454,    22,    -1,   420,   405,
      -1,   420,   406,    -1,   405,    -1,   406,    -1,   407,   453,
      -1,   423,   407,    -1,    -1,   407,   408,   427,    -1,   407,
     426,   427,    -1,   407,   428,   427,    -1,   407,   430,   427,
      -1,   407,   444,   427,    -1,   407,   409,   427,    -1,   407,
     633,   427,    -1,   407,   431,   427,    -1,   429,    -1,   438,
      -1,   439,    -1,   446,    -1,   433,    -1,   434,    -1,   435,
      -1,   177,   410,   652,   448,   452,    -1,   177,   410,   652,
     448,   149,   561,   452,    -1,   177,   410,   652,   448,   172,
      -1,   177,   410,   652,   448,   149,   561,   172,    -1,   189,
      -1,   190,    -1,   420,   412,    -1,   420,   413,    -1,   412,
      -1,   413,    -1,   414,   453,    -1,   423,   414,    -1,    -1,
     414,   408,   427,    -1,   414,   426,   427,    -1,   414,   428,
     427,    -1,   414,   430,   427,    -1,   414,   444,   427,    -1,
     414,   409,   427,    -1,   414,   633,   427,    -1,   414,   431,
     427,    -1,   414,   432,   427,    -1,   420,   416,    -1,   420,
     417,    -1,   416,    -1,   417,    -1,   418,   453,    -1,   423,
     418,    -1,    -1,   418,   425,   427,    -1,   418,   426,   427,
      -1,   418,   428,   427,    -1,   418,   430,   427,    -1,   418,
     444,   427,    -1,   418,   447,   427,    -1,   418,   633,   427,
      -1,   418,   431,   427,    -1,   420,   421,    -1,   420,   422,
      -1,   421,    -1,   422,    -1,   183,   184,   123,   427,    -1,
     183,   184,   123,   173,   123,   427,    -1,   424,   453,    -1,
     423,   424,    -1,   187,   170,   631,    37,   582,   427,    -1,
      -1,   424,   425,   427,    -1,   424,   426,   427,    -1,   424,
     428,   427,    -1,   424,   430,   427,    -1,   424,   444,   427,
      -1,   424,   447,   427,    -1,   424,   633,   427,    -1,   424,
     431,   427,    -1,   424,   432,   427,    -1,   429,    -1,   438,
      -1,   439,    -1,   446,    -1,   433,    -1,   434,    -1,   617,
      -1,   435,    -1,   440,    -1,   443,    -1,    51,    -1,   177,
     170,   631,    37,   582,    -1,   177,    65,   168,    -1,   177,
      65,   169,    -1,   177,   180,   188,   170,   582,    -1,   177,
     180,   410,   170,   582,    -1,   177,   182,   651,   123,    -1,
     177,    66,   600,    -1,   177,   179,   118,    -1,   177,   179,
     119,    -1,   177,   180,   135,   139,   140,    -1,   177,   180,
     135,   139,   141,    -1,   177,   181,   436,    33,   437,    -1,
     168,    -1,   174,    -1,   175,    -1,   176,    -1,   177,   180,
     142,   582,    -1,   177,    67,   582,    -1,   185,   186,   442,
     582,   441,    -1,   185,   186,   582,   441,    -1,    -1,   112,
     582,    -1,   441,    33,   582,    -1,   170,   631,    37,    -1,
     180,   188,   170,    -1,   185,   187,   170,   631,    37,   582,
     441,    -1,   185,   187,   582,   441,    -1,   177,   124,     9,
     523,   560,   445,    -1,    10,   455,    -1,   172,    -1,   177,
     178,   168,    -1,   177,   178,   169,    -1,   177,   449,   410,
     652,   448,   452,    -1,   177,   449,   410,   652,   448,   149,
     561,   452,    -1,   177,   449,   410,   652,   448,   172,    -1,
     177,   449,   410,   652,   448,   149,   561,   172,    -1,    40,
      41,    -1,    40,   450,    41,    -1,    -1,   229,    -1,   450,
      33,   451,    -1,   451,    -1,     9,   523,   560,    -1,    48,
     454,    50,    -1,    49,   454,    50,    -1,   454,    -1,   454,
      33,   455,    -1,   455,    -1,   456,    -1,   474,    -1,   477,
      -1,   481,    -1,   618,    -1,   620,    -1,   623,    -1,   622,
      -1,   624,    -1,   482,    -1,   639,    -1,   640,    -1,   457,
     129,   455,    -1,   458,   467,   468,    -1,   458,   467,    -1,
     458,   468,    -1,   458,    -1,   458,   459,    -1,   458,   464,
      -1,   459,    -1,   464,    -1,   130,   460,    -1,   460,    33,
     461,    -1,   461,    -1,     9,   523,   560,   462,   463,   131,
     455,    -1,    -1,   112,     9,   523,    -1,    -1,   191,     9,
     523,    -1,   132,   465,    -1,   465,    33,   466,    -1,   466,
      -1,     9,   523,   560,    10,   455,    -1,   191,     9,   523,
      10,   455,    -1,   133,   455,    -1,   135,   134,   469,    -1,
     136,   135,   134,   469,    -1,   469,    33,   470,    -1,   470,
      -1,   471,   472,   473,    -1,   471,   472,   473,   142,   582,
      -1,   455,    -1,    -1,   137,    -1,   138,    -1,    -1,   139,
     140,    -1,   139,   141,    -1,   143,   475,   145,   455,    -1,
     144,   475,   145,   455,    -1,   475,    33,   476,    -1,   476,
      -1,     9,   523,   560,   131,   455,    -1,   146,    40,   454,
      41,   478,   479,    -1,   478,   480,    -1,   480,    -1,   180,
       9,   523,   129,   455,    -1,   180,   129,   455,    -1,   147,
     561,   129,   455,    -1,   147,     9,   523,   149,   561,   129,
     455,    -1,   150,    40,   454,    41,   151,   455,   152,   455,
      -1,   482,   153,   483,    -1,   483,    -1,   483,   154,   484,
      -1,   484,    -1,   486,    37,   486,    -1,   486,    13,   486,
      -1,    -1,   486,    24,   485,   486,    -1,   486,    14,   486,
      -1,   486,    15,   486,    -1,   486,    16,   486,    -1,   486,
     106,   486,    -1,   486,   107,   486,    -1,   486,   108,   486,
      -1,   486,   109,   486,    -1,   486,   110,   486,    -1,   486,
     111,   486,    -1,   486,   167,   486,    -1,   486,    17,   486,
      -1,   486,    18,   486,    -1,   486,    -1,   487,   192,   583,
      -1,   487,   192,   583,   616,    -1,   487,    -1,   488,   158,
     488,    -1,   488,    -1,   488,    34,   489,    -1,   488,    35,
     489,    -1,   489,    -1,   489,    11,   490,    -1,   489,   159,
     490,    -1,   489,    70,   490,    -1,   489,   160,   490,    -1,
     490,    -1,   490,    12,   491,    -1,   490,   161,   491,    -1,
     491,    -1,   491,   162,   492,    -1,   491,   163,   492,    -1,
     492,    -1,   493,   155,   156,   561,    -1,   493,    -1,   494,
     166,   149,   561,    -1,   494,    -1,   495,   157,   149,   558,
      -1,   495,    -1,   496,   165,   149,   558,    -1,   496,    -1,
      35,   496,    -1,    34,   496,    -1,   497,    -1,   498,    -1,
     503,    -1,   499,    -1,   164,    49,   454,    50,    -1,   164,
      68,    49,   454,    50,    -1,   164,    69,    49,   454,    50,
      -1,   500,    49,    50,    -1,   500,    49,   454,    50,    -1,
     501,    -1,   500,   501,    -1,    32,   535,   651,   502,    -1,
     128,    -1,   103,   128,    -1,   504,    -1,   504,   505,    -1,
      30,   505,    -1,   505,    -1,    36,    -1,   505,    36,   506,
      -1,   505,    30,   506,    -1,   506,    -1,   507,    -1,   517,
      -1,   508,   518,    -1,   511,   518,    -1,   509,   514,    -1,
     510,    -1,    71,    19,    -1,    72,    19,    -1,    56,    19,
      -1,    73,    19,    -1,    74,    19,    -1,    75,    19,    -1,
      76,    19,    -1,   170,    19,    -1,    20,   514,    -1,   514,
      -1,   512,   514,    -1,   513,    -1,    77,    19,    -1,    78,
      19,    -1,    79,    19,    -1,    80,    19,    -1,    81,    19,
      -1,    39,    -1,   565,    -1,   515,    -1,   632,    -1,   516,
      -1,    11,    -1,   125,    -1,   126,    -1,   519,   518,    -1,
      -1,   518,    21,   454,    22,    -1,   520,    -1,   522,    -1,
     524,    -1,   525,    -1,   528,    -1,   530,    -1,   526,    -1,
     527,    -1,   644,    -1,   647,    -1,   521,    -1,   630,    -1,
     627,    -1,   628,    -1,   629,    -1,     9,   523,    -1,   651,
      -1,    40,   454,    41,    -1,    40,    41,    -1,    38,    -1,
     118,    49,   454,    50,    -1,   119,    49,   454,    50,    -1,
     652,    40,    41,    -1,   652,    40,   529,    41,    -1,   529,
      33,   455,    -1,   455,    -1,   531,    -1,   547,    -1,   532,
      -1,   543,    -1,   545,    -1,    24,   533,   534,   535,    42,
      -1,    24,   533,   534,   535,    25,   542,    31,   533,   535,
      26,    -1,   120,    -1,   121,    -1,    -1,   534,   103,   120,
     535,    43,   535,   536,    -1,   534,   103,   121,   535,    43,
     535,   537,    -1,    -1,   103,    -1,    44,   538,    45,    -1,
      46,   540,    47,    -1,    44,   539,    45,    -1,    46,   541,
      47,    -1,    -1,   538,   452,    -1,   538,   113,    -1,    -1,
     539,   452,    -1,   539,   113,    -1,    -1,   540,   452,    -1,
     540,   114,    -1,    -1,   541,   452,    -1,   541,   114,    -1,
      -1,   542,   531,    -1,   542,   452,    -1,   542,   116,    -1,
     542,   115,    -1,    28,   544,    29,    -1,    -1,   105,    -1,
      27,   127,   546,    -1,   104,    -1,   103,   104,    -1,   548,
      -1,   549,    -1,   552,    -1,   553,    -1,   554,    -1,   555,
      -1,    82,    49,   454,    50,    -1,   188,   550,   551,    -1,
     122,    -1,    49,   454,    50,    -1,    49,    50,    -1,    49,
     454,    50,    -1,    56,   550,   551,    -1,    63,    49,   454,
      50,    -1,    57,    49,   454,    50,    -1,    60,   556,   557,
      -1,   122,    -1,    49,   454,    50,    -1,    49,    50,    -1,
      49,   454,    50,    -1,   564,   559,    -1,    -1,    23,    -1,
      -1,   149,   561,    -1,   563,   562,    -1,    64,    40,    41,
      -1,    -1,    11,    -1,    34,    -1,    23,    -1,   564,    -1,
     171,    40,    41,    -1,   565,    -1,   648,    -1,   650,    -1,
     632,    -1,   567,    -1,   575,    -1,   571,    -1,   577,    -1,
     573,    -1,   570,    -1,   569,    -1,   568,    -1,   566,    -1,
      59,    40,    41,    -1,    58,    40,    41,    -1,    58,    40,
     575,    41,    -1,    58,    40,   577,    41,    -1,    63,    40,
      41,    -1,    57,    40,    41,    -1,    60,    40,    41,    -1,
      60,    40,   631,    41,    -1,    60,    40,   123,    41,    -1,
      56,    40,    41,    -1,    56,    40,   572,    41,    -1,    56,
      40,   572,    33,   581,    41,    -1,   579,    -1,    11,    -1,
      61,    40,   574,    41,    -1,   579,    -1,   188,    40,    41,
      -1,   188,    40,   576,    41,    -1,   188,    40,   576,    33,
     581,    41,    -1,   188,    40,   576,    33,   581,    23,    41,
      -1,   580,    -1,    11,    -1,    62,    40,   578,    41,    -1,
     580,    -1,   632,    -1,   632,    -1,   632,    -1,   123,    -1,
     586,   585,   584,    -1,    -1,   193,   487,    -1,    -1,   585,
     597,    -1,   586,   239,   587,    -1,   587,    -1,   587,   240,
     588,    -1,   588,    -1,   588,    83,   131,   589,    -1,   589,
      -1,   241,   590,    -1,   590,    -1,   591,    -1,   591,   600,
      -1,   592,   595,    -1,    40,   583,    41,    -1,   593,    -1,
     520,   594,    -1,    49,   454,    50,   594,    -1,   500,    49,
      50,    -1,   500,    49,   583,    50,    -1,    -1,   205,    -1,
     205,    95,    -1,   206,    -1,   206,   210,    -1,   207,    -1,
      -1,   196,   596,   197,    -1,   208,   488,    -1,   117,   141,
     488,    -1,   117,    99,   488,    -1,   209,   488,   158,   488,
      -1,   118,    -1,   194,   488,   598,    -1,   195,   596,   598,
      -1,   198,   599,    -1,   199,   599,    -1,   112,    97,    -1,
     112,    98,    -1,    93,    94,    -1,   210,    -1,   211,    -1,
     212,    -1,   213,    -1,   214,    -1,   601,    -1,   600,   601,
      -1,   613,    -1,   614,    -1,   605,    -1,   604,    -1,   602,
      -1,   603,    -1,   608,    -1,   615,    -1,   148,    85,    -1,
     148,    84,    -1,   200,    -1,   201,    -1,    86,    85,    -1,
      86,    84,    -1,   223,    89,    -1,    87,    89,    -1,   223,
      90,   607,    -1,   223,    90,   180,    -1,   223,    90,    40,
     607,   606,    41,    -1,   223,    90,    40,   180,   606,    41,
      -1,    87,    90,    -1,    -1,   606,    33,   607,    -1,   112,
     582,    -1,   112,   582,   202,   630,    -1,   112,   582,   596,
     203,    -1,   112,   582,   202,   630,   596,   203,    -1,   223,
      91,   210,   610,   609,    -1,    87,    91,   210,    -1,   223,
     180,    91,   210,   609,    -1,    -1,   609,   612,    -1,   112,
     582,    -1,    40,   611,    41,    -1,   630,    -1,   611,    33,
     630,    -1,   161,   610,    -1,   163,   610,    -1,   204,   630,
      -1,   223,    92,    -1,    87,    92,    -1,   182,   651,   123,
      -1,    88,    94,   490,    -1,   177,   221,    69,    -1,   177,
     221,    68,    -1,   177,   221,   100,    -1,   619,   455,   149,
     217,   228,   455,    -1,   619,   455,   149,   226,   228,   455,
      -1,   619,   455,   228,   455,    -1,   619,   455,   220,   455,
      -1,   619,   455,   219,   455,    -1,   218,    59,    -1,   218,
     224,    -1,   621,   455,    -1,   227,    59,    -1,   227,   224,
      -1,   215,   102,   156,    59,   455,   222,   455,    -1,   215,
      59,   455,   222,   455,    -1,   225,    59,   455,   149,   455,
      -1,   101,   625,   216,   455,   129,   455,    -1,   625,    33,
     626,    -1,   626,    -1,     9,   523,    10,   455,    -1,    53,
      -1,    54,    -1,    55,    -1,   123,    -1,   651,    -1,   651,
      -1,   177,   232,   234,   651,   452,    -1,   177,   232,   234,
     651,   635,   634,   452,    -1,   177,   232,   234,   651,   636,
     233,   394,   452,    -1,   177,   232,   234,   651,   636,   233,
     394,   635,   634,   452,    -1,   177,   232,   636,   233,   394,
     452,    -1,   177,   232,   636,   233,   394,   635,   634,   452,
      -1,    -1,   149,   561,    -1,    40,    41,    -1,    40,   450,
      41,    -1,    -1,   238,   637,    -1,   638,    -1,   637,    33,
     638,    -1,   120,    -1,   312,    -1,   313,    -1,   235,   232,
     651,    -1,   235,   232,   651,   222,    40,   642,    41,    -1,
     236,   237,   455,    -1,   236,   237,   455,   222,    40,   642,
      41,    -1,   236,   237,   455,   238,   641,    -1,   236,   237,
     455,   238,   641,   222,    40,   642,    41,    -1,   651,    -1,
     312,    -1,   314,    -1,   643,    -1,   642,    33,   643,    -1,
       9,   523,   560,    10,   455,    -1,   645,    -1,   646,    -1,
     652,    52,    53,    -1,   190,   448,   560,   452,    -1,   517,
      40,    41,    -1,   517,    40,   529,    41,    -1,   190,    40,
      41,    -1,   190,    40,    41,   149,   561,    -1,   190,    40,
     649,    41,   149,   561,    -1,   561,    -1,   649,    33,   561,
      -1,    40,   563,    41,    -1,   652,    -1,    56,    -1,    57,
      -1,    58,    -1,   188,    -1,   171,    -1,   150,    -1,    59,
      -1,    60,    -1,    61,    -1,    62,    -1,    63,    -1,   146,
      -1,    64,    -1,   190,    -1,   120,    -1,    65,    -1,    66,
      -1,    67,    -1,    68,    -1,    69,    -1,    70,    -1,    71,
      -1,    72,    -1,    73,    -1,    74,    -1,    75,    -1,    76,
      -1,    77,    -1,    78,    -1,    79,    -1,    80,    -1,    81,
      -1,    82,    -1,    83,    -1,    84,    -1,    85,    -1,    86,
      -1,    87,    -1,    89,    -1,    90,    -1,    91,    -1,    92,
      -1,    93,    -1,    94,    -1,    95,    -1,    96,    -1,    97,
      -1,    98,    -1,    99,    -1,   100,    -1,   101,    -1,   102,
      -1,   106,    -1,   107,    -1,   108,    -1,   109,    -1,   110,
      -1,   111,    -1,   112,    -1,   124,    -1,   129,    -1,   130,
      -1,   131,    -1,   132,    -1,   133,    -1,   134,    -1,   135,
      -1,   136,    -1,   137,    -1,   138,    -1,   139,    -1,   140,
      -1,   141,    -1,   142,    -1,   143,    -1,   144,    -1,   145,
      -1,   147,    -1,   149,    -1,   151,    -1,   152,    -1,   153,
      -1,   154,    -1,   155,    -1,   156,    -1,   157,    -1,   158,
      -1,   159,    -1,   160,    -1,   161,    -1,   162,    -1,   163,
      -1,   164,    -1,   165,    -1,   166,    -1,   167,    -1,   168,
      -1,   169,    -1,   170,    -1,   172,    -1,   173,    -1,   174,
      -1,   175,    -1,   176,    -1,   177,    -1,   178,    -1,   179,
      -1,   180,    -1,   181,    -1,   182,    -1,   184,    -1,   185,
      -1,   186,    -1,   189,    -1,   191,    -1,   192,    -1,   193,
      -1,   194,    -1,   195,    -1,   196,    -1,   197,    -1,   198,
      -1,   199,    -1,   200,    -1,   201,    -1,   202,    -1,   203,
      -1,   204,    -1,   205,    -1,   206,    -1,   207,    -1,   208,
      -1,   209,    -1,   210,    -1,   211,    -1,   212,    -1,   213,
      -1,   214,    -1,   215,    -1,   216,    -1,   217,    -1,   218,
      -1,   219,    -1,   220,    -1,   221,    -1,   222,    -1,   224,
      -1,   225,    -1,   226,    -1,   227,    -1,   228,    -1,   229,
      -1,   118,    -1,   119,    -1,   230,    -1,   231,    -1,   232,
      -1,   233,    -1,   234,    -1,   235,    -1,   236,    -1,   237,
      -1,   238,    -1,   239,    -1,   240,    -1,   241,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   745,   745,   747,   748,   749,   750,   752,   759,   789,
     792,   813,   815,   819,   826,   828,   829,   830,   831,   832,
     833,   837,   856,   860,   865,   872,   877,   882,   891,   894,
     900,   905,   912,   912,   912,   915,   928,   932,   939,   944,
     953,   956,   964,   991,   995,  1002,  1008,  1013,  1018,  1027,
    1051,  1055,  1062,  1067,  1072,  1077,  1088,  1106,  1110,  1117,
    1122,  1130,  1155,  1158,  1161,  1164,  1167,  1170,  1173,  1176,
    1179,  1182,  1185,  1188,  1191,  1194,  1197,  1200,  1203,  1206,
    1212,  1213,  1214,  1215,  1216,  1228,  1231,  1236,  1239,  1244,
    1249,  1257,  1265,  1276,  1287,  1290,  1297,  1307,  1310,  1315,
    1326,  1329,  1334,  1339,  1347,  1348,  1349,  1350,  1351,  1352,
    1353,  1354,  1355,  1356,  1357,  1358,  1359,  1360,  1361,  1362,
    1363,  1364,  1368,  1386,  1390,  1395,  1404,  1410,  1410,  1413,
    1433,  1437,  1442,  1450,  1455,  1459,  1467,  1470,  1478,  1491,
    1495,  1506,  1509,  1517,  1535,  1539,  1546,  1551,  1556,  1564,
    1570,  1578,  1586,  1593,  1607,  1611,  1625,  1634,  1642,  1645,
    1652,  1687,  1691,  1696,  1702,  1712,  1715,  1723,  1726,  1733,
    1751,  1755,  1762,  1767,  1775,  1793,  1797,  1805,  1827,  1831,
    1838,  1846,  1855,  1863,  1900,  1904,  1911,  1918,  1927,  1936,
    1963,  1967,  1974,  1986,  2012,  2016,  2023,  2033,  2045,  2049,
    2054,  2063,  2076,  2080,  2085,  2094,  2108,  2112,  2125,  2130,
    2142,  2146,  2154,  2167,  2175,  2188,  2195,  2209,  2209,  2212,
    2212,  2234,  2238,  2242,  2260,  2278,  2288,  2302,  2310,  2316,
    2322,  2328,  2340,  2343,  2357,  2358,  2359,  2360,  2364,  2367,
    2371,  2373,  2377,  2381,  2385,  2389,  2393,  2399,  2405,  2419,
    2420,  2421,  2422,  2423,  2424,  2425,  2431,  2435,  2439,  2443,
    2449,  2449,  2456,  2457,  2458,  2459,  2463,  2466,  2470,  2472,
    2476,  2480,  2484,  2488,  2492,  2498,  2504,  2508,  2519,  2520,
    2521,  2522,  2526,  2529,  2533,  2535,  2539,  2543,  2547,  2551,
    2555,  2561,  2567,  2578,  2579,  2580,  2581,  2586,  2591,  2613,
    2616,  2620,  2632,  2634,  2638,  2642,  2646,  2650,  2654,  2660,
    2666,  2670,  2684,  2685,  2686,  2687,  2688,  2689,  2690,  2691,
    2695,  2695,  2698,  2702,  2710,  2715,  2724,  2729,  2738,  2798,
    2806,  2811,  2820,  2825,  2834,  2844,  2848,  2856,  2860,  2868,
    2884,  2893,  2905,  2914,  2917,  2922,  2931,  2935,  2943,  2953,
    2965,  2972,  2976,  2984,  2989,  2999,  3003,  3007,  3011,  3018,
    3022,  3029,  3032,  3040,  3045,  3055,  3063,  3067,  3075,  3088,
    3103,  3110,  3111,  3112,  3113,  3114,  3115,  3116,  3117,  3118,
    3119,  3120,  3121,  3126,  3137,  3141,  3145,  3149,  3153,  3159,
    3165,  3166,  3172,  3179,  3183,  3187,  3199,  3202,  3213,  3216,
    3226,  3233,  3237,  3241,  3245,  3258,  3266,  3271,  3279,  3283,
    3289,  3296,  3311,  3328,  3331,  3335,  3343,  3351,  3355,  3364,
    3372,  3383,  3387,  3391,  3402,  3409,  3414,  3422,  3426,  3434,
    3438,  3446,  3454,  3463,  3468,  3477,  3487,  3491,  3495,  3495,
    3499,  3503,  3507,  3511,  3515,  3519,  3523,  3527,  3531,  3535,
    3539,  3543,  3547,  3552,  3556,  3560,  3565,  3569,  3574,  3578,
    3582,  3587,  3591,  3595,  3599,  3603,  3608,  3612,  3616,  3621,
    3625,  3629,  3634,  3638,  3643,  3648,  3653,  3657,  3662,  3666,
    3671,  3677,  3683,  3688,  3689,  3690,  3698,  3702,  3706,  3714,
    3721,  3730,  3730,  3734,  3754,  3755,  3763,  3764,  3770,  3791,
    3795,  3809,  3815,  3828,  3832,  3832,  3836,  3840,  3849,  3861,
    3872,  3876,  3880,  3884,  3888,  3892,  3896,  3900,  3908,  3916,
    3933,  3941,  3950,  3954,  3958,  3962,  3966,  3974,  3986,  3991,
    3996,  4003,  4008,  4015,  4022,  4033,  4043,  4046,  4057,  4058,
    4059,  4060,  4061,  4062,  4063,  4064,  4065,  4066,  4070,  4070,
    4073,  4073,  4073,  4077,  4084,  4088,  4092,  4100,  4108,  4118,
    4128,  4132,  4139,  4144,  4153,  4157,  4166,  4166,  4166,  4170,
    4176,  4185,  4185,  4190,  4193,  4202,  4213,  4213,  4218,  4222,
    4229,  4233,  4244,  4247,  4252,  4263,  4266,  4270,  4284,  4287,
    4292,  4303,  4306,  4310,  4328,  4331,  4336,  4341,  4348,  4361,
    4375,  4378,  4383,  4402,  4403,  4416,  4417,  4418,  4419,  4420,
    4421,  4426,  4434,  4442,  4446,  4454,  4458,  4467,  4475,  4483,
    4491,  4498,  4508,  4515,  4519,  4527,  4538,  4541,  4550,  4553,
    4563,  4570,  4580,  4581,  4583,  4585,  4591,  4595,  4599,  4600,
    4601,  4605,  4617,  4618,  4619,  4620,  4621,  4622,  4623,  4624,
    4625,  4630,  4638,  4642,  4647,  4656,  4664,  4672,  4676,  4680,
    4688,  4692,  4696,  4704,  4705,  4713,  4721,  4726,  4730,  4734,
    4738,  4747,  4748,  4756,  4763,  4766,  4769,  4772,  4776,  4788,
    4804,  4806,  4813,  4816,  4825,  4837,  4842,  4854,  4859,  4863,
    4868,  4873,  4878,  4879,  4888,  4893,  4897,  4903,  4907,  4915,
    4920,  4930,  4933,  4937,  4941,  4945,  4949,  4957,  4959,  4970,
    4976,  4982,  4988,  5003,  5007,  5011,  5015,  5019,  5023,  5027,
    5031,  5039,  5043,  5047,  5055,  5059,  5067,  5068,  5080,  5081,
    5082,  5083,  5084,  5085,  5086,  5087,  5095,  5099,  5103,  5107,
    5116,  5120,  5128,  5132,  5142,  5146,  5150,  5154,  5158,  5166,
    5168,  5175,  5179,  5183,  5187,  5197,  5201,  5205,  5213,  5215,
    5223,  5227,  5234,  5238,  5246,  5250,  5258,  5266,  5270,  5278,
    5285,  5293,  5298,  5303,  5315,  5319,  5323,  5327,  5331,  5337,
    5337,  5342,  5348,  5348,  5353,  5357,  5367,  5375,  5382,  5387,
    5395,  5404,  5416,  5428,  5441,  5452,  5461,  5473,  5477,  5481,
    5486,  5491,  5496,  5505,  5508,  5516,  5520,  5528,  5532,  5540,
    5545,  5554,  5558,  5562,  5570,  5574,  5582,  5586,  5590,  5594,
    5602,  5606,  5610,  5618,  5623,  5633,  5646,  5646,  5650,  5658,
    5667,  5672,  5681,  5685,  5689,  5696,  5701,  5710,  5719,  5719,
    5719,  5719,  5719,  5719,  5719,  5719,  5720,  5720,  5720,  5720,
    5720,  5720,  5721,  5725,  5725,  5725,  5725,  5725,  5725,  5725,
    5725,  5725,  5725,  5726,  5726,  5726,  5726,  5726,  5726,  5726,
    5727,  5727,  5727,  5727,  5727,  5727,  5727,  5727,  5728,  5728,
    5728,  5728,  5728,  5728,  5728,  5728,  5728,  5728,  5728,  5729,
    5729,  5729,  5729,  5729,  5729,  5729,  5729,  5729,  5729,  5729,
    5729,  5730,  5730,  5730,  5730,  5730,  5730,  5730,  5730,  5730,
    5730,  5731,  5731,  5731,  5731,  5731,  5731,  5731,  5731,  5731,
    5731,  5731,  5731,  5732,  5732,  5732,  5732,  5732,  5732,  5732,
    5732,  5732,  5732,  5732,  5732,  5733,  5733,  5733,  5733,  5733,
    5733,  5733,  5733,  5733,  5734,  5734,  5734,  5734,  5734,  5734,
    5734,  5734,  5735,  5735,  5735,  5735,  5735,  5735,  5735,  5735,
    5735,  5736,  5736,  5736,  5736,  5736,  5736,  5736,  5736,  5736,
    5737,  5737,  5737,  5737,  5737,  5737,  5737,  5737,  5737,  5737,
    5738,  5738,  5738,  5738,  5738,  5738,  5738,  5738,  5738,  5738,
    5738,  5739,  5739,  5739,  5739,  5739,  5739,  5739,  5739,  5739,
    5739,  5739,  5740,  5740,  5740
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"<end of file>\"", "error", "$undefined", "\"<Language: XPath2>\"",
  "\"<Language: XQuery>\"", "\"<Language: XQuery Fulltext>\"",
  "\"<Language: XQuery Update>\"",
  "\"<Language: XQuery Fulltext Update>\"", "\"<Language: XSLT 2.0>\"",
  "\"$\"", "\":=\"", "\"*\"", "\"|\"", "\"!=\"", "\"<=\"",
  "\"> (comparison operator)\"", "\">=\"", "\"<<\"", "\">>\"", "\"::\"",
  "\"@\"", "\"[\"", "\"]\"", "\"?\"", "\"<\"", "\"> (start tag close)\"",
  "\"> (end tag close)\"", "\"<?\"", "\"<!--\"", "\"-->\"", "\"//\"",
  "\"</\"", "\"(#\"", "\",\"", "\"+\"", "\"-\"", "\"/\"",
  "\"= (comparison operator)\"", "\".\"", "\"..\"", "\"(\"", "\")\"",
  "\"/>\"", "\"=\"", "\"\\\" (open)\"", "\"\\\" (close)\"", "\"' (open)\"",
  "\"' (close)\"", "\"{\"", "\"{ (expression enclosure)\"", "\"}\"",
  "\";\"", "\"#\"", "\"<integer literal>\"", "\"<decimal literal>\"",
  "\"<double literal>\"", "\"attribute\"", "\"comment\"",
  "\"document-node\"", "\"node\"", "\"processing-instruction\"",
  "\"schema-attribute\"", "\"schema-element\"", "\"text\"",
  "\"empty-sequence\"", "\"boundary-space\"", "\"ft-option\"",
  "\"base-uri\"", "\"lax\"", "\"strict\"", "\"idiv\"", "\"child\"",
  "\"descendant\"", "\"self\"", "\"descendant-or-self\"",
  "\"following-sibling\"", "\"following\"", "\"parent\"", "\"ancestor\"",
  "\"preceding-sibling\"", "\"preceding\"", "\"ancestor-of-self\"",
  "\"document\"", "\"not\"", "\"sensitive\"", "\"insensitive\"",
  "\"diacritics\"", "\"without\"", "\"without (followed by content)\"",
  "\"stemming\"", "\"thesaurus\"", "\"stop\"", "\"wildcards\"",
  "\"entire\"", "\"content\"", "\"word\"", "\"type\"", "\"start\"",
  "\"end\"", "\"most\"", "\"skip\"", "\"copy\"", "\"value\"",
  "\"<whitespace>\"", "\"<processing instruction content>\"",
  "\"<xml comment content>\"", "\"eq\"", "\"ne\"", "\"lt\"", "\"le\"",
  "\"gt\"", "\"ge\"", "\"at\"", "\"<quot attribute content>\"",
  "\"<apos attribute content>\"", "\"<whitespace element content>\"",
  "\"<element content>\"", "\"at (followed by least or most)\"",
  "\"ordered\"", "\"unordered\"", "\"<qualified name>\"",
  "\"<xmlns qualified name>\"",
  "\"<computed constructor qualified name>\"", "\"'...'\"", "\"variable\"",
  "\"<NCName>:*\"", "\"*:<NCName>\"",
  "\"<processing instruction target>\"", "\"<pragma content>\"",
  "\"return\"", "\"for\"", "\"in\"", "\"let\"", "\"where\"", "\"by\"",
  "\"order\"", "\"stable\"", "\"ascending\"", "\"descending\"",
  "\"empty\"", "\"greatest\"", "\"least\"", "\"collation\"", "\"some\"",
  "\"every\"", "\"satisfies\"", "\"typeswitch\"", "\"case\"",
  "\"case (followed by (in)sensitive)\"", "\"as\"", "\"if\"", "\"then\"",
  "\"else\"", "\"or\"", "\"and\"", "\"instance\"", "\"of\"",
  "\"castable\"", "\"to\"", "\"div\"", "\"mod\"", "\"union\"",
  "\"intersect\"", "\"except\"", "\"validate\"", "\"cast\"", "\"treat\"",
  "\"is\"", "\"preserve\"", "\"strip\"", "\"namespace\"", "\"item\"",
  "\"external\"", "\"encoding\"", "\"no-preserve\"", "\"inherit\"",
  "\"no-inherit\"", "\"declare\"", "\"construction\"", "\"ordering\"",
  "\"default\"", "\"copy-namespaces\"", "\"option\"", "\"xquery\"",
  "\"version\"", "\"import\"", "\"schema\"", "\"module\"", "\"element\"",
  "\"function\"", "\"function (ext)\"", "\"score\"", "\"ftcontains\"",
  "\"weight\"", "\"window\"", "\"distance\"", "\"occurs\"", "\"times\"",
  "\"same\"", "\"different\"", "\"lowercase\"", "\"uppercase\"",
  "\"relationship\"", "\"levels\"", "\"language\"", "\"any\"", "\"all\"",
  "\"phrase\"", "\"exactly\"", "\"from\"", "\"words\"", "\"sentences\"",
  "\"paragraphs\"", "\"sentence\"", "\"paragraph\"", "\"replace\"",
  "\"modify\"", "\"first\"", "\"insert\"", "\"before\"", "\"after\"",
  "\"revalidation\"", "\"with\"", "\"with (ft option)\"", "\"nodes\"",
  "\"rename\"", "\"last\"", "\"delete\"", "\"into\"", "\"updating\"",
  "\"id\"", "\"key\"", "\"template\"", "\"matches\"", "\"name\"",
  "\"call\"", "\"apply\"", "\"templates\"", "\"mode\"", "\"ftor\"",
  "\"ftand\"", "\"ftnot\"", "\"<XSLT end element>\"",
  "\"<xsl:stylesheet...\"", "\"<xsl:template...\"", "\"<xsl:value-of...\"",
  "\"<xsl:text...\"", "\"<xsl:apply-templates...\"",
  "\"<xsl:call-template...\"", "\"<xsl:with-param...\"",
  "\"<xsl:sequence...\"", "\"<xsl:param...\"", "\"<xsl:function...\"",
  "\"<xsl:choose...\"", "\"<xsl:when...\"", "\"<xsl:otherwise...\"",
  "\"<xsl:if...\"", "\"<xsl:variable...\"", "\"<xsl:comment...\"",
  "\"<xsl:processing-instruction...\"", "\"<xsl:document...\"",
  "\"<xsl:attribute...\"", "\"<xsl:namespace...\"", "\"<xsl:element...\"",
  "\"<xsl:analyze-string...\"", "\"<xsl:matching-substring...\"",
  "\"<xsl:non-matching-substring...\"", "\"<xsl:copy-of...\"",
  "\"<xsl:copy...\"", "\"<xsl:for-each...\"", "\"<xsl:output...\"",
  "\"<xsl:import-schema...\"", "\"version='...'\"", "\"mode='...'\"",
  "\"name='...'\"", "\"doctype-public='...'\"", "\"doctype-system='...'\"",
  "\"encoding='...'\"", "\"media-type='...'\"",
  "\"normalization-form='...'\"", "\"standalone='...'\"",
  "\"exclude-result-prefixes='...'\"", "\"namespace='...' (string)\"",
  "\"schema-location='...'\"", "\"tunnel='...'\"", "\"required='...'\"",
  "\"override='...'\"", "\"copy-namespaces='...'\"",
  "\"inherit-namespaces='...'\"", "\"byte-order-mark='...'\"",
  "\"escape-uri-attributes='...'\"", "\"include-content-type='...'\"",
  "\"indent='...'\"", "\"omit-xml-declaration='...'\"",
  "\"undeclare-prefixes='...'\"", "\"match='...'\"", "\"as='...'\"",
  "\"select='...'\"", "\"priority='...'\"", "\"test='...'\"",
  "\"separator='...'\"", "\"namespace='...' (attribute value template)\"",
  "\"regex='...'\"", "\"flags='...'\"", "\"method='...'\"",
  "\"cdata-section-elements='...'\"", "\"use-character-maps='...'\"",
  "\"<XSLT element name>\"", "\"<XSLT XMLNS attr>\"",
  "\"<XSLT attr name>\"", "\"<XSLT text node>\"",
  "\"<XSLT whitespace text node>\"", "\"#default\"", "\"#all\"",
  "\"#current\"", "\"xml\"", "\"html\"", "\"xhtml\"", "$accept",
  "SelectLanguage", "Start_XSLT", "Stylesheet_XSLT",
  "StylesheetAttrs_XSLT", "StylesheetContent_XSLT", "Template_XSLT",
  "TemplateAttrs_XSLT", "TemplateModes_XSLT", "Number_XSLT",
  "Function_XSLT", "FunctionAttrs_XSLT", "ParamList_XSLT", "Param_XSLT",
  "ParamAttrs_XSLT", "GlobalParam_XSLT", "GlobalParamAttrs_XSLT",
  "GlobalVariable_XSLT", "GlobalVariableAttrs_XSLT", "Output_XSLT",
  "OutputAttrs_XSLT", "OutputMethod_XSLT", "QNames_XSLT",
  "ImportSchema_XSLT", "ImportSchemaAttrs_XSLT",
  "LiteralResultElement_XSLT", "LiteralResultElementAttrs_XSLT",
  "AttrValueTemplate_XSLT", "SequenceConstructor_XSLT", "Instruction_XSLT",
  "ValueOf_XSLT", "ValueOfAttrs_XSLT", "Text_XSLT", "TextNode_XSLT",
  "ApplyTemplates_XSLT", "ApplyTemplatesAttrs_XSLT",
  "ApplyTemplatesMode_XSLT", "ApplyTemplatesContent_XSLT",
  "CallTemplate_XSLT", "CallTemplateAttrs_XSLT",
  "CallTemplateContent_XSLT", "WithParam_XSLT", "WithParamAttrs_XSLT",
  "Sequence_XSLT", "SequenceAttrs_XSLT", "If_XSLT", "IfAttrs_XSLT",
  "Choose_XSLT", "WhenList_XSLT", "When_XSLT", "WhenAttrs_XSLT",
  "Otherwise_XSLT", "AnalyzeString_XSLT", "AnalyzeStringAttrs_XSLT",
  "MatchingSubstring_XSLT", "NonMatchingSubstring_XSLT", "Variable_XSLT",
  "VariableAttrs_XSLT", "Comment_XSLT", "CommentAttrs_XSLT", "PI_XSLT",
  "PIAttrs_XSLT", "Document_XSLT", "DocumentAttrs_XSLT", "Attribute_XSLT",
  "AttributeAttrs_XSLT", "Namespace_XSLT", "NamespaceAttrs_XSLT",
  "Element_XSLT", "ElementAttrs_XSLT", "CopyOf_XSLT", "CopyOfAttrs_XSLT",
  "Copy_XSLT", "CopyAttrs_XSLT", "ForEach_XSLT", "ForEachAttrs_XSLT",
  "Pattern_XSLT", "PathPattern_XSLT", "PathPatternStart_XSLT",
  "IdKeyPattern_XSLT", "IdValue_XSLT", "KeyValue_XSLT",
  "RelativePathPattern_XSLT", "PatternStep_XSLT", "PatternAxis_XSLT",
  "PatternStepPredicateList_XSLT", "Module_XQ", "MainModule_XQ",
  "LibraryModule_XQ", "Prolog_XQ", "Setter_XQ", "FunctionDecl_XQ",
  "FunctionKeyword", "Module_XQF", "MainModule_XQF", "LibraryModule_XQF",
  "Prolog_XQF", "Module_XQU", "MainModule_XQU", "LibraryModule_XQU",
  "Prolog_XQU", "Module", "VersionDecl", "MainModule", "LibraryModule",
  "ModuleDecl", "Prolog", "Setter", "Import", "Separator", "NamespaceDecl",
  "BoundarySpaceDecl", "DefaultNamespaceDecl", "OptionDecl",
  "FTOptionDecl", "OrderingModeDecl", "EmptyOrderDecl",
  "CopyNamespacesDecl", "PreserveMode", "InheritMode",
  "DefaultCollationDecl", "BaseURIDecl", "SchemaImport",
  "ResourceLocations", "SchemaPrefix", "ModuleImport", "VarDecl",
  "VarDeclValue", "ConstructionDecl", "FunctionDecl", "FunctionParamList",
  "FunctionDeclUpdating", "ParamList", "Param", "EnclosedExpr",
  "QueryBody", "Expr", "ExprSingle", "FLWORExpr", "FLWORTuples",
  "FlworExprForLetList", "ForClause", "ForBindingList", "ForBinding",
  "PositionalVar", "FTScoreVar", "LetClause", "LetBindingList",
  "LetBinding", "WhereClause", "OrderByClause", "OrderSpecList",
  "OrderSpec", "OrderExpr", "OrderDirection", "EmptyHandling",
  "QuantifiedExpr", "QuantifyBindingList", "QuantifyBinding",
  "TypeswitchExpr", "CaseClauseList", "DefaultCase", "CaseClause",
  "IfExpr", "OrExpr", "AndExpr", "ComparisonExpr", "@1", "FTContainsExpr",
  "RangeExpr", "AdditiveExpr", "MultiplicativeExpr", "UnionExpr",
  "IntersectExceptExpr", "InstanceofExpr", "TreatExpr", "CastableExpr",
  "CastExpr", "UnaryExpr", "ValueExpr", "ValidateExpr", "ExtensionExpr",
  "PragmaList", "Pragma", "PragmaContents", "PathExpr", "LeadingSlash",
  "RelativePathExpr", "StepExpr", "AxisStep", "ForwardStep", "ForwardAxis",
  "AbbrevForwardStep", "ReverseStep", "ReverseAxis", "AbbrevReverseStep",
  "NodeTest", "NameTest", "Wildcard", "FilterExpr", "PredicateList",
  "PrimaryExpr", "Literal", "NumericLiteral", "VarRef", "VarName",
  "ParenthesizedExpr", "ContextItemExpr", "OrderedExpr", "UnorderedExpr",
  "FunctionCall", "FunctionCallArgumentList", "Constructor",
  "DirectConstructor", "DirElemConstructor", "DirElemConstructorQName",
  "DirAttributeList", "OptionalWhitespace", "DirAttributeValue",
  "LiteralDirAttributeValue", "QuotAttrValueContent",
  "LiteralQuotAttrValueContent", "AposAttrValueContent",
  "LiteralAposAttrValueContent", "DirElementContent",
  "DirCommentConstructor", "DirCommentContents", "DirPIConstructor",
  "DirPIContents", "ComputedConstructor", "CompDocConstructor",
  "CompElemConstructor", "CompConstructorName", "ContentExpr",
  "CompAttrConstructor", "CompTextConstructor", "CompCommentConstructor",
  "CompPIConstructor", "CompPINCName", "CompPIConstructorContent",
  "SingleType", "SingleTypeOccurrence", "TypeDeclaration", "SequenceType",
  "OccurrenceIndicator", "ItemType", "AtomicType", "KindTest",
  "AnyKindTest", "DocumentTest", "TextTest", "CommentTest", "PITest",
  "AttributeTest", "AttribNameOrWildcard", "SchemaAttributeTest",
  "AttributeDeclaration", "ElementTest", "ElementNameOrWildcard",
  "SchemaElementTest", "ElementDeclaration", "AttributeName",
  "ElementName", "TypeName", "URILiteral", "FTSelection",
  "FTSelectionWeight", "FTPosFilters", "FTOr", "FTAnd", "FTMildnot",
  "FTUnaryNot", "FTPrimaryWithOptions", "FTPrimary", "FTWords",
  "FTExtensionSelection", "FTAnyallOption", "FTTimes", "FTRange",
  "FTPosFilter", "FTUnit", "FTBigUnit", "FTMatchOptions", "FTMatchOption",
  "FTCaseOption", "FTDiacriticsOption", "FTStemOption",
  "FTThesaurusOption", "FTThesaurusIDList", "FTThesaurusID",
  "FTStopWordOption", "FTStopWordsInclExclList", "FTStopWords",
  "FTStopWordsStringList", "FTStopWordsInclExcl", "FTLanguageOption",
  "FTWildCardOption", "FTExtensionOption", "FTIgnoreOption",
  "RevalidationDecl", "InsertExpr", "InsertExprBegin", "DeleteExpr",
  "DeleteExprBegin", "ReplaceExpr", "RenameExpr", "TransformExpr",
  "TransformBindingList", "TransformBinding", "IntegerLiteral",
  "DecimalLiteral", "DoubleLiteral", "StringLiteral", "NCName", "QName",
  "TemplateDecl", "TemplateSequenceType", "TemplateParamList",
  "TemplateDeclModesSection", "TemplateDeclModes", "TemplateDeclMode",
  "CallTemplateExpr", "ApplyTemplatesExpr", "ApplyTemplatesMode",
  "TemplateArgumentList", "TemplateArgument", "FunctionRef",
  "LiteralFunctionRef", "InlineFunction", "DereferencedFunctionCall",
  "FunctionType", "FunctionTypeArguments", "ParenthesizedItemType",
  "QNameValue", "FunctionName", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   318,   319,   319,   319,   319,   319,   319,   320,   321,
     321,   322,   322,   322,   323,   323,   323,   323,   323,   323,
     323,   324,   325,   325,   325,   325,   325,   325,   326,   326,
     326,   326,   327,   327,   327,   328,   329,   329,   329,   329,
     330,   330,   331,   332,   332,   332,   332,   332,   332,   333,
     334,   334,   334,   334,   334,   334,   335,   336,   336,   336,
     336,   337,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     339,   339,   339,   339,   339,   340,   340,   341,   342,   342,
     342,   342,   342,   343,   344,   344,   344,   345,   345,   345,
     346,   346,   346,   346,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   348,   349,   349,   349,   350,   351,   351,   352,
     353,   353,   353,   354,   354,   354,   355,   355,   356,   357,
     357,   358,   358,   359,   360,   360,   360,   360,   360,   361,
     362,   363,   364,   365,   366,   366,   367,   368,   369,   369,
     370,   371,   371,   371,   371,   372,   372,   373,   373,   374,
     375,   375,   375,   375,   376,   377,   377,   378,   379,   379,
     379,   380,   381,   382,   383,   383,   383,   383,   383,   384,
     385,   385,   385,   386,   387,   387,   387,   388,   389,   389,
     389,   390,   391,   391,   391,   392,   393,   393,   394,   394,
     395,   395,   395,   396,   396,   397,   397,   398,   398,   399,
     399,   400,   400,   400,   400,   400,   400,   401,   402,   402,
     402,   402,   403,   403,   404,   404,   404,   404,   405,   406,
     407,   407,   407,   407,   407,   407,   407,   407,   407,   408,
     408,   408,   408,   408,   408,   408,   409,   409,   409,   409,
     410,   410,   411,   411,   411,   411,   412,   413,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   415,   415,
     415,   415,   416,   417,   418,   418,   418,   418,   418,   418,
     418,   418,   418,   419,   419,   419,   419,   420,   420,   421,
     422,   423,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   425,   425,   425,   425,   425,   425,   425,   425,
     426,   426,   427,   428,   429,   429,   430,   430,   431,   432,
     433,   433,   434,   434,   435,   436,   436,   437,   437,   438,
     439,   440,   440,   441,   441,   441,   442,   442,   443,   443,
     444,   445,   445,   446,   446,   447,   447,   447,   447,   448,
     448,   449,   449,   450,   450,   451,   452,   452,   453,   454,
     454,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   456,   457,   457,   457,   457,   458,   458,
     458,   458,   459,   460,   460,   461,   462,   462,   463,   463,
     464,   465,   465,   466,   466,   467,   468,   468,   469,   469,
     470,   470,   471,   472,   472,   472,   473,   473,   473,   474,
     474,   475,   475,   476,   477,   478,   478,   479,   479,   480,
     480,   481,   482,   482,   483,   483,   484,   484,   485,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   484,
     484,   484,   484,   486,   486,   486,   487,   487,   488,   488,
     488,   489,   489,   489,   489,   489,   490,   490,   490,   491,
     491,   491,   492,   492,   493,   493,   494,   494,   495,   495,
     496,   496,   496,   497,   497,   497,   498,   498,   498,   499,
     499,   500,   500,   501,   502,   502,   503,   503,   503,   503,
     504,   505,   505,   505,   506,   506,   507,   507,   508,   508,
     509,   509,   509,   509,   509,   509,   509,   509,   510,   510,
     511,   511,   512,   512,   512,   512,   512,   513,   514,   514,
     515,   515,   516,   516,   516,   517,   518,   518,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   520,   520,
     521,   521,   521,   522,   523,   524,   524,   525,   526,   527,
     528,   528,   529,   529,   530,   530,   531,   531,   531,   532,
     532,   533,   533,   534,   534,   534,   535,   535,   536,   536,
     537,   537,   538,   538,   538,   539,   539,   539,   540,   540,
     540,   541,   541,   541,   542,   542,   542,   542,   542,   543,
     544,   544,   545,   546,   546,   547,   547,   547,   547,   547,
     547,   548,   549,   550,   550,   551,   551,   552,   553,   554,
     555,   556,   556,   557,   557,   558,   559,   559,   560,   560,
     561,   561,   562,   562,   562,   562,   563,   563,   563,   563,
     563,   564,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   566,   567,   567,   567,   568,   569,   570,   570,   570,
     571,   571,   571,   572,   572,   573,   574,   575,   575,   575,
     575,   576,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   584,   585,   585,   586,   586,   587,   587,   588,   588,
     589,   589,   590,   590,   591,   591,   591,   592,   592,   593,
     593,   594,   594,   594,   594,   594,   594,   595,   595,   596,
     596,   596,   596,   597,   597,   597,   597,   597,   597,   597,
     597,   598,   598,   598,   599,   599,   600,   600,   601,   601,
     601,   601,   601,   601,   601,   601,   602,   602,   602,   602,
     603,   603,   604,   604,   605,   605,   605,   605,   605,   606,
     606,   607,   607,   607,   607,   608,   608,   608,   609,   609,
     610,   610,   611,   611,   612,   612,   613,   614,   614,   615,
     616,   617,   617,   617,   618,   618,   618,   618,   618,   619,
     619,   620,   621,   621,   622,   622,   623,   624,   625,   625,
     626,   627,   628,   629,   630,   631,   632,   633,   633,   633,
     633,   633,   633,   634,   634,   635,   635,   636,   636,   637,
     637,   638,   638,   638,   639,   639,   640,   640,   640,   640,
     641,   641,   641,   642,   642,   643,   644,   644,   645,   646,
     647,   647,   648,   648,   648,   649,   649,   650,   651,   651,
     651,   651,   651,   651,   651,   651,   651,   651,   651,   651,
     651,   651,   651,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     1,     4,
       1,     0,     2,     2,     0,     2,     2,     2,     2,     2,
       2,     4,     1,     3,     2,     3,     3,     3,     0,     2,
       2,     2,     1,     1,     1,     4,     1,     2,     3,     2,
       0,     2,     3,     1,     2,     3,     3,     2,     2,     3,
       1,     2,     3,     3,     2,     2,     3,     1,     2,     3,
       3,     2,     1,     2,     3,     2,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     2,
       2,     3,     3,     4,     0,     3,     2,     0,     2,     2,
       0,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     3,     3,     1,     1,     3,
       1,     3,     3,     1,     1,     1,     0,     2,     3,     1,
       2,     0,     2,     3,     1,     2,     3,     3,     2,     2,
       3,     3,     3,     4,     1,     2,     3,     3,     0,     3,
       4,     1,     3,     3,     3,     0,     3,     0,     3,     4,
       1,     2,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     3,     1,     3,     3,     3,     3,     3,
       1,     3,     3,     3,     1,     3,     3,     2,     1,     3,
       2,     3,     1,     2,     2,     3,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     4,     6,     1,     1,     1,
       1,     1,     2,     3,     3,     3,     3,     2,     1,     3,
       3,     2,     0,     4,     2,     2,     1,     1,     2,     2,
       0,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     5,     7,     5,     7,
       1,     1,     2,     2,     1,     1,     2,     2,     0,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       1,     1,     2,     2,     0,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     1,     1,     4,     6,     2,
       2,     6,     0,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     3,     3,     5,     5,     4,     3,
       3,     3,     5,     5,     5,     1,     1,     1,     1,     4,
       3,     5,     4,     0,     2,     3,     3,     3,     7,     4,
       6,     2,     1,     3,     3,     6,     8,     6,     8,     2,
       3,     0,     1,     3,     1,     3,     3,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     2,     2,     1,     2,     2,
       1,     1,     2,     3,     1,     7,     0,     3,     0,     3,
       2,     3,     1,     5,     5,     2,     3,     4,     3,     1,
       3,     5,     1,     0,     1,     1,     0,     2,     2,     4,
       4,     3,     1,     5,     6,     2,     1,     5,     3,     4,
       7,     8,     3,     1,     3,     1,     3,     3,     0,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     4,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     4,     1,     4,     1,     4,     1,     4,     1,
       2,     2,     1,     1,     1,     1,     4,     5,     5,     3,
       4,     1,     2,     4,     1,     2,     1,     2,     2,     1,
       1,     3,     3,     1,     1,     1,     2,     2,     2,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       2,     1,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     0,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     3,     2,     1,     4,     4,
       3,     4,     3,     1,     1,     1,     1,     1,     1,     5,
      10,     1,     1,     0,     7,     7,     0,     1,     3,     3,
       3,     3,     0,     2,     2,     0,     2,     2,     0,     2,
       2,     0,     2,     2,     0,     2,     2,     2,     2,     3,
       0,     1,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     4,     3,     1,     3,     2,     3,     3,     4,     4,
       3,     1,     3,     2,     3,     2,     0,     1,     0,     2,
       2,     3,     0,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     4,     4,     3,     3,     3,     4,     4,
       3,     4,     6,     1,     1,     4,     1,     3,     4,     6,
       7,     1,     1,     4,     1,     1,     1,     1,     1,     3,
       0,     2,     0,     2,     3,     1,     3,     1,     4,     1,
       2,     1,     1,     2,     2,     3,     1,     2,     4,     3,
       4,     0,     1,     2,     1,     2,     1,     0,     3,     2,
       3,     3,     4,     1,     3,     3,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       2,     2,     2,     2,     3,     3,     6,     6,     2,     0,
       3,     2,     4,     4,     6,     5,     3,     5,     0,     2,
       2,     3,     1,     3,     2,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     6,     6,     4,     4,     4,     2,
       2,     2,     2,     2,     7,     5,     5,     6,     3,     1,
       4,     1,     1,     1,     1,     1,     1,     5,     7,     8,
      10,     6,     8,     0,     2,     2,     3,     0,     2,     1,
       3,     1,     1,     1,     3,     7,     3,     7,     5,     9,
       1,     1,     1,     1,     3,     5,     1,     1,     3,     4,
       3,     4,     3,     5,     6,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   240,   268,   284,   302,     0,     0,     0,   532,
       0,     0,     0,   600,     0,   576,     0,     0,   500,   557,
     527,     0,   791,   792,   793,   839,   840,   841,   845,   846,
     847,   848,   849,   851,   854,   855,   856,   857,   858,   859,
     860,   861,   862,   863,   864,   865,   866,   867,   868,   869,
     870,   871,   872,   873,   874,   875,   876,   877,   878,   879,
     880,   881,   882,   883,   884,   885,   886,   887,   888,   889,
     890,   891,   892,   893,   894,   895,   896,   897,   991,   992,
     853,   794,   898,   533,   534,   899,   900,   901,   902,   903,
     904,   905,   906,   907,   908,   909,   910,   911,   912,   913,
     914,   915,   850,   916,   917,   844,   918,   919,   920,   921,
     922,   923,   924,   925,   926,   927,   928,   929,   930,   931,
     932,   933,   934,   935,   936,   937,   843,   938,   939,   940,
     941,   942,   943,   944,   945,   946,   947,   948,   949,   950,
     951,   842,   952,   852,   953,   954,   955,   956,   957,   958,
     959,   960,   961,   962,   963,   964,   965,   966,   967,   968,
     969,   970,   971,   972,   973,   974,   975,   976,   977,   978,
     979,   980,   981,   982,   983,   984,   985,   986,   987,   988,
     989,   990,   993,   994,   995,   996,   997,   998,   999,  1000,
    1001,  1002,  1003,  1004,     2,   368,   370,   371,     0,   387,
     390,   391,   372,   373,   374,   380,   433,   435,   452,   455,
     457,   460,   465,   468,   471,   473,   475,   477,   479,   482,
     483,   485,     0,   491,   484,   496,   499,   503,   504,   536,
       0,   509,   536,     0,   521,   519,   529,   531,   505,   536,
     538,   548,   539,   540,   541,   544,   545,   542,   543,   564,
     566,   567,   568,   565,   605,   606,   607,   608,   609,   610,
     528,   650,   642,   649,   648,   647,   644,   646,   643,   645,
     375,     0,   376,     0,   378,   377,   379,   550,   551,   552,
     549,   530,   381,   382,   546,   826,   827,   547,   796,   838,
       0,     0,     3,   236,   237,     0,   240,   240,     4,   264,
     265,     0,   268,   268,     5,   280,   281,     0,   284,   284,
       6,   302,   295,   296,   302,     0,    11,    94,     7,     8,
      10,     1,   839,   840,   841,   845,   846,   847,   848,   849,
     860,   861,   862,   863,   864,   865,   866,   867,   868,   869,
     870,   871,   889,   991,   992,   900,   902,   913,   914,   850,
     844,   931,   937,   842,   852,   977,   980,   986,   988,   998,
     999,   553,   554,   838,   839,   840,   846,   849,   842,   518,
     571,   572,   573,     0,   601,     0,   498,   577,     0,   481,
     480,   556,     0,   512,     0,     0,   613,     0,     0,     0,
       0,     0,     0,     0,   621,     0,     0,     0,     0,     0,
     510,   511,   513,   514,   515,   516,   522,   523,   524,   525,
     526,     0,     0,     0,   789,     0,     0,     0,   392,   394,
       0,     0,   400,   402,     0,     0,   422,     0,     0,     0,
       0,     0,     0,   517,     0,     0,     0,   628,     0,     0,
     779,   780,     0,   782,   783,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   388,   389,   385,   386,     0,     0,
       0,     0,     0,     0,     0,     0,   438,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   492,   497,     0,     0,   506,   508,   507,   520,
       0,   535,     0,   781,     0,     0,     0,     0,   943,   950,
       0,     0,     0,     0,   249,     0,     0,   253,   254,   255,
     250,   251,   320,   321,     0,   252,   238,     0,   234,   235,
     239,   943,     0,     0,     0,     0,     0,     0,     0,     0,
     266,     0,   262,   263,   267,   943,     0,     0,     0,   312,
       0,     0,   316,   317,   319,   313,   314,     0,   315,     0,
     282,   318,     0,   278,   279,   283,   293,   294,   300,   943,
       0,     0,     0,     0,     0,     0,     0,     0,   299,     0,
      14,   100,   576,     0,   603,   602,   599,     0,   555,   664,
     660,     0,   663,   675,     0,     0,   617,   656,     0,   652,
       0,     0,     0,     0,   651,   657,     0,     0,   795,     0,
       0,   620,     0,   666,     0,   674,   676,   655,     0,     0,
       0,     0,     0,     0,     0,   628,     0,   628,     0,     0,
     628,     0,     0,     0,     0,     0,     0,     0,     0,   672,
     667,     0,   671,   612,     0,   359,     0,   364,     0,     0,
       0,     0,     0,   814,   816,   369,   383,   405,     0,     0,
     384,   432,   434,   437,   440,   441,   442,   450,   451,     0,
     436,   443,   444,   445,   446,   447,   448,   449,     0,     0,
       0,     0,   701,   453,   682,   685,   687,   689,   691,   692,
     707,   696,   458,   459,   456,   461,   463,   462,   464,   466,
     467,   469,   470,     0,     0,     0,     0,   489,     0,   502,
     501,     0,   830,   563,     0,     0,     0,     0,     0,   560,
       0,   828,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   260,   261,   807,     0,     0,     0,   322,
     241,   246,   242,   243,   244,   248,   245,   247,     0,     0,
       0,   269,   274,   270,   271,   272,   276,   277,   273,   275,
       0,     0,   362,     0,   285,   286,   287,   288,   292,   289,
     290,   291,   361,   361,   303,   304,   305,   306,   310,   311,
     307,   308,   309,    12,    13,     0,    96,    97,     0,   577,
       0,   604,     0,   494,   493,     0,   661,   614,   615,     0,
     619,   653,   654,   659,   658,   622,   623,     0,   665,   673,
     618,   611,     0,   788,     0,   558,   559,   396,   393,     0,
       0,   401,     0,   421,   419,   420,     0,     0,   486,     0,
       0,     0,   668,   628,     0,   360,     0,   851,   843,   852,
     629,   632,   636,   638,   641,   639,   640,     0,     0,   829,
       0,     0,     0,     0,     0,     0,   412,   406,   409,   413,
       0,   439,     0,     0,   690,     0,   702,   704,   706,   697,
       0,   454,     0,   680,     0,     0,     0,     0,     0,     0,
     738,   739,     0,     0,   693,   726,   732,   733,   731,   730,
     734,   728,   729,   735,     0,   694,   472,   474,   476,   626,
     478,   490,     0,     0,   831,     0,     0,   778,   777,   776,
     561,     0,   297,     0,   324,   325,   678,   340,     0,     0,
     353,   354,   330,   331,     0,     0,     0,     0,   335,   336,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   343,
       0,   343,   329,   772,   771,   773,     0,     9,    22,    50,
      36,    57,    62,    88,    15,    40,    16,    40,    17,   100,
      18,   100,    19,     0,    20,     0,    95,    93,   123,     0,
     130,   139,     0,     0,     0,   170,   175,   178,   182,   184,
     190,   194,   161,   198,   202,   206,   127,   128,   102,   103,
     104,   100,   105,   101,   106,   136,   107,   141,   108,     0,
     110,   100,   109,   118,   165,   111,   100,   112,   100,   113,
     100,   114,   100,   115,   100,   116,   100,   117,   100,   119,
       0,   120,   100,   121,   100,   576,   576,   594,   569,   495,
       0,   677,   616,   624,   790,     0,     0,   398,     0,     0,
       0,     0,     0,   426,     0,   487,   488,     0,   365,   363,
       0,     0,     0,     0,   633,   635,   634,   630,     0,     0,
     785,     0,   786,     0,     0,   821,   822,   818,   820,     0,
     414,   415,   416,   407,   695,   701,   699,     0,   703,   705,
       0,   684,     0,     0,   713,     0,     0,     0,     0,     0,
     679,   683,   686,     0,   741,   740,   743,   748,     0,   768,
     737,   736,     0,   766,   742,     0,     0,   767,     0,   727,
       0,     0,     0,     0,   627,   625,   537,   562,     0,     0,
       0,     0,   628,     0,     0,   339,     0,     0,     0,   328,
     807,   811,   812,   813,   808,   809,     0,     0,     0,     0,
     343,     0,   342,     0,   349,     0,    89,    90,    28,    24,
       0,     0,     0,   100,    37,    39,     0,   100,    51,    55,
      54,     0,     0,     0,    58,     0,     0,     0,    61,    79,
      63,    67,    68,    69,    73,    74,    76,    65,    70,    71,
      72,    75,    77,     0,     0,     0,    87,    99,    98,     0,
       0,     0,   158,   154,   100,     0,     0,    97,     0,     0,
       0,     0,   140,     0,   149,     0,   100,     0,    97,    97,
     167,   171,     0,     0,     0,     0,     0,    97,     0,     0,
       0,    97,     0,    97,    97,     0,    97,     0,     0,    97,
      97,     0,   197,   200,     0,   203,   204,     0,     0,     0,
       0,     0,     0,   662,   787,     0,     0,     0,   403,   404,
     423,     0,     0,     0,   424,   425,     0,     0,   669,   837,
     631,   637,   832,   835,     0,   366,   367,     0,     0,     0,
     823,     0,     0,   408,     0,   410,   698,   700,   770,   720,
     718,   719,   681,     0,     0,   724,   725,   716,   717,   688,
     756,   769,     0,     0,   745,   744,     0,     0,     0,     0,
     709,     0,   708,   774,   775,   298,   301,     0,   323,   332,
     333,   326,   327,   337,   338,   334,     0,   797,   803,     0,
       0,     0,   214,   213,   839,   860,   993,   994,     0,   209,
       0,   212,   210,   221,   232,   228,     0,   258,   256,   346,
     347,   341,   344,     0,     0,     0,    91,    92,    26,    23,
      27,    32,    33,    34,    25,    43,    41,   100,     0,    38,
       0,    53,    52,    49,    60,    59,    56,    83,    84,    80,
      81,    82,    64,    85,    66,    78,   126,   150,     0,   100,
     155,     0,     0,   152,   124,   125,   122,   133,   134,   135,
     132,   131,   129,   144,   137,   100,   138,   142,   151,     0,
     162,   163,   164,   100,     0,   173,   172,   100,   176,   174,
     179,   180,   177,   181,   185,   187,   188,   186,   183,   191,
     192,   189,   195,   196,   193,   199,   201,   207,   205,   576,
     576,     0,   598,   597,   596,   595,   397,     0,     0,     0,
       0,     0,     0,     0,   670,     0,     0,     0,   784,   628,
       0,   815,   817,     0,   417,   418,     0,   721,   722,   723,
     714,   715,   749,   749,   751,     0,     0,   758,   758,   711,
     710,     0,     0,   352,   350,   805,     0,     0,     0,     0,
     810,   231,     0,     0,     0,     0,     0,   801,   803,   222,
       0,     0,     0,     0,   227,     0,     0,   345,   343,     0,
     357,   355,    29,    30,    31,    44,    48,    47,     0,     0,
       0,    21,    35,    86,   157,     0,   153,   156,   145,   148,
       0,     0,     0,   166,     0,   160,   169,     0,     0,   576,
     399,   395,     0,   429,     0,   428,   431,   833,   836,     0,
       0,   824,     0,   411,     0,     0,     0,     0,     0,   762,
     760,   755,   757,   712,   351,   806,   804,   798,     0,   230,
     229,     0,   218,   217,     0,   208,     0,   224,   223,   226,
     225,     0,   259,   257,   348,     0,    46,    45,    42,   159,
     147,   146,   143,   168,   582,   588,   574,   585,   591,   575,
       0,     0,     0,   834,     0,   819,     0,   747,   746,   752,
     753,     0,   761,     0,     0,   759,   799,   803,   215,     0,
     802,     0,   358,   356,     0,     0,     0,     0,   570,     0,
     427,   825,   750,     0,   763,   764,   765,     0,     0,   219,
     220,   233,   578,   584,   583,   579,   590,   589,   580,   587,
     586,   581,   593,   592,   430,   754,   800,   216
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,   318,   319,   580,   785,   954,   955,  1348,  1354,
     956,   957,  1153,  1356,  1357,   958,   959,   960,   961,   962,
     963,  1372,  1374,   964,   965,   988,   581,   966,   788,   989,
     990,   991,   992,   993,   994,   995,  1390,  1201,   996,   997,
    1203,  1394,  1395,   998,   999,  1000,  1001,  1002,  1192,  1193,
    1194,  1381,  1003,  1004,  1210,  1404,  1005,  1006,  1007,  1008,
    1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,  1018,
    1019,  1020,  1021,  1022,  1023,  1024,  1328,  1329,  1330,  1331,
    1561,  1628,  1332,  1333,  1334,  1494,   292,   293,   294,   295,
     510,   511,   736,   298,   299,   300,   301,   304,   305,   306,
     307,   310,   296,   312,   313,   297,   315,   546,   512,   740,
     513,   514,   515,   516,   538,   517,   518,   519,   930,  1315,
     520,   521,   522,  1142,   938,   523,   524,  1474,   525,   559,
     437,   763,   646,   647,  1188,   194,   195,   196,   197,   198,
     199,   200,   418,   419,  1037,  1247,   201,   422,   423,   456,
     457,   857,   858,   859,  1072,  1275,   202,   425,   426,   203,
    1042,  1254,  1043,   204,   205,   206,   207,   669,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   794,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     496,   239,   240,   241,   242,   361,   243,   244,   245,   246,
     247,   714,   248,   249,   250,   372,   582,   378,  1586,  1589,
    1614,  1616,  1615,  1617,  1242,   251,   375,   252,   585,   253,
     254,   255,   387,   596,   256,   257,   258,   259,   395,   611,
     898,  1115,   649,   840,  1057,   841,   842,   260,   261,   262,
     263,   264,   265,   266,   591,   267,   612,   268,   641,   269,
     614,   592,   615,  1030,   917,   683,  1090,   873,   684,   685,
     686,   687,   688,   689,   690,   691,   869,   895,  1113,  1091,
    1460,  1287,   884,   885,   886,   887,   888,   889,  1544,  1295,
     890,  1551,  1467,  1548,  1605,   891,   892,   893,   871,   561,
     270,   271,   272,   273,   274,   275,   276,   413,   414,   277,
     278,   279,   280,   607,   281,   527,  1478,  1318,   934,  1134,
    1135,   282,   283,  1067,  1269,  1270,   284,   285,   286,   287,
     845,  1264,   846,   288,   289
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1391
static const yytype_int16 yypact[] =
{
    1039,  3164,   680,   680,   680,   680,   -96,   114,  6867, -1391,
    5450,   346,    46,    63,  4562,   154,  3397,  3397, -1391, -1391,
   -1391,  1766, -1391, -1391, -1391,   116,   445,   150,   222,   163,
     312,   365,   591, -1391, -1391, -1391, -1391, -1391, -1391, -1391,
     426,   461,   503,   553,   636,   648,   741,   756,   772,   786,
     825,   561, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,   837,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,   819,   830,
   -1391, -1391, -1391, -1391, -1391, -1391,   875, -1391,    78, -1391,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,   902,
     902, -1391,   880, -1391, -1391,   895, -1391, -1391, -1391, -1391,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,   708,
   -1391, -1391, -1391, -1391, -1391,   908, -1391, -1391, -1391, -1391,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,
   -1391,   288, -1391,   897, -1391, -1391, -1391, -1391, -1391, -1391,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,   135, -1391,
   -1391,    19, -1391, -1391, -1391, -1391, -1391,   894, -1391,    41,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391,   714,   718, -1391,
   -1391, -1391, -1391, -1391, -1391,   932, -1391, -1391,   838,   783,
   -1391, -1391, -1391, -1391, -1391,   823,   828, -1391,  1000,   794,
     158,   144,    73,   373, -1391,   841,   812,   845,   839, -1391,
   -1391, -1391,   128, -1391, -1391,  4562,   405, -1391, -1391, -1391,
    5450, -1391, -1391,  5450, -1391, -1391, -1391, -1391,   972, -1391,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,
   -1391,  3164, -1391,  3164, -1391, -1391, -1391, -1391, -1391, -1391,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,   540,
     852,   868, -1391, -1391, -1391,  3630,   873, -1391, -1391, -1391,
   -1391,  3863,   873, -1391, -1391, -1391, -1391,  4096,   873, -1391,
   -1391,   873, -1391, -1391, -1391,  4329, -1391, -1391, -1391, -1391,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,
   -1391, -1391, -1391, -1391,   983,  1015,  1023,  1038,  1045, -1391,
   -1391, -1391, -1391,   530, -1391,  1063,   405, -1391,  6867, -1391,
   -1391, -1391,   487, -1391,  5662,  3164, -1391,  1055,  1064,  3164,
     125,  1071,  6681,  3164, -1391,  1065,  6867,  6867,  1072,  3164,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,
   -1391,  3164,  6867,    30, -1391,  3164,  3164,  6867,  1082, -1391,
    6867,  1107,  1084, -1391,  6867,   118, -1391,   131,  3164,  3164,
    3164,  1070,  1073, -1391,  5874,  1055,   230,   971,  3164,   965,
   -1391, -1391,  3164, -1391, -1391,  6867,  3164,  3164,  3164,   875,
      78,  3164,   989,   990, -1391, -1391,   688, -1391,  3397,  3397,
    3397,  3397,  3397,  3397,  3397,  3397, -1391,  3397,  3397,  3397,
    3397,  3397,  3397,  3397,  3397,   278,  3397,  3397,  3397,  3397,
    3397,  3397,  3397,  3397,  3397,  3397,  3397,   968,   977,   978,
     981,  1999, -1391,   405,  4562,  4562,  1110, -1391,  1110, -1391,
    2232,  1110,   147, -1391,  2465,  1079,  1010,  6867,   809,   782,
    1083,  1083,  1083,  1083, -1391,  1083,  1083, -1391, -1391, -1391,
   -1391, -1391, -1391, -1391,  1083, -1391, -1391,  1083, -1391, -1391,
     417,   397,  1083,  1083,  1083,  1083,  1083,  1083,  1083,  1083,
   -1391,  1083, -1391, -1391,   451,   532,  1083,  1083,  1083, -1391,
    1083,  1083, -1391, -1391, -1391, -1391, -1391,  1083, -1391,  1083,
   -1391, -1391,  1083, -1391, -1391,   488, -1391, -1391,   508,   517,
    1083,  1083,  1083,  1083,  1083,  1083,  1083,  1083, -1391,  1083,
     389,   549,  1032,  1034, -1391, -1391, -1391,   232, -1391, -1391,
   -1391,   694, -1391, -1391,   138,  2698, -1391, -1391,   363, -1391,
     365,  1045,  1095,  1098, -1391, -1391,  1102,  1103, -1391,   428,
    2931, -1391,  1105, -1391,  1106, -1391, -1391, -1391,   589,   592,
    1138,   837,  3164,   597,   650,   971,   875,   971,  6867,    78,
     971,   902,  3164,  3164,   757,   768,   682,  3164,  3164, -1391,
   -1391,   770, -1391, -1391,  6867, -1391,   779, -1391,  6278,   926,
     928,  1092,  1003,   933,   159, -1391, -1391, -1391,  3164,  1019,
   -1391,   828, -1391, -1391, -1391, -1391, -1391, -1391, -1391,  3397,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,   278,  3164,
     443,   701,   696,  1066,   919,   920,  1076, -1391, -1391,   687,
     966, -1391,   144,   144,   946,    73,    73,    73,    73,   373,
     373, -1391, -1391,  6278,  6278,  6867,  6867, -1391,   722, -1391,
   -1391,  3164, -1391, -1391,   781,   545,  3164,  3164,  3164, -1391,
     784, -1391,    60,  1126,   816,  1041,  1159,  6867,   824,   876,
     515,   671,  6867, -1391, -1391,   698,  7044,   199,     6, -1391,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,   809,   782,
     687, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,
     397,   496, -1391,   811, -1391, -1391, -1391, -1391, -1391, -1391,
   -1391, -1391,   827,   538, -1391, -1391, -1391, -1391, -1391, -1391,
   -1391, -1391, -1391, -1391, -1391,   537, -1391, -1391,   980,   890,
     738, -1391,  1044, -1391, -1391,  6867, -1391, -1391, -1391,   736,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391,   745, -1391, -1391,
   -1391, -1391,  3164, -1391,  1048, -1391, -1391,  1075, -1391,  1168,
    1172, -1391,  1052, -1391, -1391, -1391,  1037,  1040, -1391,   749,
     750,  6867, -1391,   971,  1179, -1391,  6480,  1149,  1150,  1153,
   -1391,   465, -1391, -1391, -1391, -1391, -1391,  3164,  3164, -1391,
    3164,  3164,  3164,  1155,  1156,  1504, -1391,  1165, -1391,   882,
    3164, -1391,  1158,   754, -1391,   129,  1108,   992, -1391, -1391,
    1111, -1391,   278,   414,   278,  1069,   937,   872,   941,  6867,
   -1391, -1391,  1081,   140,   687, -1391, -1391, -1391, -1391, -1391,
   -1391, -1391, -1391, -1391,    40, -1391, -1391, -1391, -1391,  1184,
   -1391, -1391,   604,  3164, -1391,   982,   984, -1391, -1391, -1391,
   -1391,  1085, -1391,  1041, -1391, -1391, -1391, -1391,  6867,  1174,
   -1391, -1391, -1391, -1391,  1077,  1041,  1049,  1050, -1391, -1391,
    1176,  1091,  6867,   -32,   985,   897,  6867,  1027,  1041,  1109,
    6867,  1109,   687, -1391, -1391, -1391,  7044, -1391, -1391, -1391,
   -1391, -1391, -1391,   748, -1391,   295, -1391,   195, -1391,   375,
   -1391,   327, -1391,   790, -1391,   987,   258, -1391, -1391,   724,
   -1391, -1391,   927,   969,   935, -1391, -1391, -1391, -1391, -1391,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,
   -1391,   273, -1391, -1391, -1391,    68, -1391,   957, -1391,   993,
   -1391, -1391, -1391, -1391,   209, -1391,   392, -1391,   948, -1391,
     141, -1391, -1391, -1391,   314, -1391,   208, -1391,   148, -1391,
     192, -1391,   740, -1391,   949,   154,   154, -1391, -1391, -1391,
    1209, -1391, -1391, -1391, -1391,  3164,  1242,  1062,  3164,  3164,
    3164,  4776,    74, -1391,  3164, -1391, -1391,   320, -1391, -1391,
    1213,  1214,  1215,  6076, -1391, -1391, -1391, -1391,   760,   763,
   -1391,  1035, -1391,  1250,  1250, -1391, -1391,  1051, -1391,  3164,
   -1391, -1391,  1121,  1165, -1391,   696, -1391,  1211, -1391, -1391,
    3397,   920,  1169,   942, -1391,  3397,  3397,    40,   836,   836,
   -1391, -1391,  1076,   278, -1391, -1391, -1391, -1391,  1057, -1391,
   -1391, -1391,  1139, -1391, -1391,    62,  1060, -1391,  1181, -1391,
     218,  3397,  3397,  1080, -1391, -1391, -1391, -1391,  3164,  3164,
    1083,  1083,   971,  1041,   911, -1391,  1041,  1041,   878, -1391,
     110, -1391, -1391, -1391,  1241, -1391,  5007,    79,  1239,  1112,
    1109,  1041,  1245,  1243,  1245,   897,   996,   999, -1391, -1391,
    5007,  6278,   887,  1033, -1391, -1391,  6278,  1033, -1391, -1391,
   -1391,  6278,  3164,  7045, -1391,  6278,  3164,  7073, -1391, -1391,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,
   -1391, -1391, -1391,    23,  1163,  1163, -1391, -1391, -1391,  1043,
    3164,   994,   803, -1391, -1391,  3164,  3164, -1391,  7101,   -56,
    3164,   631, -1391,   658, -1391,  7129, -1391,  3164, -1391, -1391,
    1020, -1391,  6278,  3164,  7157,  3164,  7185, -1391,  3164,  7213,
    7241, -1391,  3164, -1391, -1391,  7269, -1391,  3164,  7297, -1391,
   -1391,  7325, -1391, -1391,  3164, -1391, -1391,  7353,  3164,  7381,
    1246,  1249,   717, -1391, -1391,  6867,  1285,  1164, -1391, -1391,
   -1391,  6867,  1167,    87, -1391, -1391,  1145,  1258, -1391, -1391,
   -1391, -1391,  1151, -1391,   788, -1391, -1391,  3164,  6867,   795,
   -1391,   807,  1261, -1391,   931,  1160, -1391, -1391,    73, -1391,
   -1391, -1391, -1391,    83,   747, -1391, -1391, -1391, -1391, -1391,
   -1391, -1391,    55,  1041, -1391, -1391,   101,  1093,  3397,  3397,
     946,   161, -1391, -1391, -1391, -1391, -1391,   103, -1391, -1391,
   -1391, -1391, -1391, -1391, -1391, -1391,   293, -1391,  1157,  1078,
     -32,  5450, -1391,  1117,   310,  1286,  1264,  1267,   151, -1391,
    5238,   853,   898, -1391,  1287, -1391,  6278, -1391, -1391, -1391,
   -1391,  1245, -1391,  1041,  1041,   137, -1391, -1391,   -22,  1297,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391,   395,  7409, -1391,
    7437, -1391,   932, -1391, -1391,   932, -1391, -1391, -1391, -1391,
   -1391, -1391, -1391, -1391,  1190,  1190, -1391,   932,  3164, -1391,
   -1391,  1086,  7465,   932,   932,   258, -1391, -1391, -1391, -1391,
   -1391,   932, -1391, -1391, -1391,   234, -1391, -1391, -1391,  7493,
     932,   258,   258, -1391,  1087, -1391,   932, -1391,   932, -1391,
     258,   932, -1391, -1391,   258,   932,   258,   258, -1391,   258,
     932, -1391,   258,   258, -1391,   932, -1391,   932, -1391,   154,
     154,   346, -1391, -1391, -1391, -1391, -1391,  6867,  3164,  1166,
    3164,  6867,  3164,  3164, -1391,  6278,  6278,  1170, -1391,   971,
    1250, -1391, -1391,  1250, -1391, -1391,  1041, -1391, -1391, -1391,
   -1391, -1391, -1391, -1391,    15,  1081,  1041, -1391, -1391,   946,
     946,  3397,  3164, -1391, -1391, -1391,   808,  6278,   926,  5007,
   -1391, -1391,  5450,  5450,   121,  1081,  5007, -1391,  1157, -1391,
    5238,  5238,  5238,  5238, -1391,  1291,   149, -1391,  1109,  6278,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,  6278,  3164,
    7521, -1391, -1391, -1391,   932,  7549, -1391, -1391, -1391, -1391,
    6278,  3164,  7577, -1391,  7605, -1391,  1501,   345,   684,   154,
   -1391, -1391,  6278, -1391,  1185, -1391, -1391, -1391, -1391,  6278,
    1306, -1391,   844, -1391,   849,   863,  1081,  1114,   865, -1391,
   -1391,   579,   579,   946, -1391, -1391, -1391, -1391,   151, -1391,
   -1391,  1277, -1391, -1391,  1288, -1391,   926, -1391, -1391, -1391,
   -1391,  3164, -1391, -1391,  1245,   153, -1391,   932, -1391, -1391,
   -1391,   932, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,
    1294,  1194,  3164, -1391,  3164, -1391,  1212, -1391, -1391,    40,
   -1391,  1081, -1391,   101,   101, -1391, -1391,  1157, -1391,   448,
   -1391,   630, -1391, -1391,   308,   492,   468,   513, -1391,  3164,
   -1391, -1391, -1391,  1122, -1391, -1391, -1391,   926,  1289, -1391,
   -1391,  1305, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,
   -1391, -1391,   370, -1391, -1391, -1391, -1391, -1391, -1391, -1391,
   -1391, -1391,   146, -1391, -1391,  1326, -1391,  -300,  -870, -1391,
   -1391, -1391, -1391,   364, -1391, -1391, -1391, -1391, -1391, -1391,
   -1391,   132, -1391, -1391, -1391, -1391, -1391, -1391, -1391,   142,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,
   -1391, -1391, -1391, -1391, -1391, -1391, -1137,  -150, -1391, -1391,
   -1391, -1391, -1391, -1193, -1391, -1391, -1391,  1042,  1046,  1047,
    -277,  -243,  -485, -1391,  1053,  1056,  1036, -1391,  1029,  1058,
    1031, -1391,   945,  1061,  1088,    47,  1068,  -289,  -260,  -467,
    -182,  -254,  -181,  -162,  -286,  -253,  -214,  -192, -1391, -1391,
    -191,  -145, -1391,  -935, -1391, -1391,  -126, -1391,  -135,  -280,
    -853, -1391,    27,   511,  -644,   436,   -21,  -174, -1391, -1391,
   -1391,  1147, -1391,   721, -1391, -1391,  1152, -1391,   719, -1391,
     893,   493,   283, -1391, -1391, -1391, -1391,  1254,   729, -1391,
   -1391, -1391,   319, -1391, -1391,   913,   910, -1391,    85,   298,
    -468,   598,  -448,   593,   603, -1391, -1391, -1391,  1074, -1391,
   -1391, -1391,  -419,  -208, -1391, -1391, -1391,    45,   605, -1391,
   -1391, -1391, -1391, -1391, -1391, -1391,    -8, -1391, -1391, -1391,
    -231, -1391,  -472, -1391, -1390,  -408, -1391, -1391, -1391, -1391,
   -1391,   883, -1391,   152, -1391,   -43, -1391,  -575, -1391, -1391,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,
   -1391, -1391,  1248,   958, -1391, -1391, -1391, -1391, -1391, -1391,
     686, -1391,  -607,  -661, -1391,   559,   396,  -627, -1391, -1391,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391,  1006, -1391,  1007,
   -1391,  1002,   967,   569,  -698,  -605, -1391, -1391, -1391,   531,
     528,   311,   725, -1391, -1391, -1391,   331, -1391, -1076, -1391,
     123,   321,   659,  -735, -1391, -1391, -1391, -1391,   -55, -1273,
   -1391,   -57,  -506, -1391, -1391, -1391, -1391, -1391, -1391, -1391,
   -1391, -1391, -1391, -1391, -1391, -1391, -1391, -1391,   793, -1391,
   -1391, -1391,  -865,  -480,  -359,   -97, -1366, -1292,   286, -1391,
      97, -1391, -1391, -1391, -1042,   -31, -1391, -1391, -1391, -1391,
   -1391, -1391, -1391,     7,    20
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -538
static const yytype_int16 yytable[] =
{
     382,   498,   369,   682,   620,   849,  1144,   790,   501,   625,
     694,  1284,   627,  1349,   492,   362,   630,  1103,   817,  1463,
     819,   843,  1271,   822,   532,   593,   570,   723,   363,   575,
     363,   695,   696,   697,   698,   577,  1488,   593,   616,   939,
     941,   534,   896,   897,   741,   742,   743,   547,   744,   745,
     303,   309,   314,   549,   552,   571,   681,   746,   533,   376,
     747,   549,   552,   621,  1387,   751,   752,   753,   754,   755,
     756,   757,   758,   862,   759,   616,   843,   843,   440,   764,
     765,   766,  1137,   767,   768,   483,  1367,   420,  1131,  1163,
     769,  1167,   770,   553,  1562,   771,  1441,   502,  1502,   503,
     443,   553,  1292,   774,   775,   776,   777,   778,   779,   780,
     781,   739,   782,  1472,   321,   554,   555,   476,   477,   535,
     536,  1198,  1566,   554,   555,   548,   550,   847,   848,   916,
       8,  1205,  1110,   572,   573,   383,  1214,  1489,  1216,   537,
    1219,  1465,  1220,  1368,  1225,   551,  1228,   316,  1231,  1109,
    1316,   631,  1237,   574,  1239,   479,   384,  1110,   847,   848,
      15,    15,   556,  1486,   631,   385,   599,  1293,   374,   678,
     556,   447,   558,   373,  1293,   539,   940,   491,   679,  1076,
     558,   557,    22,    23,    24,   847,   848,   600,   797,   576,
     390,  1316,   476,   477,   438,   476,   477,   847,   848,   847,
     848,   847,   848,   392,   541,  1341,   682,  1109,   682,   843,
     562,   317,   393,  1466,   480,  1121,  1442,  1546,   579,  1630,
     820,  1041,   497,  1111,  1112,   499,  1048,  1125,  1336,  1104,
    1105,  1106,  1107,   911,   484,  1462,   833,   439,   386,   644,
    1140,  1627,  1294,   441,    81,   927,   622,   919,  1111,  1112,
     363,  1337,    81,   363,  1253,   912,  1388,   377,  1389,   681,
    1077,   681,   391,   632,   650,   444,  1607,   532,   652,   421,
     493,   645,   654,   655,   656,  1473,   633,   657,   946,   570,
    1132,  1133,   575,  1358,   534,   394,  1499,  1360,   577,   844,
    1503,  1504,  1345,  1457,  1458,  1459,   715,  1567,  1568,  1569,
    1570,   533,   644,   481,   482,   547,   847,   848,   571,  1500,
      15,   549,   552,   601,   549,   552,   478,  1298,   678,  1471,
    1108,  1572,   916,  1622,  1382,  1612,   713,   679,   434,  1482,
     713,    22,    23,    24,  1475,   792,  1399,   385,  1369,  1370,
    1371,  1199,  1558,  1257,   844,   844,   844,   844,   933,   303,
     384,   553,   396,  1632,   553,   309,   847,   848,   314,  1299,
     793,  1258,   535,   536,   594,  1200,   716,   717,   598,   936,
     680,  1187,   609,   554,   555,   718,   554,   555,   618,   937,
    1252,   854,   537,   548,   550,   587,   572,   573,  1547,  1584,
     619,  1585,  1263,   682,   623,   624,   447,   855,   363,   608,
     682,    81,   682,   551,   363,   397,   574,   634,   635,   636,
     386,  1542,   363,   800,   843,  1217,   363,   363,   539,   362,
     556,  1633,  1229,   556,   362,  1308,   843,   362,  1311,  1312,
     558,   362,   363,   558,  1232,   494,  1031,   363,  1218,   557,
     363,   495,   576,  1342,   363,   400,   681,   541,   814,  1230,
    1240,  1241,   653,   681,   363,   681,  1138,     8,   824,   825,
    1143,   447,   724,   750,   725,   363,   370,   371,   562,  1154,
     708,   579,  1031,   492,  1206,    15,  1054,   844,   805,  1233,
     401,  1155,  1226,   678,   856,   388,  1317,  1510,  1055,  1234,
    1350,  1156,   679,  1338,   389,  1359,    22,    23,    24,  1056,
    1361,    22,    23,    24,  1364,  1227,  1207,  1082,  1518,  1515,
    1122,  1208,  1209,  1638,   608,  1307,   847,   848,  1519,   680,
     447,   726,   402,  1623,   843,  1522,  1083,   363,   588,   843,
    1520,  1521,  1084,  1524,   843,   485,   486,  1526,   843,  1635,
     847,   848,   907,   908,   909,   663,   664,   665,   666,   667,
     668,  1405,   670,   671,   672,   673,   674,   675,   676,   677,
    1641,   847,   848,  1574,   943,   944,    81,   727,  1148,  1149,
    1196,    81,   403,  1197,   799,   728,   729,   730,   731,   732,
     504,  1639,   724,   750,   725,   843,   733,   734,  1221,   807,
    1150,  1151,   505,  1152,   748,  1464,   945,   724,  1434,   725,
    1549,  1164,   749,   724,   750,   725,  1636,  1085,  1086,  1087,
     411,  1222,  1088,  1089,  1223,  1224,   829,   830,  1283,  1563,
    1564,   682,   447,  1165,  1166,   447,  1116,  1642,   760,   735,
     447,   398,  1278,   583,   584,   362,   749,   447,  1034,   810,
     399,   726,   811,  1300,  1301,  1497,  1498,   815,   363,  1158,
     924,   362,  1631,  1305,  1306,   404,   726,   925,   863,  1159,
    1160,   783,   726,   447,   363,   772,  1211,   405,   363,  1505,
     784,  1161,  1162,   749,   681,  1496,  1060,  1061,  1062,  1506,
    1507,  1599,   844,   447,  1487,   773,   856,   727,  1212,  1213,
     902,  1508,  1509,   749,   844,   728,   729,   730,   731,   732,
     816,  1501,   727,   926,   733,   734,  -361,  -361,   727,   843,
     728,   729,   730,   731,   732,   447,   728,   729,   730,   731,
     732,  -361,  -361,   363,   363,   363,   363,   795,  1587,  1117,
    1588,   526,   828,    15,   608,   796,  1624,   540,   761,   931,
    1603,    11,  1604,   560,    12,    13,   762,   363,  1431,   735,
     865,   578,   363,   761,   861,   447,   935,   430,  1543,   761,
     406,   762,   905,  1027,   735,   847,   848,   762,  1550,   447,
     735,   906,   901,   876,   877,   407,   431,   432,   447,   947,
    1028,   948,   447,   447,  1537,  1538,  1032,   447,   949,   950,
     447,   408,   844,   447,   951,  1033,   447,   844,   826,  1045,
    1046,   447,   844,   831,  1075,   409,   844,   952,   953,   827,
    1265,   832,   834,  1266,   903,   363,  1556,   903,   843,   843,
     835,  1446,   904,   452,   453,   910,  1058,  1059,  1450,  1447,
    1469,  1470,  1432,  1433,  1557,   878,  1451,  1436,  1575,   928,
    1450,   834,  1540,  1439,   410,   929,   412,  1576,  1452,  1555,
     843,   363,  1573,   844,  1527,  1528,   363,   786,   787,  1580,
    1449,  1244,  1068,   290,  1248,  1249,  1250,   291,   415,   879,
    1256,  1591,   843,  1392,   724,   363,   725,  1450,  1593,   416,
    1393,   843,  1596,  1490,   417,  1595,  1102,   880,   881,  1491,
    1597,   882,   724,   843,   725,   856,  1596,  1385,  1601,   363,
    1396,   866,   867,   868,  1598,   843,  1602,  1393,  1401,  1402,
     883,   424,   843,   449,  1606,   450,   451,  1410,   452,   453,
     428,  1414,  1610,  1416,  1417,   362,  1419,   433,  1492,  1422,
    1423,  1613,   932,   726,  1493,   429,   933,   436,   363,  1130,
    1351,  1352,  1353,   608,  1303,  1304,   445,   608,   302,   308,
     311,   726,   363,   442,  1590,   446,   363,  1457,  1458,  1459,
     363,  1096,  1097,  1098,  1099,   447,  1145,   448,   737,   738,
    1634,  1637,  1640,  1643,   847,   848,   458,   844,   488,   727,
     476,   477,   459,  1646,   914,   915,   475,   728,   729,   730,
     731,   732,   920,   921,   922,   923,   487,   727,   733,   734,
     733,   734,   489,  1553,   490,   728,   729,   730,   731,   732,
    1025,  1026,   500,   460,   461,   462,   463,   464,   465,  1070,
    1071,  1094,  1095,   384,   466,  1100,  1101,  1235,  1236,  1530,
    1146,  1147,  1168,  1534,   986,   987,   506,   467,   507,  1280,
    1281,   735,     1,     2,     3,     4,     5,     6,   761,  1285,
    1286,  1309,  1310,  1313,  1314,   388,   762,  1191,  1379,   735,
     291,   363,  1169,   392,  1170,  1171,  1172,  1173,  1174,  1175,
    1176,  1454,  1455,   363,   692,   693,   699,   700,   398,  1177,
    1178,  1179,  1180,  1181,  1182,   434,   844,   844,   701,   702,
     379,   380,   586,  1448,  1183,  1184,  1185,  1625,  1626,   709,
     710,   899,   899,  1495,   595,   597,   468,   469,   470,   471,
     472,   473,   604,   617,   610,   626,   628,   629,   844,   637,
     648,   651,   638,   658,   703,   659,   704,   705,  1335,  -211,
     706,   711,   721,   722,   739,   789,   801,  1629,   791,   802,
     844,  1362,  1335,   803,   804,  1365,   808,   809,   812,   844,
     850,   851,   852,   860,   870,   853,   363,  -211,   872,   875,
     874,   844,   894,   913,   916,  -211,  -211,   474,   918,  1377,
     363,   363,  1029,   844,  1383,  1384,   363,  1035,  1038,  1391,
     844,   363,  1039,  1040,  1041,   363,  1400,  1036,   644,  1051,
    1052,  1044,  1406,  1053,  1408,  1063,  1064,  1411,  1069,  1074,
    1093,  1415,  1079,  1078,    81,  1080,  1420,  1114,  1120,  1128,
    1118,  1123,  1119,  1425,  1129,  1139,  1124,  1427,  1136,  1126,
    1127,  1141,   967,  1191,  1190,   968,   969,   970,   971,  1186,
     972,  1202,   363,   973,  1195,  1204,   974,   975,   976,   977,
     978,   979,   980,   981,   982,  1215,  1238,   983,   984,   985,
    1243,  1245,   362,  1246,  1259,  1260,  1261,  1267,   362,  1268,
    1274,  1277,  1291,  1279,  1531,   363,  1533,  1290,  1535,  1536,
    1296,   363,  1297,  1272,  1320,   362,  1339,  1302,  1343,  1346,
    1344,  1347,  1340,  1373,  1355,  1376,  1403,   317,   363,  1429,
     986,   987,  1430,  1378,  1437,  1438,  1440,  1443,  1554,  1444,
    1445,  1453,  1456,  1468,  1484,  1483,  1477,  1485,  -536,  1486,
    1513,  1479,  1571,  1481,  1592,  1532,  1594,  1600,  1608,  1539,
    1618,  1609,  1335,  1619,  1293,  1645,  -537,  1157,  1516,  1525,
    1647,  1375,   320,  1189,  1380,  1397,  1565,   563,   528,   544,
     565,   363,   529,  1476,   530,  1049,   454,   818,   821,   660,
     363,   455,  1273,  1073,   427,   542,   363,  1514,   543,  -211,
     823,  1255,  -211,  -211,  -211,  -211,   564,  -211,  -211,   662,
    -211,   661,   566,  -211,  -211,  -211,  -211,  -211,  -211,  -211,
    -211,  -211,   568,  1282,  -211,  -211,  -211,   720,  1529,   435,
    -211,  -211,   900,   643,  1435,  1050,   602,   603,   613,   567,
    1047,   642,  1092,  1081,  1289,   864,  1276,  1461,  1545,   942,
    1288,  1552,  -211,  -211,   813,  -211,  1319,  1480,  1620,  1541,
    1621,     0,     0,     0,  -211,     0,     0,  -211,  -211,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   362,  1644,     0,     0,   362,     0,
       0,     0,     0,     0,     0,     0,     0,   363,     0,     0,
       0,   363,     0,     0,     0,   363,   363,     0,     0,     0,
       0,  1335,     0,     0,  1559,  1560,     0,     0,  1335,     0,
       0,     0,  1335,  1335,  1335,  1335,     0,     0,  1577,     0,
       0,     0,     0,     0,     0,     0,     0,   363,     0,   363,
    1581,     0,   363,   363,     0,     0,   363,     0,     0,     0,
     363,   363,   363,   363,     0,     0,     0,     0,     0,   363,
       0,     0,     0,     0,     0,     0,     0,     0,   363,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     363,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1611,     0,   363,     0,     0,     0,     0,     0,     0,   363,
     322,   323,   324,   325,   326,   327,   328,   329,    33,    34,
      35,    36,    37,    38,    39,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,    52,    53,    54,
      55,    56,     0,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,   342,    70,     0,     0,     0,
      71,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,   343,   344,    80,     0,     0,     0,    82,     0,
       0,     0,     0,    85,   345,    87,   346,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   347,   348,   101,
     349,   103,     0,   104,   350,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   351,   120,
     121,   122,   123,   124,   352,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,     0,   138,   139,
     140,     0,   353,   142,   354,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   355,
     169,   170,   356,   172,   173,   174,   175,     0,   176,   357,
     178,   358,   180,   181,   182,   183,   184,   185,   186,   359,
     360,   189,   190,   191,   192,   193,   968,   969,   970,   971,
       0,   972,     0,     0,   973,     0,     0,   974,   975,   976,
     977,   978,   979,   980,   981,   982,     0,     0,   983,   984,
     985,     0,     0,     0,     0,     8,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,     0,
      11,     0,     0,    12,    13,     0,    14,     0,    15,     0,
      16,    17,    18,     0,    19,    20,    21,   381,   317,     0,
       0,   986,   987,     0,     0,     0,  1065,     0,  1066,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,     0,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,    78,    79,    80,     0,     0,    81,
      82,    83,    84,     0,     0,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,     0,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,     0,
     138,   139,   140,     0,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,     0,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,     8,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,     0,    11,     0,     0,    12,    13,     0,    14,
       0,    15,     0,    16,    17,    18,     0,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   707,
       0,     0,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,    78,    79,    80,
       0,     0,    81,    82,    83,    84,     0,     0,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,     0,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,     0,   138,   139,   140,     0,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,     0,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,     8,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,    11,     0,     0,    12,
      13,     0,    14,     0,    15,     0,    16,    17,    18,     0,
      19,    20,    21,   712,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
       0,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     0,     0,     0,    71,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
      78,    79,    80,     0,     0,    81,    82,    83,    84,     0,
       0,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
       0,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,     0,   138,   139,   140,     0,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,     0,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,     8,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,    10,     0,     0,     0,    11,
       0,     0,    12,    13,     0,    14,     0,    15,     0,    16,
      17,    18,     0,    19,    20,    21,   719,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,     0,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,     0,     0,
       0,    71,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,    78,    79,    80,     0,     0,    81,    82,
      83,    84,     0,     0,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,     0,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,     0,   138,
     139,   140,     0,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,     0,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,     8,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,    11,     0,     0,    12,    13,     0,    14,     0,
      15,     0,    16,    17,    18,     0,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   798,     0,
       0,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,     0,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     0,     0,     0,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,    78,    79,    80,     0,
       0,    81,    82,    83,    84,     0,     0,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,     0,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,     0,   138,   139,   140,     0,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,     0,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
       8,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,    11,     0,     0,    12,    13,
       0,    14,     0,    15,     0,    16,    17,    18,     0,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   806,     0,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,     0,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,     0,     0,     0,    71,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,    78,
      79,    80,     0,     0,    81,    82,    83,    84,     0,     0,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,     0,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,     0,   138,   139,   140,     0,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,     0,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,     8,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,    10,     0,     0,     0,    11,     0,
       0,    12,    13,     0,    14,     0,    15,     0,    16,    17,
      18,     0,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,     0,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     0,     0,     0,
      71,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,    78,    79,    80,     0,     0,    81,    82,    83,
      84,     0,     0,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,     0,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,     0,   138,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,     0,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,     8,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
       0,    11,     0,     0,    12,    13,     0,    14,     0,    15,
       0,    16,    17,    18,     0,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,     0,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,   342,    70,
       0,     0,     0,    71,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,    78,    79,    80,     0,     0,
      81,    82,    83,    84,     0,     0,    85,   345,    87,   346,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     347,   348,   101,   349,   103,     0,   104,   350,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
       0,   138,   139,   140,     0,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   355,   169,   170,   356,   172,   173,   174,   175,
       0,   176,   357,   178,   358,   180,   181,   182,   183,   184,
     185,   186,   359,   360,   189,   190,   191,   192,   193,     8,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     0,     0,    11,     0,     0,    12,    13,     0,
      14,     0,    15,     0,    16,    17,    18,     0,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,     0,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,    78,    79,
      80,     0,     0,    81,    82,    83,    84,     0,     0,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,     0,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   508,   133,   134,
     135,   136,   137,     0,   138,   509,   140,     0,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,     0,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,     8,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,    10,     0,     0,     0,    11,     0,     0,
      12,    13,     0,    14,     0,    15,     0,    16,    17,    18,
       0,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,     0,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,     0,     0,     0,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,     0,
       0,    78,    79,    80,     0,     0,    81,    82,    83,    84,
       0,     0,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,     0,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     531,   133,   134,   135,   136,   137,     0,   138,   509,   140,
       0,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,     0,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,     8,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,     0,
      11,     0,     0,    12,    13,     0,    14,     0,    15,     0,
      16,    17,    18,     0,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,     0,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,    78,    79,    80,     0,     0,    81,
      82,    83,    84,     0,     0,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,     0,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   545,   133,   134,   135,   136,   137,     0,
     138,   509,   140,     0,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,     0,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,     8,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,     0,    11,     0,     0,    12,    13,     0,    14,
       0,    15,     0,    16,    17,    18,     0,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,    78,    79,    80,
       0,     0,    81,    82,    83,    84,     0,     0,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,     0,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   569,   133,   134,   135,
     136,   137,     0,   138,   509,   140,     0,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,     0,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,     8,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,    11,     0,     0,    12,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
       0,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,   342,    70,     0,     0,     0,    71,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
      78,    79,    80,     0,     0,    81,    82,    83,    84,     0,
       0,    85,   345,    87,   346,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,   347,   348,   101,   349,   103,
       0,   104,   350,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   351,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,     0,   138,   139,   140,     0,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   355,   169,   170,
     356,   172,   173,   174,   175,  1251,   176,   357,   178,   358,
     180,   181,   182,   183,   184,   185,   186,   359,   360,   189,
     190,   191,   192,   193,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   836,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   364,   365,    27,    28,   366,    30,    31,   367,
     837,    34,    35,    36,    37,    38,    39,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,    52,
      53,    54,    55,    56,     0,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,   342,    70,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,   343,   344,    80,     0,     0,     0,
      82,     0,     0,     0,     0,    85,   345,    87,   346,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   347,
     348,   101,   349,   103,     0,   104,   350,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     351,   120,   121,   122,   123,   124,   352,   838,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,     0,
     138,   139,   140,     0,   368,   142,   839,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   355,   169,   170,   356,   172,   173,   174,   175,     0,
     176,   357,   178,   358,   180,   181,   182,   183,   184,   185,
     186,   359,   360,   189,   190,   191,   192,   193,     9,     0,
       0,     0,     0,     0,     0,     0,     0,  1321,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1322,     0,     0,
       0,     0,     0,  1323,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1324,   365,    27,    28,   366,    30,    31,
     367,    33,    34,    35,    36,    37,    38,    39,  1325,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
      52,    53,    54,    55,    56,     0,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,   342,    70,
       0,     0,     0,    71,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,   343,   344,    80,     0,     0,
       0,    82,    83,    84,     0,     0,    85,   345,    87,   346,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     347,   348,   101,   349,   103,     0,   104,   350,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   351,   120,   121,   122,   123,   124,   352,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
       0,   138,   139,   140,     0,   368,   142,   354,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   355,   169,   170,   356,   172,   173,   174,   175,
       0,   176,   357,   178,   358,   180,   181,  1326,  1327,   184,
     185,   186,   359,   360,   189,   190,   191,   192,   193,     9,
       0,     0,     0,     0,     0,     0,     0,     0,  1321,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1324,   365,    27,    28,   366,    30,
      31,   367,    33,    34,    35,    36,    37,    38,    39,  1325,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,    52,    53,    54,    55,    56,     0,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,   342,
      70,     0,     0,     0,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,   343,   344,    80,     0,
       0,     0,    82,    83,    84,     0,     0,    85,   345,    87,
     346,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   347,   348,   101,   349,   103,     0,   104,   350,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   351,   120,   121,   122,   123,   124,   352,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,     0,   138,   139,   140,     0,   368,   142,   354,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   355,   169,   170,   356,   172,   173,   174,
     175,     9,   176,   357,   178,   358,   180,   181,   182,   183,
     184,   185,   186,   359,   360,   189,   190,   191,   192,   193,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   364,   365,    27,    28,
     366,    30,    31,   367,    33,    34,    35,    36,    37,    38,
      39,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,    52,    53,    54,    55,    56,     0,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,   342,    70,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,   343,   344,
      80,     0,     0,     0,    82,    83,    84,     0,     0,    85,
     345,    87,   346,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,   347,   348,   101,   349,   103,     0,   104,
     350,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   351,   120,   121,   122,   123,   124,
     352,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,     0,   138,   139,   140,     0,   368,   142,
     354,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   355,   169,   170,   356,   172,
     173,   174,   175,   589,   176,   357,   178,   358,   180,   181,
     182,   183,   184,   185,   186,   359,   360,   189,   190,   191,
     192,   193,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   590,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   322,   323,
     324,   325,   326,   327,   328,   329,    33,    34,    35,    36,
      37,    38,    39,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,    52,    53,    54,    55,    56,
       0,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,   342,    70,     0,     0,     0,    71,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
     343,   344,    80,     0,     0,     0,    82,     0,     0,     0,
       0,    85,   345,    87,   346,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,   347,   348,   101,   349,   103,
       0,   104,   350,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   351,   120,   121,   122,
     123,   124,   352,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,     0,   138,   139,   140,     0,
     353,   142,   354,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   355,   169,   170,
     356,   172,   173,   174,   175,   639,   176,   357,   178,   358,
     180,   181,   182,   183,   184,   185,   186,   359,   360,   189,
     190,   191,   192,   193,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   640,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     322,   323,   324,   325,   326,   327,   328,   329,    33,    34,
      35,    36,    37,    38,    39,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,    52,    53,    54,
      55,    56,     0,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,   342,    70,     0,     0,     0,
      71,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,   343,   344,    80,     0,     0,     0,    82,     0,
       0,     0,     0,    85,   345,    87,   346,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   347,   348,   101,
     349,   103,     0,   104,   350,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   351,   120,
     121,   122,   123,   124,   352,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,     0,   138,   139,
     140,     0,   353,   142,   354,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   355,
     169,   170,   356,   172,   173,   174,   175,     0,   176,   357,
     178,   358,   180,   181,   182,   183,   184,   185,   186,   359,
     360,   189,   190,   191,   192,   193,   836,  1262,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   364,   365,    27,    28,   366,    30,    31,   367,
     837,    34,    35,    36,    37,    38,    39,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,    52,
      53,    54,    55,    56,     0,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,   342,    70,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,   343,   344,    80,     0,     0,     0,
      82,     0,     0,     0,     0,    85,   345,    87,   346,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   347,
     348,   101,   349,   103,     0,   104,   350,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     351,   120,   121,   122,   123,   124,   352,   838,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,     0,
     138,   139,   140,     0,   368,   142,   839,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   355,   169,   170,   356,   172,   173,   174,   175,     0,
     176,   357,   178,   358,   180,   181,   182,   183,   184,   185,
     186,   359,   360,   189,   190,   191,   192,   193,   836,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   364,   365,    27,    28,   366,    30,
      31,   367,   837,    34,    35,    36,    37,    38,    39,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,    52,    53,    54,    55,    56,     0,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,   342,
      70,     0,     0,     0,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,   343,   344,    80,     0,
       0,     0,    82,     0,     0,     0,     0,    85,   345,    87,
     346,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   347,   348,   101,   349,   103,     0,   104,   350,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   351,   120,   121,   122,   123,   124,   352,   838,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,     0,   138,   139,   140,     0,   368,   142,   839,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   355,   169,   170,   356,   172,   173,   174,
     175,     0,   176,   357,   178,   358,   180,   181,   182,   183,
     184,   185,   186,   359,   360,   189,   190,   191,   192,   193,
     836,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   364,   365,    27,    28,
     366,    30,    31,   367,    33,    34,    35,    36,    37,    38,
      39,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,    52,    53,    54,    55,    56,     0,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,   342,    70,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,   343,   344,
      80,     0,     0,     0,    82,     0,     0,     0,     0,    85,
     345,    87,   346,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,   347,   348,   101,   349,   103,     0,   104,
     350,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   351,   120,   121,   122,   123,   124,
     352,   838,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,     0,   138,   139,   140,     0,   368,   142,
     839,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   355,   169,   170,   356,   172,
     173,   174,   175,     0,   176,   357,   178,   358,   180,   181,
     182,   183,   184,   185,   186,   359,   360,   189,   190,   191,
     192,   193,   605,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   322,   323,   324,
     325,   326,   327,   328,   329,    33,    34,    35,    36,    37,
      38,    39,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,    52,    53,    54,    55,    56,     0,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,   342,    70,     0,     0,     0,    71,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,   343,
     344,    80,     0,     0,   606,    82,     0,     0,     0,     0,
      85,   345,    87,   346,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,   347,   348,   101,   349,   103,     0,
     104,   350,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   351,   120,   121,   122,   123,
     124,   352,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,     0,   138,   139,   140,     0,   353,
     142,   354,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   355,   169,   170,   356,
     172,   173,   174,   175,     0,   176,   357,   178,   358,   180,
     181,   182,   183,   184,   185,   186,   359,   360,   189,   190,
     191,   192,   193,   322,   323,   324,   325,   326,   327,   328,
     329,    33,    34,    35,    36,    37,    38,    39,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
      52,    53,    54,    55,    56,     0,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,   342,    70,
       0,     0,     0,    71,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,   343,   344,    80,     0,     0,
       0,    82,     0,     0,     0,     0,    85,   345,    87,   346,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     347,   348,   101,   349,   103,     0,   104,   350,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   351,   120,   121,   122,   123,   124,   352,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
       0,   138,   139,   140,     0,   353,   142,   354,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   355,   169,   170,   356,   172,   173,   174,   175,
       0,   176,   357,   178,   358,   180,   181,   182,   183,   184,
     185,   186,   359,   360,   189,   190,   191,   192,   193,    34,
      35,    36,    37,    38,    39,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,    52,    53,    54,
      55,    56,     0,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,   342,    70,     0,     0,     0,
      71,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,   343,   344,    80,     0,     0,     0,    82,     0,
       0,     0,     0,    85,   345,    87,   346,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   347,   348,   101,
       0,   103,     0,   104,     0,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   351,   120,
     121,   122,   123,   124,   352,     0,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,     0,   138,   139,
     140,     0,     0,   142,     0,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   355,
     169,   170,   356,   172,   173,   174,   175,     0,   176,   357,
     178,   358,   180,   181,   182,   183,   184,   185,   186,   359,
     360,   189,   190,   191,   192,   193,     0,  1363,     0,     0,
     968,   969,   970,   971,     0,   972,     0,     0,   973,     0,
       0,   974,   975,   976,   977,   978,   979,   980,   981,   982,
       0,     0,   983,   984,   985,  1366,     0,     0,   968,   969,
     970,   971,     0,   972,     0,     0,   973,     0,     0,   974,
     975,   976,   977,   978,   979,   980,   981,   982,     0,     0,
     983,   984,   985,  1386,     0,     0,   968,   969,   970,   971,
       0,   972,   317,     0,   973,   986,   987,   974,   975,   976,
     977,   978,   979,   980,   981,   982,     0,     0,   983,   984,
     985,  1398,     0,     0,   968,   969,   970,   971,     0,   972,
     317,     0,   973,   986,   987,   974,   975,   976,   977,   978,
     979,   980,   981,   982,     0,     0,   983,   984,   985,  1407,
       0,     0,   968,   969,   970,   971,     0,   972,   317,     0,
     973,   986,   987,   974,   975,   976,   977,   978,   979,   980,
     981,   982,     0,     0,   983,   984,   985,  1409,     0,     0,
     968,   969,   970,   971,     0,   972,   317,     0,   973,   986,
     987,   974,   975,   976,   977,   978,   979,   980,   981,   982,
       0,     0,   983,   984,   985,  1412,     0,     0,   968,   969,
     970,   971,     0,   972,   317,     0,   973,   986,   987,   974,
     975,   976,   977,   978,   979,   980,   981,   982,     0,     0,
     983,   984,   985,  1413,     0,     0,   968,   969,   970,   971,
       0,   972,   317,     0,   973,   986,   987,   974,   975,   976,
     977,   978,   979,   980,   981,   982,     0,     0,   983,   984,
     985,  1418,     0,     0,   968,   969,   970,   971,     0,   972,
     317,     0,   973,   986,   987,   974,   975,   976,   977,   978,
     979,   980,   981,   982,     0,     0,   983,   984,   985,  1421,
       0,     0,   968,   969,   970,   971,     0,   972,   317,     0,
     973,   986,   987,   974,   975,   976,   977,   978,   979,   980,
     981,   982,     0,     0,   983,   984,   985,  1424,     0,     0,
     968,   969,   970,   971,     0,   972,   317,     0,   973,   986,
     987,   974,   975,   976,   977,   978,   979,   980,   981,   982,
       0,     0,   983,   984,   985,  1426,     0,     0,   968,   969,
     970,   971,     0,   972,   317,     0,   973,   986,   987,   974,
     975,   976,   977,   978,   979,   980,   981,   982,     0,     0,
     983,   984,   985,  1428,     0,     0,   968,   969,   970,   971,
       0,   972,   317,     0,   973,   986,   987,   974,   975,   976,
     977,   978,   979,   980,   981,   982,     0,     0,   983,   984,
     985,  1511,     0,     0,   968,   969,   970,   971,     0,   972,
     317,     0,   973,   986,   987,   974,   975,   976,   977,   978,
     979,   980,   981,   982,     0,     0,   983,   984,   985,  1512,
       0,     0,   968,   969,   970,   971,     0,   972,   317,     0,
     973,   986,   987,   974,   975,   976,   977,   978,   979,   980,
     981,   982,     0,     0,   983,   984,   985,  1517,     0,     0,
     968,   969,   970,   971,     0,   972,   317,     0,   973,   986,
     987,   974,   975,   976,   977,   978,   979,   980,   981,   982,
       0,     0,   983,   984,   985,  1523,     0,     0,   968,   969,
     970,   971,     0,   972,   317,     0,   973,   986,   987,   974,
     975,   976,   977,   978,   979,   980,   981,   982,     0,     0,
     983,   984,   985,  1578,     0,     0,   968,   969,   970,   971,
       0,   972,   317,     0,   973,   986,   987,   974,   975,   976,
     977,   978,   979,   980,   981,   982,     0,     0,   983,   984,
     985,  1579,     0,     0,   968,   969,   970,   971,     0,   972,
     317,     0,   973,   986,   987,   974,   975,   976,   977,   978,
     979,   980,   981,   982,     0,     0,   983,   984,   985,  1582,
       0,     0,   968,   969,   970,   971,     0,   972,   317,     0,
     973,   986,   987,   974,   975,   976,   977,   978,   979,   980,
     981,   982,     0,     0,   983,   984,   985,  1583,     0,     0,
     968,   969,   970,   971,     0,   972,   317,     0,   973,   986,
     987,   974,   975,   976,   977,   978,   979,   980,   981,   982,
       0,     0,   983,   984,   985,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   317,     0,     0,   986,   987,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   317,     0,     0,   986,   987
};

static const yytype_int16 yycheck[] =
{
      21,   232,    10,   475,   412,   649,   941,   582,   239,   417,
     478,  1087,   420,  1150,   222,     8,   424,   882,   625,  1292,
     627,   648,  1064,   630,   301,   384,   315,   507,     8,   315,
      10,   479,   480,   481,   482,   315,  1328,   396,   397,   737,
     738,   301,   703,   704,   511,   512,   513,   307,   515,   516,
       3,     4,     5,   307,   307,   315,   475,   524,   301,    14,
     527,   315,   315,    33,   120,   532,   533,   534,   535,   536,
     537,   538,   539,   678,   541,   434,   703,   704,    59,   546,
     547,   548,   935,   550,   551,    12,    63,     9,   120,   959,
     557,   961,   559,   307,  1484,   562,     9,   271,   120,   273,
      59,   315,    40,   570,   571,   572,   573,   574,   575,   576,
     577,    51,   579,    10,     0,   307,   307,    34,    35,   301,
     301,   991,  1488,   315,   315,   307,   307,    48,    49,   123,
       9,  1001,   117,   315,   315,    19,  1006,  1330,  1008,   301,
    1010,    40,  1012,   120,  1014,   307,  1016,   243,  1018,   884,
      40,    33,  1022,   315,  1024,    11,    40,   117,    48,    49,
      32,    32,   307,    12,    33,    49,    41,   112,   105,    40,
     315,    33,   307,   127,   112,   301,   170,    49,    49,    50,
     315,   307,    53,    54,    55,    48,    49,    62,    50,   315,
      40,    40,    34,    35,    59,    34,    35,    48,    49,    48,
      49,    48,    49,    40,   301,  1140,   678,   942,   680,   836,
     307,   307,    49,   112,    70,   913,   129,   202,   315,  1609,
     628,   147,   230,   208,   209,   233,   833,   925,   149,    89,
      90,    91,    92,   173,   161,   180,   644,   102,   122,     9,
     938,  1607,   180,   224,   123,   730,   216,   727,   208,   209,
     230,   172,   123,   233,   180,   722,   312,   103,   314,   678,
     865,   680,    40,   145,   438,   224,  1558,   544,   442,   191,
     225,    41,   446,   447,   448,   172,   145,   451,   763,   568,
     312,   313,   568,  1153,   544,   122,   149,  1157,   568,   648,
     312,   313,  1145,   210,   211,   212,   149,  1490,  1491,  1492,
    1493,   544,     9,   159,   160,   565,    48,    49,   568,   172,
      32,   565,   565,   188,   568,   568,   158,    99,    40,   158,
     180,   172,   123,  1596,  1194,   172,   500,    49,    40,    19,
     504,    53,    54,    55,    41,   103,  1206,    49,   315,   316,
     317,   273,  1479,    23,   703,   704,   705,   706,   238,   302,
      40,   565,    40,    45,   568,   308,    48,    49,   311,   141,
     128,    41,   544,   544,   385,   297,   219,   220,   389,   170,
     241,   113,   393,   565,   565,   228,   568,   568,   399,   180,
    1041,   222,   544,   565,   565,   378,   568,   568,  1464,    44,
     411,    46,  1053,   865,   415,   416,    33,   238,   378,   392,
     872,   123,   874,   565,   384,    40,   568,   428,   429,   430,
     122,  1453,   392,    50,  1041,   274,   396,   397,   544,   412,
     565,   113,   274,   568,   417,  1123,  1053,   420,  1126,  1127,
     565,   424,   412,   568,   242,    30,   795,   417,   297,   565,
     420,    36,   568,  1141,   424,    19,   865,   544,   622,   301,
    1025,  1026,   445,   872,   434,   874,   936,     9,   632,   633,
     940,    33,    65,    66,    67,   445,   120,   121,   565,   274,
     491,   568,   831,   681,   265,    32,    11,   836,    50,   287,
      19,   286,   274,    40,   658,    40,  1130,  1357,    23,   297,
    1151,   296,    49,  1137,    49,  1156,    53,    54,    55,    34,
    1161,    53,    54,    55,  1165,   297,   297,    93,   274,  1379,
     918,   302,   303,    45,   507,  1122,    48,    49,   284,   241,
      33,   124,    19,  1599,  1151,  1395,   112,   507,    41,  1156,
     296,   297,   118,  1403,  1161,   162,   163,  1407,  1165,    47,
      48,    49,   716,   717,   718,   460,   461,   462,   463,   464,
     465,  1212,   467,   468,   469,   470,   471,   472,   473,   474,
      47,    48,    49,  1498,    68,    69,   123,   170,   273,   274,
     297,   123,    19,   300,   595,   178,   179,   180,   181,   182,
      40,   113,    65,    66,    67,  1212,   189,   190,   274,   610,
     295,   296,    52,   298,   177,  1293,   100,    65,  1242,    67,
    1465,   274,   185,    65,    66,    67,   114,   193,   194,   195,
      49,   297,   198,   199,   300,   301,   637,   638,  1086,  1484,
    1485,  1093,    33,   296,   297,    33,    22,   114,   177,   232,
      33,    40,  1080,   103,   104,   628,   185,    33,   812,    50,
      49,   124,    50,  1111,  1112,  1343,  1344,    50,   628,   274,
     135,   644,    22,  1120,  1121,    19,   124,   142,   679,   284,
     285,   272,   124,    33,   644,   177,   274,    19,   648,   274,
     281,   296,   297,   185,  1093,  1336,   850,   851,   852,   284,
     285,  1546,  1041,    33,  1328,   177,   860,   170,   296,   297,
     711,   296,   297,   185,  1053,   178,   179,   180,   181,   182,
      50,  1345,   170,   188,   189,   190,   189,   190,   170,  1336,
     178,   179,   180,   181,   182,    33,   178,   179,   180,   181,
     182,   189,   190,   703,   704,   705,   706,    33,    44,   903,
      46,   295,    50,    32,   727,    41,  1601,   301,   221,   732,
     161,    24,   163,   307,    27,    28,   229,   727,    31,   232,
      49,   315,   732,   221,   669,    33,   736,    49,  1456,   221,
      19,   229,   217,    25,   232,    48,    49,   229,  1466,    33,
     232,   226,    50,    86,    87,    19,    68,    69,    33,   242,
      42,   244,    33,    33,  1445,  1446,    50,    33,   251,   252,
      33,    19,  1151,    33,   257,    50,    33,  1156,    41,    50,
      50,    33,  1161,    33,    50,    19,  1165,   270,   271,    41,
      50,    41,    33,    50,    33,   795,  1477,    33,  1445,  1446,
      41,    33,    41,   135,   136,    41,   847,   848,    33,    41,
    1298,  1299,   115,   116,  1478,   148,    41,  1245,  1499,   168,
      33,    33,  1449,  1251,    19,   174,     9,  1508,    41,    41,
    1477,   831,  1496,  1212,  1429,  1430,   836,   308,   309,  1520,
    1268,  1035,   855,   183,  1038,  1039,  1040,   187,    49,   182,
    1044,  1532,  1499,   242,    65,   855,    67,    33,  1539,    49,
     249,  1508,    33,    30,     9,    41,   879,   200,   201,    36,
      41,   204,    65,  1520,    67,  1069,    33,  1197,    33,   879,
     242,   205,   206,   207,    41,  1532,    41,   249,  1208,  1209,
     223,     9,  1539,   130,  1558,   132,   133,  1217,   135,   136,
      40,  1221,  1566,  1223,  1224,   918,  1226,    19,    30,  1229,
    1230,  1575,   234,   124,    36,    40,   238,    40,   918,   932,
      53,    54,    55,   936,  1118,  1119,   232,   940,     3,     4,
       5,   124,   932,    59,  1529,   237,   936,   210,   211,   212,
     940,    89,    90,    91,    92,    33,   946,   129,   186,   187,
    1614,  1615,  1616,  1617,    48,    49,   153,  1336,   166,   170,
      34,    35,   154,  1627,   168,   169,   192,   178,   179,   180,
     181,   182,   168,   169,   118,   119,   155,   170,   189,   190,
     189,   190,   157,  1471,   165,   178,   179,   180,   181,   182,
     120,   121,    40,    13,    14,    15,    16,    17,    18,   137,
     138,    84,    85,    40,    24,    84,    85,   287,   288,  1437,
     282,   283,   242,  1441,   310,   311,   184,    37,   170,    97,
      98,   232,     3,     4,     5,     6,     7,     8,   221,   213,
     214,   140,   141,   175,   176,    40,   229,   254,   255,   232,
     187,  1041,   272,    40,   274,   275,   276,   277,   278,   279,
     280,   140,   141,  1053,   476,   477,   483,   484,    40,   289,
     290,   291,   292,   293,   294,    40,  1445,  1446,   485,   486,
      16,    17,    29,  1267,   304,   305,   306,  1603,  1604,   494,
     495,   705,   706,  1334,    49,    41,   106,   107,   108,   109,
     110,   111,    41,    41,    49,    33,     9,    33,  1477,    49,
     149,   156,    49,   134,   156,   135,   149,   149,  1136,    12,
     149,    21,    53,   123,    51,   103,    41,  1609,   104,    41,
    1499,  1162,  1150,    41,    41,  1166,    41,    41,    10,  1508,
     222,    59,   149,   134,    88,   222,  1136,    40,   239,    83,
     240,  1520,   196,    37,   123,    48,    49,   167,     9,  1190,
    1150,  1151,   128,  1532,  1195,  1196,  1156,   129,    10,  1200,
    1539,  1161,    10,   131,   147,  1165,  1207,   112,     9,    40,
      40,   151,  1213,    40,  1215,    40,    40,  1218,    33,    41,
     131,  1222,   210,    95,   123,    94,  1227,    23,   123,    33,
     228,    37,   228,  1234,   123,   188,   139,  1238,   233,   170,
     170,   112,   242,   254,   297,   245,   246,   247,   248,   242,
     250,   274,  1212,   253,   299,   242,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   297,   297,   267,   268,   269,
      41,     9,  1245,   191,    41,    41,    41,   222,  1251,     9,
     139,    50,   123,    94,  1438,  1245,  1440,   210,  1442,  1443,
     210,  1251,    91,   222,    33,  1268,    37,   197,    33,   283,
      37,   282,   170,   120,   251,   242,   266,   307,  1268,    43,
     310,   311,    43,   299,     9,   131,   129,   152,  1472,    41,
     149,    40,   142,   210,    40,    19,   149,    40,    21,    12,
     120,   233,    21,  1321,   129,   149,    10,   203,    41,   149,
      26,    33,  1330,   129,   112,   203,    21,   957,   242,   242,
      41,  1185,     6,   969,  1192,  1203,  1486,   308,   296,   303,
     309,  1321,   296,  1316,   297,   834,   199,   626,   629,   456,
    1330,   199,  1069,   860,   100,   302,  1336,  1378,   302,   242,
     631,  1042,   245,   246,   247,   248,   308,   250,   251,   459,
     253,   458,   311,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   314,  1085,   267,   268,   269,   504,  1431,   141,
     273,   274,   706,   435,  1242,   836,   390,   390,   396,   311,
     831,   434,   874,   872,  1093,   680,  1075,  1284,  1463,   750,
    1089,  1468,   295,   296,   621,   298,  1130,  1320,  1592,  1450,
    1594,    -1,    -1,    -1,   307,    -1,    -1,   310,   311,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1437,  1619,    -1,    -1,  1441,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1437,    -1,    -1,
      -1,  1441,    -1,    -1,    -1,  1445,  1446,    -1,    -1,    -1,
      -1,  1479,    -1,    -1,  1482,  1483,    -1,    -1,  1486,    -1,
      -1,    -1,  1490,  1491,  1492,  1493,    -1,    -1,  1509,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1477,    -1,  1479,
    1521,    -1,  1482,  1483,    -1,    -1,  1486,    -1,    -1,    -1,
    1490,  1491,  1492,  1493,    -1,    -1,    -1,    -1,    -1,  1499,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1508,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1520,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1571,    -1,  1532,    -1,    -1,    -1,    -1,    -1,    -1,  1539,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,    -1,    -1,    -1,
     106,   107,   108,   109,   110,   111,   112,    -1,    -1,    -1,
      -1,    -1,   118,   119,   120,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,    -1,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,    -1,   184,   185,
     186,    -1,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,    -1,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   245,   246,   247,   248,
      -1,   250,    -1,    -1,   253,    -1,    -1,   256,   257,   258,
     259,   260,   261,   262,   263,   264,    -1,    -1,   267,   268,
     269,    -1,    -1,    -1,    -1,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    -1,
      34,    35,    36,    -1,    38,    39,    40,    41,   307,    -1,
      -1,   310,   311,    -1,    -1,    -1,   312,    -1,   314,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    -1,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    -1,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,    -1,   118,   119,   120,    -1,    -1,   123,
     124,   125,   126,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,    -1,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,    -1,
     184,   185,   186,    -1,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,    -1,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,     9,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    24,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    -1,    34,    35,    36,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    -1,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,    -1,    -1,    -1,   106,   107,   108,   109,   110,
     111,   112,    -1,    -1,    -1,    -1,    -1,   118,   119,   120,
      -1,    -1,   123,   124,   125,   126,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,    -1,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,    -1,   184,   185,   186,    -1,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,    -1,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    24,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    -1,    34,    35,    36,    -1,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      -1,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,    -1,    -1,    -1,   106,   107,
     108,   109,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,
     118,   119,   120,    -1,    -1,   123,   124,   125,   126,    -1,
      -1,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
      -1,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,    -1,   184,   185,   186,    -1,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,    -1,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,     9,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    24,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    -1,    34,
      35,    36,    -1,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    -1,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,    -1,    -1,
      -1,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
      -1,    -1,    -1,   118,   119,   120,    -1,    -1,   123,   124,
     125,   126,    -1,    -1,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,    -1,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,    -1,   184,
     185,   186,    -1,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,    -1,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    24,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    -1,    34,    35,    36,    -1,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    -1,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,    -1,    -1,    -1,   106,   107,   108,   109,   110,   111,
     112,    -1,    -1,    -1,    -1,    -1,   118,   119,   120,    -1,
      -1,   123,   124,   125,   126,    -1,    -1,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,    -1,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,    -1,   184,   185,   186,    -1,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,    -1,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
       9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    24,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    -1,    34,    35,    36,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    -1,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,    -1,    -1,    -1,   106,   107,   108,
     109,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,   118,
     119,   120,    -1,    -1,   123,   124,   125,   126,    -1,    -1,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,    -1,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,    -1,   184,   185,   186,    -1,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,    -1,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,     9,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    -1,    34,    35,
      36,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,    -1,    -1,    -1,
     106,   107,   108,   109,   110,   111,   112,    -1,    -1,    -1,
      -1,    -1,   118,   119,   120,    -1,    -1,   123,   124,   125,
     126,    -1,    -1,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,    -1,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,    -1,   184,   185,
     186,    -1,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,    -1,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,     9,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      -1,    34,    35,    36,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    -1,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
      -1,    -1,    -1,   106,   107,   108,   109,   110,   111,   112,
      -1,    -1,    -1,    -1,    -1,   118,   119,   120,    -1,    -1,
     123,   124,   125,   126,    -1,    -1,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,    -1,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
      -1,   184,   185,   186,    -1,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
      -1,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,     9,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    24,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    -1,    34,    35,    36,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    -1,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,    -1,    -1,    -1,   106,   107,   108,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,    -1,   118,   119,
     120,    -1,    -1,   123,   124,   125,   126,    -1,    -1,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,    -1,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,    -1,   184,   185,   186,    -1,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,    -1,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    -1,    34,    35,    36,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    -1,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,    -1,    -1,    -1,   106,
     107,   108,   109,   110,   111,   112,    -1,    -1,    -1,    -1,
      -1,   118,   119,   120,    -1,    -1,   123,   124,   125,   126,
      -1,    -1,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,    -1,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,    -1,   184,   185,   186,
      -1,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,    -1,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    -1,
      34,    35,    36,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    -1,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    -1,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,    -1,   118,   119,   120,    -1,    -1,   123,
     124,   125,   126,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,    -1,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,    -1,
     184,   185,   186,    -1,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,    -1,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,     9,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    24,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    -1,    34,    35,    36,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    -1,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,    -1,    -1,    -1,   106,   107,   108,   109,   110,
     111,   112,    -1,    -1,    -1,    -1,    -1,   118,   119,   120,
      -1,    -1,   123,   124,   125,   126,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,    -1,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,    -1,   184,   185,   186,    -1,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,    -1,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    24,    -1,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      -1,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,    -1,    -1,    -1,   106,   107,
     108,   109,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,
     118,   119,   120,    -1,    -1,   123,   124,   125,   126,    -1,
      -1,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
      -1,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,    -1,   184,   185,   186,    -1,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,     9,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    -1,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    -1,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,    -1,   118,   119,   120,    -1,    -1,    -1,
     124,    -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,    -1,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,    -1,
     184,   185,   186,    -1,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,    -1,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    -1,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
      -1,    -1,    -1,   106,   107,   108,   109,   110,   111,   112,
      -1,    -1,    -1,    -1,    -1,   118,   119,   120,    -1,    -1,
      -1,   124,   125,   126,    -1,    -1,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,    -1,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
      -1,   184,   185,   186,    -1,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
      -1,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    -1,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,    -1,    -1,    -1,   106,   107,   108,   109,   110,   111,
     112,    -1,    -1,    -1,    -1,    -1,   118,   119,   120,    -1,
      -1,    -1,   124,   125,   126,    -1,    -1,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,    -1,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,    -1,   184,   185,   186,    -1,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,    11,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    -1,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,    -1,    -1,    -1,   106,   107,   108,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,    -1,   118,   119,
     120,    -1,    -1,    -1,   124,   125,   126,    -1,    -1,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,    -1,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,    -1,   184,   185,   186,    -1,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,    11,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      -1,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,    -1,    -1,    -1,   106,   107,
     108,   109,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,
     118,   119,   120,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
      -1,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,    -1,   184,   185,   186,    -1,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,    11,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,    -1,    -1,    -1,
     106,   107,   108,   109,   110,   111,   112,    -1,    -1,    -1,
      -1,    -1,   118,   119,   120,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,    -1,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,    -1,   184,   185,
     186,    -1,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,    -1,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    -1,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    -1,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,    -1,   118,   119,   120,    -1,    -1,    -1,
     124,    -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,    -1,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,    -1,
     184,   185,   186,    -1,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,    -1,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    -1,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,    -1,    -1,    -1,   106,   107,   108,   109,   110,   111,
     112,    -1,    -1,    -1,    -1,    -1,   118,   119,   120,    -1,
      -1,    -1,   124,    -1,    -1,    -1,    -1,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,    -1,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,    -1,   184,   185,   186,    -1,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,    -1,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    -1,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,    -1,    -1,    -1,   106,   107,   108,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,    -1,   118,   119,
     120,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,    -1,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,    -1,   184,   185,   186,    -1,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,    -1,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    -1,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,    -1,    -1,    -1,   106,   107,   108,
     109,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,   118,
     119,   120,    -1,    -1,   123,   124,    -1,    -1,    -1,    -1,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,    -1,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,    -1,   184,   185,   186,    -1,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,    -1,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    -1,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
      -1,    -1,    -1,   106,   107,   108,   109,   110,   111,   112,
      -1,    -1,    -1,    -1,    -1,   118,   119,   120,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,    -1,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
      -1,   184,   185,   186,    -1,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
      -1,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,    -1,    -1,    -1,
     106,   107,   108,   109,   110,   111,   112,    -1,    -1,    -1,
      -1,    -1,   118,   119,   120,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
      -1,   147,    -1,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,    -1,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,    -1,   184,   185,
     186,    -1,    -1,   189,    -1,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,    -1,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,    -1,   242,    -1,    -1,
     245,   246,   247,   248,    -1,   250,    -1,    -1,   253,    -1,
      -1,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      -1,    -1,   267,   268,   269,   242,    -1,    -1,   245,   246,
     247,   248,    -1,   250,    -1,    -1,   253,    -1,    -1,   256,
     257,   258,   259,   260,   261,   262,   263,   264,    -1,    -1,
     267,   268,   269,   242,    -1,    -1,   245,   246,   247,   248,
      -1,   250,   307,    -1,   253,   310,   311,   256,   257,   258,
     259,   260,   261,   262,   263,   264,    -1,    -1,   267,   268,
     269,   242,    -1,    -1,   245,   246,   247,   248,    -1,   250,
     307,    -1,   253,   310,   311,   256,   257,   258,   259,   260,
     261,   262,   263,   264,    -1,    -1,   267,   268,   269,   242,
      -1,    -1,   245,   246,   247,   248,    -1,   250,   307,    -1,
     253,   310,   311,   256,   257,   258,   259,   260,   261,   262,
     263,   264,    -1,    -1,   267,   268,   269,   242,    -1,    -1,
     245,   246,   247,   248,    -1,   250,   307,    -1,   253,   310,
     311,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      -1,    -1,   267,   268,   269,   242,    -1,    -1,   245,   246,
     247,   248,    -1,   250,   307,    -1,   253,   310,   311,   256,
     257,   258,   259,   260,   261,   262,   263,   264,    -1,    -1,
     267,   268,   269,   242,    -1,    -1,   245,   246,   247,   248,
      -1,   250,   307,    -1,   253,   310,   311,   256,   257,   258,
     259,   260,   261,   262,   263,   264,    -1,    -1,   267,   268,
     269,   242,    -1,    -1,   245,   246,   247,   248,    -1,   250,
     307,    -1,   253,   310,   311,   256,   257,   258,   259,   260,
     261,   262,   263,   264,    -1,    -1,   267,   268,   269,   242,
      -1,    -1,   245,   246,   247,   248,    -1,   250,   307,    -1,
     253,   310,   311,   256,   257,   258,   259,   260,   261,   262,
     263,   264,    -1,    -1,   267,   268,   269,   242,    -1,    -1,
     245,   246,   247,   248,    -1,   250,   307,    -1,   253,   310,
     311,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      -1,    -1,   267,   268,   269,   242,    -1,    -1,   245,   246,
     247,   248,    -1,   250,   307,    -1,   253,   310,   311,   256,
     257,   258,   259,   260,   261,   262,   263,   264,    -1,    -1,
     267,   268,   269,   242,    -1,    -1,   245,   246,   247,   248,
      -1,   250,   307,    -1,   253,   310,   311,   256,   257,   258,
     259,   260,   261,   262,   263,   264,    -1,    -1,   267,   268,
     269,   242,    -1,    -1,   245,   246,   247,   248,    -1,   250,
     307,    -1,   253,   310,   311,   256,   257,   258,   259,   260,
     261,   262,   263,   264,    -1,    -1,   267,   268,   269,   242,
      -1,    -1,   245,   246,   247,   248,    -1,   250,   307,    -1,
     253,   310,   311,   256,   257,   258,   259,   260,   261,   262,
     263,   264,    -1,    -1,   267,   268,   269,   242,    -1,    -1,
     245,   246,   247,   248,    -1,   250,   307,    -1,   253,   310,
     311,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      -1,    -1,   267,   268,   269,   242,    -1,    -1,   245,   246,
     247,   248,    -1,   250,   307,    -1,   253,   310,   311,   256,
     257,   258,   259,   260,   261,   262,   263,   264,    -1,    -1,
     267,   268,   269,   242,    -1,    -1,   245,   246,   247,   248,
      -1,   250,   307,    -1,   253,   310,   311,   256,   257,   258,
     259,   260,   261,   262,   263,   264,    -1,    -1,   267,   268,
     269,   242,    -1,    -1,   245,   246,   247,   248,    -1,   250,
     307,    -1,   253,   310,   311,   256,   257,   258,   259,   260,
     261,   262,   263,   264,    -1,    -1,   267,   268,   269,   242,
      -1,    -1,   245,   246,   247,   248,    -1,   250,   307,    -1,
     253,   310,   311,   256,   257,   258,   259,   260,   261,   262,
     263,   264,    -1,    -1,   267,   268,   269,   242,    -1,    -1,
     245,   246,   247,   248,    -1,   250,   307,    -1,   253,   310,
     311,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      -1,    -1,   267,   268,   269,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   307,    -1,    -1,   310,   311,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   307,    -1,    -1,   310,   311
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,   319,     9,    11,
      20,    24,    27,    28,    30,    32,    34,    35,    36,    38,
      39,    40,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   106,   107,   108,   109,   110,   111,   112,   118,   119,
     120,   123,   124,   125,   126,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   184,   185,
     186,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   453,   454,   455,   456,   457,   458,
     459,   464,   474,   477,   481,   482,   483,   484,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   514,   515,   516,   517,   519,
     520,   521,   522,   524,   525,   526,   527,   528,   530,   531,
     532,   543,   545,   547,   548,   549,   552,   553,   554,   555,
     565,   566,   567,   568,   569,   570,   571,   573,   575,   577,
     618,   619,   620,   621,   622,   623,   624,   627,   628,   629,
     630,   632,   639,   640,   644,   645,   646,   647,   651,   652,
     183,   187,   404,   405,   406,   407,   420,   423,   411,   412,
     413,   414,   420,   423,   415,   416,   417,   418,   420,   423,
     419,   420,   421,   422,   423,   424,   243,   307,   320,   321,
     343,     0,    56,    57,    58,    59,    60,    61,    62,    63,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,   101,   118,   119,   130,   132,   143,   144,   146,
     150,   164,   170,   188,   190,   215,   218,   225,   227,   235,
     236,   523,   651,   652,    56,    57,    60,    63,   188,   514,
     120,   121,   533,   127,   105,   544,   505,   103,   535,   496,
     496,    41,   454,    19,    40,    49,   122,   550,    40,    49,
      40,    40,    40,    49,   122,   556,    40,    40,    40,    49,
      19,    19,    19,    19,    19,    19,    19,    19,    19,    19,
      19,    49,     9,   625,   626,    49,    49,     9,   460,   461,
       9,   191,   465,   466,     9,   475,   476,   475,    40,    40,
      49,    68,    69,    19,    40,   550,    40,   448,    59,   102,
      59,   224,    59,    59,   224,   232,   237,    33,   129,   130,
     132,   133,   135,   136,   459,   464,   467,   468,   153,   154,
      13,    14,    15,    16,    17,    18,    24,    37,   106,   107,
     108,   109,   110,   111,   167,   192,    34,    35,   158,    11,
      70,   159,   160,    12,   161,   162,   163,   155,   166,   157,
     165,    49,   501,   505,    30,    36,   518,   514,   518,   514,
      40,   518,   455,   455,    40,    52,   184,   170,   177,   185,
     408,   409,   426,   428,   429,   430,   431,   433,   434,   435,
     438,   439,   440,   443,   444,   446,   453,   633,   405,   406,
     407,   177,   408,   409,   426,   428,   430,   431,   432,   444,
     453,   633,   412,   413,   414,   177,   425,   426,   428,   429,
     430,   431,   433,   434,   435,   438,   439,   444,   446,   447,
     453,   617,   633,   416,   417,   418,   421,   422,   424,   177,
     425,   426,   428,   430,   431,   432,   444,   447,   453,   633,
     322,   344,   534,   103,   104,   546,    29,   651,    41,    11,
      41,   572,   579,   632,   454,    49,   551,    41,   454,    41,
      62,   188,   575,   577,    41,    41,   123,   631,   651,   454,
      49,   557,   574,   579,   578,   580,   632,    41,   454,   454,
     523,    33,   216,   454,   454,   523,    33,   523,     9,    33,
     523,    33,   145,   145,   454,   454,   454,    49,    49,    11,
      41,   576,   580,   551,     9,    41,   450,   451,   149,   560,
     455,   156,   455,   651,   455,   455,   455,   455,   134,   135,
     468,   483,   484,   486,   486,   486,   486,   486,   486,   485,
     486,   486,   486,   486,   486,   486,   486,   486,    40,    49,
     241,   500,   520,   583,   586,   587,   588,   589,   590,   591,
     592,   593,   489,   489,   488,   490,   490,   490,   490,   491,
     491,   492,   492,   156,   149,   149,   149,    50,   454,   506,
     506,    21,    41,   455,   529,   149,   219,   220,   228,    41,
     529,    53,   123,   631,    65,    67,   124,   170,   178,   179,
     180,   181,   182,   189,   190,   232,   410,   186,   187,    51,
     427,   427,   427,   427,   427,   427,   427,   427,   177,   185,
      66,   427,   427,   427,   427,   427,   427,   427,   427,   427,
     177,   221,   229,   449,   427,   427,   427,   427,   427,   427,
     427,   427,   177,   177,   427,   427,   427,   427,   427,   427,
     427,   427,   427,   272,   281,   323,   308,   309,   346,   103,
     535,   104,   103,   128,   502,    33,    41,    50,    50,   454,
      50,    41,    41,    41,    41,    50,    50,   454,    41,    41,
      50,    50,    10,   626,   455,    50,    50,   560,   461,   560,
     523,   466,   560,   476,   455,   455,    41,    41,    50,   454,
     454,    33,    41,   523,    33,    41,    40,    64,   171,   190,
     561,   563,   564,   565,   632,   648,   650,    48,    49,   452,
     222,    59,   149,   222,   222,   238,   455,   469,   470,   471,
     134,   486,   583,   454,   590,    49,   205,   206,   207,   594,
      88,   616,   239,   585,   240,    83,    86,    87,   148,   182,
     200,   201,   204,   223,   600,   601,   602,   603,   604,   605,
     608,   613,   614,   615,   196,   595,   561,   561,   558,   564,
     558,    50,   454,    33,    41,   217,   226,   455,   455,   455,
      41,   173,   427,    37,   168,   169,   123,   582,     9,   631,
     168,   169,   118,   119,   135,   142,   188,   410,   168,   174,
     436,   651,   234,   238,   636,   652,   170,   180,   442,   582,
     170,   582,   600,    68,    69,   100,   410,   242,   244,   251,
     252,   257,   270,   271,   324,   325,   328,   329,   333,   334,
     335,   336,   337,   338,   341,   342,   345,   242,   245,   246,
     247,   248,   250,   253,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   267,   268,   269,   310,   311,   343,   347,
     348,   349,   350,   351,   352,   353,   356,   357,   361,   362,
     363,   364,   365,   370,   371,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   120,   121,    25,    42,   128,
     581,   632,    50,    50,   455,   129,   112,   462,    10,    10,
     131,   147,   478,   480,   151,    50,    50,   581,   560,   451,
     563,    40,    40,    40,    11,    23,    34,   562,   454,   454,
     455,   455,   455,    40,    40,   312,   314,   641,   651,    33,
     137,   138,   472,   469,    41,    50,    50,   583,    95,   210,
      94,   587,    93,   112,   118,   193,   194,   195,   198,   199,
     584,   597,   588,   131,    84,    85,    89,    90,    91,    92,
      84,    85,   651,   630,    89,    90,    91,    92,   180,   601,
     117,   208,   209,   596,    23,   559,    22,   455,   228,   228,
     123,   582,   523,    37,   139,   582,   170,   170,    33,   123,
     651,   120,   312,   313,   637,   638,   233,   448,   631,   188,
     582,   112,   441,   631,   441,   652,   282,   283,   273,   274,
     295,   296,   298,   330,   274,   286,   296,   330,   274,   284,
     285,   296,   297,   346,   274,   296,   297,   346,   242,   272,
     274,   275,   276,   277,   278,   279,   280,   289,   290,   291,
     292,   293,   294,   304,   305,   306,   242,   113,   452,   351,
     297,   254,   366,   367,   368,   299,   297,   300,   346,   273,
     297,   355,   274,   358,   242,   346,   265,   297,   302,   303,
     372,   274,   296,   297,   346,   297,   346,   274,   297,   346,
     346,   274,   297,   300,   301,   346,   274,   297,   346,   274,
     301,   346,   242,   287,   297,   287,   288,   346,   297,   346,
     535,   535,   542,    41,   455,     9,   191,   463,   455,   455,
     455,     9,   561,   180,   479,   480,   455,    23,    41,    41,
      41,    41,    41,   561,   649,    50,    50,   222,     9,   642,
     643,   642,   222,   470,   139,   473,   594,    50,   490,    94,
      97,    98,   487,   488,   596,   213,   214,   599,   599,   589,
     210,   123,    40,   112,   180,   607,   210,    91,    99,   141,
     488,   488,   197,   455,   455,   427,   427,   560,   582,   140,
     141,   582,   582,   175,   176,   437,    40,   452,   635,   636,
      33,    20,    30,    36,    56,    71,   230,   231,   394,   395,
     396,   397,   400,   401,   402,   514,   149,   172,   452,    37,
     170,   441,   582,    33,    37,   448,   283,   282,   326,   394,
     561,    53,    54,    55,   327,   251,   331,   332,   346,   561,
     346,   561,   454,   242,   561,   454,   242,    63,   120,   315,
     316,   317,   339,   120,   340,   340,   242,   454,   299,   255,
     367,   369,   346,   454,   454,   345,   242,   120,   312,   314,
     354,   454,   242,   249,   359,   360,   242,   359,   242,   346,
     454,   345,   345,   266,   373,   561,   454,   242,   454,   242,
     345,   454,   242,   242,   345,   454,   345,   345,   242,   345,
     454,   242,   345,   345,   242,   454,   242,   454,   242,    43,
      43,    31,   115,   116,   452,   531,   523,     9,   131,   523,
     129,     9,   129,   152,    41,   149,    33,    41,   455,   523,
      33,    41,    41,    40,   140,   141,   142,   210,   211,   212,
     598,   598,   180,   607,   582,    40,   112,   610,   210,   488,
     488,   158,    10,   172,   445,    41,   450,   149,   634,   233,
     638,   514,    19,    19,    40,    40,    12,   452,   635,   401,
      30,    36,    30,    36,   403,   518,   561,   582,   582,   149,
     172,   452,   120,   312,   313,   274,   284,   285,   296,   297,
     346,   242,   242,   120,   454,   346,   242,   242,   274,   284,
     296,   297,   346,   242,   346,   242,   346,   535,   535,   533,
     523,   455,   149,   455,   523,   455,   455,   561,   561,   149,
     560,   643,   642,   582,   606,   606,   202,   596,   611,   630,
     582,   609,   609,   488,   455,    41,   561,   452,   394,   514,
     514,   398,   522,   630,   630,   395,   634,   401,   401,   401,
     401,    21,   172,   452,   441,   561,   561,   454,   242,   242,
     561,   454,   242,   242,    44,    46,   536,    44,    46,   537,
     535,   561,   129,   561,    10,    41,    33,    41,    41,   630,
     203,    33,    41,   161,   163,   612,   452,   635,    41,    33,
     452,   454,   172,   452,   538,   540,   539,   541,    26,   129,
     455,   455,   607,   596,   630,   610,   610,   634,   399,   520,
     522,    22,    45,   113,   452,    47,   114,   452,    45,   113,
     452,    47,   114,   452,   455,   203,   452,    41
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;
#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 8:
#line 760 "../src/parser/XQParser.y"
    {
    SequenceType *optionalString =
      WRAP((yylsp[(1) - (1)]), new (MEMMGR) SequenceType(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                         AnyAtomicType::fgDT_ANYATOMICTYPE,
                                         SequenceType::QUESTION_MARK, MEMMGR));

    XQGlobalVariable *nameVar =
      WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, optionalString,
                                             WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQSequence(MEMMGR)), MEMMGR, /*isParam*/true));
    nameVar->setVariableURI(XQillaFunction::XMLChFunctionURI);
    nameVar->setVariableLocalName(var_name);

    QP->_query->addVariable(nameVar);

    ASTNode *nameVarRef1 = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQVariable(XQillaFunction::XMLChFunctionURI, var_name, MEMMGR));
    XQCallTemplate *call = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate(nameVarRef1, 0, MEMMGR));

    ASTNode *ci = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
    ASTNode *apply = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(ci, 0, 0, MEMMGR));

    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    args.push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQVariable(XQillaFunction::XMLChFunctionURI, var_name, MEMMGR)));
    FunctionExists *exists = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionExists(args, MEMMGR));

    QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQIf(exists, call, apply, MEMMGR)));
  ;}
    break;

  case 9:
#line 790 "../src/parser/XQParser.y"
    {
  ;}
    break;

  case 10:
#line 793 "../src/parser/XQParser.y"
    {
    // TBD Check for xsl:version attr - jpcs
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();

    VectorOfASTNodes *pattern = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    pattern->push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::SELF, nt, MEMMGR)));

    XQUserFunction::ModeList *modelist = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    modelist->push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));

    XQUserFunction *func = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, pattern, 0, (yyvsp[(1) - (1)].astNode), 0, MEMMGR));
    func->setModeList(modelist);

    QP->_query->addFunction(func);
  ;}
    break;

  case 12:
#line 816 "../src/parser/XQParser.y"
    {
    // TBD Check the value - jpcs
  ;}
    break;

  case 13:
#line 820 "../src/parser/XQParser.y"
    {
    // TBD implement exclude-result-prefixes - jpcs
  ;}
    break;

  case 21:
#line 838 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (4)].functDecl)->getName() == 0 && (yyvsp[(1) - (4)].functDecl)->getPattern() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:template declaration does not have either a {}name or {}match attribute, or both [err:XTSE0500]");
    }

    if((yyvsp[(1) - (4)].functDecl)->getPattern() != 0 && (yyvsp[(1) - (4)].functDecl)->getModeList() == 0) {
      XQUserFunction::ModeList *modelist = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
      modelist->push_back(WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
      (yyvsp[(1) - (4)].functDecl)->setModeList(modelist);
    }

    (yyvsp[(1) - (4)].functDecl)->setArgumentSpecs((yyvsp[(2) - (4)].argSpecs));
    (yyvsp[(1) - (4)].functDecl)->setFunctionBody((yyvsp[(3) - (4)].parenExpr));
    QP->_query->addFunction((yyvsp[(1) - (4)].functDecl));
  ;}
    break;

  case 22:
#line 857 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, 0, MEMMGR));
  ;}
    break;

  case 23:
#line 861 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setPattern((yyvsp[(3) - (3)].itemList));
  ;}
    break;

  case 24:
#line 866 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  ;}
    break;

  case 25:
#line 873 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    // TBD priority - jpcs
  ;}
    break;

  case 26:
#line 878 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setModeList((yyvsp[(3) - (3)].modeList));
  ;}
    break;

  case 27:
#line 883 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  ;}
    break;

  case 28:
#line 891 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
  ;}
    break;

  case 29:
#line 895 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(uri, name)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  ;}
    break;

  case 30:
#line 901 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  ;}
    break;

  case 31:
#line 906 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  ;}
    break;

  case 35:
#line 916 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (4)].functDecl)->getName() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:function declaration does not have a {}name attribute");
    }

    (yyvsp[(1) - (4)].functDecl)->setArgumentSpecs((yyvsp[(2) - (4)].argSpecs));
    (yyvsp[(1) - (4)].functDecl)->setFunctionBody((yyvsp[(3) - (4)].parenExpr));
    QP->_query->addFunction((yyvsp[(1) - (4)].functDecl));
  ;}
    break;

  case 36:
#line 929 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, false, true, MEMMGR));
  ;}
    break;

  case 37:
#line 933 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  ;}
    break;

  case 38:
#line 940 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  ;}
    break;

  case 39:
#line 945 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD override - jpcs
  ;}
    break;

  case 40:
#line 953 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
  ;}
    break;

  case 41:
#line 957 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (2)].argSpecs);
    (yyval.argSpecs)->push_back((yyvsp[(2) - (2)].argSpec));
  ;}
    break;

  case 42:
#line 965 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);

    if((yyval.argSpec)->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:param instruction does not have a {}name attribute");
    }

    if((yyval.argSpec)->getType() == 0) {
      (yyval.argSpec)->setType(WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR)));
    }

    // TBD default parameter values - jpcs

/*     if(!$2->getChildren().empty()) { */
/*       if($$->value != 0) { */
/*         yyerror(@1, "The xsl:with-param instruction has both a select attribute and a sequence constructor [err:XTSE0870]"); */
/*       } */
/*       $$->value = $2; */
/*     } */
/*     else if($$->value == 0) { */
/*       yyerror(@1, "The xsl:with-param instruction has neither a select attribute nor a sequence constructor [err:XTSE0870]"); */
/*     } */
  ;}
    break;

  case 43:
#line 992 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::ArgumentSpec(0, 0, MEMMGR));
  ;}
    break;

  case 44:
#line 996 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.argSpec)->setURI(uri);
    (yyval.argSpec)->setName(name);
  ;}
    break;

  case 45:
#line 1003 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    // TBD default parameter values - jpcs
/*     $$->value = PRESERVE_NS(@2, $3); */
  ;}
    break;

  case 46:
#line 1009 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    (yyval.argSpec)->setType((yyvsp[(3) - (3)].sequenceType));
  ;}
    break;

  case 47:
#line 1014 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD required - jpcs
  ;}
    break;

  case 48:
#line 1019 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD tunnel parameters - jpcs
  ;}
    break;

  case 49:
#line 1028 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].globalVar)->isRequired()) {
      if((yyvsp[(1) - (3)].globalVar)->getVariableExpr() != 0 || !(yyvsp[(2) - (3)].parenExpr)->getChildren().empty()) {
        yyerror((yylsp[(1) - (3)]), "A required xsl:param declaration must be empty and must not specify a {}select attribute");
      }
    }
    else {
      (yyvsp[(1) - (3)].globalVar)->setVariableExpr(XSLT_VARIABLE_VALUE((yylsp[(1) - (3)]), (ASTNode*)(yyvsp[(1) - (3)].globalVar)->getVariableExpr(), (yyvsp[(2) - (3)].parenExpr), (SequenceType*)(yyvsp[(1) - (3)].globalVar)->getSequenceType()));

      if((yyvsp[(1) - (3)].globalVar)->getVariableExpr() == 0) {
        yyerror((yylsp[(1) - (3)]), "The xsl:param declaration has both a select attribute and a sequence constructor [err:XTSE0620]");
      }
    }

    if((yyvsp[(1) - (3)].globalVar)->getVariableLocalName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:param declaration does not have a {}name attribute");
    }

    QP->_query->addVariable((yyvsp[(1) - (3)].globalVar));
  ;}
    break;

  case 50:
#line 1052 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR, /*isParam*/true));
  ;}
    break;

  case 51:
#line 1056 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  ;}
    break;

  case 52:
#line 1063 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  ;}
    break;

  case 53:
#line 1068 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  ;}
    break;

  case 54:
#line 1073 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    (yyval.globalVar)->setRequired((yyvsp[(2) - (2)].boolean));
  ;}
    break;

  case 55:
#line 1078 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    if((yyvsp[(2) - (2)].boolean)) {
      yyerror((yylsp[(2) - (2)]), "An xsl:param declaration cannot have a {}tunnel attribute with a value of \"yes\"");
    }
  ;}
    break;

  case 56:
#line 1089 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(XSLT_VARIABLE_VALUE((yylsp[(1) - (3)]), (ASTNode*)(yyvsp[(1) - (3)].globalVar)->getVariableExpr(), (yyvsp[(2) - (3)].parenExpr), (SequenceType*)(yyvsp[(1) - (3)].globalVar)->getSequenceType()));
    (yyvsp[(1) - (3)].globalVar)->setSequenceType(0);

    if((yyvsp[(1) - (3)].globalVar)->getVariableExpr() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:variable declaration has both a select attribute and a sequence constructor [err:XTSE0620]");
    }

    if((yyvsp[(1) - (3)].globalVar)->getVariableLocalName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:variable declaration does not have a {}name attribute");
    }

    QP->_query->addVariable((yyvsp[(1) - (3)].globalVar));
  ;}
    break;

  case 57:
#line 1107 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR));
  ;}
    break;

  case 58:
#line 1111 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  ;}
    break;

  case 59:
#line 1118 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  ;}
    break;

  case 60:
#line 1123 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  ;}
    break;

  case 61:
#line 1131 "../src/parser/XQParser.y"
    {
    // TBD Add the output to the static context - jpcs
  ;}
    break;

  case 62:
#line 1156 "../src/parser/XQParser.y"
    {
  ;}
    break;

  case 63:
#line 1159 "../src/parser/XQParser.y"
    {
  ;}
    break;

  case 64:
#line 1162 "../src/parser/XQParser.y"
    {
  ;}
    break;

  case 65:
#line 1165 "../src/parser/XQParser.y"
    {
  ;}
    break;

  case 66:
#line 1168 "../src/parser/XQParser.y"
    {
  ;}
    break;

  case 67:
#line 1171 "../src/parser/XQParser.y"
    {
  ;}
    break;

  case 68:
#line 1174 "../src/parser/XQParser.y"
    {
  ;}
    break;

  case 69:
#line 1177 "../src/parser/XQParser.y"
    {
  ;}
    break;

  case 70:
#line 1180 "../src/parser/XQParser.y"
    {
  ;}
    break;

  case 71:
#line 1183 "../src/parser/XQParser.y"
    {
  ;}
    break;

  case 72:
#line 1186 "../src/parser/XQParser.y"
    {
  ;}
    break;

  case 73:
#line 1189 "../src/parser/XQParser.y"
    {
  ;}
    break;

  case 74:
#line 1192 "../src/parser/XQParser.y"
    {
  ;}
    break;

  case 75:
#line 1195 "../src/parser/XQParser.y"
    {
  ;}
    break;

  case 76:
#line 1198 "../src/parser/XQParser.y"
    {
  ;}
    break;

  case 77:
#line 1201 "../src/parser/XQParser.y"
    {
  ;}
    break;

  case 78:
#line 1204 "../src/parser/XQParser.y"
    {
  ;}
    break;

  case 79:
#line 1207 "../src/parser/XQParser.y"
    {
  ;}
    break;

  case 84:
#line 1217 "../src/parser/XQParser.y"
    {
//     $$ = $1;
    const XMLCh *p = (yyvsp[(1) - (1)].str);
    while(*p && *p != ':') ++p;
    if(*p == 0) {
      yyerror((yylsp[(1) - (1)]), "The method for the xsl:output declaration does not have a prefix");
    }
  ;}
    break;

  case 85:
#line 1229 "../src/parser/XQParser.y"
    {
  ;}
    break;

  case 86:
#line 1232 "../src/parser/XQParser.y"
    {
  ;}
    break;

  case 88:
#line 1240 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (1)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, 0, &loc);
  ;}
    break;

  case 89:
#line 1245 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (2)].str), 0, &loc);
  ;}
    break;

  case 90:
#line 1250 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (2)].str));

    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, &schemaLoc, &loc);
  ;}
    break;

  case 91:
#line 1258 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(3) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (3)].str), &schemaLoc, &loc);
  ;}
    break;

  case 92:
#line 1266 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (3)].str), &schemaLoc, &loc);
  ;}
    break;

  case 93:
#line 1277 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(3) - (4)].parenExpr)->getChildren();

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].itemList), children, MEMMGR));
  ;}
    break;

  case 94:
#line 1287 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  ;}
    break;

  case 95:
#line 1291 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);

    ASTNode *attrItem = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
    (yyval.itemList)->push_back(attrItem);
  ;}
    break;

  case 96:
#line 1298 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->insert((yyval.itemList)->begin(), (yyvsp[(2) - (2)].astNode));
  ;}
    break;

  case 97:
#line 1307 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  ;}
    break;

  case 98:
#line 1311 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].astNode)));
  ;}
    break;

  case 99:
#line 1316 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  ;}
    break;

  case 100:
#line 1326 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  ;}
    break;

  case 101:
#line 1330 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (2)].astNode), MEMMGR)));
  ;}
    break;

  case 102:
#line 1335 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  ;}
    break;

  case 103:
#line 1340 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  ;}
    break;

  case 122:
#line 1369 "../src/parser/XQParser.y"
    {
    XQTextConstructor *text = (XQTextConstructor*)(yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = text;

    if(!(yyvsp[(2) - (3)].parenExpr)->getChildren().empty()) {
      if(text->getValue() != 0) {
        yyerror((yylsp[(1) - (3)]), "The xsl:value-of instruction has both a select attribute and a sequence constructor [err:XTSE0870]");
      }
      text->setValue((yyvsp[(2) - (3)].parenExpr));
    }
    else if(text->getValue() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:value-of instruction has neither a select attribute nor a sequence constructor [err:XTSE0870]");
    }
  ;}
    break;

  case 123:
#line 1387 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(0, MEMMGR));
  ;}
    break;

  case 124:
#line 1391 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQTextConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  ;}
    break;

  case 125:
#line 1396 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQTextConstructor*)$$)->setValue(PRESERVE_NS(@2, $3)); */
  ;}
    break;

  case 126:
#line 1405 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (3)].astNode), MEMMGR));
  ;}
    break;

  case 129:
#line 1414 "../src/parser/XQParser.y"
    {
    // TBD xsl:sort - jpcs
    XQApplyTemplates *apply = (XQApplyTemplates*)(yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = apply;

    apply->setArguments((yyvsp[(2) - (3)].templateArgs));

    if(apply->getExpression() == 0) {
      NodeTest *nt = new (MEMMGR) NodeTest();
      nt->setTypeWildcard();
      nt->setNameWildcard();
      nt->setNamespaceWildcard();

      apply->setExpression(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQStep(XQStep::CHILD, nt, MEMMGR)));
    }
  ;}
    break;

  case 130:
#line 1434 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(0, 0, 0, MEMMGR));
  ;}
    break;

  case 131:
#line 1438 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  ;}
    break;

  case 132:
#line 1443 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setMode((yyvsp[(3) - (3)].mode));
  ;}
    break;

  case 133:
#line 1451 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].str));
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(uri, name));
  ;}
    break;

  case 134:
#line 1456 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  ;}
    break;

  case 135:
#line 1460 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  ;}
    break;

  case 136:
#line 1467 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  ;}
    break;

  case 137:
#line 1471 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  ;}
    break;

  case 138:
#line 1479 "../src/parser/XQParser.y"
    {
    XQCallTemplate *call = (XQCallTemplate*)(yyvsp[(1) - (3)].astNode);
    call->setArguments((yyvsp[(2) - (3)].templateArgs));
    (yyval.astNode) = call;

    if(call->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:call-template instruction does not have a {}name attribute");
    }
  ;}
    break;

  case 139:
#line 1492 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate((const XMLCh*)0, 0, MEMMGR));
  ;}
    break;

  case 140:
#line 1496 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    ((XQCallTemplate*)(yyval.astNode))->setURI(uri);
    ((XQCallTemplate*)(yyval.astNode))->setName(name);
  ;}
    break;

  case 141:
#line 1506 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  ;}
    break;

  case 142:
#line 1510 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  ;}
    break;

  case 143:
#line 1518 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);

    if((yyval.templateArg)->name == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:with-param instruction does not have a {}name attribute");
    }

    (yyvsp[(1) - (3)].templateArg)->value = XSLT_VARIABLE_VALUE((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].templateArg)->value, (yyvsp[(2) - (3)].parenExpr), (yyvsp[(1) - (3)].templateArg)->seqType);
    (yyvsp[(1) - (3)].templateArg)->seqType = 0;

    if((yyvsp[(1) - (3)].templateArg)->value == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:with-param instruction has both a select attribute and a sequence constructor [err:XTSE0870]");
    }
  ;}
    break;

  case 144:
#line 1536 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTemplateArgument(0, 0, MEMMGR));
  ;}
    break;

  case 145:
#line 1540 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.templateArg)->uri = uri;
    (yyval.templateArg)->name = name;
  ;}
    break;

  case 146:
#line 1547 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->value = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  ;}
    break;

  case 147:
#line 1552 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->seqType = (yyvsp[(3) - (3)].sequenceType);
  ;}
    break;

  case 148:
#line 1557 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    // TBD tunnel parameters - jpcs
  ;}
    break;

  case 149:
#line 1565 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  ;}
    break;

  case 150:
#line 1571 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  ;}
    break;

  case 151:
#line 1579 "../src/parser/XQParser.y"
    {
    ASTNode *empty = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf((yyvsp[(1) - (3)].astNode), (yyvsp[(2) - (3)].parenExpr), empty, MEMMGR));
  ;}
    break;

  case 152:
#line 1587 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  ;}
    break;

  case 153:
#line 1594 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(2) - (4)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = (yyvsp[(2) - (4)].astNode);
  ;}
    break;

  case 154:
#line 1608 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  ;}
    break;

  case 155:
#line 1612 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (2)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(2) - (2)].astNode));

    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  ;}
    break;

  case 156:
#line 1626 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (3)].astNode);
    iff->setWhenTrue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
  ;}
    break;

  case 157:
#line 1635 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)), 0, 0, MEMMGR));
  ;}
    break;

  case 158:
#line 1642 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  ;}
    break;

  case 159:
#line 1646 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  ;}
    break;

  case 160:
#line 1653 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs

    XQAnalyzeString *as = (XQAnalyzeString*)(yyval.astNode);
    (yyval.astNode) = (yyvsp[(1) - (4)].astNode);

    if(as->getExpression() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:analyze-string instruction does not have a {}select attribute");
    }

    if(as->getRegex() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:analyze-string instruction does not have a {}regex attribute");
    }

    if((yyvsp[(2) - (4)].astNode) == 0) {
      if((yyvsp[(3) - (4)].astNode) == 0) {
        yyerror((yylsp[(1) - (4)]), "The xsl:analyze-string instruction doesn't contain an xsl:matching-substring or xsl:non-matching-substring child [err:XTSE1130]");
      }

      as->setMatch(WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQSequence(MEMMGR)));
    }
    else {
      as->setMatch((yyvsp[(2) - (4)].astNode));
    }
    if((yyvsp[(3) - (4)].astNode) == 0) {
      as->setNonMatch(WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQSequence(MEMMGR)));
    }
    else {
      as->setNonMatch((yyvsp[(3) - (4)].astNode));
    }
  ;}
    break;

  case 161:
#line 1688 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQAnalyzeString(MEMMGR));
  ;}
    break;

  case 162:
#line 1692 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQAnalyzeString*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  ;}
    break;

  case 163:
#line 1697 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setRegex(PRESERVE_NS((yylsp[(2) - (3)]), content));
  ;}
    break;

  case 164:
#line 1703 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setFlags(PRESERVE_NS((yylsp[(2) - (3)]), content));
  ;}
    break;

  case 165:
#line 1712 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  ;}
    break;

  case 166:
#line 1716 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  ;}
    break;

  case 167:
#line 1723 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  ;}
    break;

  case 168:
#line 1727 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  ;}
    break;

  case 169:
#line 1734 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (4)].letTuple)->setExpression(XSLT_VARIABLE_VALUE((yylsp[(1) - (4)]), (yyvsp[(1) - (4)].letTuple)->getExpression(), (yyvsp[(2) - (4)].parenExpr), (yyvsp[(1) - (4)].letTuple)->seqType));
    (yyvsp[(1) - (4)].letTuple)->seqType = 0;

    if((yyvsp[(1) - (4)].letTuple)->getExpression() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:variable instruction has both a select attribute and a sequence constructor [err:XTSE0620]");
    }

    if((yyvsp[(1) - (4)].letTuple)->getVarName() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:variable instruction does not have a {}name attribute");
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQReturn((yyvsp[(1) - (4)].letTuple), (yyvsp[(4) - (4)].parenExpr), MEMMGR));
  ;}
    break;

  case 170:
#line 1752 "../src/parser/XQParser.y"
    {
    (yyval.letTuple) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) LetTuple(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ContextTuple(MEMMGR)), 0, 0, MEMMGR));
  ;}
    break;

  case 171:
#line 1756 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].letTuple)->setVarURI(uri);
    (yyvsp[(1) - (2)].letTuple)->setVarName(name);
    (yyval.letTuple) = (yyvsp[(1) - (2)].letTuple);
  ;}
    break;

  case 172:
#line 1763 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->setExpression((yyvsp[(3) - (3)].astNode));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  ;}
    break;

  case 173:
#line 1768 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->seqType = (yyvsp[(3) - (3)].sequenceType);
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  ;}
    break;

  case 174:
#line 1776 "../src/parser/XQParser.y"
    {
    XQCommentConstructor *comment = (XQCommentConstructor*)(yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = comment;

    if(!(yyvsp[(2) - (3)].parenExpr)->getChildren().empty()) {
      if(comment->getValue() != 0) {
        yyerror((yylsp[(1) - (3)]), "The xsl:comment instruction has both a select attribute and a sequence constructor [err:XTSE0940]");
      }
      comment->setValue((yyvsp[(2) - (3)].parenExpr));
    }
    else if(comment->getValue() == 0) {
      comment->setValue(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR)));
    }
  ;}
    break;

  case 175:
#line 1794 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(0, MEMMGR, /*xslt*/true));
  ;}
    break;

  case 176:
#line 1798 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCommentConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  ;}
    break;

  case 177:
#line 1806 "../src/parser/XQParser.y"
    {
    XQPIConstructor *pi = (XQPIConstructor*)(yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = pi;

    if(pi->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:processing-instruction instruction does not have a {}name attribute");
    }

    if(!(yyvsp[(2) - (3)].parenExpr)->getChildren().empty()) {
      if(pi->getValue() != 0) {
        yyerror((yylsp[(1) - (3)]), "The xsl:processing-instruction instruction has both a select attribute and a sequence constructor [err:XTSE0880]");
      }
      pi->setValue((yyvsp[(2) - (3)].parenExpr));
    }
    else if(pi->getValue() == 0) {
      pi->setValue(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR)));
    }
  ;}
    break;

  case 178:
#line 1828 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPIConstructor(0, 0, MEMMGR, /*xslt*/true));
  ;}
    break;

  case 179:
#line 1832 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQPIConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  ;}
    break;

  case 180:
#line 1839 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQPIConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  ;}
    break;

  case 181:
#line 1847 "../src/parser/XQParser.y"
    {
    XQDocumentConstructor *doc = (XQDocumentConstructor*)(yyvsp[(1) - (3)].astNode);
    doc->setValue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = doc;
  ;}
    break;

  case 182:
#line 1856 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentConstructor(0, MEMMGR));
  ;}
    break;

  case 183:
#line 1864 "../src/parser/XQParser.y"
    {
    XQAttributeConstructor *attr = (XQAttributeConstructor*)(yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = attr;

    if(attr->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:attribute instruction does not have a {}name attribute");
    }

    if(attr->namespaceExpr != 0) {
      // Use fn:QName() to assign the correct URI
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back(attr->namespaceExpr);
      args.push_back(const_cast<ASTNode*>(attr->getName()));
      FunctionQName *name = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FunctionQName(args, MEMMGR));
      attr->setName(name);
      attr->namespaceExpr = 0;
    }

    if(!(yyvsp[(2) - (3)].parenExpr)->getChildren().empty()) {
      if(attr->getChildren() != 0 && !attr->getChildren()->empty()) {
        yyerror((yylsp[(1) - (3)]), "The xsl:attribute instruction has both a select attribute and a sequence constructor [err:XTSE0840]");
      }

      VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
      *children = (yyvsp[(2) - (3)].parenExpr)->getChildren();
      attr->setChildren(children);
    }
    else if(attr->getChildren() == 0) {
      VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
      children->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR)));
      attr->setChildren(children);
    }
  ;}
    break;

  case 184:
#line 1901 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAttributeConstructor(0, 0, MEMMGR));
  ;}
    break;

  case 185:
#line 1905 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  ;}
    break;

  case 186:
#line 1912 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  ;}
    break;

  case 187:
#line 1919 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQAttributeConstructor*)(yyval.astNode))->setChildren(children);
  ;}
    break;

  case 188:
#line 1928 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQAttributeConstructor*)$$)->setChildren(children); */
  ;}
    break;

  case 189:
#line 1937 "../src/parser/XQParser.y"
    {
    XQNamespaceConstructor *ns = (XQNamespaceConstructor*)(yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = ns;

    if(ns->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:namespace instruction does not have a {}name attribute");
    }

    if(!(yyvsp[(2) - (3)].parenExpr)->getChildren().empty()) {
      if(ns->getChildren() != 0 && !ns->getChildren()->empty()) {
        yyerror((yylsp[(1) - (3)]), "The xsl:namespace instruction has both a select attribute and a sequence constructor [err:XTSE0840]");
      }

      VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
      *children = (yyvsp[(2) - (3)].parenExpr)->getChildren();
      ns->setChildren(children);
    }
    else if(ns->getChildren() == 0) {
      VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
      children->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR)));
      ns->setChildren(children);
    }
  ;}
    break;

  case 190:
#line 1964 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQNamespaceConstructor(0, 0, MEMMGR));
  ;}
    break;

  case 191:
#line 1968 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQNamespaceConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  ;}
    break;

  case 192:
#line 1975 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQNamespaceConstructor*)(yyval.astNode))->setChildren(children);
  ;}
    break;

  case 193:
#line 1987 "../src/parser/XQParser.y"
    {
    XQElementConstructor *elem = (XQElementConstructor*)(yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = elem;

    if(elem->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:element instruction does not have a {}name attribute");
    }

    if(elem->namespaceExpr != 0) {
      // Use fn:QName() to assign the correct URI
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back(elem->namespaceExpr);
      args.push_back(const_cast<ASTNode*>(elem->getName()));
      FunctionQName *name = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FunctionQName(args, MEMMGR));
      elem->setName(name);
      elem->namespaceExpr = 0;
    }

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(2) - (3)].parenExpr)->getChildren();
    elem->setChildren(children);
  ;}
    break;

  case 194:
#line 2013 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQElementConstructor(0, 0, 0, MEMMGR));
  ;}
    break;

  case 195:
#line 2017 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  ;}
    break;

  case 196:
#line 2024 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  ;}
    break;

  case 197:
#line 2034 "../src/parser/XQParser.y"
    {
    XQCopyOf *as = (XQCopyOf*)(yyval.astNode);
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);

    if(as->getExpression() == 0) {
      yyerror((yylsp[(1) - (2)]), "The xsl:copy-of instruction does not have a {}select attribute");
    }
  ;}
    break;

  case 198:
#line 2046 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopyOf(MEMMGR));
  ;}
    break;

  case 199:
#line 2050 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  ;}
    break;

  case 200:
#line 2055 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  ;}
    break;

  case 201:
#line 2064 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    XQCopy *as = (XQCopy*)(yyval.astNode);

    XQContextItem *ci = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQContextItem(MEMMGR));
    as->setExpression(ci);

    as->setChildren((yyvsp[(2) - (3)].parenExpr)->getChildren());
  ;}
    break;

  case 202:
#line 2077 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopy(MEMMGR));
  ;}
    break;

  case 203:
#line 2081 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  ;}
    break;

  case 204:
#line 2086 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setInheritNamespaces((yyvsp[(2) - (2)].boolean));
  ;}
    break;

  case 205:
#line 2095 "../src/parser/XQParser.y"
    {
    // TBD xsl:sort - jpcs
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    XQMap *map = (XQMap*)(yyval.astNode);
    map->setArg2((yyvsp[(2) - (3)].parenExpr));

    if(map->getArg1() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:for-each instruction does not have a {}select attribute");
    }
  ;}
    break;

  case 206:
#line 2109 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQMap(0, 0, MEMMGR));
  ;}
    break;

  case 207:
#line 2113 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQMap*)(yyval.astNode))->setArg1(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  ;}
    break;

  case 208:
#line 2126 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].astNode)));
  ;}
    break;

  case 209:
#line 2131 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].astNode)));
  ;}
    break;

  case 210:
#line 2143 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  ;}
    break;

  case 211:
#line 2147 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::SELF, nt, MEMMGR));
  ;}
    break;

  case 212:
#line 2155 "../src/parser/XQParser.y"
    {
    // . intersect id("a")

    VectorOfASTNodes oargs(XQillaAllocator<ASTNode*>(MEMMGR));
    oargs.push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR)));
    oargs.push_back((yyvsp[(1) - (1)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) Intersect(oargs, MEMMGR));
  ;}
    break;

  case 213:
#line 2168 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, nt, MEMMGR));
  ;}
    break;

  case 214:
#line 2176 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::ANCESTOR, nt, MEMMGR));
  ;}
    break;

  case 215:
#line 2189 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
    fargs.push_back((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) FunctionId(fargs, MEMMGR));
  ;}
    break;

  case 216:
#line 2196 "../src/parser/XQParser.y"
    {
//     VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
//     fargs.push_back($3);
//     fargs.push_back($5);

//     $$ = WRAP(@1, new (MEMMGR) FunctionKey(fargs, MEMMGR));

    // TBD key() - jpcs
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQContextItem(MEMMGR));
  ;}
    break;

  case 221:
#line 2235 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  ;}
    break;

  case 222:
#line 2239 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQPredicate((yyvsp[(2) - (2)].astNode), (yyvsp[(1) - (2)].astNode), MEMMGR));
  ;}
    break;

  case 223:
#line 2243 "../src/parser/XQParser.y"
    {
    // id("a")/foo -> self::foo[parent::node() intersect id("a")]

    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setTypeWildcard();
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    XQStep *step = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQStep(XQStep::PARENT, nt, MEMMGR));

    VectorOfASTNodes oargs(XQillaAllocator<ASTNode*>(MEMMGR));
    oargs.push_back(step);
    oargs.push_back((yyvsp[(1) - (3)].astNode));

    Intersect *intersect = WRAP((yylsp[(1) - (3)]), new (MEMMGR) Intersect(oargs, MEMMGR));

    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), intersect, MEMMGR));
  ;}
    break;

  case 224:
#line 2261 "../src/parser/XQParser.y"
    {
    // id("a")/foo -> self::foo[ancestor::node() intersect id("a")]

    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setTypeWildcard();
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    XQStep *step = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQStep(XQStep::ANCESTOR, nt, MEMMGR));

    VectorOfASTNodes oargs(XQillaAllocator<ASTNode*>(MEMMGR));
    oargs.push_back(step);
    oargs.push_back((yyvsp[(1) - (3)].astNode));

    Intersect *intersect = WRAP((yylsp[(1) - (3)]), new (MEMMGR) Intersect(oargs, MEMMGR));

    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), intersect, MEMMGR));
  ;}
    break;

  case 225:
#line 2279 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(XQStep::PARENT);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  ;}
    break;

  case 226:
#line 2289 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(XQStep::ANCESTOR);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  ;}
    break;

  case 227:
#line 2303 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::SELF, (yyvsp[(1) - (2)].nodeTest), MEMMGR)), (yyvsp[(2) - (2)].predicates));
  ;}
    break;

  case 228:
#line 2311 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet())
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(1) - (1)].nodeTest);
  ;}
    break;

  case 229:
#line 2317 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  ;}
    break;

  case 230:
#line 2323 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  ;}
    break;

  case 231:
#line 2329 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet())
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(2) - (2)].nodeTest);
  ;}
    break;

  case 232:
#line 2340 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  ;}
    break;

  case 233:
#line 2344 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  ;}
    break;

  case 241:
#line 2374 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  ;}
    break;

  case 242:
#line 2378 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  ;}
    break;

  case 243:
#line 2382 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  ;}
    break;

  case 244:
#line 2386 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  ;}
    break;

  case 245:
#line 2390 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  ;}
    break;

  case 246:
#line 2394 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  ;}
    break;

  case 247:
#line 2400 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  ;}
    break;

  case 248:
#line 2406 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  ;}
    break;

  case 256:
#line 2432 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].argSpecs), (yyvsp[(5) - (5)].astNode), NULL, false, true, MEMMGR));
  ;}
    break;

  case 257:
#line 2436 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), false, true, MEMMGR));
  ;}
    break;

  case 258:
#line 2440 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].argSpecs), NULL, NULL, false, true, MEMMGR));
  ;}
    break;

  case 259:
#line 2444 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].argSpecs), NULL, (yyvsp[(6) - (7)].sequenceType), false, true, MEMMGR));
  ;}
    break;

  case 269:
#line 2473 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  ;}
    break;

  case 270:
#line 2477 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  ;}
    break;

  case 271:
#line 2481 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  ;}
    break;

  case 272:
#line 2485 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  ;}
    break;

  case 273:
#line 2489 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  ;}
    break;

  case 274:
#line 2493 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  ;}
    break;

  case 275:
#line 2499 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  ;}
    break;

  case 276:
#line 2505 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  ;}
    break;

  case 277:
#line 2509 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  ;}
    break;

  case 285:
#line 2536 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  ;}
    break;

  case 286:
#line 2540 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  ;}
    break;

  case 287:
#line 2544 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  ;}
    break;

  case 288:
#line 2548 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  ;}
    break;

  case 289:
#line 2552 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  ;}
    break;

  case 290:
#line 2556 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  ;}
    break;

  case 291:
#line 2562 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  ;}
    break;

  case 292:
#line 2568 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  ;}
    break;

  case 297:
#line 2587 "../src/parser/XQParser.y"
    {
    if(!XPath2Utils::equals((yyvsp[(3) - (4)].str),sz1_0))
      yyerror((yylsp[(2) - (4)]), "This XQuery processor only supports version 1.0 of the specs [err:XQST0031]");
  ;}
    break;

  case 298:
#line 2592 "../src/parser/XQParser.y"
    {
    if(!XPath2Utils::equals((yyvsp[(3) - (6)].str), sz1_0))
      yyerror((yylsp[(2) - (6)]), "This XQuery processor only supports version 1.0 of the specs [err:XQST0031]");

    XMLCh *encName = (yyvsp[(5) - (6)].str);
    if((*encName < chLatin_A || *encName > chLatin_Z) && (*encName < chLatin_a || *encName > chLatin_z))
      yyerror((yylsp[(5) - (6)]), "The specified encoding does not conform to the definition of EncName [err:XQST0087]");

    for(++encName; *encName; ++encName) {
      if((*encName < chLatin_A || *encName > chLatin_Z) &&
         (*encName < chLatin_a || *encName > chLatin_z) &&
         (*encName < chDigit_0 || *encName > chDigit_9) &&
         *encName != chPeriod && *encName != chDash)
        yyerror((yylsp[(5) - (6)]), "The specified encoding does not conform to the definition of EncName [err:XQST0087]");
    }

    // TODO: store the encoding somewhere
  ;}
    break;

  case 301:
#line 2621 "../src/parser/XQParser.y"
    {
    if(*(yyvsp[(5) - (6)].str) == 0)
      yyerror((yylsp[(5) - (6)]), "The literal that specifies the namespace of a module must not be of zero length [err:XQST0088]");
    QP->_query->setIsLibraryModule();
    QP->_query->setModuleTargetNamespace((yyvsp[(5) - (6)].str));
    SET_NAMESPACE((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str));
  ;}
    break;

  case 303:
#line 2635 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  ;}
    break;

  case 304:
#line 2639 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  ;}
    break;

  case 305:
#line 2643 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  ;}
    break;

  case 306:
#line 2647 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  ;}
    break;

  case 307:
#line 2651 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  ;}
    break;

  case 308:
#line 2655 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  ;}
    break;

  case 309:
#line 2661 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  ;}
    break;

  case 310:
#line 2667 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  ;}
    break;

  case 311:
#line 2671 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  ;}
    break;

  case 323:
#line 2703 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  ;}
    break;

  case 324:
#line 2711 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  ;}
    break;

  case 325:
#line 2716 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  ;}
    break;

  case 326:
#line 2725 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  ;}
    break;

  case 327:
#line 2730 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  ;}
    break;

  case 328:
#line 2739 "../src/parser/XQParser.y"
    {
    // validate the QName
    QualifiedName qName((yyvsp[(3) - (4)].str));
    const XMLCh* prefix = qName.getPrefix();
    if(prefix == 0 || *prefix == 0)
      yyerror((yylsp[(3) - (4)]), "The option name must have a prefix [err:XPST0081]");

    const XMLCh *uri = 0;
    try {
      LOCATION((yylsp[(3) - (4)]), loc);
      uri = CONTEXT->getUriBoundToPrefix(prefix, &loc);
    }
    catch(NamespaceLookupException&) {
      yyerror((yylsp[(3) - (4)]), "The option name is using an undefined namespace prefix [err:XPST0081]");
    }

    if(XPath2Utils::equals(uri, XQillaFunction::XMLChFunctionURI)) {
      if(XPath2Utils::equals(qName.getName(), option_projection)) {
        if(XPath2Utils::equals((yyvsp[(4) - (4)].str), SchemaSymbols::fgATTVAL_TRUE)) {
          CONTEXT->setProjection(true);
        }
        else if(XPath2Utils::equals((yyvsp[(4) - (4)].str), SchemaSymbols::fgATTVAL_FALSE)) {
          CONTEXT->setProjection(false);
        }
        else {
          yyerror((yylsp[(4) - (4)]), "Unknown value for option xqilla:projection. Should be 'true' or 'false' [err:XQILLA]");
        }
      }
      else if(XPath2Utils::equals(qName.getName(), option_psvi)) {
        if(XPath2Utils::equals((yyvsp[(4) - (4)].str), SchemaSymbols::fgATTVAL_TRUE)) {
          CONTEXT->getDocumentCache()->setDoPSVI(true);
        }
        else if(XPath2Utils::equals((yyvsp[(4) - (4)].str), SchemaSymbols::fgATTVAL_FALSE)) {
          CONTEXT->getDocumentCache()->setDoPSVI(false);
        }
        else {
          yyerror((yylsp[(4) - (4)]), "Unknown value for option xqilla:psvi. Should be 'true' or 'false' [err:XQILLA]");
        }
      }
      else if(XPath2Utils::equals(qName.getName(), option_lint)) {
        if(XPath2Utils::equals((yyvsp[(4) - (4)].str), SchemaSymbols::fgATTVAL_TRUE)) {
          CONTEXT->setDoLintWarnings(true);
        }
        else if(XPath2Utils::equals((yyvsp[(4) - (4)].str), SchemaSymbols::fgATTVAL_FALSE)) {
          CONTEXT->setDoLintWarnings(false);
        }
        else {
          yyerror((yylsp[(4) - (4)]), "Unknown value for option xqilla:lint. Should be 'true' or 'false' [err:XQILLA]");
        }
      }
      else {
        yyerror((yylsp[(3) - (4)]), "Unknown option name in the xqilla namespace [err:XQILLA]");
      }
    }
  ;}
    break;

  case 329:
#line 2799 "../src/parser/XQParser.y"
    {
    // TBD FTOptionDecl
  ;}
    break;

  case 330:
#line 2807 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  ;}
    break;

  case 331:
#line 2812 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  ;}
    break;

  case 332:
#line 2821 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  ;}
    break;

  case 333:
#line 2826 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  ;}
    break;

  case 334:
#line 2835 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  ;}
    break;

  case 335:
#line 2845 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  ;}
    break;

  case 336:
#line 2849 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  ;}
    break;

  case 337:
#line 2857 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  ;}
    break;

  case 338:
#line 2861 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  ;}
    break;

  case 339:
#line 2869 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (4)]), BIT_COLLATION_SPECIFIED, "default collation", "XQST0038");
    try {
      LOCATION((yylsp[(4) - (4)]), loc);
      CONTEXT->getCollation((yyvsp[(4) - (4)].str), &loc);
    }
    catch(ContextException&) {
      yyerror((yylsp[(4) - (4)]), "The specified collation does not exist [err:XQST0038]");
    }
    CONTEXT->setDefaultCollation((yyvsp[(4) - (4)].str));
  ;}
    break;

  case 340:
#line 2885 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  ;}
    break;

  case 341:
#line 2894 "../src/parser/XQParser.y"
    {
    if(XPath2Utils::equals((yyvsp[(3) - (5)].str), XMLUni::fgZeroLenString))
      CONTEXT->setDefaultElementAndTypeNS((yyvsp[(4) - (5)].str));
    else if(XPath2Utils::equals((yyvsp[(4) - (5)].str), XMLUni::fgZeroLenString))
      yyerror((yylsp[(1) - (5)]), "A schema that has no target namespace cannot be bound to a non-empty prefix [err:XQST0057]");
    else {
      SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].str));
    }
    LOCATION((yylsp[(1) - (5)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].stringList), &loc);
  ;}
    break;

  case 342:
#line 2906 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  ;}
    break;

  case 343:
#line 2914 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  ;}
    break;

  case 344:
#line 2918 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  ;}
    break;

  case 345:
#line 2923 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  ;}
    break;

  case 346:
#line 2932 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  ;}
    break;

  case 347:
#line 2936 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  ;}
    break;

  case 348:
#line 2944 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(6) - (7)].str))==0)
      yyerror((yylsp[(6) - (7)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    SET_NAMESPACE((yylsp[(4) - (7)]), (yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].str));

    LOCATION((yylsp[(1) - (7)]), loc);
    QP->_query->importModule((yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].stringList), CONTEXT, &loc);
  ;}
    break;

  case 349:
#line 2954 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), CONTEXT, &loc);
  ;}
    break;

  case 350:
#line 2966 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQGlobalVariable((yyvsp[(4) - (6)].str), (yyvsp[(5) - (6)].sequenceType), (yyvsp[(6) - (6)].astNode), MEMMGR)));
  ;}
    break;

  case 351:
#line 2973 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  ;}
    break;

  case 352:
#line 2977 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  ;}
    break;

  case 353:
#line 2985 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  ;}
    break;

  case 354:
#line 2990 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  ;}
    break;

  case 355:
#line 3000 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),WRAP((yylsp[(6) - (6)]), (yyvsp[(6) - (6)].astNode)),NULL, (yyvsp[(2) - (6)].boolean), true, MEMMGR));
    ;}
    break;

  case 356:
#line 3004 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),WRAP((yylsp[(8) - (8)]), (yyvsp[(8) - (8)].astNode)),(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), true, MEMMGR));
    ;}
    break;

  case 357:
#line 3008 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),NULL,NULL, (yyvsp[(2) - (6)].boolean), true, MEMMGR));
    ;}
    break;

  case 358:
#line 3012 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),NULL,(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), true, MEMMGR));
    ;}
    break;

  case 359:
#line 3019 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  ;}
    break;

  case 360:
#line 3023 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  ;}
    break;

  case 361:
#line 3029 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  ;}
    break;

  case 362:
#line 3033 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  ;}
    break;

  case 363:
#line 3041 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  ;}
    break;

  case 364:
#line 3046 "../src/parser/XQParser.y"
    {
    XQUserFunction::ArgumentSpecs* paramList = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  ;}
    break;

  case 365:
#line 3056 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQUserFunction::ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  ;}
    break;

  case 366:
#line 3064 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    ;}
    break;

  case 367:
#line 3068 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    ;}
    break;

  case 368:
#line 3076 "../src/parser/XQParser.y"
    {
    if(QP->_lexer->isUpdate()) {
      QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) UApplyUpdates((yyvsp[(1) - (1)].astNode), MEMMGR)));
    }
    else {
      QP->_query->setQueryBody((yyvsp[(1) - (1)].astNode));
    }
  ;}
    break;

  case 369:
#line 3089 "../src/parser/XQParser.y"
    {
      ASTNode* prevExpr=(yyvsp[(1) - (3)].astNode);
      if(prevExpr->getType()==ASTNode::SEQUENCE)
      {
        ((XQSequence *)prevExpr)->addItem((yyvsp[(3) - (3)].astNode));
        (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
      }
      else {
        XQSequence *dis = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQSequence(MEMMGR));
        dis->addItem((yyvsp[(1) - (3)].astNode));
        dis->addItem((yyvsp[(3) - (3)].astNode));
        (yyval.astNode) = dis;
      }
    ;}
    break;

  case 383:
#line 3127 "../src/parser/XQParser.y"
    {
      // Add a ContextTuple at the start
      TupleNode *tmp = setLastAncestor((yyvsp[(1) - (3)].tupleNode), WRAP((yylsp[(1) - (3)]), new (MEMMGR) ContextTuple(MEMMGR)));

      // Add the return expression
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQReturn(tmp, (yyvsp[(3) - (3)].astNode), MEMMGR));
    ;}
    break;

  case 384:
#line 3138 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), setLastAncestor((yyvsp[(2) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode)));
    ;}
    break;

  case 385:
#line 3142 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    ;}
    break;

  case 386:
#line 3146 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    ;}
    break;

  case 388:
#line 3154 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FlworExprForLetList, (yylsp[(2) - (2)]));

      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    ;}
    break;

  case 389:
#line 3160 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FlworExprForLetList, (yylsp[(2) - (2)]));

      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    ;}
    break;

  case 392:
#line 3173 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    ;}
    break;

  case 393:
#line 3180 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    ;}
    break;

  case 395:
#line 3188 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  ;}
    break;

  case 396:
#line 3199 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  ;}
    break;

  case 397:
#line 3203 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  ;}
    break;

  case 398:
#line 3213 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  ;}
    break;

  case 399:
#line 3217 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  ;}
    break;

  case 400:
#line 3227 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  ;}
    break;

  case 401:
#line 3234 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  ;}
    break;

  case 403:
#line 3242 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (5)].str), WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  ;}
    break;

  case 404:
#line 3246 "../src/parser/XQParser.y"
    {
    ASTNode *literal = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  X("0"), AnyAtomicType::DECIMAL,
                  MEMMGR));
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(3) - (5)].str), literal, MEMMGR));
  ;}
    break;

  case 405:
#line 3259 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode), MEMMGR));
  ;}
    break;

  case 406:
#line 3267 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  ;}
    break;

  case 407:
#line 3272 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  ;}
    break;

  case 408:
#line 3280 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  ;}
    break;

  case 410:
#line 3290 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  ;}
    break;

  case 411:
#line 3297 "../src/parser/XQParser.y"
    {
    try {
      LOCATION((yylsp[(4) - (5)]), loc);
      Collation *collation = CONTEXT->getCollation((yyvsp[(5) - (5)].str), &loc);

      (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (5)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (5)].orderByModifier) | (yyvsp[(3) - (5)].orderByModifier), collation, MEMMGR));
    }
    catch(ContextException&) {
      yyerror((yylsp[(4) - (5)]), "The specified collation does not exist [err:XQST0076]");
    }
  ;}
    break;

  case 412:
#line 3312 "../src/parser/XQParser.y"
    {
    SequenceType *zero_or_one = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING),
                   SequenceType::QUESTION_MARK));

    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAtomize((yyval.astNode), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPromoteUntyped((yyval.astNode), SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                                SchemaSymbols::fgDT_STRING, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs((yyval.astNode), zero_or_one, MEMMGR));
  ;}
    break;

  case 413:
#line 3328 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  ;}
    break;

  case 414:
#line 3332 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  ;}
    break;

  case 415:
#line 3336 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  ;}
    break;

  case 416:
#line 3343 "../src/parser/XQParser.y"
    {
    switch(CONTEXT->getDefaultFLWOROrderingMode()) {
    case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST; break;
    case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST; break;
    }
  ;}
    break;

  case 417:
#line 3352 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  ;}
    break;

  case 418:
#line 3356 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  ;}
    break;

  case 419:
#line 3365 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  ;}
    break;

  case 420:
#line 3373 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  ;}
    break;

  case 421:
#line 3384 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  ;}
    break;

  case 423:
#line 3392 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  ;}
    break;

  case 424:
#line 3403 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR);
  ;}
    break;

  case 425:
#line 3410 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].caseClauses)->push_back((yyvsp[(2) - (2)].caseClause));
    (yyval.caseClauses)=(yyvsp[(1) - (2)].caseClauses);
  ;}
    break;

  case 426:
#line 3415 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses)=new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back((yyvsp[(1) - (1)].caseClause));
  ;}
    break;

  case 427:
#line 3423 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  ;}
    break;

  case 428:
#line 3427 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  ;}
    break;

  case 429:
#line 3435 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTypeswitch::Case(NULL, (yyvsp[(2) - (4)].sequenceType), (yyvsp[(4) - (4)].astNode)));
  ;}
    break;

  case 430:
#line 3439 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (7)].str), (yyvsp[(5) - (7)].sequenceType), (yyvsp[(7) - (7)].astNode)));
  ;}
    break;

  case 431:
#line 3447 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  ;}
    break;

  case 432:
#line 3455 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType() == ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == Or::name) {
      ((Or*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Or(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  ;}
    break;

  case 434:
#line 3469 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType()==ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == And::name) {
      ((And*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) And(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  ;}
    break;

  case 436:
#line 3488 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  ;}
    break;

  case 437:
#line 3492 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  ;}
    break;

  case 438:
#line 3495 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); ;}
    break;

  case 439:
#line 3496 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  ;}
    break;

  case 440:
#line 3500 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  ;}
    break;

  case 441:
#line 3504 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  ;}
    break;

  case 442:
#line 3508 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  ;}
    break;

  case 443:
#line 3512 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  ;}
    break;

  case 444:
#line 3516 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  ;}
    break;

  case 445:
#line 3520 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  ;}
    break;

  case 446:
#line 3524 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  ;}
    break;

  case 447:
#line 3528 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  ;}
    break;

  case 448:
#line 3532 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  ;}
    break;

  case 449:
#line 3536 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  ;}
    break;

  case 450:
#line 3540 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  ;}
    break;

  case 451:
#line 3544 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  ;}
    break;

  case 453:
#line 3553 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) FTContains((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].ftselection), NULL, MEMMGR));
  ;}
    break;

  case 454:
#line 3557 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].ftselection), (yyvsp[(4) - (4)].astNode), MEMMGR));
  ;}
    break;

  case 456:
#line 3566 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Range(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  ;}
    break;

  case 458:
#line 3575 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  ;}
    break;

  case 459:
#line 3579 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  ;}
    break;

  case 461:
#line 3588 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  ;}
    break;

  case 462:
#line 3592 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  ;}
    break;

  case 463:
#line 3596 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  ;}
    break;

  case 464:
#line 3600 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  ;}
    break;

  case 466:
#line 3609 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    ;}
    break;

  case 467:
#line 3613 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    ;}
    break;

  case 469:
#line 3622 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    ;}
    break;

  case 470:
#line 3626 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    ;}
    break;

  case 472:
#line 3635 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQInstanceOf((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  ;}
    break;

  case 474:
#line 3644 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, XQTreatAs::err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  ;}
    break;

  case 476:
#line 3654 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  ;}
    break;

  case 478:
#line 3663 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  ;}
    break;

  case 480:
#line 3672 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    ;}
    break;

  case 481:
#line 3678 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    ;}
    break;

  case 486:
#line 3699 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    ;}
    break;

  case 487:
#line 3703 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    ;}
    break;

  case 488:
#line 3707 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    ;}
    break;

  case 489:
#line 3715 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  ;}
    break;

  case 490:
#line 3722 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  ;}
    break;

  case 493:
#line 3735 "../src/parser/XQParser.y"
    {
        // validate the QName
        QualifiedName qName((yyvsp[(3) - (4)].str));
        const XMLCh* prefix=qName.getPrefix();
        if(prefix == NULL || *prefix == 0)
          yyerror((yylsp[(3) - (4)]), "The pragma name must have a prefix [err:XPST0081]");

        try {
          LOCATION((yylsp[(3) - (4)]), loc);
          CONTEXT->getUriBoundToPrefix(prefix, &loc);
        }
        catch(NamespaceLookupException&) {
          yyerror((yylsp[(3) - (4)]), "The pragma name is using an undefined namespace prefix [err:XPST0081]");
        }
      ;}
    break;

  case 495:
#line 3756 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  ;}
    break;

  case 497:
#line 3765 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  ;}
    break;

  case 498:
#line 3771 "../src/parser/XQParser.y"
    {
    XQNav *nav = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQNav(MEMMGR));

    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (2)]), new (MEMMGR)
      SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT)));

    nav->addStep(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR)));

    NodeTest *step = new (MEMMGR) NodeTest();
    step->setTypeWildcard();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    nav->addStep(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::DESCENDANT_OR_SELF, step, MEMMGR)));

    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  ;}
    break;

  case 500:
#line 3796 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT)));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
  ;}
    break;

  case 501:
#line 3810 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  ;}
    break;

  case 502:
#line 3816 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));

    NodeTest *step = new (MEMMGR) NodeTest();
    step->setTypeWildcard();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    nav->addStep(WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQStep(XQStep::DESCENDANT_OR_SELF, step, MEMMGR)));
    nav->addStep((yyvsp[(3) - (3)].astNode));

    (yyval.astNode) = nav;
  ;}
    break;

  case 506:
#line 3837 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
  ;}
    break;

  case 507:
#line 3841 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addReversePredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQDocumentOrder((yyval.astNode), MEMMGR));
  ;}
    break;

  case 508:
#line 3850 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      switch((yyvsp[(1) - (2)].axis)) {
      case XQStep::NAMESPACE: (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::namespace_string); break;
      case XQStep::ATTRIBUTE: (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string); break;
      default: (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string); break;
      }
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis),(yyvsp[(2) - (2)].nodeTest),MEMMGR));
  ;}
    break;

  case 510:
#line 3873 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::CHILD;
  ;}
    break;

  case 511:
#line 3877 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT;
  ;}
    break;

  case 512:
#line 3881 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ATTRIBUTE;
  ;}
    break;

  case 513:
#line 3885 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::SELF;
  ;}
    break;

  case 514:
#line 3889 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT_OR_SELF;
  ;}
    break;

  case 515:
#line 3893 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING_SIBLING;
  ;}
    break;

  case 516:
#line 3897 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING;
  ;}
    break;

  case 517:
#line 3901 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::NAMESPACE;
  ;}
    break;

  case 518:
#line 3909 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  ;}
    break;

  case 519:
#line 3917 "../src/parser/XQParser.y"
    {
    XQStep::Axis axis = XQStep::CHILD;
    SequenceType::ItemType *itemtype = (yyvsp[(1) - (1)].nodeTest)->getItemType();
    if(itemtype != 0 && itemtype->getItemTestType() == SequenceType::ItemType::TEST_ATTRIBUTE) {
      axis = XQStep::ATTRIBUTE;
    }
    else if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(axis, (yyvsp[(1) - (1)].nodeTest), MEMMGR));
  ;}
    break;

  case 520:
#line 3934 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  ;}
    break;

  case 522:
#line 3951 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PARENT;
  ;}
    break;

  case 523:
#line 3955 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR;
  ;}
    break;

  case 524:
#line 3959 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING_SIBLING;
  ;}
    break;

  case 525:
#line 3963 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING;
  ;}
    break;

  case 526:
#line 3967 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR_OR_SELF;
  ;}
    break;

  case 527:
#line 3975 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR));
  ;}
    break;

  case 528:
#line 3987 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  ;}
    break;

  case 530:
#line 3997 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  ;}
    break;

  case 532:
#line 4009 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  ;}
    break;

  case 533:
#line 4016 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  ;}
    break;

  case 534:
#line 4023 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  ;}
    break;

  case 535:
#line 4034 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
  ;}
    break;

  case 536:
#line 4043 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  ;}
    break;

  case 537:
#line 4047 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  ;}
    break;

  case 553:
#line 4078 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  ;}
    break;

  case 555:
#line 4089 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  ;}
    break;

  case 556:
#line 4093 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  ;}
    break;

  case 557:
#line 4101 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  ;}
    break;

  case 558:
#line 4109 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  ;}
    break;

  case 559:
#line 4119 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  ;}
    break;

  case 560:
#line 4129 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  ;}
    break;

  case 561:
#line 4133 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].itemList), MEMMGR));
  ;}
    break;

  case 562:
#line 4140 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  ;}
    break;

  case 563:
#line 4145 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  ;}
    break;

  case 564:
#line 4154 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  ;}
    break;

  case 565:
#line 4158 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  ;}
    break;

  case 569:
#line 4171 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*isAttr*/false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  ;}
    break;

  case 570:
#line 4177 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*isAttr*/false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  ;}
    break;

  case 573:
#line 4190 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  ;}
    break;

  case 574:
#line 4194 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*isAttr*/true, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  ;}
    break;

  case 575:
#line 4203 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*isAttr*/true, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  ;}
    break;

  case 578:
#line 4219 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  ;}
    break;

  case 579:
#line 4223 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  ;}
    break;

  case 580:
#line 4230 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  ;}
    break;

  case 581:
#line 4234 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  ;}
    break;

  case 582:
#line 4244 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  ;}
    break;

  case 583:
#line 4248 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  ;}
    break;

  case 584:
#line 4253 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  ;}
    break;

  case 585:
#line 4263 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  ;}
    break;

  case 586:
#line 4267 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  ;}
    break;

  case 587:
#line 4271 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  ;}
    break;

  case 588:
#line 4284 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  ;}
    break;

  case 589:
#line 4288 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  ;}
    break;

  case 590:
#line 4293 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  ;}
    break;

  case 591:
#line 4303 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  ;}
    break;

  case 592:
#line 4307 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  ;}
    break;

  case 593:
#line 4311 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  ;}
    break;

  case 594:
#line 4328 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  ;}
    break;

  case 595:
#line 4332 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  ;}
    break;

  case 596:
#line 4337 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  ;}
    break;

  case 597:
#line 4342 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  ;}
    break;

  case 598:
#line 4349 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    if(CONTEXT->getPreserveBoundarySpace()) {
      (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                 SchemaSymbols::fgDT_STRING,
                                 (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
    }
  ;}
    break;

  case 599:
#line 4362 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(2) - (3)].str), AnyAtomicType::STRING,
                  MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCommentConstructor(value, MEMMGR));
  ;}
    break;

  case 600:
#line 4375 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  ;}
    break;

  case 602:
#line 4384 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(3) - (3)].str), AnyAtomicType::STRING,
                  MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor(
                    WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(2) - (3)].str), AnyAtomicType::STRING,
                  MEMMGR)), 
                  value, MEMMGR));
  ;}
    break;

  case 604:
#line 4404 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  ;}
    break;

  case 611:
#line 4427 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  ;}
    break;

  case 612:
#line 4435 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  ;}
    break;

  case 613:
#line 4443 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*isAttr*/false, MEMMGR));
  ;}
    break;

  case 614:
#line 4447 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  ;}
    break;

  case 615:
#line 4455 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  ;}
    break;

  case 616:
#line 4459 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  ;}
    break;

  case 617:
#line 4468 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  ;}
    break;

  case 618:
#line 4476 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  ;}
    break;

  case 619:
#line 4484 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  ;}
    break;

  case 620:
#line 4492 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  ;}
    break;

  case 621:
#line 4499 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(1) - (1)].str), AnyAtomicType::STRING, MEMMGR));
  ;}
    break;

  case 622:
#line 4509 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  ;}
    break;

  case 623:
#line 4516 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  ;}
    break;

  case 624:
#line 4520 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  ;}
    break;

  case 625:
#line 4528 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (2)].qName)));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  ;}
    break;

  case 626:
#line 4538 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  ;}
    break;

  case 627:
#line 4542 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  ;}
    break;

  case 628:
#line 4550 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR));
  ;}
    break;

  case 629:
#line 4554 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  ;}
    break;

  case 630:
#line 4564 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType((yyvsp[(1) - (2)].itemType));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  ;}
    break;

  case 631:
#line 4571 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  ;}
    break;

  case 632:
#line 4580 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; ;}
    break;

  case 633:
#line 4582 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; ;}
    break;

  case 634:
#line 4584 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; ;}
    break;

  case 635:
#line 4586 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; ;}
    break;

  case 636:
#line 4592 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName));
  ;}
    break;

  case 637:
#line 4596 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
  ;}
    break;

  case 651:
#line 4631 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE);
  ;}
    break;

  case 652:
#line 4639 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT);
  ;}
    break;

  case 653:
#line 4643 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_DOCUMENT);
  ;}
    break;

  case 654:
#line 4648 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_SCHEMA_DOCUMENT);
  ;}
    break;

  case 655:
#line 4657 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT);
  ;}
    break;

  case 656:
#line 4665 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT);
  ;}
    break;

  case 657:
#line 4673 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI);
  ;}
    break;

  case 658:
#line 4677 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  ;}
    break;

  case 659:
#line 4681 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  ;}
    break;

  case 660:
#line 4689 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE);
  ;}
    break;

  case 661:
#line 4693 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  ;}
    break;

  case 662:
#line 4697 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  ;}
    break;

  case 664:
#line 4706 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  ;}
    break;

  case 665:
#line 4714 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  ;}
    break;

  case 667:
#line 4727 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT);
  ;}
    break;

  case 668:
#line 4731 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName));
  ;}
    break;

  case 669:
#line 4735 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  ;}
    break;

  case 670:
#line 4739 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName));
    (yyval.itemType)->setAllowNilled(true);
  ;}
    break;

  case 672:
#line 4749 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  ;}
    break;

  case 673:
#line 4757 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName));
  ;}
    break;

  case 678:
#line 4777 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  ;}
    break;

  case 679:
#line 4789 "../src/parser/XQParser.y"
    {
    // TBD weight
    (yyval.ftselection) = (yyvsp[(1) - (3)].ftselection);

    for(VectorOfFTOptions::iterator i = (yyvsp[(2) - (3)].ftoptionlist)->begin();
        i != (yyvsp[(2) - (3)].ftoptionlist)->end(); ++i) {
      (*i)->setArgument((yyval.ftselection));
      (yyval.ftselection) = *i;
    }
/*     delete $2; */
  ;}
    break;

  case 680:
#line 4804 "../src/parser/XQParser.y"
    {
;}
    break;

  case 681:
#line 4807 "../src/parser/XQParser.y"
    {
;}
    break;

  case 682:
#line 4813 "../src/parser/XQParser.y"
    {
  (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
;}
    break;

  case 683:
#line 4817 "../src/parser/XQParser.y"
    {
  if((yyvsp[(2) - (2)].ftoption) != NULL) (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
  (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
;}
    break;

  case 684:
#line 4827 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].ftselection)->getType() == FTSelection::OR) {
      FTOr *op = (FTOr*)(yyvsp[(1) - (3)].ftselection);
      op->addArg((yyvsp[(3) - (3)].ftselection));
      (yyval.ftselection) = op;
    }
    else {
      (yyval.ftselection) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) FTOr((yyvsp[(1) - (3)].ftselection), (yyvsp[(3) - (3)].ftselection), MEMMGR));
    }
  ;}
    break;

  case 686:
#line 4844 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].ftselection)->getType() == FTSelection::AND) {
      FTAnd *op = (FTAnd*)(yyvsp[(1) - (3)].ftselection);
      op->addArg((yyvsp[(3) - (3)].ftselection));
      (yyval.ftselection) = op;
    }
    else {
      (yyval.ftselection) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) FTAnd((yyvsp[(1) - (3)].ftselection), (yyvsp[(3) - (3)].ftselection), MEMMGR));
    }
  ;}
    break;

  case 688:
#line 4860 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  ;}
    break;

  case 690:
#line 4870 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  ;}
    break;

  case 693:
#line 4880 "../src/parser/XQParser.y"
    {
  // TBD match options
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
;}
    break;

  case 694:
#line 4889 "../src/parser/XQParser.y"
    {
  // TBD FTTimes
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
;}
    break;

  case 695:
#line 4894 "../src/parser/XQParser.y"
    {
  (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
;}
    break;

  case 697:
#line 4904 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  ;}
    break;

  case 698:
#line 4908 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  ;}
    break;

  case 699:
#line 4916 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
;}
    break;

  case 700:
#line 4921 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  (yyval.ftselection) = (yyvsp[(3) - (4)].ftselection);
;}
    break;

  case 701:
#line 4930 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  ;}
    break;

  case 702:
#line 4934 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  ;}
    break;

  case 703:
#line 4938 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  ;}
    break;

  case 704:
#line 4942 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  ;}
    break;

  case 705:
#line 4946 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  ;}
    break;

  case 706:
#line 4950 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  ;}
    break;

  case 708:
#line 4960 "../src/parser/XQParser.y"
    {
  yyerror((yylsp[(1) - (3)]), "The FTTimes operator is not supported. [err:FTST0005]");
;}
    break;

  case 709:
#line 4971 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  ;}
    break;

  case 710:
#line 4977 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  ;}
    break;

  case 711:
#line 4983 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  ;}
    break;

  case 712:
#line 4989 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  ;}
    break;

  case 713:
#line 5004 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  ;}
    break;

  case 714:
#line 5008 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  ;}
    break;

  case 715:
#line 5012 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  ;}
    break;

  case 716:
#line 5016 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  ;}
    break;

  case 717:
#line 5020 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  ;}
    break;

  case 718:
#line 5024 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  ;}
    break;

  case 719:
#line 5028 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  ;}
    break;

  case 720:
#line 5032 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  ;}
    break;

  case 721:
#line 5040 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  ;}
    break;

  case 722:
#line 5044 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  ;}
    break;

  case 723:
#line 5048 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  ;}
    break;

  case 724:
#line 5056 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  ;}
    break;

  case 725:
#line 5060 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  ;}
    break;

  case 736:
#line 5096 "../src/parser/XQParser.y"
    {
    std::cerr << "case insensitive" << std::endl;
  ;}
    break;

  case 737:
#line 5100 "../src/parser/XQParser.y"
    {
    std::cerr << "case sensitive" << std::endl;
  ;}
    break;

  case 738:
#line 5104 "../src/parser/XQParser.y"
    {
    std::cerr << "lowercase" << std::endl;
  ;}
    break;

  case 739:
#line 5108 "../src/parser/XQParser.y"
    {
    std::cerr << "uppercase" << std::endl;
  ;}
    break;

  case 740:
#line 5117 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  ;}
    break;

  case 741:
#line 5121 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  ;}
    break;

  case 742:
#line 5129 "../src/parser/XQParser.y"
    {
    std::cerr << "with stemming" << std::endl;
  ;}
    break;

  case 743:
#line 5133 "../src/parser/XQParser.y"
    {
    std::cerr << "without stemming" << std::endl;
  ;}
    break;

  case 744:
#line 5143 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus" << std::endl;
  ;}
    break;

  case 745:
#line 5147 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus default" << std::endl;
  ;}
    break;

  case 746:
#line 5151 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus ()" << std::endl;
  ;}
    break;

  case 747:
#line 5155 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus (default)" << std::endl;
  ;}
    break;

  case 748:
#line 5159 "../src/parser/XQParser.y"
    {
    std::cerr << "without thesaurus" << std::endl;
  ;}
    break;

  case 749:
#line 5166 "../src/parser/XQParser.y"
    {
  ;}
    break;

  case 750:
#line 5169 "../src/parser/XQParser.y"
    {
  ;}
    break;

  case 751:
#line 5176 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  ;}
    break;

  case 752:
#line 5180 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  ;}
    break;

  case 753:
#line 5184 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  ;}
    break;

  case 754:
#line 5188 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  ;}
    break;

  case 755:
#line 5198 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (5)]), "FTStopWordOption is not supported. [err:FTST0006]");
  ;}
    break;

  case 756:
#line 5202 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (3)]), "FTStopWordOption is not supported. [err:FTST0006]");
  ;}
    break;

  case 757:
#line 5206 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (5)]), "FTStopWordOption is not supported. [err:FTST0006]");
  ;}
    break;

  case 758:
#line 5213 "../src/parser/XQParser.y"
    {
  ;}
    break;

  case 759:
#line 5216 "../src/parser/XQParser.y"
    {
  ;}
    break;

  case 760:
#line 5224 "../src/parser/XQParser.y"
    {
    std::cerr << "at URILiteral" << std::endl;
  ;}
    break;

  case 761:
#line 5228 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  ;}
    break;

  case 762:
#line 5235 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  ;}
    break;

  case 763:
#line 5239 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  ;}
    break;

  case 764:
#line 5247 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  ;}
    break;

  case 765:
#line 5251 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  ;}
    break;

  case 766:
#line 5259 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  ;}
    break;

  case 767:
#line 5267 "../src/parser/XQParser.y"
    {
    std::cerr << "with wildcards" << std::endl;
  ;}
    break;

  case 768:
#line 5271 "../src/parser/XQParser.y"
    {
    std::cerr << "without wildcards" << std::endl;
  ;}
    break;

  case 769:
#line 5279 "../src/parser/XQParser.y"
    {
;}
    break;

  case 770:
#line 5286 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  ;}
    break;

  case 771:
#line 5294 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  ;}
    break;

  case 772:
#line 5299 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  ;}
    break;

  case 773:
#line 5304 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  ;}
    break;

  case 774:
#line 5316 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  ;}
    break;

  case 775:
#line 5320 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  ;}
    break;

  case 776:
#line 5324 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  ;}
    break;

  case 777:
#line 5328 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  ;}
    break;

  case 778:
#line 5332 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  ;}
    break;

  case 781:
#line 5343 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  ;}
    break;

  case 784:
#line 5354 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  ;}
    break;

  case 785:
#line 5358 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  ;}
    break;

  case 786:
#line 5368 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  ;}
    break;

  case 787:
#line 5376 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  ;}
    break;

  case 788:
#line 5383 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  ;}
    break;

  case 789:
#line 5388 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  ;}
    break;

  case 790:
#line 5396 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  ;}
    break;

  case 791:
#line 5405 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL,
                  MEMMGR));
  ;}
    break;

  case 792:
#line 5417 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DECIMAL,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL,
                  MEMMGR));
  ;}
    break;

  case 793:
#line 5429 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DOUBLE,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DOUBLE,
                  MEMMGR));
  ;}
    break;

  case 794:
#line 5442 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::STRING,
                  MEMMGR));
  ;}
    break;

  case 795:
#line 5453 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  ;}
    break;

  case 796:
#line 5462 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  ;}
    break;

  case 797:
#line 5474 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, 0, (yyvsp[(5) - (5)].astNode), 0, MEMMGR));
  ;}
    break;

  case 798:
#line 5478 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, (yyvsp[(5) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), MEMMGR));
  ;}
    break;

  case 799:
#line 5482 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(7) - (8)].itemList), 0, (yyvsp[(8) - (8)].astNode), 0, MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (8)].modeList));
  ;}
    break;

  case 800:
#line 5487 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (10)].str), (yyvsp[(7) - (10)].itemList), (yyvsp[(8) - (10)].argSpecs), (yyvsp[(10) - (10)].astNode), (yyvsp[(9) - (10)].sequenceType), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (10)].modeList));
  ;}
    break;

  case 801:
#line 5492 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (6)].itemList), 0, (yyvsp[(6) - (6)].astNode), 0, MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (6)].modeList));
  ;}
    break;

  case 802:
#line 5497 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (8)].itemList), (yyvsp[(6) - (8)].argSpecs), (yyvsp[(8) - (8)].astNode), (yyvsp[(7) - (8)].sequenceType), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (8)].modeList));
  ;}
    break;

  case 803:
#line 5505 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  ;}
    break;

  case 804:
#line 5509 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  ;}
    break;

  case 805:
#line 5517 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  ;}
    break;

  case 806:
#line 5521 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  ;}
    break;

  case 807:
#line 5528 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back(WRAP((yyloc), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
  ;}
    break;

  case 808:
#line 5533 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = (yyvsp[(2) - (2)].modeList);
  ;}
    break;

  case 809:
#line 5541 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back((yyvsp[(1) - (1)].mode));
  ;}
    break;

  case 810:
#line 5546 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].modeList)->push_back((yyvsp[(3) - (3)].mode));
    (yyval.modeList) = (yyvsp[(1) - (3)].modeList);
  ;}
    break;

  case 811:
#line 5555 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  ;}
    break;

  case 812:
#line 5559 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  ;}
    break;

  case 813:
#line 5563 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL));
  ;}
    break;

  case 814:
#line 5571 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  ;}
    break;

  case 815:
#line 5575 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  ;}
    break;

  case 816:
#line 5583 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, 0, MEMMGR));
  ;}
    break;

  case 817:
#line 5587 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), 0, MEMMGR));
  ;}
    break;

  case 818:
#line 5591 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (5)].astNode), 0, (yyvsp[(5) - (5)].mode), MEMMGR));
  ;}
    break;

  case 819:
#line 5595 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (9)].astNode), (yyvsp[(8) - (9)].templateArgs), (yyvsp[(5) - (9)].mode), MEMMGR));
  ;}
    break;

  case 820:
#line 5603 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  ;}
    break;

  case 821:
#line 5607 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  ;}
    break;

  case 822:
#line 5611 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  ;}
    break;

  case 823:
#line 5619 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  ;}
    break;

  case 824:
#line 5624 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  ;}
    break;

  case 825:
#line 5634 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  ;}
    break;

  case 828:
#line 5651 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  ;}
    break;

  case 829:
#line 5659 "../src/parser/XQParser.y"
    {
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(2) - (4)].argSpecs), (yyvsp[(4) - (4)].astNode), (yyvsp[(3) - (4)].sequenceType), false, false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  ;}
    break;

  case 830:
#line 5668 "../src/parser/XQParser.y"
    {
    REJECT_NOT_EXTENSION(DereferencedFunctionCall, (yylsp[(1) - (3)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (3)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  ;}
    break;

  case 831:
#line 5673 "../src/parser/XQParser.y"
    {
    REJECT_NOT_EXTENSION(DereferencedFunctionCall, (yylsp[(1) - (4)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].itemList), MEMMGR));
  ;}
    break;

  case 832:
#line 5682 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_FUNCTION);
  ;}
    break;

  case 833:
#line 5686 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR)), (yyvsp[(5) - (5)].sequenceType));
  ;}
    break;

  case 834:
#line 5690 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType((yyvsp[(3) - (6)].sequenceTypes), (yyvsp[(6) - (6)].sequenceType));
  ;}
    break;

  case 835:
#line 5697 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR));
    (yyval.sequenceTypes)->push_back((yyvsp[(1) - (1)].sequenceType));
  ;}
    break;

  case 836:
#line 5702 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = (yyvsp[(1) - (3)].sequenceTypes);
    (yyval.sequenceTypes)->push_back((yyvsp[(3) - (3)].sequenceType));
  ;}
    break;

  case 837:
#line 5711 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  ;}
    break;


/* Line 1267 of yacc.c.  */
#line 10666 "../src/parser/XQParser.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 5746 "../src/parser/XQParser.y"


}  // namespace XQParser


