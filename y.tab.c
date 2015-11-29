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
#include <fstream>
#include <cstring>
#include "TypesTable.hpp"
#include "SymbolTable.hpp"
#include "PrimitiveTypeEntry.hpp"

using namespace std;

const string fileOutputName = ".output.c";

extern char *yytext;
extern int yylineno;

extern "C" {
  int yyparse(void);

  int yylex(void);

  void yyerror(const char *s);
}

char* getType(string type1, string type2);

SymbolTable *env = new SymbolTable(NULL);

TypesTable typesTable;

ofstream out(fileOutputName.c_str());

string typeToStore = "";


#line 104 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
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
#line 45 "parser.y" /* yacc.c:355  */

  typedef struct {
    char* type;     /* type associated */
    char* lexeme;   /* lexame -- string */
  } nodeType;

#line 141 "y.tab.c" /* yacc.c:355  */

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
#line 52 "parser.y" /* yacc.c:355  */

	char* lexeme;
  nodeType node;

#line 342 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 357 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   851

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  196
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  346

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   347

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
      85,    86,    87,    88,    89,    90,    91,    92
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   105,   105,   111,   115,   126,   130,   131,   132,   133,
     137,   141,   145,   146,   150,   151,   155,   156,   160,   161,
     165,   169,   170,   174,   175,   179,   180,   184,   185,   186,
     187,   188,   189,   190,   194,   195,   196,   200,   201,   202,
     206,   210,   211,   212,   216,   217,   218,   222,   223,   227,
     231,   232,   236,   240,   241,   242,   243,   244,   245,   249,
     250,   254,   258,   262,   263,   264,   268,   269,   273,   274,
     278,   279,   283,   284,   288,   295,   296,   300,   301,   302,
     303,   304,   305,   309,   310,   314,   315,   319,   320,   324,
     338,   339,   343,   347,   348,   352,   356,   357,   361,   371,
     375,   378,   386,   387,   388,   392,   393,   394,   398,   402,
     403,   419,   426,   430,   431,   441,   445,   446,   450,   451,
     455,   456,   460,   461,   462,   478,   479,   480,   496,   497,
     513,   514,   530,   531,   547,   548,   561,   577,   578,   591,
     604,   617,   633,   634,   647,   663,   664,   677,   693,   694,
     707,   714,   724,   725,   732,   739,   749,   750,   754,   758,
     759,   760,   761,   762,   763,   764,   765,   766,   767,   768,
     772,   776,   783,   787,   788,   789,   790,   791,   792,   793,
     794,   795,   796,   800,   801,   805,   809,   810,   814,   815,
     819,   820,   824,   825,   832,   843,   844
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "ASSIGN", "ASSIGN_PLUS",
  "ASSIGN_MINUS", "ASSIGN_PRODUCT", "ASSIGN_DIV", "ASSIGN_MOD",
  "ASSIGN_BITWISE_AND", "ASSIGN_BITWISE_OR", "ASSIGN_BITWISE_OR_EXC",
  "ASSIGN_L_SHIFT", "ASSIGN_R_SHIFT", "AMPERSAND", "AUTO", "BOOL", "BREAK",
  "BITWISE_COMPLEMENT", "BITWISE_OR", "BITWISE_OR_EXC", "DOT", "CHAR",
  "COMMA", "CONTINUE", "CONST", "ENUM", "ELSE", "ELSIF", "FLOAT", "FOR",
  "IF", "INT", "L_PAREN", "L_SQ_PAREN", "L_BRACE", "L_SHIFT", "LOG_NOT",
  "LOG_AND", "LOG_OR", "LOG_SC_AND", "LOG_SC_OR", "LONG", "OP_EQ", "OP_NE",
  "OP_PTR", "OP_PLUS", "OP_MINUS", "OP_ASTERISK", "OP_DIV", "OP_MOD",
  "OP_LET", "OP_LT", "OP_GET", "OP_GT", "PRINT", "PRINTLN", "R_PAREN",
  "R_SQ_PAREN", "R_BRACE", "R_SHIFT", "STRING", "STRUCT", "STATIC",
  "SIZEOF", "READ", "RETURN", "SEMICOLON", "UNION", "WHILE", "CASE",
  "END_CASE", "END_ENUM", "END_FOR", "END_FUNCTION", "END_IF",
  "END_PROCEDURE", "END_STRUCT", "END_UNION", "END_WHILE", "FUNCTION",
  "PROCEDURE", "THEN", "TYPEOF", "WHEN", "STRING_LITERAL", "DECIMAL",
  "HEX", "OCTAL", "FLOATING_POINT", "BOOL_LITERAL", "NNULL", "$accept",
  "translation_unit", "program_file", "declarations", "declaration",
  "function_declaration", "procedure_declaration", "subprogram_declarator",
  "parameter_list", "parameter", "subprogram_body", "block",
  "local_variable_declarations_and_statements",
  "local_variable_declarations_or_statements",
  "local_variable_declaration_statement", "statement",
  "selection_statement", "elsif_staments", "elsif_stament",
  "iteration_statement", "for_init", "for_expr", "for_incr",
  "expression_statements", "expression_statement", "jump_statement",
  "read_statement", "print_statement", "println_statement",
  "type_declaration", "variable_declarations", "variable_declaration",
  "modifiers", "modifier", "type_specifier", "type_name", "primitive_type",
  "discriminant", "enumerator_list", "enumerator", "qualified_name",
  "union_body", "short_case_statement", "choices", "choice",
  "variable_declarators", "variable_declarator", "declarator_name",
  "variable_initializer", "array_initializers", "expression",
  "assignment_expression", "unary_expression", "logical_unary_expression",
  "postfix_expression", "primary_expression", "arithmetic_unary_operator",
  "logical_unary_operator", "conditional_or_expression",
  "conditional_and_expression", "inclusive_or_expression",
  "exclusive_or_expression", "and_expression", "equality_expression",
  "relational_expression", "shift_expression", "additive_expression",
  "multiplicative_expression", "cast_expression",
  "primitive_type_expression", "user_type_expression",
  "assignment_operator", "not_just_name", "complex_primary",
  "complex_primary_no_parenthesis", "array_access", "field_access",
  "subprogram_call", "subprogram_access", "argument_list", "dim_exprs",
  "dim_expr", "dims", YY_NULLPTR
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
     345,   346,   347
};
# endif

