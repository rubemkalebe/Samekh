/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 7 "parser.y" /* yacc.c:339  */

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

extern char *yytext;
extern int yylineno;

extern "C" {
  int yyparse(void);

  int yylex(void);

  void yyerror(const char *s);
}

#line 84 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
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
#line 25 "parser.y" /* yacc.c:355  */

	int iValue; 	/* integer value */
	char cValue;	/* char value */
  char bValue;  /* bool value */
	char *sValue;	/* string value */

#line 227 "parser.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 242 "parser.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  38
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   467

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  146
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  217

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   350

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      95
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    64,    64,    68,    72,    73,    77,    78,    79,    83,
      84,    85,    89,    90,    94,    95,    99,   100,   104,   105,
     109,   110,   114,   115,   119,   120,   124,   125,   129,   130,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   151,
     154,   156,   160,   161,   165,   166,   170,   171,   175,   176,
     177,   181,   182,   183,   186,   190,   195,   196,   200,   201,
     205,   209,   213,   217,   218,   222,   223,   227,   228,   232,
     236,   237,   241,   242,   246,   247,   251,   252,   253,   257,
     258,   259,   263,   264,   268,   269,   273,   274,   278,   279,
     280,   284,   285,   286,   287,   288,   289,   293,   294,   295,
     299,   300,   301,   305,   306,   307,   308,   312,   313,   314,
     315,   319,   320,   324,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   342,   346,   347,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   363,   364,   368,
     369,   373,   374,   378,   379,   383,   384
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ASSIGN", "ASSIGN_PLUS", "ASSIGN_MINUS",
  "ASSIGN_PRODUCT", "ASSIGN_DIV", "ASSIGN_MOD", "ASSIGN_BITWISE_AND",
  "ASSIGN_BITWISE_OR", "ASSIGN_BITWISE_OR_EXC", "ASSIGN_L_SHIFT",
  "ASSIGN_R_SHIFT", "AMPERSAND", "AUTO", "BOOL", "BOOL_LITERAL", "BREAK",
  "BYTE", "BITWISE_COMPLEMENT", "BITWISE_OR", "BITWISE_OR_EXC", "CASE",
  "CHAR", "COMMA", "CONTINUE", "CONST", "DECIMAL", "DO", "DOT", "DOUBLE",
  "ENUM", "ELSE", "ELSIF", "END_CASE", "END_ENUM", "END_FOR",
  "END_FUNCTION", "END_IF", "END_PROCEDURE", "END_STRUCT", "END_UNION",
  "END_WHILE", "FLOAT", "FOR", "FUNCTION", "FLOATING_POINT", "HEX",
  "IDENTIFIER", "IF", "INT", "L_PAREN", "L_SQ_PAREN", "L_BRACE", "L_SHIFT",
  "LOG_NOT", "LOG_AND", "LOG_OR", "LOG_SC_AND", "LOG_SC_OR", "LONG",
  "NNULL", "OP_EQ", "OP_NE", "OP_PTR", "OP_PLUS", "OP_MINUS",
  "OP_ASTERISK", "OP_DIV", "OP_MOD", "OP_LET", "OP_LT", "OP_GET", "OP_GT",
  "OCTAL", "PRINT", "PRINTLN", "PROCEDURE", "READ", "RETURN", "R_PAREN",
  "R_SQ_PAREN", "R_BRACE", "R_SHIFT", "SHORT", "STRING", "STRING_LITERAL",
  "STRUCT", "STATIC", "SIZEOF", "SEMICOLON", "TYPEOF", "UNION", "WHEN",
  "WHILE", "$accept", "translation_unit", "program_file", "declarations",
  "declaration", "type_declaration", "field_declarations",
  "field_declaration", "field_variable_declaration", "modifiers",
  "modifier", "type_specifier", "type_name", "dims", "expression_or_empty",
  "primitive_type", "qualified_name", "qualified_name2",
  "variable_declarators", "variable_declarator", "declarator_name",
  "variable_initializer", "array_initializers", "discriminant",
  "union_body", "enumerator_list", "enumerator", "function_declaration",
  "procedure_declaration", "expression", "assignment_expression",
  "unary_expression", "logical_unary_expression", "postfix_expression",
  "primary_expression", "arithmetic_unary_operator",
  "logical_unary_operator", "conditional_or_expression",
  "conditional_and_expression", "inclusive_or_expression",
  "exclusive_or_expression", "and_expression", "equality_expression",
  "relational_expression", "shift_expression", "additive_expression",
  "multiplicative_expression", "cast_expression",
  "primitive_type_expression", "user_type_expression",
  "assignment_operator", "not_just_name", "complex_primary",
  "complex_primary_no_parenthesis", "array_access", "field_access",
  "subprogram_call", "subprogram_access", "argument_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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
     345,   346,   347,   348,   349,   350
};
# endif

