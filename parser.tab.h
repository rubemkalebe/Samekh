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
    BOOL_LITERAL = 272,
    BREAK = 273,
    BYTE = 274,
    BITWISE_COMPLEMENT = 275,
    BITWISE_OR = 276,
    BITWISE_OR_EXC = 277,
    CASE = 278,
    CHAR = 279,
    COMMA = 280,
    CONTINUE = 281,
    CONST = 282,
    DECIMAL = 283,
    DO = 284,
    DOT = 285,
    DOUBLE = 286,
    ENUM = 287,
    ELSE = 288,
    ELSIF = 289,
    END_CASE = 290,
    END_ENUM = 291,
    END_FOR = 292,
    END_FUNCTION = 293,
    END_IF = 294,
    END_PROCEDURE = 295,
    END_STRUCT = 296,
    END_UNION = 297,
    END_WHILE = 298,
    FLOAT = 299,
    FOR = 300,
    FUNCTION = 301,
    FLOATING_POINT = 302,
    HEX = 303,
    IDENTIFIER = 304,
    IF = 305,
    INT = 306,
    L_PAREN = 307,
    L_SQ_PAREN = 308,
    L_BRACE = 309,
    L_SHIFT = 310,
    LOG_NOT = 311,
    LOG_AND = 312,
    LOG_OR = 313,
    LOG_SC_AND = 314,
    LOG_SC_OR = 315,
    LONG = 316,
    NNULL = 317,
    OP_EQ = 318,
    OP_NE = 319,
    OP_PTR = 320,
    OP_PLUS = 321,
    OP_MINUS = 322,
    OP_ASTERISK = 323,
    OP_DIV = 324,
    OP_MOD = 325,
    OP_LET = 326,
    OP_LT = 327,
    OP_GET = 328,
    OP_GT = 329,
    OCTAL = 330,
    PRINT = 331,
    PRINTLN = 332,
    PROCEDURE = 333,
    READ = 334,
    RETURN = 335,
    R_PAREN = 336,
    R_SQ_PAREN = 337,
    R_BRACE = 338,
    R_SHIFT = 339,
    SHORT = 340,
    STRING = 341,
    STRING_LITERAL = 342,
    STRUCT = 343,
    STATIC = 344,
    SIZEOF = 345,
    SEMICOLON = 346,
    TYPEOF = 347,
    UNION = 348,
    WHEN = 349,
    WHILE = 350
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 25 "parser.y" /* yacc.c:1909  */

	int iValue; 	/* integer value */
	char cValue;	/* char value */
  char bValue;  /* bool value */
	char *sValue;	/* string value */

#line 157 "parser.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
