/*
 * tokens.h
 *	created by Douglas Braz, Graco Babeuf, Juliano Cardoso, Rubem Kalebe (2015).
 *
 * Valores constantes que representam os tokens da linguagem C+-.
 */

#ifndef TOKENS_H
#define TOKENS_H

/* LITERAIS */

#define DECIMAL 257
#define IDENTIFIER 258
#define REAL 259
#define TRUE 260
#define FALSE 261
#define STR 262
#define HEX 263
#define OCTAL 264

/* TIPOS */

#define BYTE 265
#define BOOL 266
#define SHORT 267
#define INT 268
#define LONG 269
#define FLOAT 270
#define DOUBLE 271
#define CHAR 272
#define STRING 273
#define STRUCT 274
#define UNION 275
#define ENUM 276
#define AUTO 277

/* PALAVRAS RESERVADAS */

#define IF 278
#define ELSIF 279
#define ELSE 280
#define WHILE 281
#define FOR 282
#define RETURN 283
#define PROC 284
#define FUNC 285
#define ENDBLOCK 286
#define ENDCASE 287
#define ENDENUM 288
#define ENDFOR 289
#define ENDFUNC 290
#define ENDIF 291
#define ENDPROC 292
#define ENDSTRUCT 293
#define ENDUNION 294
#define ENDWHILE 295
#define BREAK 296
#define CONT 297
#define DO 298
#define CASE 299
#define WHEN 300
#define CONST 301
#define STATIC 302
#define SIZEOF 303
#define TYPEOF 304
#define PRINT 305
#define PRINTLN 306
#define READ 307
#define NNULL 308

/* OPERADORES */

#define ASSIGN 309
#define LT 310
#define GT 311
#define LET 312
#define GET 313
#define EQ 314
#define DIFF 315
#define PLUS 316
#define MINUS 317
#define ASTERISK 318
#define DIV 319
#define MOD 320
#define PLUSASSIGN 321
#define MINUSASSIGN 322
#define PRODUCTASSIGN 323
#define DIVASSIGN 324
#define MODASSIGN 325
#define NOT 326
#define AND 327
#define OR 328
#define SCAND 329
#define SCOR 330
#define COMPLEMENT 331
#define AMPERSAND 332
#define BANDASSIGN 333
#define BOR 334
#define BORASSIGN 335
#define BOREXC 336
#define BOREXCASSIGN 337
#define LSHIFT 338
#define LSHIFTASSIGN 339
#define RSHIFT 340
#define RSHIFTASSIGN 341

/* PONTUAÇÃO */

#define SEMICOLON 342
#define DOT 343
#define COMMA 344

/* DELIMITADORES */

#define LPAREN 345
#define RPAREN 346
#define LSQPAREN 347
#define RSQPAREN 348
#define LBRACE 349
#define RBRACE 350

#endif // TOKENS_H