#define YYPACT_NINF -105

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-105)))

#define YYTABLE_NINF -145

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      16,  -105,  -105,  -105,  -105,  -105,  -105,  -105,   -32,  -105,
      20,  -105,  -105,  -105,  -105,     8,  -105,    10,    12,  -105,
      16,  -105,  -105,  -105,   -29,   175,  -105,    17,    19,  -105,
    -105,  -105,  -105,    37,    39,  -105,   123,  -105,  -105,  -105,
    -105,  -105,    17,  -105,    71,  -105,     5,   358,    46,   103,
      -1,  -105,    20,   100,  -105,  -105,    71,    17,   304,    21,
    -105,  -105,  -105,  -105,  -105,   218,  -105,  -105,  -105,  -105,
    -105,    25,   -31,  -105,  -105,   453,  -105,    78,  -105,   358,
     380,   -16,    -8,    89,    97,   106,   -38,   -58,   -46,   -37,
       6,  -105,    92,    73,    76,  -105,  -105,  -105,    77,   358,
     358,    37,  -105,  -105,  -105,  -105,    88,  -105,   263,  -105,
    -105,  -105,    19,    -7,    52,    53,    54,  -105,   358,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
     358,    87,  -105,  -105,   358,  -105,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   257,
     358,   358,   358,   358,   358,   358,   358,    91,   358,   317,
      55,  -105,  -105,  -105,  -105,  -105,   -19,    46,   358,    46,
     203,   358,   358,    60,  -105,  -105,    62,    -8,    -8,    89,
      89,    97,   106,   -38,   -58,   -58,   -46,   -46,   -46,   -46,
    -105,   -37,   -37,     6,     6,  -105,  -105,  -105,  -105,    63,
    -105,  -105,   -18,  -105,   304,  -105,    60,  -105,  -105,  -105,
    -105,  -105,  -105,   358,  -105,  -105,  -105
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    60,    30,    31,    32,    61,    20,    33,     0,    34,
      40,    35,    36,    37,    38,     0,    21,     0,     0,     2,
       3,     4,    15,     8,     0,     0,    18,     0,    22,    24,
      25,     6,     7,     0,     0,    39,     0,    54,     1,     5,
      14,    19,     0,    46,    17,    42,    44,    29,    23,    59,
       0,    56,    40,     0,    12,    55,    16,     0,     0,     0,
     128,    74,   130,   132,   131,     0,    75,    72,    73,   129,
     133,     0,    70,    28,    62,   107,    66,    67,    69,     0,
       0,    63,    76,    79,    82,    84,    86,    88,    91,    97,
     100,   103,    71,   125,   127,   134,   135,   136,     0,    29,
       0,     0,    11,    41,     9,    13,     0,    43,     0,    45,
      48,    47,   111,    70,     0,     0,     0,    26,     0,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
       0,     0,   107,    65,     0,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,    57,    10,    49,    51,     0,   112,    29,   113,
     126,     0,     0,     0,    64,   140,     0,    77,    78,    80,
      81,    83,    85,    87,    89,    90,    94,    92,    95,    93,
      96,    98,    99,   101,   102,   104,   105,   106,   139,     0,
     142,   145,     0,    27,    53,    50,     0,   110,   108,   109,
     137,   126,   138,     0,   141,    52,   146
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -105,  -105,  -105,  -105,   126,  -105,  -105,   -26,  -105,  -105,
     128,   -24,  -105,   -76,    49,    93,     3,   104,   117,   105,
    -105,  -104,  -105,  -105,  -105,  -105,    59,  -105,  -105,   -45,
      33,   -47,    -6,  -105,  -105,  -105,  -105,  -105,   -67,   -60,
      29,    24,    28,   -59,   -55,   -56,   -35,   -74,  -105,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    22,    53,    23,    24,    25,
      26,    27,    28,    48,    71,    29,    72,    35,    44,    45,
      46,   109,   166,    55,   106,    50,    51,    31,    32,   110,
      74,   132,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,   115,   116,
     130,    92,    93,    94,    95,    96,    97,    98,   202
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      75,    42,    73,    30,   165,   133,   204,   213,    58,   150,
      54,    75,    38,   145,   146,   147,   148,    33,    75,     1,
     114,  -144,   118,    30,   101,   143,   144,   105,    30,   152,
     153,     2,     3,   135,   149,   102,   167,   169,   151,    30,
       4,     5,   136,     6,   137,  -144,   168,     7,     8,   138,
      34,   139,    75,    75,    73,   161,    30,    36,    59,    37,
       9,    75,    40,   214,   205,    10,    43,    11,   113,   177,
     178,    75,    47,   173,   154,   155,   156,    12,   179,   180,
     195,   196,   197,    75,   184,   185,    49,    75,    52,   176,
     186,   187,   188,   189,   191,   192,    57,   208,   209,    99,
     215,    13,    14,   111,    15,    16,   100,   117,   131,    17,
     140,    75,    75,   199,   201,     2,     3,   193,   194,   141,
     142,    75,   157,   206,     4,   190,   158,     6,  -143,   159,
     163,     7,     8,   170,   171,   172,   175,   203,     2,     3,
     198,   104,   210,   211,     9,   212,    39,     4,   160,    10,
       6,    11,    30,    41,     7,     8,   103,    75,   112,    56,
     162,    12,   107,   174,   207,   182,    75,     9,   216,   181,
     183,     0,    10,     0,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,    14,     0,    15,    16,
       2,     3,     0,    17,     0,     0,     0,     0,     0,     4,
       0,     0,     6,     0,     0,     0,     7,     0,    13,    14,
       0,    15,    16,     0,     0,     0,    17,     0,     0,     9,
      60,     0,     0,    61,    10,     0,    11,     0,     0,     0,
       0,    62,     0,     2,     3,    60,    12,     0,    61,     0,
       0,     0,     4,     0,     0,     0,    62,     0,     0,     7,
      63,    64,    10,     0,     0,   134,     0,     0,     0,    66,
      13,    14,     9,     0,    16,    63,    64,    10,     0,    11,
      65,     0,     2,     3,    66,     0,     0,     0,    69,    12,
      60,     4,     0,    61,    67,    68,     0,     0,     7,     0,
      70,    62,     0,    69,     0,     0,     0,     0,     0,     0,
       0,     9,     0,    13,    14,    70,    10,     0,    11,     0,
      63,    64,    10,     0,     0,    65,     0,   108,    12,    66,
       0,    60,     0,     0,    61,     0,     0,     0,     0,    67,
      68,     0,    62,     0,    60,     0,     0,    61,    69,     0,
       0,     0,    13,    14,     0,    62,   164,     0,     0,     0,
      70,    63,    64,    10,     0,     0,    65,     0,   108,     0,
      66,     0,     0,     0,    63,    64,    10,     0,     0,    65,
      67,    68,     0,    66,     0,    60,     0,     0,    61,    69,
       0,     0,     0,    67,    68,     0,    62,     0,     0,     0,
       0,    70,    69,     0,     0,     0,     0,    60,   200,     0,
      61,     0,     0,     0,    70,    63,    64,    10,    62,     0,
      65,     0,     0,     0,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    67,    68,     0,    63,    64,    10,
       0,     0,   134,    69,     0,     0,    66,     0,     0,     0,
       0,     0,     0,     0,     0,    70,    67,    68,     0,     0,
       0,     0,     0,     0,     0,    69,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,    70
};