#define YYPACT_NINF -193

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-193)))

#define YYTABLE_NINF -190

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     747,  -193,  -193,  -193,  -193,    51,  -193,  -193,  -193,  -193,
      55,  -193,    66,   329,    93,    24,  -193,   747,  -193,  -193,
    -193,  -193,  -193,    81,  -193,   115,  -193,  -193,  -193,   135,
      81,   -30,    93,    10,   322,  -193,  -193,  -193,   115,  -193,
       7,  -193,    21,   138,   -12,  -193,   594,  -193,   329,    81,
     322,   765,     4,  -193,     8,   117,   121,   226,  -193,  -193,
    -193,   147,   154,   329,   158,   496,  -193,   161,  -193,  -193,
    -193,  -193,  -193,  -193,  -193,   126,  -193,   399,  -193,  -193,
    -193,  -193,  -193,  -193,  -193,  -193,  -193,   115,    25,   145,
     829,  -193,   198,  -193,   667,   697,   114,   150,   213,   214,
     225,    78,   132,    89,   -15,    85,  -193,  -193,   211,   215,
    -193,  -193,  -193,   216,    13,   115,  -193,   110,   667,   212,
    -193,   667,   135,  -193,  -193,  -193,   115,   191,   169,   176,
     329,  -193,    42,  -193,   115,   186,  -193,   193,  -193,   464,
     667,   228,    97,   207,  -193,   208,   209,   667,   667,   115,
     184,  -193,   171,   203,   667,  -193,  -193,    14,   667,  -193,
    -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,
    -193,   667,   269,  -193,  -193,   667,  -193,   667,   667,   667,
     667,   667,   667,   667,   667,   667,   667,   667,   667,   667,
     667,   667,   667,   667,   667,   667,   667,   667,   555,  -193,
    -193,   489,  -193,  -193,   217,  -193,  -193,  -193,     6,   272,
    -193,  -193,  -193,   115,   789,  -193,   212,  -193,  -193,  -193,
    -193,   587,    18,  -193,  -193,   219,   223,   243,   633,   243,
       2,   667,   667,   227,   229,    19,    50,  -193,   231,  -193,
     224,  -193,  -193,   232,   150,   150,   213,   213,   214,   225,
      78,   132,   132,    89,    89,    89,    89,   -15,   -15,    85,
      85,  -193,  -193,  -193,   234,  -193,  -193,    75,  -193,  -193,
       5,  -193,  -193,   199,   212,  -193,  -193,   650,   218,   667,
    -193,   399,  -193,   236,  -193,  -193,  -193,   233,   237,  -193,
     667,   238,   399,  -193,  -193,  -193,   667,  -193,   110,  -193,
     288,    40,  -193,   399,   241,   276,  -193,  -193,   -14,  -193,
    -193,  -193,    95,  -193,   222,  -193,  -193,   221,  -193,  -193,
     235,   399,   399,    87,  -193,   240,  -193,    81,  -193,   246,
     220,   399,   667,    -9,  -193,  -193,    81,  -193,  -193,  -193,
     252,   277,  -193,   399,  -193,  -193
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    89,    77,    78,    72,     0,    81,    79,    80,    82,
       0,    73,     0,     0,     0,     0,     2,     3,     4,     6,
       7,     8,     9,     0,    70,     0,    74,    75,    76,     0,
       0,    84,     0,     0,     0,     1,     5,    71,     0,   100,
       0,    96,    98,    88,     0,    85,     0,    66,     0,     0,
       0,     0,     0,   120,     0,     0,     0,     0,   121,   118,
     119,     0,     0,     0,     0,     0,    19,     0,   179,   175,
     176,   174,   177,   173,   178,     0,    18,    20,    21,    23,
      24,    28,    29,    30,    31,    32,    33,     0,   116,     0,
     152,   112,   113,   115,     0,     0,   109,   122,   125,   128,
     130,   132,   134,   137,   142,   145,   148,   117,   170,   172,
     180,   181,   182,     0,     0,     0,    69,     0,     0,   101,
     192,     0,     0,    65,    63,    67,     0,    91,     0,     0,
       0,    13,     0,    14,     0,     0,    54,     0,    56,     0,
       0,   156,   116,     0,   108,     0,     0,     0,     0,     0,
       0,    58,   116,     0,     0,    11,    22,     0,     0,    27,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,     0,     0,   152,   111,     0,   114,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
      97,     0,    99,   102,     0,   193,    87,    86,     0,     0,
      90,    64,    10,     0,     0,    12,    16,    53,    55,    46,
      45,     0,     0,    50,    52,     0,     0,   157,     0,   158,
     171,     0,     0,     0,     0,     0,     0,    57,     0,    25,
       0,   110,   185,     0,   123,   124,   126,   127,   129,   131,
     133,   135,   136,   140,   138,   141,   139,   143,   144,   146,
     147,   149,   150,   151,     0,   187,   190,     0,   103,   105,
       0,   194,    83,     0,    17,    15,    48,     0,     0,     0,
      44,     0,   195,     0,   155,   153,   154,     0,     0,    26,
       0,     0,     0,   183,   171,   184,     0,   186,   107,   104,
       0,     0,    93,     0,     0,    49,    47,    51,     0,   196,
      61,    62,     0,    60,     0,   191,   106,     0,    92,    94,
       0,     0,     0,     0,    36,     0,    41,     0,    43,     0,
       0,     0,     0,     0,    37,    59,    95,    42,    35,    39,
       0,     0,    34,     0,    38,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -193,  -193,  -193,  -193,   306,  -193,  -193,   292,  -193,   112,
     278,   -99,  -193,   253,   190,  -193,  -193,  -193,    -8,  -193,
    -193,  -193,  -193,    57,    56,  -193,  -193,  -193,  -193,  -193,
     -47,     1,  -193,   319,    22,  -193,   287,  -193,  -193,   239,
       0,  -193,  -193,  -193,    49,   -32,   242,  -118,  -192,  -193,
     -38,   -24,   -16,   118,  -193,  -193,  -193,  -193,  -193,    41,
      46,   170,   181,   183,    43,    23,    47,    38,   -91,  -193,
    -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,    74,
    -193,   248,   245
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    18,    19,    20,    34,   132,   133,
      75,    76,    77,    78,    79,    80,    81,   333,   334,    82,
     221,   277,   304,   222,   223,    83,    84,    85,    86,    21,
      46,    47,    23,    24,    87,    26,    27,    49,    44,    45,
     152,   128,   210,   301,   302,    40,    41,    42,   202,   270,
     203,   144,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   145,
     146,   171,   107,   108,   109,   110,   111,   112,   113,   267,
     119,   120,   227
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,    22,   127,   174,    48,     1,   114,   135,   208,   269,
      89,   137,   122,    28,   322,   323,   216,    28,    22,   143,
     341,    53,    25,    28,    35,   117,    89,   153,   -76,   298,
      28,   115,   192,   193,    88,    32,   175,   115,   115,    25,
      58,   118,   279,   115,    51,    38,    28,   125,    28,    28,
      88,    28,    25,    89,    29,   157,   118,   142,    30,  -189,
     158,   123,   324,    28,   272,   299,   214,   342,    25,    31,
     126,    25,   136,   134,   290,   116,   138,    88,   173,   176,
     204,   199,   239,   206,     1,   149,   280,   289,    68,    69,
      70,    71,    72,    73,    74,   274,    33,     2,     3,   296,
     215,   224,   225,   261,   262,   263,   316,     4,   291,   233,
     234,     6,   318,     1,     7,   331,   238,   235,    39,   296,
     240,   332,   184,   185,     8,   300,   190,    28,   125,    53,
      28,  -189,   228,   297,   194,   195,   196,   243,    43,    88,
     285,   286,   121,     9,    57,    11,   201,   241,    58,    25,
     191,   139,   213,   325,   177,   140,   178,    59,    60,   264,
     266,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   147,   308,   278,   186,   187,   188,   189,   148,   179,
     240,   180,   150,   314,     1,   154,    68,    69,    70,    71,
      72,    73,    74,   155,   320,  -189,   158,     2,     3,   253,
     254,   255,   256,   159,    28,   173,   173,     4,   244,   245,
     172,     6,   329,   330,     7,   246,   247,   251,   252,     1,
     259,   260,   339,   181,     8,   182,   134,   257,   258,   224,
     183,   224,     2,     3,   345,    53,   197,   118,   211,  -188,
     198,   212,   266,     9,   217,    11,     6,    89,   315,     7,
      57,   218,   209,   226,    58,   230,   231,   232,    89,     8,
     236,   237,   242,    59,    60,   273,   271,   281,   283,    89,
     336,    88,   282,   293,   300,   287,   306,   288,     9,   292,
     294,   317,    88,   295,   340,   309,   338,    89,    89,   321,
     279,   310,   326,    88,   327,   311,   313,    89,   335,   328,
     343,   332,    68,    69,    70,    71,    72,    73,    74,    89,
     337,    88,    88,    36,    50,     1,   275,    28,   129,   220,
     156,    88,     1,   344,   305,   307,    28,   125,     2,     3,
      52,    53,    37,    88,   141,     2,     3,    54,   284,    25,
     319,   248,     6,    55,    56,     7,    57,   200,    25,     6,
      58,   207,     7,   249,   312,     8,   250,   205,     0,    59,
      60,     0,     8,     0,     0,     0,     0,     0,    61,    62,
       0,     0,     0,     0,     9,     0,    63,   229,    64,    65,
      66,     9,    67,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,    68,    69,
      70,    71,    72,    73,    74,     2,     3,    52,    53,     0,
       0,     0,     0,     0,    54,     0,     0,     0,     0,     6,
      55,    56,     7,    57,     0,     0,     0,    58,     0,     0,
       0,     0,     8,     0,     0,     0,    59,    60,     0,     0,
       0,     0,     0,     0,     0,    61,    62,     0,     0,     0,
       0,     9,     0,    63,     0,    64,    65,     1,     0,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     3,     0,    53,     0,    68,    69,    70,    71,    72,
      73,    74,     1,     0,     6,     0,     0,     7,    57,     1,
       0,     0,    58,     0,     0,     0,     0,     8,    53,     0,
       0,    59,    60,     0,     0,    53,     0,     0,     0,     0,
       0,     0,     0,    57,     0,   201,     9,    58,    63,     0,
      57,     0,   219,     0,    58,     0,    59,    60,     0,     0,
       0,     0,     0,    59,    60,     0,     0,     0,     0,   268,
      68,    69,    70,    71,    72,    73,    74,     0,     1,     0,
       0,     0,     0,     0,   151,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,    68,    69,    70,    71,    72,
      73,    74,    68,    69,    70,    71,    72,    73,    74,    57,
       1,     0,     0,    58,     0,     0,     0,     1,     0,     0,
       0,     0,    59,    60,     0,     0,    53,     0,     0,     0,
       2,     3,     0,   265,     0,     0,     0,     0,     0,     0,
       4,    57,     0,     0,     6,    58,     0,     7,     0,     0,
       0,     0,     0,     0,    59,    60,     1,     8,     0,     0,
       0,    68,    69,    70,    71,    72,    73,    74,     0,     0,
       0,     0,    53,     1,     0,   276,     9,     0,    11,     0,
       0,     0,     0,     0,     0,     0,     0,    57,     0,    53,
       1,    58,   124,    68,    69,    70,    71,    72,    73,    74,
      59,    60,     0,     0,    57,     0,    53,     0,    58,     0,
       0,     0,   282,     0,     0,     0,     0,    59,    60,     0,
       1,    57,     0,     0,     0,    58,     0,     0,   303,     0,
       0,     0,     0,     0,    59,    60,    53,     0,     0,    68,
      69,    70,    71,    72,    73,    74,     0,     0,     0,     0,
       0,   175,     0,     0,     0,    58,    68,    69,    70,    71,
      72,    73,    74,     0,    59,    60,     0,     0,     0,     0,
       1,     0,     0,    68,    69,    70,    71,    72,    73,    74,
       0,     0,     0,     2,     3,     0,     0,     0,     1,     0,
       0,     0,     0,     4,     5,     0,     0,     6,     0,     0,
       7,     2,     3,    68,    69,    70,    71,    72,    73,    74,
       8,   130,     1,     0,     0,     6,     0,     0,     7,     0,
       0,     0,     0,     0,     0,     2,     3,     0,     8,     9,
      10,    11,     0,     0,     0,   130,    12,     0,     0,     6,
       0,     0,     7,   131,     0,     0,     0,     9,    13,    14,
       0,     0,     8,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,     0,     0,     0,     0,     0,     0,
       0,     9
};

