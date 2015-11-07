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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    IDENTIFIER = 258,
    STRING_LITERAL = 259,
    DECIMAL = 260,
    HEX = 261,
    OCTAL = 262,
    FLOATING_POINT = 263,
    BOOL_LITERAL = 264,
    CHAR_LITERAL = 265,
    ASSIGN = 266,
    ASSIGN_PLUS = 267,
    ASSIGN_MINUS = 268,
    ASSIGN_PRODUCT = 269,
    ASSIGN_DIV = 270,
    ASSIGN_MOD = 271,
    ASSIGN_BITWISE_AND = 272,
    ASSIGN_BITWISE_OR = 273,
    ASSIGN_BITWISE_OR_EXC = 274,
    ASSIGN_L_SHIFT = 275,
    ASSIGN_R_SHIFT = 276,
    AMPERSAND = 277,
    AUTO = 278,
    BOOL = 279,
    BREAK = 280,
    BYTE = 281,
    BITWISE_COMPLEMENT = 282,
    BITWISE_OR = 283,
    BITWISE_OR_EXC = 284,
    CASE = 285,
    CHAR = 286,
    COMMA = 287,
    CONTINUE = 288,
    CONST = 289,
    DO = 290,
    DOT = 291,
    DOUBLE = 292,
    ENUM = 293,
    ELSE = 294,
    ELSIF = 295,
    END_CASE = 296,
    END_ENUM = 297,
    END_FOR = 298,
    END_FUNCTION = 299,
    END_IF = 300,
    END_PROCEDURE = 301,
    END_STRUCT = 302,
    END_UNION = 303,
    END_WHILE = 304,
    FLOAT = 305,
    FOR = 306,
    FUNCTION = 307,
    IF = 308,
    INT = 309,
    L_PAREN = 310,
    L_SQ_PAREN = 311,
    L_BRACE = 312,
    L_SHIFT = 313,
    LOG_NOT = 314,
    LOG_AND = 315,
    LOG_OR = 316,
    LOG_SC_AND = 317,
    LOG_SC_OR = 318,
    LONG = 319,
    NNULL = 320,
    OP_EQ = 321,
    OP_NE = 322,
    OP_PTR = 323,
    OP_PLUS = 324,
    OP_MINUS = 325,
    OP_ASTERISK = 326,
    OP_DIV = 327,
    OP_MOD = 328,
    OP_LET = 329,
    OP_LT = 330,
    OP_GET = 331,
    OP_GT = 332,
    PRINT = 333,
    PRINTLN = 334,
    PROCEDURE = 335,
    READ = 336,
    RETURN = 337,
    R_PAREN = 338,
    R_SQ_PAREN = 339,
    R_BRACE = 340,
    R_SHIFT = 341,
    SHORT = 342,
    STRING = 343,
    STRUCT = 344,
    STATIC = 345,
    SIZEOF = 346,
    SEMICOLON = 347,
    TYPEOF = 348,
    UNION = 349,
    WHEN = 350,
    WHILE = 351
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 27 "parser.y" /* yacc.c:1909  */

	int iValue; 	  /* integer value */
	char cValue;	  /* char value */
  char bValue;    /* bool value */
	char *sValue;	  /* string value */
  double fValue;  /* floating point value */

#line 159 "parser.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
