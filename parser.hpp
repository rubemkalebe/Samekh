/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ASSIGN = 258,
    ASSIGN_PLUS = 259,
    ASSIGN_MINUS = 260,
    ASSIGN_PRODUCT = 261,
    ASSIGN_DIV = 262,
    ASSIGN_MOD = 263,
    ASSIGN_BITWISE_AND = 264,
    ASSIGN_BITWISE_OR = 265,
    ASSIGN_BITWISE_OR_EXC = 266,
    ASSIGN_L_SHIFT = 267,
    ASSIGN_R_SHIFT = 268,
    AMPERSAND = 269,
    AUTO = 270,
    BOOL = 271,
    BREAK = 272,
    BYTE = 273,
    BITWISE_COMPLEMENT = 274,
    BITWISE_OR = 275,
    BITWISE_OR_EXC = 276,
    CASE = 277,
    CHAR = 278,
    COMMA = 279,
    CONTINUE = 280,
    CONST = 281,
    DECIMAL = 282,
    DO = 283,
    DOT = 284,
    DOUBLE = 285,
    ENUM = 286,
    ELSE = 287,
    ELSIF = 288,
    END_CASE = 289,
    END_ENUM = 290,
    END_FOR = 291,
    END_FUNCTION = 292,
    END_IF = 293,
    END_PROCEDURE = 294,
    END_STRUCT = 295,
    END_UNION = 296,
    END_WHILE = 297,
    FALSE = 298,
    FLOAT = 299,
    FOR = 300,
    FUNCTION = 301,
    FLOATING_POINT = 302,
    HEX = 303,
    IF = 304,
    INT = 305,
    L_PAREN = 306,
    L_SQ_PAREN = 307,
    L_BRACE = 308,
    L_SHIFT = 309,
    LOG_NOT = 310,
    LOG_AND = 311,
    LOG_OR = 312,
    LOG_SC_AND = 313,
    LOG_SC_OR = 314,
    LONG = 315,
    NNULL = 316,
    OP_EQ = 317,
    OP_NE = 318,
    OP_PTR = 319,
    OP_PLUS = 320,
    OP_MINUS = 321,
    OP_ASTERISK = 322,
    OP_DIV = 323,
    OP_MOD = 324,
    OP_LET = 325,
    OP_LT = 326,
    OP_GET = 327,
    OP_GT = 328,
    OCTAL = 329,
    PRINT = 330,
    PRINTLN = 331,
    PROCEDURE = 332,
    READ = 333,
    RETURN = 334,
    R_PAREN = 335,
    R_SQ_PAREN = 336,
    R_BRACE = 337,
    R_SHIFT = 338,
    SHORT = 339,
    STRING = 340,
    STRING_LITERAL = 341,
    STRUCT = 342,
    STATIC = 343,
    SIZEOF = 344,
    SEMICOLON = 345,
    TRUE = 346,
    TYPEOF = 347,
    UNION = 348,
    WHEN = 349,
    WHILE = 350
  };
#endif
/* Tokens.  */
#define ASSIGN 258
#define ASSIGN_PLUS 259
#define ASSIGN_MINUS 260
#define ASSIGN_PRODUCT 261
#define ASSIGN_DIV 262
#define ASSIGN_MOD 263
#define ASSIGN_BITWISE_AND 264
#define ASSIGN_BITWISE_OR 265
#define ASSIGN_BITWISE_OR_EXC 266
#define ASSIGN_L_SHIFT 267
#define ASSIGN_R_SHIFT 268
#define AMPERSAND 269
#define AUTO 270
#define BOOL 271
#define BREAK 272
#define BYTE 273
#define BITWISE_COMPLEMENT 274
#define BITWISE_OR 275
#define BITWISE_OR_EXC 276
#define CASE 277
#define CHAR 278
#define COMMA 279
#define CONTINUE 280
#define CONST 281
#define DECIMAL 282
#define DO 283
#define DOT 284
#define DOUBLE 285
#define ENUM 286
#define ELSE 287
#define ELSIF 288
#define END_CASE 289
#define END_ENUM 290
#define END_FOR 291
#define END_FUNCTION 292
#define END_IF 293
#define END_PROCEDURE 294
#define END_STRUCT 295
#define END_UNION 296
#define END_WHILE 297
#define FALSE 298
#define FLOAT 299
#define FOR 300
#define FUNCTION 301
#define FLOATING_POINT 302
#define HEX 303
#define IF 304
#define INT 305
#define L_PAREN 306
#define L_SQ_PAREN 307
#define L_BRACE 308
#define L_SHIFT 309
#define LOG_NOT 310
#define LOG_AND 311
#define LOG_OR 312
#define LOG_SC_AND 313
#define LOG_SC_OR 314
#define LONG 315
#define NNULL 316
#define OP_EQ 317
#define OP_NE 318
#define OP_PTR 319
#define OP_PLUS 320
#define OP_MINUS 321
#define OP_ASTERISK 322
#define OP_DIV 323
#define OP_MOD 324
#define OP_LET 325
#define OP_LT 326
#define OP_GET 327
#define OP_GT 328
#define OCTAL 329
#define PRINT 330
#define PRINTLN 331
#define PROCEDURE 332
#define READ 333
#define RETURN 334
#define R_PAREN 335
#define R_SQ_PAREN 336
#define R_BRACE 337
#define R_SHIFT 338
#define SHORT 339
#define STRING 340
#define STRING_LITERAL 341
#define STRUCT 342
#define STATIC 343
#define SIZEOF 344
#define SEMICOLON 345
#define TRUE 346
#define TYPEOF 347
#define UNION 348
#define WHEN 349
#define WHILE 350

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 19 "parser.y" /* yacc.c:1909  */

	int iValue; 	/* integer value */
	char cValue;	/* char value */
	char *sValue;	/* string value */

#line 250 "parser.hpp" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */
