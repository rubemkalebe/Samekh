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
    DOT = 290,
    DOUBLE = 291,
    ENUM = 292,
    ELSE = 293,
    END_CASE = 294,
    END_ENUM = 295,
    END_FOR = 296,
    END_FUNCTION = 297,
    END_IF = 298,
    END_PROCEDURE = 299,
    END_STRUCT = 300,
    END_UNION = 301,
    END_WHILE = 302,
    FLOAT = 303,
    FOR = 304,
    FUNCTION = 305,
    IF = 306,
    INT = 307,
    L_PAREN = 308,
    L_SQ_PAREN = 309,
    L_BRACE = 310,
    L_SHIFT = 311,
    LOG_NOT = 312,
    LOG_AND = 313,
    LOG_OR = 314,
    LOG_SC_AND = 315,
    LOG_SC_OR = 316,
    LONG = 317,
    NNULL = 318,
    OP_EQ = 319,
    OP_NE = 320,
    OP_PTR = 321,
    OP_PLUS = 322,
    OP_MINUS = 323,
    OP_ASTERISK = 324,
    OP_DIV = 325,
    OP_MOD = 326,
    OP_LET = 327,
    OP_LT = 328,
    OP_GET = 329,
    OP_GT = 330,
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
    STRUCT = 342,
    STATIC = 343,
    SIZEOF = 344,
    SEMICOLON = 345,
    THEN = 346,
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
#line 27 "parser.y" /* yacc.c:1909  */

	int iValue; 	  /* integer value */
	char cValue;	  /* char value */
  char bValue;    /* bool value */
	char *sValue;	  /* string value */
  double fValue;  /* floating point value */

#line 158 "parser.hpp" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */
