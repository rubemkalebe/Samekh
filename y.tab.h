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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 45 "parser.y" /* yacc.c:1909  */

  typedef struct {
    char* type;     /* type associated */
    char* lexeme;   /* lexame -- string */
  } nodeType;

#line 51 "y.tab.h" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    ASSIGN = 259,
    ASSIGN_PLUS = 260,
    ASSIGN_MINUS = 261,
    ASSIGN_PRODUCT = 262,
    ASSIGN_DIV = 263,
    ASSIGN_MOD = 264,
    ASSIGN_BITWISE_AND = 265,
    ASSIGN_BITWISE_OR = 266,
    ASSIGN_BITWISE_OR_EXC = 267,
    ASSIGN_L_SHIFT = 268,
    ASSIGN_R_SHIFT = 269,
    AMPERSAND = 270,
    AUTO = 271,
    BOOL = 272,
    BREAK = 273,
    BITWISE_COMPLEMENT = 274,
    BITWISE_OR = 275,
    BITWISE_OR_EXC = 276,
    DOT = 277,
    CHAR = 278,
    COMMA = 279,
    CONTINUE = 280,
    CONST = 281,
    ENUM = 282,
    ELSE = 283,
    ELSIF = 284,
    FLOAT = 285,
    FOR = 286,
    IF = 287,
    INT = 288,
    L_PAREN = 289,
    L_SQ_PAREN = 290,
    L_BRACE = 291,
    L_SHIFT = 292,
    LOG_NOT = 293,
    LOG_AND = 294,
    LOG_OR = 295,
    LOG_SC_AND = 296,
    LOG_SC_OR = 297,
    LONG = 298,
    OP_EQ = 299,
    OP_NE = 300,
    OP_PTR = 301,
    OP_PLUS = 302,
    OP_MINUS = 303,
    OP_ASTERISK = 304,
    OP_DIV = 305,
    OP_MOD = 306,
    OP_LET = 307,
    OP_LT = 308,
    OP_GET = 309,
    OP_GT = 310,
    PRINT = 311,
    PRINTLN = 312,
    R_PAREN = 313,
    R_SQ_PAREN = 314,
    R_BRACE = 315,
    R_SHIFT = 316,
    STRING = 317,
    STRUCT = 318,
    STATIC = 319,
    SIZEOF = 320,
    READ = 321,
    RETURN = 322,
    SEMICOLON = 323,
    UNION = 324,
    WHILE = 325,
    CASE = 326,
    END_CASE = 327,
    END_ENUM = 328,
    END_FOR = 329,
    END_FUNCTION = 330,
    END_IF = 331,
    END_PROCEDURE = 332,
    END_STRUCT = 333,
    END_UNION = 334,
    END_WHILE = 335,
    FUNCTION = 336,
    PROCEDURE = 337,
    THEN = 338,
    TYPEOF = 339,
    WHEN = 340,
    STRING_LITERAL = 341,
    DECIMAL = 342,
    HEX = 343,
    OCTAL = 344,
    FLOATING_POINT = 345,
    BOOL_LITERAL = 346,
    NNULL = 347
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define ASSIGN 259
#define ASSIGN_PLUS 260
#define ASSIGN_MINUS 261
#define ASSIGN_PRODUCT 262
#define ASSIGN_DIV 263
#define ASSIGN_MOD 264
#define ASSIGN_BITWISE_AND 265
#define ASSIGN_BITWISE_OR 266
#define ASSIGN_BITWISE_OR_EXC 267
#define ASSIGN_L_SHIFT 268
#define ASSIGN_R_SHIFT 269
#define AMPERSAND 270
#define AUTO 271
#define BOOL 272
#define BREAK 273
#define BITWISE_COMPLEMENT 274
#define BITWISE_OR 275
#define BITWISE_OR_EXC 276
#define DOT 277
#define CHAR 278
#define COMMA 279
#define CONTINUE 280
#define CONST 281
#define ENUM 282
#define ELSE 283
#define ELSIF 284
#define FLOAT 285
#define FOR 286
#define IF 287
#define INT 288
#define L_PAREN 289
#define L_SQ_PAREN 290
#define L_BRACE 291
#define L_SHIFT 292
#define LOG_NOT 293
#define LOG_AND 294
#define LOG_OR 295
#define LOG_SC_AND 296
#define LOG_SC_OR 297
#define LONG 298
#define OP_EQ 299
#define OP_NE 300
#define OP_PTR 301
#define OP_PLUS 302
#define OP_MINUS 303
#define OP_ASTERISK 304
#define OP_DIV 305
#define OP_MOD 306
#define OP_LET 307
#define OP_LT 308
#define OP_GET 309
#define OP_GT 310
#define PRINT 311
#define PRINTLN 312
#define R_PAREN 313
#define R_SQ_PAREN 314
#define R_BRACE 315
#define R_SHIFT 316
#define STRING 317
#define STRUCT 318
#define STATIC 319
#define SIZEOF 320
#define READ 321
#define RETURN 322
#define SEMICOLON 323
#define UNION 324
#define WHILE 325
#define CASE 326
#define END_CASE 327
#define END_ENUM 328
#define END_FOR 329
#define END_FUNCTION 330
#define END_IF 331
#define END_PROCEDURE 332
#define END_STRUCT 333
#define END_UNION 334
#define END_WHILE 335
#define FUNCTION 336
#define PROCEDURE 337
#define THEN 338
#define TYPEOF 339
#define WHEN 340
#define STRING_LITERAL 341
#define DECIMAL 342
#define HEX 343
#define OCTAL 344
#define FLOATING_POINT 345
#define BOOL_LITERAL 346
#define NNULL 347

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 52 "parser.y" /* yacc.c:1909  */

	char* lexeme;
  nodeType node;

#line 252 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