static const yytype_int16 yycheck[] =
{
      47,    25,    47,     0,   108,    79,    25,    25,     3,    55,
      36,    58,     0,    71,    72,    73,    74,    49,    65,     3,
      65,    52,    53,    20,    25,    63,    64,    53,    25,    66,
      67,    15,    16,    80,    92,    36,   112,   113,    84,    36,
      24,    25,    58,    27,    60,    52,    53,    31,    32,    57,
      30,    59,    99,   100,    99,   100,    53,    49,    53,    49,
      44,   108,    91,    81,    83,    49,    49,    51,    65,   136,
     137,   118,    53,   118,    68,    69,    70,    61,   138,   139,
     154,   155,   156,   130,   143,   144,    49,   134,    49,   134,
     145,   146,   147,   148,   150,   151,    25,   171,   172,    53,
     204,    85,    86,    82,    88,    89,     3,    82,    30,    93,
      21,   158,   159,   158,   159,    15,    16,   152,   153,    22,
      14,   168,    30,   168,    24,   149,    53,    27,    52,    52,
      42,    31,    32,    81,    81,    81,    49,    82,    15,    16,
      49,    41,    82,    81,    44,    82,    20,    24,    99,    49,
      27,    51,   149,    25,    31,    32,    52,   204,    65,    42,
     101,    61,    57,   130,   170,   141,   213,    44,   213,   140,
     142,    -1,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    85,    86,    -1,    88,    89,
      15,    16,    -1,    93,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    27,    -1,    -1,    -1,    31,    -1,    85,    86,
      -1,    88,    89,    -1,    -1,    -1,    93,    -1,    -1,    44,
      17,    -1,    -1,    20,    49,    -1,    51,    -1,    -1,    -1,
      -1,    28,    -1,    15,    16,    17,    61,    -1,    20,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    28,    -1,    -1,    31,
      47,    48,    49,    -1,    -1,    52,    -1,    -1,    -1,    56,
      85,    86,    44,    -1,    89,    47,    48,    49,    -1,    51,
      52,    -1,    15,    16,    56,    -1,    -1,    -1,    75,    61,
      17,    24,    -1,    20,    66,    67,    -1,    -1,    31,    -1,
      87,    28,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    85,    86,    87,    49,    -1,    51,    -1,
      47,    48,    49,    -1,    -1,    52,    -1,    54,    61,    56,
      -1,    17,    -1,    -1,    20,    -1,    -1,    -1,    -1,    66,
      67,    -1,    28,    -1,    17,    -1,    -1,    20,    75,    -1,
      -1,    -1,    85,    86,    -1,    28,    83,    -1,    -1,    -1,
      87,    47,    48,    49,    -1,    -1,    52,    -1,    54,    -1,
      56,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,    52,
      66,    67,    -1,    56,    -1,    17,    -1,    -1,    20,    75,
      -1,    -1,    -1,    66,    67,    -1,    28,    -1,    -1,    -1,
      -1,    87,    75,    -1,    -1,    -1,    -1,    17,    81,    -1,
      20,    -1,    -1,    -1,    87,    47,    48,    49,    28,    -1,
      52,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    67,    -1,    47,    48,    49,
      -1,    -1,    52,    75,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    87
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    15,    16,    24,    25,    27,    31,    32,    44,
      49,    51,    61,    85,    86,    88,    89,    93,    97,    98,
      99,   100,   101,   103,   104,   105,   106,   107,   108,   111,
     112,   123,   124,    49,    30,   113,    49,    49,     0,   100,
      91,   106,   107,    49,   114,   115,   116,    53,   109,    49,
     121,   122,    49,   102,   103,   119,   114,    25,     3,    53,
      17,    20,    28,    47,    48,    52,    56,    66,    67,    75,
      87,   110,   112,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   147,   148,   149,   150,   151,   152,   153,    53,
       3,    25,    36,   113,    41,   103,   120,   115,    54,   117,
     125,    82,   111,   112,   125,   144,   145,    82,    53,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     146,    30,   127,   143,    52,   127,    58,    60,    57,    59,
      21,    22,    14,    63,    64,    71,    72,    73,    74,    92,
      55,    84,    66,    67,    68,    69,    70,    30,    53,    52,
     110,   125,   122,    42,    83,   117,   118,   109,    53,   109,
      81,    81,    81,   125,   126,    49,   125,   134,   134,   135,
     135,   136,   137,   138,   139,   139,   140,   140,   140,   140,
     107,   141,   141,   142,   142,   143,   143,   143,    49,   125,
      81,   125,   154,    82,    25,    83,   125,   128,   143,   143,
      82,    81,    82,    25,    81,   117,   125
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    98,    99,    99,   100,   100,   100,   101,
     101,   101,   102,   102,   103,   103,   104,   104,   105,   105,
     106,   106,   107,   107,   108,   108,   109,   109,   110,   110,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   112,
     113,   113,   114,   114,   115,   115,   116,   116,   117,   117,
     117,   118,   118,   118,   119,   120,   121,   121,   122,   122,
     123,   124,   125,   126,   126,   127,   127,   128,   128,   129,
     130,   130,   131,   131,   132,   132,   133,   133,   133,   134,
     134,   134,   135,   135,   136,   136,   137,   137,   138,   138,
     138,   139,   139,   139,   139,   139,   139,   140,   140,   140,
     141,   141,   141,   142,   142,   142,   142,   143,   143,   143,
     143,   144,   144,   145,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   147,   148,   148,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   150,   150,   151,
     151,   152,   152,   153,   153,   154,   154
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     1,     1,     4,
       5,     4,     1,     2,     2,     1,     3,     2,     1,     2,
       1,     1,     1,     2,     1,     1,     3,     4,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       0,     3,     1,     3,     1,     3,     1,     3,     1,     2,
       3,     1,     3,     2,     0,     0,     1,     3,     3,     1,
       1,     1,     1,     1,     3,     2,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     4,     4,
       4,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     3,
       3,     4,     3,     1,     1,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      
#line 1565 "parser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
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
  return yyresult;
}
#line 387 "parser.y" /* yacc.c:1906  */


void yyerror(const char *s) {
	fprintf(stderr, "Error: %s at '%s' at line %i.\n", s, yytext, yylineno);
}