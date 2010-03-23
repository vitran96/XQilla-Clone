
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
     _LANG_FUNCDECL_ = 264,
     _LANG_DELAYEDMODULE_ = 265,
     _LANG_FUNCTION_SIGNATURE_ = 266,
     _DOLLAR_ = 267,
     _COLON_EQUALS_ = 268,
     _ASTERISK_ = 269,
     _BAR_ = 270,
     _BANG_EQUALS_ = 271,
     _LESS_THAN_EQUALS_ = 272,
     _GREATER_THAN_ = 273,
     _GREATER_THAN_EQUALS_ = 274,
     _LESS_THAN_LESS_THAN_ = 275,
     _GREATER_THAN_GREATER_THAN_ = 276,
     _COLON_COLON_ = 277,
     _AT_SIGN_ = 278,
     _LSQUARE_ = 279,
     _RSQUARE_ = 280,
     _QUESTION_MARK_ = 281,
     _LESS_THAN_OP_OR_TAG_ = 282,
     _START_TAG_CLOSE_ = 283,
     _END_TAG_CLOSE_ = 284,
     _PI_START_ = 285,
     _XML_COMMENT_START_ = 286,
     _XML_COMMENT_END_ = 287,
     _SLASH_SLASH_ = 288,
     _END_TAG_OPEN_ = 289,
     _PRAGMA_OPEN_ = 290,
     _COMMA_ = 291,
     _PLUS_ = 292,
     _MINUS_ = 293,
     _SLASH_ = 294,
     _EQUALS_ = 295,
     _DOT_ = 296,
     _DOT_DOT_ = 297,
     _LPAR_ = 298,
     _RPAR_ = 299,
     _EMPTY_TAG_CLOSE_ = 300,
     _VALUE_INDICATOR_ = 301,
     _OPEN_QUOT_ = 302,
     _CLOSE_QUOT_ = 303,
     _OPEN_APOS_ = 304,
     _CLOSE_APOS_ = 305,
     _LBRACE_ = 306,
     _RBRACE_ = 307,
     _SEMICOLON_ = 308,
     _HASH_ = 309,
     _INTEGER_LITERAL_ = 310,
     _DECIMAL_LITERAL_ = 311,
     _DOUBLE_LITERAL_ = 312,
     _ATTRIBUTE_ = 313,
     _COMMENT_ = 314,
     _DOCUMENT_NODE_ = 315,
     _NAMESPACE_NODE_ = 316,
     _NODE_ = 317,
     _PROCESSING_INSTRUCTION_ = 318,
     _SCHEMA_ATTRIBUTE_ = 319,
     _SCHEMA_ELEMENT_ = 320,
     _TEXT_ = 321,
     _EMPTY_SEQUENCE_ = 322,
     _BOUNDARY_SPACE_ = 323,
     _FT_OPTION_ = 324,
     _BASE_URI_ = 325,
     _LAX_ = 326,
     _STRICT_ = 327,
     _IDIV_ = 328,
     _CHILD_ = 329,
     _DESCENDANT_ = 330,
     _SELF_ = 331,
     _DESCENDANT_OR_SELF_ = 332,
     _FOLLOWING_SIBLING_ = 333,
     _FOLLOWING_ = 334,
     _PARENT_ = 335,
     _ANCESTOR_ = 336,
     _PRECEDING_SIBLING_ = 337,
     _PRECEDING_ = 338,
     _ANCESTOR_OR_SELF_ = 339,
     _DOCUMENT_ = 340,
     _NOT_ = 341,
     _USING_ = 342,
     _NO_ = 343,
     _SENSITIVE_ = 344,
     _INSENSITIVE_ = 345,
     _DIACRITICS_ = 346,
     _WITHOUT_ = 347,
     _WITHOUT_C_ = 348,
     _STEMMING_ = 349,
     _THESAURUS_ = 350,
     _STOP_ = 351,
     _WILDCARDS_ = 352,
     _ENTIRE_ = 353,
     _CONTENT_ = 354,
     _WORD_ = 355,
     _TYPE_ = 356,
     _START_ = 357,
     _END_ = 358,
     _MOST_ = 359,
     _SKIP_ = 360,
     _COPY_ = 361,
     _VALUE_ = 362,
     _WHITESPACE_ = 363,
     _PI_CONTENT_ = 364,
     _XML_COMMENT_CONTENT_ = 365,
     _EQ_ = 366,
     _NE_ = 367,
     _LT_ = 368,
     _LE_ = 369,
     _GT_ = 370,
     _GE_ = 371,
     _AT_ = 372,
     _QUOT_ATTR_CONTENT_ = 373,
     _APOS_ATTR_CONTENT_ = 374,
     _WHITESPACE_ELEMENT_CONTENT_ = 375,
     _ELEMENT_CONTENT_ = 376,
     _AT_LM_ = 377,
     _ORDERED_ = 378,
     _UNORDERED_ = 379,
     _QNAME_ = 380,
     _XMLNS_QNAME_ = 381,
     _CONSTR_QNAME_ = 382,
     _STRING_LITERAL_ = 383,
     _VARIABLE_ = 384,
     _NCNAME_COLON_STAR_ = 385,
     _STAR_COLON_NCNAME_ = 386,
     _PI_TARGET_ = 387,
     _PRAGMA_CONTENT_ = 388,
     _RETURN_ = 389,
     _FOR_ = 390,
     _IN_ = 391,
     _LET_ = 392,
     _WHERE_ = 393,
     _COUNT_ = 394,
     _BY_ = 395,
     _ORDER_ = 396,
     _STABLE_ = 397,
     _ASCENDING_ = 398,
     _DESCENDING_ = 399,
     _EMPTY_ = 400,
     _GREATEST_ = 401,
     _LEAST_ = 402,
     _COLLATION_ = 403,
     _SOME_ = 404,
     _EVERY_ = 405,
     _SATISFIES_ = 406,
     _TYPESWITCH_ = 407,
     _CASE_ = 408,
     _CASE_S_ = 409,
     _AS_ = 410,
     _IF_ = 411,
     _THEN_ = 412,
     _ELSE_ = 413,
     _OR_ = 414,
     _AND_ = 415,
     _INSTANCE_ = 416,
     _OF_ = 417,
     _CASTABLE_ = 418,
     _TO_ = 419,
     _DIV_ = 420,
     _MOD_ = 421,
     _UNION_ = 422,
     _INTERSECT_ = 423,
     _EXCEPT_ = 424,
     _VALIDATE_ = 425,
     _CAST_ = 426,
     _TREAT_ = 427,
     _IS_ = 428,
     _PRESERVE_ = 429,
     _STRIP_ = 430,
     _NAMESPACE_ = 431,
     _ITEM_ = 432,
     _EXTERNAL_ = 433,
     _ENCODING_ = 434,
     _NO_PRESERVE_ = 435,
     _INHERIT_ = 436,
     _NO_INHERIT_ = 437,
     _DECLARE_ = 438,
     _CONSTRUCTION_ = 439,
     _ORDERING_ = 440,
     _DEFAULT_ = 441,
     _COPY_NAMESPACES_ = 442,
     _OPTION_ = 443,
     _XQUERY_ = 444,
     _VERSION_ = 445,
     _IMPORT_ = 446,
     _SCHEMA_ = 447,
     _MODULE_ = 448,
     _ELEMENT_ = 449,
     _FUNCTION_ = 450,
     _FUNCTION_EXT_ = 451,
     _SCORE_ = 452,
     _CONTAINS_ = 453,
     _WEIGHT_ = 454,
     _WINDOW_ = 455,
     _DISTANCE_ = 456,
     _OCCURS_ = 457,
     _TIMES_ = 458,
     _SAME_ = 459,
     _DIFFERENT_ = 460,
     _LOWERCASE_ = 461,
     _UPPERCASE_ = 462,
     _RELATIONSHIP_ = 463,
     _LEVELS_ = 464,
     _LANGUAGE_ = 465,
     _ANY_ = 466,
     _ALL_ = 467,
     _PHRASE_ = 468,
     _EXACTLY_ = 469,
     _FROM_ = 470,
     _WORDS_ = 471,
     _SENTENCES_ = 472,
     _PARAGRAPHS_ = 473,
     _SENTENCE_ = 474,
     _PARAGRAPH_ = 475,
     _REPLACE_ = 476,
     _MODIFY_ = 477,
     _FIRST_ = 478,
     _INSERT_ = 479,
     _BEFORE_ = 480,
     _AFTER_ = 481,
     _REVALIDATION_ = 482,
     _WITH_ = 483,
     _NODES_ = 484,
     _RENAME_ = 485,
     _LAST_ = 486,
     _DELETE_ = 487,
     _INTO_ = 488,
     _UPDATING_ = 489,
     _ID_ = 490,
     _KEY_ = 491,
     _TEMPLATE_ = 492,
     _MATCHES_ = 493,
     _NAME_ = 494,
     _CALL_ = 495,
     _APPLY_ = 496,
     _TEMPLATES_ = 497,
     _MODE_ = 498,
     _FTOR_ = 499,
     _FTAND_ = 500,
     _FTNOT_ = 501,
     _PRIVATE_ = 502,
     _PUBLIC_ = 503,
     _DETERMINISTIC_ = 504,
     _NONDETERMINISTIC_ = 505,
     _XSLT_END_ELEMENT_ = 506,
     _XSLT_STYLESHEET_ = 507,
     _XSLT_TEMPLATE_ = 508,
     _XSLT_VALUE_OF_ = 509,
     _XSLT_TEXT_ = 510,
     _XSLT_APPLY_TEMPLATES_ = 511,
     _XSLT_CALL_TEMPLATE_ = 512,
     _XSLT_WITH_PARAM_ = 513,
     _XSLT_SEQUENCE_ = 514,
     _XSLT_PARAM_ = 515,
     _XSLT_FUNCTION_ = 516,
     _XSLT_CHOOSE_ = 517,
     _XSLT_WHEN_ = 518,
     _XSLT_OTHERWISE_ = 519,
     _XSLT_IF_ = 520,
     _XSLT_VARIABLE_ = 521,
     _XSLT_COMMENT_ = 522,
     _XSLT_PI_ = 523,
     _XSLT_DOCUMENT_ = 524,
     _XSLT_ATTRIBUTE_ = 525,
     _XSLT_NAMESPACE_ = 526,
     _XSLT_ELEMENT_ = 527,
     _XSLT_ANALYZE_STRING_ = 528,
     _XSLT_MATCHING_SUBSTRING_ = 529,
     _XSLT_NON_MATCHING_SUBSTRING_ = 530,
     _XSLT_COPY_OF_ = 531,
     _XSLT_COPY_ = 532,
     _XSLT_FOR_EACH_ = 533,
     _XSLT_OUTPUT_ = 534,
     _XSLT_IMPORT_SCHEMA_ = 535,
     _XSLT_VERSION_ = 536,
     _XSLT_MODE_ = 537,
     _XSLT_NAME_ = 538,
     _XSLT_DOCTYPE_PUBLIC_ = 539,
     _XSLT_DOCTYPE_SYSTEM_ = 540,
     _XSLT_ENCODING_ = 541,
     _XSLT_MEDIA_TYPE_ = 542,
     _XSLT_NORMALIZATION_FORM_ = 543,
     _XSLT_STANDALONE_ = 544,
     _XSLT_EXCLUDE_RESULT_PREFIXES_ = 545,
     _XSLT_NAMESPACE_STR_ = 546,
     _XSLT_SCHEMA_LOCATION_ = 547,
     _XSLT_TUNNEL_ = 548,
     _XSLT_REQUIRED_ = 549,
     _XSLT_OVERRIDE_ = 550,
     _XSLT_COPY_NAMESPACES_ = 551,
     _XSLT_INHERIT_NAMESPACES_ = 552,
     _XSLT_BYTE_ORDER_MARK_ = 553,
     _XSLT_ESCAPE_URI_ATTRIBUTES_ = 554,
     _XSLT_INCLUDE_CONTENT_TYPE_ = 555,
     _XSLT_INDENT_ = 556,
     _XSLT_OMIT_XML_DECLARATION_ = 557,
     _XSLT_UNDECLARE_PREFIXES_ = 558,
     _XSLT_MATCH_ = 559,
     _XSLT_AS_ = 560,
     _XSLT_SELECT_ = 561,
     _XSLT_PRIORITY_ = 562,
     _XSLT_TEST_ = 563,
     _XSLT_SEPARATOR_ = 564,
     _XSLT_NAMESPACE_A_ = 565,
     _XSLT_REGEX_ = 566,
     _XSLT_FLAGS_ = 567,
     _XSLT_METHOD_ = 568,
     _XSLT_CDATA_SECTION_ELEMENTS_ = 569,
     _XSLT_USE_CHARACTER_MAPS_ = 570,
     _XSLT_ELEMENT_NAME_ = 571,
     _XSLT_XMLNS_ATTR_ = 572,
     _XSLT_ATTR_NAME_ = 573,
     _XSLT_TEXT_NODE_ = 574,
     _XSLT_WS_TEXT_NODE_ = 575,
     _HASH_DEFAULT_ = 576,
     _HASH_ALL_ = 577,
     _HASH_CURRENT_ = 578,
     _XML_ = 579,
     _HTML_ = 580,
     _XHTML_ = 581
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
#define _LANG_FUNCDECL_ 264
#define _LANG_DELAYEDMODULE_ 265
#define _LANG_FUNCTION_SIGNATURE_ 266
#define _DOLLAR_ 267
#define _COLON_EQUALS_ 268
#define _ASTERISK_ 269
#define _BAR_ 270
#define _BANG_EQUALS_ 271
#define _LESS_THAN_EQUALS_ 272
#define _GREATER_THAN_ 273
#define _GREATER_THAN_EQUALS_ 274
#define _LESS_THAN_LESS_THAN_ 275
#define _GREATER_THAN_GREATER_THAN_ 276
#define _COLON_COLON_ 277
#define _AT_SIGN_ 278
#define _LSQUARE_ 279
#define _RSQUARE_ 280
#define _QUESTION_MARK_ 281
#define _LESS_THAN_OP_OR_TAG_ 282
#define _START_TAG_CLOSE_ 283
#define _END_TAG_CLOSE_ 284
#define _PI_START_ 285
#define _XML_COMMENT_START_ 286
#define _XML_COMMENT_END_ 287
#define _SLASH_SLASH_ 288
#define _END_TAG_OPEN_ 289
#define _PRAGMA_OPEN_ 290
#define _COMMA_ 291
#define _PLUS_ 292
#define _MINUS_ 293
#define _SLASH_ 294
#define _EQUALS_ 295
#define _DOT_ 296
#define _DOT_DOT_ 297
#define _LPAR_ 298
#define _RPAR_ 299
#define _EMPTY_TAG_CLOSE_ 300
#define _VALUE_INDICATOR_ 301
#define _OPEN_QUOT_ 302
#define _CLOSE_QUOT_ 303
#define _OPEN_APOS_ 304
#define _CLOSE_APOS_ 305
#define _LBRACE_ 306
#define _RBRACE_ 307
#define _SEMICOLON_ 308
#define _HASH_ 309
#define _INTEGER_LITERAL_ 310
#define _DECIMAL_LITERAL_ 311
#define _DOUBLE_LITERAL_ 312
#define _ATTRIBUTE_ 313
#define _COMMENT_ 314
#define _DOCUMENT_NODE_ 315
#define _NAMESPACE_NODE_ 316
#define _NODE_ 317
#define _PROCESSING_INSTRUCTION_ 318
#define _SCHEMA_ATTRIBUTE_ 319
#define _SCHEMA_ELEMENT_ 320
#define _TEXT_ 321
#define _EMPTY_SEQUENCE_ 322
#define _BOUNDARY_SPACE_ 323
#define _FT_OPTION_ 324
#define _BASE_URI_ 325
#define _LAX_ 326
#define _STRICT_ 327
#define _IDIV_ 328
#define _CHILD_ 329
#define _DESCENDANT_ 330
#define _SELF_ 331
#define _DESCENDANT_OR_SELF_ 332
#define _FOLLOWING_SIBLING_ 333
#define _FOLLOWING_ 334
#define _PARENT_ 335
#define _ANCESTOR_ 336
#define _PRECEDING_SIBLING_ 337
#define _PRECEDING_ 338
#define _ANCESTOR_OR_SELF_ 339
#define _DOCUMENT_ 340
#define _NOT_ 341
#define _USING_ 342
#define _NO_ 343
#define _SENSITIVE_ 344
#define _INSENSITIVE_ 345
#define _DIACRITICS_ 346
#define _WITHOUT_ 347
#define _WITHOUT_C_ 348
#define _STEMMING_ 349
#define _THESAURUS_ 350
#define _STOP_ 351
#define _WILDCARDS_ 352
#define _ENTIRE_ 353
#define _CONTENT_ 354
#define _WORD_ 355
#define _TYPE_ 356
#define _START_ 357
#define _END_ 358
#define _MOST_ 359
#define _SKIP_ 360
#define _COPY_ 361
#define _VALUE_ 362
#define _WHITESPACE_ 363
#define _PI_CONTENT_ 364
#define _XML_COMMENT_CONTENT_ 365
#define _EQ_ 366
#define _NE_ 367
#define _LT_ 368
#define _LE_ 369
#define _GT_ 370
#define _GE_ 371
#define _AT_ 372
#define _QUOT_ATTR_CONTENT_ 373
#define _APOS_ATTR_CONTENT_ 374
#define _WHITESPACE_ELEMENT_CONTENT_ 375
#define _ELEMENT_CONTENT_ 376
#define _AT_LM_ 377
#define _ORDERED_ 378
#define _UNORDERED_ 379
#define _QNAME_ 380
#define _XMLNS_QNAME_ 381
#define _CONSTR_QNAME_ 382
#define _STRING_LITERAL_ 383
#define _VARIABLE_ 384
#define _NCNAME_COLON_STAR_ 385
#define _STAR_COLON_NCNAME_ 386
#define _PI_TARGET_ 387
#define _PRAGMA_CONTENT_ 388
#define _RETURN_ 389
#define _FOR_ 390
#define _IN_ 391
#define _LET_ 392
#define _WHERE_ 393
#define _COUNT_ 394
#define _BY_ 395
#define _ORDER_ 396
#define _STABLE_ 397
#define _ASCENDING_ 398
#define _DESCENDING_ 399
#define _EMPTY_ 400
#define _GREATEST_ 401
#define _LEAST_ 402
#define _COLLATION_ 403
#define _SOME_ 404
#define _EVERY_ 405
#define _SATISFIES_ 406
#define _TYPESWITCH_ 407
#define _CASE_ 408
#define _CASE_S_ 409
#define _AS_ 410
#define _IF_ 411
#define _THEN_ 412
#define _ELSE_ 413
#define _OR_ 414
#define _AND_ 415
#define _INSTANCE_ 416
#define _OF_ 417
#define _CASTABLE_ 418
#define _TO_ 419
#define _DIV_ 420
#define _MOD_ 421
#define _UNION_ 422
#define _INTERSECT_ 423
#define _EXCEPT_ 424
#define _VALIDATE_ 425
#define _CAST_ 426
#define _TREAT_ 427
#define _IS_ 428
#define _PRESERVE_ 429
#define _STRIP_ 430
#define _NAMESPACE_ 431
#define _ITEM_ 432
#define _EXTERNAL_ 433
#define _ENCODING_ 434
#define _NO_PRESERVE_ 435
#define _INHERIT_ 436
#define _NO_INHERIT_ 437
#define _DECLARE_ 438
#define _CONSTRUCTION_ 439
#define _ORDERING_ 440
#define _DEFAULT_ 441
#define _COPY_NAMESPACES_ 442
#define _OPTION_ 443
#define _XQUERY_ 444
#define _VERSION_ 445
#define _IMPORT_ 446
#define _SCHEMA_ 447
#define _MODULE_ 448
#define _ELEMENT_ 449
#define _FUNCTION_ 450
#define _FUNCTION_EXT_ 451
#define _SCORE_ 452
#define _CONTAINS_ 453
#define _WEIGHT_ 454
#define _WINDOW_ 455
#define _DISTANCE_ 456
#define _OCCURS_ 457
#define _TIMES_ 458
#define _SAME_ 459
#define _DIFFERENT_ 460
#define _LOWERCASE_ 461
#define _UPPERCASE_ 462
#define _RELATIONSHIP_ 463
#define _LEVELS_ 464
#define _LANGUAGE_ 465
#define _ANY_ 466
#define _ALL_ 467
#define _PHRASE_ 468
#define _EXACTLY_ 469
#define _FROM_ 470
#define _WORDS_ 471
#define _SENTENCES_ 472
#define _PARAGRAPHS_ 473
#define _SENTENCE_ 474
#define _PARAGRAPH_ 475
#define _REPLACE_ 476
#define _MODIFY_ 477
#define _FIRST_ 478
#define _INSERT_ 479
#define _BEFORE_ 480
#define _AFTER_ 481
#define _REVALIDATION_ 482
#define _WITH_ 483
#define _NODES_ 484
#define _RENAME_ 485
#define _LAST_ 486
#define _DELETE_ 487
#define _INTO_ 488
#define _UPDATING_ 489
#define _ID_ 490
#define _KEY_ 491
#define _TEMPLATE_ 492
#define _MATCHES_ 493
#define _NAME_ 494
#define _CALL_ 495
#define _APPLY_ 496
#define _TEMPLATES_ 497
#define _MODE_ 498
#define _FTOR_ 499
#define _FTAND_ 500
#define _FTNOT_ 501
#define _PRIVATE_ 502
#define _PUBLIC_ 503
#define _DETERMINISTIC_ 504
#define _NONDETERMINISTIC_ 505
#define _XSLT_END_ELEMENT_ 506
#define _XSLT_STYLESHEET_ 507
#define _XSLT_TEMPLATE_ 508
#define _XSLT_VALUE_OF_ 509
#define _XSLT_TEXT_ 510
#define _XSLT_APPLY_TEMPLATES_ 511
#define _XSLT_CALL_TEMPLATE_ 512
#define _XSLT_WITH_PARAM_ 513
#define _XSLT_SEQUENCE_ 514
#define _XSLT_PARAM_ 515
#define _XSLT_FUNCTION_ 516
#define _XSLT_CHOOSE_ 517
#define _XSLT_WHEN_ 518
#define _XSLT_OTHERWISE_ 519
#define _XSLT_IF_ 520
#define _XSLT_VARIABLE_ 521
#define _XSLT_COMMENT_ 522
#define _XSLT_PI_ 523
#define _XSLT_DOCUMENT_ 524
#define _XSLT_ATTRIBUTE_ 525
#define _XSLT_NAMESPACE_ 526
#define _XSLT_ELEMENT_ 527
#define _XSLT_ANALYZE_STRING_ 528
#define _XSLT_MATCHING_SUBSTRING_ 529
#define _XSLT_NON_MATCHING_SUBSTRING_ 530
#define _XSLT_COPY_OF_ 531
#define _XSLT_COPY_ 532
#define _XSLT_FOR_EACH_ 533
#define _XSLT_OUTPUT_ 534
#define _XSLT_IMPORT_SCHEMA_ 535
#define _XSLT_VERSION_ 536
#define _XSLT_MODE_ 537
#define _XSLT_NAME_ 538
#define _XSLT_DOCTYPE_PUBLIC_ 539
#define _XSLT_DOCTYPE_SYSTEM_ 540
#define _XSLT_ENCODING_ 541
#define _XSLT_MEDIA_TYPE_ 542
#define _XSLT_NORMALIZATION_FORM_ 543
#define _XSLT_STANDALONE_ 544
#define _XSLT_EXCLUDE_RESULT_PREFIXES_ 545
#define _XSLT_NAMESPACE_STR_ 546
#define _XSLT_SCHEMA_LOCATION_ 547
#define _XSLT_TUNNEL_ 548
#define _XSLT_REQUIRED_ 549
#define _XSLT_OVERRIDE_ 550
#define _XSLT_COPY_NAMESPACES_ 551
#define _XSLT_INHERIT_NAMESPACES_ 552
#define _XSLT_BYTE_ORDER_MARK_ 553
#define _XSLT_ESCAPE_URI_ATTRIBUTES_ 554
#define _XSLT_INCLUDE_CONTENT_TYPE_ 555
#define _XSLT_INDENT_ 556
#define _XSLT_OMIT_XML_DECLARATION_ 557
#define _XSLT_UNDECLARE_PREFIXES_ 558
#define _XSLT_MATCH_ 559
#define _XSLT_AS_ 560
#define _XSLT_SELECT_ 561
#define _XSLT_PRIORITY_ 562
#define _XSLT_TEST_ 563
#define _XSLT_SEPARATOR_ 564
#define _XSLT_NAMESPACE_A_ 565
#define _XSLT_REGEX_ 566
#define _XSLT_FLAGS_ 567
#define _XSLT_METHOD_ 568
#define _XSLT_CDATA_SECTION_ELEMENTS_ 569
#define _XSLT_USE_CHARACTER_MAPS_ 570
#define _XSLT_ELEMENT_NAME_ 571
#define _XSLT_XMLNS_ATTR_ 572
#define _XSLT_ATTR_NAME_ 573
#define _XSLT_TEXT_NODE_ 574
#define _XSLT_WS_TEXT_NODE_ 575
#define _HASH_DEFAULT_ 576
#define _HASH_ALL_ 577
#define _HASH_CURRENT_ 578
#define _XML_ 579
#define _HTML_ 580
#define _XHTML_ 581




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
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