static const yytype_int16 yycheck[] =
{
       0,     0,    49,    94,    34,     3,    38,     3,   126,   201,
      34,     3,    24,    13,    28,    29,   134,    17,    17,    57,
      29,    19,     0,    23,     0,     4,    50,    65,     3,    24,
      30,    24,    47,    48,    34,    13,    34,    24,    24,    17,
      38,    35,    24,    24,    34,    23,    46,    46,    48,    49,
      50,    51,    30,    77,     3,    87,    35,    57,     3,    34,
      35,    73,    76,    63,    58,    60,    24,    76,    46,     3,
      48,    49,    68,    51,    24,    68,    68,    77,    94,    95,
     118,    68,    68,   121,     3,    63,    68,    68,    86,    87,
      88,    89,    90,    91,    92,   213,     3,    16,    17,    24,
      58,   139,   140,   194,   195,   196,   298,    26,    58,   147,
     148,    30,    72,     3,    33,    28,   154,   149,     3,    24,
     158,    34,    44,    45,    43,    85,    37,   127,   127,    19,
     130,    34,    35,    58,    49,    50,    51,   175,     3,   139,
     231,   232,     4,    62,    34,    64,    36,   171,    38,   127,
      61,    34,   130,    58,    40,    34,    42,    47,    48,   197,
     198,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,    34,   281,   221,    52,    53,    54,    55,    34,    39,
     228,    41,    34,   292,     3,    34,    86,    87,    88,    89,
      90,    91,    92,    77,   303,    34,    35,    16,    17,   186,
     187,   188,   189,    68,   214,   231,   232,    26,   177,   178,
      22,    30,   321,   322,    33,   179,   180,   184,   185,     3,
     192,   193,   331,    20,    43,    21,   214,   190,   191,   277,
      15,   279,    16,    17,   343,    19,    35,    35,    79,    34,
      34,    75,   290,    62,    68,    64,    30,   281,   296,    33,
      34,    68,    71,    35,    38,    58,    58,    58,   292,    43,
      86,    68,     3,    47,    48,     3,    59,    58,    35,   303,
     327,   281,    59,    59,    85,    58,    68,    58,    62,    58,
      58,     3,   292,    59,   332,    59,    76,   321,   322,    58,
      24,    68,    80,   303,    83,    68,    68,   331,    68,    74,
      58,    34,    86,    87,    88,    89,    90,    91,    92,   343,
      74,   321,   322,    17,    32,     3,   214,   327,    50,   139,
      77,   331,     3,   341,   277,   279,   336,   336,    16,    17,
      18,    19,    23,   343,    57,    16,    17,    25,   230,   327,
     301,   181,    30,    31,    32,    33,    34,   115,   336,    30,
      38,   122,    33,   182,   290,    43,   183,   119,    -1,    47,
      48,    -1,    43,    -1,    -1,    -1,    -1,    -1,    56,    57,
      -1,    -1,    -1,    -1,    62,    -1,    64,   142,    66,    67,
      68,    62,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    92,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    -1,    -1,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,     3,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    17,    -1,    19,    -1,    86,    87,    88,    89,    90,
      91,    92,     3,    -1,    30,    -1,    -1,    33,    34,     3,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    43,    19,    -1,
      -1,    47,    48,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    36,    62,    38,    64,    -1,
      34,    -1,    68,    -1,    38,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    60,
      86,    87,    88,    89,    90,    91,    92,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    86,    87,    88,    89,    90,
      91,    92,    86,    87,    88,    89,    90,    91,    92,    34,
       3,    -1,    -1,    38,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    47,    48,    -1,    -1,    19,    -1,    -1,    -1,
      16,    17,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    34,    -1,    -1,    30,    38,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,     3,    43,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    92,    -1,    -1,
      -1,    -1,    19,     3,    -1,    68,    62,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    19,
       3,    38,    78,    86,    87,    88,    89,    90,    91,    92,
      47,    48,    -1,    -1,    34,    -1,    19,    -1,    38,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    47,    48,    -1,
       3,    34,    -1,    -1,    -1,    38,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    47,    48,    19,    -1,    -1,    86,
      87,    88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    38,    86,    87,    88,    89,
      90,    91,    92,    -1,    47,    48,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    86,    87,    88,    89,    90,    91,    92,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    26,    27,    -1,    -1,    30,    -1,    -1,
      33,    16,    17,    86,    87,    88,    89,    90,    91,    92,
      43,    26,     3,    -1,    -1,    30,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    43,    62,
      63,    64,    -1,    -1,    -1,    26,    69,    -1,    -1,    30,
      -1,    -1,    33,    58,    -1,    -1,    -1,    62,    81,    82,
      -1,    -1,    43,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    16,    17,    26,    27,    30,    33,    43,    62,
      63,    64,    69,    81,    82,    94,    95,    96,    97,    98,
      99,   122,   124,   125,   126,   127,   128,   129,   133,     3,
       3,     3,   127,     3,   100,     0,    97,   126,   127,     3,
     138,   139,   140,     3,   131,   132,   123,   124,    34,   130,
     100,    34,    18,    19,    25,    31,    32,    34,    38,    47,
      48,    56,    57,    64,    66,    67,    68,    70,    86,    87,
      88,    89,    90,    91,    92,   103,   104,   105,   106,   107,
     108,   109,   112,   118,   119,   120,   121,   127,   133,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   165,   166,   167,
     168,   169,   170,   171,   138,    24,    68,     4,    35,   173,
     174,     4,    24,    73,    78,   124,   127,   123,   134,   103,
      26,    58,   101,   102,   127,     3,    68,     3,    68,    34,
      34,   129,   133,   143,   144,   162,   163,    34,    34,   127,
      34,    68,   133,   143,    34,    77,   106,   138,    35,    68,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,   164,    22,   145,   161,    34,   145,    40,    42,    39,
      41,    20,    21,    15,    44,    45,    52,    53,    54,    55,
      37,    61,    47,    48,    49,    50,    51,    35,    34,    68,
     139,    36,   141,   143,   143,   174,   143,   132,   140,    71,
     135,    79,    75,   127,    24,    58,   140,    68,    68,    68,
     107,   113,   116,   117,   143,   143,    35,   175,    35,   175,
      58,    58,    58,   143,   143,   138,    86,    68,   143,    68,
     143,   144,     3,   143,   152,   152,   153,   153,   154,   155,
     156,   157,   157,   158,   158,   158,   158,   159,   159,   160,
     160,   161,   161,   161,   143,    58,   143,   172,    60,   141,
     142,    59,    58,     3,   140,   102,    68,   114,   143,    24,
      68,    58,    59,    35,   146,   161,   161,    58,    58,    68,
      24,    58,    58,    59,    58,    59,    24,    58,    24,    60,
      85,   136,   137,    58,   115,   116,    68,   117,   104,    59,
      68,    68,   172,    68,   104,   143,   141,     3,    72,   137,
     104,    58,    28,    29,    76,    58,    80,    83,    74,   104,
     104,    28,    34,   110,   111,    68,   123,    74,    76,   104,
     143,    29,    76,    58,   111,   104
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    95,    96,    96,    97,    97,    97,    97,
      98,    99,   100,   100,   101,   101,   102,   102,   103,   103,
     104,   105,   105,   106,   106,   107,   107,   108,   108,   108,
     108,   108,   108,   108,   109,   109,   109,   110,   110,   110,
     111,   112,   112,   112,   113,   113,   113,   114,   114,   115,
     116,   116,   117,   118,   118,   118,   118,   118,   118,   119,
     119,   120,   121,   122,   122,   122,   123,   123,   124,   124,
     125,   125,   126,   126,   127,   128,   128,   129,   129,   129,
     129,   129,   129,   130,   130,   131,   131,   132,   132,   133,
     134,   134,   135,   136,   136,   137,   138,   138,   139,   139,
     140,   140,   141,   141,   141,   142,   142,   142,   143,   144,
     144,   145,   145,   146,   146,   147,   148,   148,   149,   149,
     150,   150,   151,   151,   151,   152,   152,   152,   153,   153,
     154,   154,   155,   155,   156,   156,   156,   157,   157,   157,
     157,   157,   158,   158,   158,   159,   159,   159,   160,   160,
     160,   160,   161,   161,   161,   161,   162,   162,   163,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     165,   166,   166,   167,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   168,   168,   169,   170,   170,   171,   171,
     172,   172,   173,   173,   174,   175,   175
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     1,     1,     1,
       5,     4,     4,     3,     1,     3,     2,     3,     1,     1,
       1,     1,     2,     1,     1,     3,     4,     2,     1,     1,
       1,     1,     1,     1,     8,     8,     6,     1,     3,     2,
       4,     6,     8,     7,     2,     1,     1,     2,     1,     1,
       1,     3,     1,     3,     2,     3,     2,     3,     2,     7,
       5,     5,     5,     4,     5,     4,     1,     2,     4,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     0,     1,     3,     3,     1,     1,
       2,     1,     4,     1,     2,     4,     1,     3,     1,     3,
       1,     2,     1,     2,     3,     1,     3,     2,     1,     1,
       3,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     4,     4,     4,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     3,     4,     3,     1,     1,
       1,     3,     1,     2,     3,     2,     3
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
        case 2:
#line 105 "parser.y" /* yacc.c:1646  */
    {
      out.close();
    }
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 115 "parser.y" /* yacc.c:1646  */
    {
      PrimitiveTypeEntry pt("char");
      /*if(env->get("a") == NULL) {
        env->put("a", pt);
        env->print();
        out << "int main() { return 0;}";
      } else {
        yyerror("Identifier previously declared");
        YYERROR;
      }*/
    }
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 273 "parser.y" /* yacc.c:1646  */
    {cout << (yyvsp[-2].lexeme) << endl;}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 288 "parser.y" /* yacc.c:1646  */
    {
      typeToStore = (yyvsp[0].lexeme);
      (yyval.lexeme) = (yyvsp[0].lexeme);
    }
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 295 "parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 296 "parser.y" /* yacc.c:1646  */
    {(yyval.lexeme) = (char *) "qualified_name";}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 300 "parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 301 "parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 302 "parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 303 "parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 304 "parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 305 "parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 324 "parser.y" /* yacc.c:1646  */
    {
      if(typesTable.contains((yyvsp[0].lexeme))) {
        nodeType no;
        no.type = (yyvsp[0].lexeme);
        no.lexeme = (yyvsp[0].lexeme);
        (yyval.node) = no;
      } else {
        yyerror("Type undeclared");
        YYERROR;
      }
    }
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 361 "parser.y" /* yacc.c:1646  */
    {
      if(env->get((yyvsp[0].lexeme)) == NULL) {
        PrimitiveTypeEntry pt(typeToStore);
        env->put((yyvsp[0].lexeme), pt);
      } else {
        yyerror("Identifier previously declared");
        YYERROR;
      }
      env->print();
    }
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 375 "parser.y" /* yacc.c:1646  */
    {
      (yyval.lexeme) = (yyvsp[0].lexeme);
    }
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 378 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-1].lexeme)) + string((yyvsp[0].lexeme));
      cout << "olha: " << s << endl;
      (yyval.lexeme) = (char*) s.c_str();
    }
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 398 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 402 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 403 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node).lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node).lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node).type, (yyvsp[0].node).type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node).type) + "\' to \'" + string((yyvsp[0].node).type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = no;
      }
    }
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 419 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-1].lexeme)) + string((yyvsp[0].node).lexeme);
      nodeType no;
      no.type = (yyvsp[0].node).type;
      no.lexeme = (char*) s.c_str();
      (yyval.node) = no;
    }
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 426 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 430 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 431 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-1].lexeme)) + string((yyvsp[0].node).lexeme);
      nodeType no;
      no.type = (yyvsp[0].node).type;
      no.lexeme = (char*) s.c_str();
      (yyval.node) = no;
    }
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 441 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 445 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 446 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 450 "parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 451 "parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 455 "parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 456 "parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 460 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 462 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node).lexeme) + "||" + string((yyvsp[0].node).lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node).type, (yyvsp[0].node).type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node).type) + "\' to \'" + string((yyvsp[0].node).type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = no;
      }
    }
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 478 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 480 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node).lexeme) + "&&" + string((yyvsp[0].node).lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node).type, (yyvsp[0].node).type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node).type) + "\' to \'" + string((yyvsp[0].node).type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = no;
      }
    }
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 496 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 497 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node).lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node).lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node).type, (yyvsp[0].node).type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node).type) + "\' to \'" + string((yyvsp[0].node).type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = no;
      }
    }
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 513 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 514 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node).lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node).lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node).type, (yyvsp[0].node).type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node).type) + "\' to \'" + string((yyvsp[0].node).type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = no;
      }
    }
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 530 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 531 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node).lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node).lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node).type, (yyvsp[0].node).type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node).type) + "\' to \'" + string((yyvsp[0].node).type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = no;
      }
    }
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 547 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 548 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node).lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node).lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node).type, (yyvsp[0].node).type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node).type) + "\' to \'" + string((yyvsp[0].node).type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = no;
      }
    }
#line 2209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 561 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node).lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node).lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node).type, (yyvsp[0].node).type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node).type) + "\' to \'" + string((yyvsp[0].node).type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = no;
      }
    }
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 577 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 578 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node).lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node).lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node).type, (yyvsp[0].node).type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node).type) + "\' to \'" + string((yyvsp[0].node).type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = no;
      }
    }
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 591 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node).lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node).lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node).type, (yyvsp[0].node).type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node).type) + "\' to \'" + string((yyvsp[0].node).type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = no;
      }
    }
#line 2269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 604 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node).lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node).lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node).type, (yyvsp[0].node).type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node).type) + "\' to \'" + string((yyvsp[0].node).type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = no;
      }
    }
#line 2287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 617 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node).lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node).lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node).type, (yyvsp[0].node).type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node).type) + "\' to \'" + string((yyvsp[0].node).type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = no;
      }
    }
#line 2305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 633 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 634 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node).lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node).lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node).type, (yyvsp[0].node).type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node).type) + "\' to \'" + string((yyvsp[0].node).type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = no;
      }
    }
#line 2329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 647 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node).lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node).lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node).type, (yyvsp[0].node).type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node).type) + "\' to \'" + string((yyvsp[0].node).type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = no;
      }
    }
#line 2347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 663 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 664 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node).lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node).lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node).type, (yyvsp[0].node).type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node).type) + "\' to \'" + string((yyvsp[0].node).type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = no;
      }
    }
#line 2371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 677 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node).lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node).lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node).type, (yyvsp[0].node).type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node).type) + "\' to \'" + string((yyvsp[0].node).type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = no;
      }
    }
#line 2389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 693 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 694 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node).lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node).lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node).type, (yyvsp[0].node).type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node).type) + "\' to \'" + string((yyvsp[0].node).type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = no;
      }
    }
#line 2413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 707 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node).lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node).lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node).type, (yyvsp[0].node).type);
      (yyval.node) = no;
    }
#line 2425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 714 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node).lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node).lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node).type, (yyvsp[0].node).type);
      (yyval.node) = no;
    }
#line 2437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 724 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 725 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-3].lexeme)) + string((yyvsp[-2].lexeme)) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node).lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = (yyvsp[-2].lexeme);
      (yyval.node) = no;
    }
#line 2455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 732 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-3].lexeme)) + string((yyvsp[-2].lexeme)) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node).lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = (yyvsp[-2].lexeme);
      (yyval.node) = no;
    }
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 739 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-3].lexeme)) + string((yyvsp[-2].node).lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node).lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = (yyvsp[-2].node).type;
      (yyval.node) = no;
    }
#line 2479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 758 "parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 759 "parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 760 "parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 761 "parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 762 "parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 763 "parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 764 "parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 765 "parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 766 "parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 767 "parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 768 "parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 772 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 776 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].lexeme)) + string((yyvsp[-1].node).lexeme) + string((yyvsp[0].lexeme));
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = (yyvsp[-1].node).type;
      (yyval.node) = no;
    }
#line 2563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 783 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 787 "parser.y" /* yacc.c:1646  */
    { cout << (yyvsp[0].node).lexeme << " => " << (yyvsp[0].node).type << endl; (yyval.node) = (yyvsp[0].node); }
#line 2575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 788 "parser.y" /* yacc.c:1646  */
    { cout << (yyvsp[0].node).lexeme << " => " << (yyvsp[0].node).type << endl; (yyval.node) = (yyvsp[0].node); }
#line 2581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 789 "parser.y" /* yacc.c:1646  */
    { cout << (yyvsp[0].node).lexeme << " => " << (yyvsp[0].node).type << endl; (yyval.node) = (yyvsp[0].node); }
#line 2587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 790 "parser.y" /* yacc.c:1646  */
    { cout << (yyvsp[0].node).lexeme << " => " << (yyvsp[0].node).type << endl; (yyval.node) = (yyvsp[0].node); }
#line 2593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 791 "parser.y" /* yacc.c:1646  */
    { cout << (yyvsp[0].node).lexeme << " => " << (yyvsp[0].node).type << endl; (yyval.node) = (yyvsp[0].node); }
#line 2599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 792 "parser.y" /* yacc.c:1646  */
    { cout << (yyvsp[0].node).lexeme << " => " << (yyvsp[0].node).type << endl; (yyval.node) = (yyvsp[0].node); }
#line 2605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 793 "parser.y" /* yacc.c:1646  */
    { cout << (yyvsp[0].node).lexeme << " => " << (yyvsp[0].node).type << endl; (yyval.node) = (yyvsp[0].node); }
#line 2611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 824 "parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 825 "parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-1].lexeme)) + string((yyvsp[0].lexeme));
      (yyval.lexeme) = (char*) s.c_str();
    }
#line 2626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 832 "parser.y" /* yacc.c:1646  */
    {
      if(strcmp((yyvsp[-1].node).type, (char*) "int") != 0) {
        yyerror("size of array must be an integer");
        YYERROR;
      }
      string s = string((yyvsp[-2].lexeme)) + string((yyvsp[-1].node).lexeme) + string((yyvsp[0].lexeme));
      (yyval.lexeme) = (char*) s.c_str();
    }
#line 2639 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2643 "y.tab.c" /* yacc.c:1646  */
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
#line 847 "parser.y" /* yacc.c:1906  */


void yyerror(const char *s) {
	fprintf(stderr, "Error: %s at '%s' at line %i.\n", s, yytext, yylineno);
}

char* getType(string type1, string type2) {
  if(type1 == "int" && type2 == "int") {
    return (char*) "int";
  } else if((type1 == "int" && type2 == "float") || (type1 == "float" && type2 == "int")) {
    return (char*) "float";
  } else if((type1 == "int" && type2 == "long") || (type1 == "long" && type2 == "int")) {
    return (char*) "long";
  } else if(type1 == "long" && type2 == "long") {
    return (char*) "long";
  } else if(type1 == "bool" && type2 == "bool") {
    return (char*) "bool";
  } else if(type1 == "float" && type2 == "float") {
    return (char*) "float";
  } else if((type1 == "long" && type2 == "float") || (type1 == "float" && type2 == "long")) {
    return (char*) "float";
  } else if(type1 == "string" && type2 == "string") {
    return (char*) "string";
  } else {
    return NULL;
  }
}
