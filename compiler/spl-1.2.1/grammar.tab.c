/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 24 "grammar.y"

#include <stdio.h>
#include <stdlib.h>
  
#include "strutils.h"
#include "telma.h"

#define COMMENT_COLUMN   40  // 
#define INDENTATION_SIZE 2   // number of spaces to indent output C code

/* macro to create indentation space */
#define INDENT (strpad(newstr(""), INDENTATION_SIZE, ' '))

/* Local function prototypes */
static void report_error(const char *expected_symbol);
static void report_warning(const char *expected_symbol);

/* Global variables local to this file */
static char *current_act = NULL;
static char *current_scene = NULL;
static int num_errors = 0;           // error counter
static int num_warnings = 0;         // warning counter
static int i;                        // all-purpose counter


#line 97 "grammar.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "grammar.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ARTICLE = 3,                    /* ARTICLE  */
  YYSYMBOL_BE = 4,                         /* BE  */
  YYSYMBOL_CHARACTER = 5,                  /* CHARACTER  */
  YYSYMBOL_FIRST_PERSON = 6,               /* FIRST_PERSON  */
  YYSYMBOL_FIRST_PERSON_POSSESSIVE = 7,    /* FIRST_PERSON_POSSESSIVE  */
  YYSYMBOL_FIRST_PERSON_REFLEXIVE = 8,     /* FIRST_PERSON_REFLEXIVE  */
  YYSYMBOL_NEGATIVE_ADJECTIVE = 9,         /* NEGATIVE_ADJECTIVE  */
  YYSYMBOL_NEGATIVE_COMPARATIVE = 10,      /* NEGATIVE_COMPARATIVE  */
  YYSYMBOL_NEGATIVE_NOUN = 11,             /* NEGATIVE_NOUN  */
  YYSYMBOL_NEUTRAL_ADJECTIVE = 12,         /* NEUTRAL_ADJECTIVE  */
  YYSYMBOL_NEUTRAL_NOUN = 13,              /* NEUTRAL_NOUN  */
  YYSYMBOL_NOTHING = 14,                   /* NOTHING  */
  YYSYMBOL_POSITIVE_ADJECTIVE = 15,        /* POSITIVE_ADJECTIVE  */
  YYSYMBOL_POSITIVE_COMPARATIVE = 16,      /* POSITIVE_COMPARATIVE  */
  YYSYMBOL_POSITIVE_NOUN = 17,             /* POSITIVE_NOUN  */
  YYSYMBOL_SECOND_PERSON = 18,             /* SECOND_PERSON  */
  YYSYMBOL_SECOND_PERSON_POSSESSIVE = 19,  /* SECOND_PERSON_POSSESSIVE  */
  YYSYMBOL_SECOND_PERSON_REFLEXIVE = 20,   /* SECOND_PERSON_REFLEXIVE  */
  YYSYMBOL_THIRD_PERSON_POSSESSIVE = 21,   /* THIRD_PERSON_POSSESSIVE  */
  YYSYMBOL_COLON = 22,                     /* COLON  */
  YYSYMBOL_COMMA = 23,                     /* COMMA  */
  YYSYMBOL_EXCLAMATION_MARK = 24,          /* EXCLAMATION_MARK  */
  YYSYMBOL_LEFT_BRACKET = 25,              /* LEFT_BRACKET  */
  YYSYMBOL_PERIOD = 26,                    /* PERIOD  */
  YYSYMBOL_QUESTION_MARK = 27,             /* QUESTION_MARK  */
  YYSYMBOL_RIGHT_BRACKET = 28,             /* RIGHT_BRACKET  */
  YYSYMBOL_AND = 29,                       /* AND  */
  YYSYMBOL_AS = 30,                        /* AS  */
  YYSYMBOL_ENTER = 31,                     /* ENTER  */
  YYSYMBOL_EXEUNT = 32,                    /* EXEUNT  */
  YYSYMBOL_EXIT = 33,                      /* EXIT  */
  YYSYMBOL_HEART = 34,                     /* HEART  */
  YYSYMBOL_IF_NOT = 35,                    /* IF_NOT  */
  YYSYMBOL_IF_SO = 36,                     /* IF_SO  */
  YYSYMBOL_LESS = 37,                      /* LESS  */
  YYSYMBOL_LET_US = 38,                    /* LET_US  */
  YYSYMBOL_LISTEN_TO = 39,                 /* LISTEN_TO  */
  YYSYMBOL_MIND = 40,                      /* MIND  */
  YYSYMBOL_MORE = 41,                      /* MORE  */
  YYSYMBOL_NOT = 42,                       /* NOT  */
  YYSYMBOL_OPEN = 43,                      /* OPEN  */
  YYSYMBOL_PROCEED_TO = 44,                /* PROCEED_TO  */
  YYSYMBOL_RECALL = 45,                    /* RECALL  */
  YYSYMBOL_REMEMBER = 46,                  /* REMEMBER  */
  YYSYMBOL_RETURN_TO = 47,                 /* RETURN_TO  */
  YYSYMBOL_SPEAK = 48,                     /* SPEAK  */
  YYSYMBOL_THAN = 49,                      /* THAN  */
  YYSYMBOL_THE_CUBE_OF = 50,               /* THE_CUBE_OF  */
  YYSYMBOL_THE_DIFFERENCE_BETWEEN = 51,    /* THE_DIFFERENCE_BETWEEN  */
  YYSYMBOL_THE_FACTORIAL_OF = 52,          /* THE_FACTORIAL_OF  */
  YYSYMBOL_THE_PRODUCT_OF = 53,            /* THE_PRODUCT_OF  */
  YYSYMBOL_THE_QUOTIENT_BETWEEN = 54,      /* THE_QUOTIENT_BETWEEN  */
  YYSYMBOL_THE_REMAINDER_OF_THE_QUOTIENT_BETWEEN = 55, /* THE_REMAINDER_OF_THE_QUOTIENT_BETWEEN  */
  YYSYMBOL_THE_SQUARE_OF = 56,             /* THE_SQUARE_OF  */
  YYSYMBOL_THE_SQUARE_ROOT_OF = 57,        /* THE_SQUARE_ROOT_OF  */
  YYSYMBOL_THE_SUM_OF = 58,                /* THE_SUM_OF  */
  YYSYMBOL_TWICE = 59,                     /* TWICE  */
  YYSYMBOL_WE_MUST = 60,                   /* WE_MUST  */
  YYSYMBOL_WE_SHALL = 61,                  /* WE_SHALL  */
  YYSYMBOL_ACT_ROMAN = 62,                 /* ACT_ROMAN  */
  YYSYMBOL_SCENE_ROMAN = 63,               /* SCENE_ROMAN  */
  YYSYMBOL_ROMAN_NUMBER = 64,              /* ROMAN_NUMBER  */
  YYSYMBOL_NONMATCH = 65,                  /* NONMATCH  */
  YYSYMBOL_YYACCEPT = 66,                  /* $accept  */
  YYSYMBOL_Act = 67,                       /* Act  */
  YYSYMBOL_ActHeader = 68,                 /* ActHeader  */
  YYSYMBOL_Adjective = 69,                 /* Adjective  */
  YYSYMBOL_BinaryOperator = 70,            /* BinaryOperator  */
  YYSYMBOL_CharacterDeclaration = 71,      /* CharacterDeclaration  */
  YYSYMBOL_CharacterDeclarationList = 72,  /* CharacterDeclarationList  */
  YYSYMBOL_CharacterList = 73,             /* CharacterList  */
  YYSYMBOL_Comment = 74,                   /* Comment  */
  YYSYMBOL_Comparative = 75,               /* Comparative  */
  YYSYMBOL_Comparison = 76,                /* Comparison  */
  YYSYMBOL_Conditional = 77,               /* Conditional  */
  YYSYMBOL_Constant = 78,                  /* Constant  */
  YYSYMBOL_EndSymbol = 79,                 /* EndSymbol  */
  YYSYMBOL_EnterExit = 80,                 /* EnterExit  */
  YYSYMBOL_Equality = 81,                  /* Equality  */
  YYSYMBOL_Inequality = 82,                /* Inequality  */
  YYSYMBOL_InOut = 83,                     /* InOut  */
  YYSYMBOL_Jump = 84,                      /* Jump  */
  YYSYMBOL_JumpPhrase = 85,                /* JumpPhrase  */
  YYSYMBOL_JumpPhraseBeginning = 86,       /* JumpPhraseBeginning  */
  YYSYMBOL_JumpPhraseEnd = 87,             /* JumpPhraseEnd  */
  YYSYMBOL_Line = 88,                      /* Line  */
  YYSYMBOL_NegativeComparative = 89,       /* NegativeComparative  */
  YYSYMBOL_NegativeConstant = 90,          /* NegativeConstant  */
  YYSYMBOL_NegativeNoun = 91,              /* NegativeNoun  */
  YYSYMBOL_NonnegatedComparison = 92,      /* NonnegatedComparison  */
  YYSYMBOL_OpenYour = 93,                  /* OpenYour  */
  YYSYMBOL_Play = 94,                      /* Play  */
  YYSYMBOL_PositiveComparative = 95,       /* PositiveComparative  */
  YYSYMBOL_PositiveConstant = 96,          /* PositiveConstant  */
  YYSYMBOL_PositiveNoun = 97,              /* PositiveNoun  */
  YYSYMBOL_Pronoun = 98,                   /* Pronoun  */
  YYSYMBOL_Question = 99,                  /* Question  */
  YYSYMBOL_QuestionSymbol = 100,           /* QuestionSymbol  */
  YYSYMBOL_Recall = 101,                   /* Recall  */
  YYSYMBOL_Remember = 102,                 /* Remember  */
  YYSYMBOL_Scene = 103,                    /* Scene  */
  YYSYMBOL_SceneContents = 104,            /* SceneContents  */
  YYSYMBOL_SceneHeader = 105,              /* SceneHeader  */
  YYSYMBOL_Sentence = 106,                 /* Sentence  */
  YYSYMBOL_SentenceList = 107,             /* SentenceList  */
  YYSYMBOL_StartSymbol = 108,              /* StartSymbol  */
  YYSYMBOL_Statement = 109,                /* Statement  */
  YYSYMBOL_StatementSymbol = 110,          /* StatementSymbol  */
  YYSYMBOL_String = 111,                   /* String  */
  YYSYMBOL_StringSymbol = 112,             /* StringSymbol  */
  YYSYMBOL_Title = 113,                    /* Title  */
  YYSYMBOL_UnarticulatedConstant = 114,    /* UnarticulatedConstant  */
  YYSYMBOL_UnaryOperator = 115,            /* UnaryOperator  */
  YYSYMBOL_UnconditionalSentence = 116,    /* UnconditionalSentence  */
  YYSYMBOL_Value = 117                     /* Value  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  71
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1063

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  226
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  350

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   320


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      65
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   185,   185,   188,   193,   200,   207,   216,   219,   222,
     227,   234,   241,   248,   255,   264,   274,   280,   288,   294,
     302,   309,   317,   320,   326,   330,   336,   340,   345,   349,
     355,   359,   363,   367,   371,   377,   380,   385,   391,   402,
     408,   419,   425,   432,   439,   446,   454,   460,   466,   474,
     478,   484,   490,   497,   504,   510,   516,   523,   530,   537,
     544,   550,   557,   564,   572,   577,   583,   591,   594,   599,
     606,   609,   612,   617,   620,   625,   630,   636,   644,   647,
     650,   655,   659,   663,   669,   674,   677,   682,   687,   694,
     700,   703,   710,   716,   723,   726,   729,   734,   738,   742,
     748,   751,   756,   759,   762,   765,   770,   777,   785,   793,
     803,   808,   814,   820,   828,   833,   839,   846,   851,   854,
     857,   860,   865,   872,   879,   888,   891,   894,   900,   903,
     908,   930,   936,   941,   948,   954,   961,   967,   972,   978,
     985,   993,  1000,  1009,  1012,  1017,  1020,  1024,  1025,  1026,
    1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,
    1037,  1038,  1039,  1040,  1041,  1042,  1044,  1046,  1047,  1048,
    1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,  1057,  1058,
    1059,  1060,  1061,  1062,  1063,  1064,  1065,  1066,  1067,  1068,
    1069,  1070,  1071,  1072,  1073,  1074,  1075,  1076,  1077,  1078,
    1080,  1081,  1082,  1084,  1088,  1096,  1099,  1104,  1110,  1116,
    1122,  1128,  1136,  1139,  1142,  1145,  1148,  1151,  1156,  1159,
    1162,  1165,  1170,  1174,  1184,  1189,  1199
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ARTICLE", "BE",
  "CHARACTER", "FIRST_PERSON", "FIRST_PERSON_POSSESSIVE",
  "FIRST_PERSON_REFLEXIVE", "NEGATIVE_ADJECTIVE", "NEGATIVE_COMPARATIVE",
  "NEGATIVE_NOUN", "NEUTRAL_ADJECTIVE", "NEUTRAL_NOUN", "NOTHING",
  "POSITIVE_ADJECTIVE", "POSITIVE_COMPARATIVE", "POSITIVE_NOUN",
  "SECOND_PERSON", "SECOND_PERSON_POSSESSIVE", "SECOND_PERSON_REFLEXIVE",
  "THIRD_PERSON_POSSESSIVE", "COLON", "COMMA", "EXCLAMATION_MARK",
  "LEFT_BRACKET", "PERIOD", "QUESTION_MARK", "RIGHT_BRACKET", "AND", "AS",
  "ENTER", "EXEUNT", "EXIT", "HEART", "IF_NOT", "IF_SO", "LESS", "LET_US",
  "LISTEN_TO", "MIND", "MORE", "NOT", "OPEN", "PROCEED_TO", "RECALL",
  "REMEMBER", "RETURN_TO", "SPEAK", "THAN", "THE_CUBE_OF",
  "THE_DIFFERENCE_BETWEEN", "THE_FACTORIAL_OF", "THE_PRODUCT_OF",
  "THE_QUOTIENT_BETWEEN", "THE_REMAINDER_OF_THE_QUOTIENT_BETWEEN",
  "THE_SQUARE_OF", "THE_SQUARE_ROOT_OF", "THE_SUM_OF", "TWICE", "WE_MUST",
  "WE_SHALL", "ACT_ROMAN", "SCENE_ROMAN", "ROMAN_NUMBER", "NONMATCH",
  "$accept", "Act", "ActHeader", "Adjective", "BinaryOperator",
  "CharacterDeclaration", "CharacterDeclarationList", "CharacterList",
  "Comment", "Comparative", "Comparison", "Conditional", "Constant",
  "EndSymbol", "EnterExit", "Equality", "Inequality", "InOut", "Jump",
  "JumpPhrase", "JumpPhraseBeginning", "JumpPhraseEnd", "Line",
  "NegativeComparative", "NegativeConstant", "NegativeNoun",
  "NonnegatedComparison", "OpenYour", "Play", "PositiveComparative",
  "PositiveConstant", "PositiveNoun", "Pronoun", "Question",
  "QuestionSymbol", "Recall", "Remember", "Scene", "SceneContents",
  "SceneHeader", "Sentence", "SentenceList", "StartSymbol", "Statement",
  "StatementSymbol", "String", "StringSymbol", "Title",
  "UnarticulatedConstant", "UnaryOperator", "UnconditionalSentence",
  "Value", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-195)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-78)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     242,   119,  -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,
    -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,
    -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,
    -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,
    -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,
    -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,   -36,
      28,   499,  -195,   263,    20,    40,  -195,    10,    32,    52,
      52,  -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,    -3,
      13,   307,   307,   307,    52,  -195,   307,   307,    38,  -195,
      46,  -195,    52,    20,    52,  -195,   625,   562,   625,   625,
     625,    75,   307,   307,    99,    65,  -195,  -195,    46,  -195,
    -195,  -195,  -195,  -195,  -195,   625,   118,   113,   627,   111,
     265,    37,   328,  -195,  -195,  -195,  -195,  -195,   401,   688,
     440,  -195,  -195,  -195,    90,   117,   372,   709,   131,  -195,
    -195,    80,  -195,  -195,     5,    11,    12,  -195,  -195,  -195,
    -195,    44,  -195,  -195,   401,   438,  -195,   143,   612,   422,
     426,   176,  -195,   433,   441,   450,  -195,  -195,  -195,   127,
     819,  -195,  -195,   819,  -195,  -195,  -195,   819,  -195,   819,
    -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,
     768,  -195,  -195,   789,   125,   629,   461,   649,  -195,   819,
    -195,   740,  -195,  -195,  -195,  -195,  -195,    87,   112,    16,
    -195,  -195,   370,   177,   370,   139,   358,    24,   638,   638,
     370,   370,   370,  -195,  -195,   370,   146,   178,  -195,  -195,
     395,  -195,   484,  -195,  -195,  -195,  -195,  -195,  -195,  -195,
     478,   101,   145,   430,     8,  1004,  -195,  -195,  -195,  -195,
    -195,  -195,  -195,  -195,  -195,   468,    18,  -195,  -195,  1004,
     848,   370,  1004,  -195,   947,   243,   869,   649,  -195,  -195,
    -195,   740,  -195,  -195,  -195,   370,   370,   308,  -195,  -195,
    -195,  -195,  -195,  -195,   370,   370,   373,  -195,  -195,  -195,
    -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,   491,
    -195,  -195,  -195,    31,  -195,  -195,  -195,  -195,  -195,  -195,
    -195,   497,  1004,  1004,   928,   497,   497,   497,  -195,   370,
    -195,   370,  -195,  -195,   370,   446,  -195,  -195,  -195,  -195,
    -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,
    -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   130,
       0,     0,   145,     0,     0,     0,    18,     0,     0,    90,
       0,     1,   143,   144,   110,   204,    35,    36,   146,     0,
       0,     0,     0,     0,    93,    19,     0,     0,     0,     3,
       0,     2,    92,    91,    89,    23,     0,    22,     0,     0,
       0,     0,     0,     0,     0,     0,   118,   119,   117,    16,
      17,    15,     6,     5,     4,     0,     0,     0,     0,     0,
       0,     0,     0,   120,   121,   124,   123,   122,     0,     0,
       0,    29,    28,    70,     0,     0,     0,     0,     0,    71,
      72,     0,   212,   213,     0,     0,     0,   214,   215,   216,
     128,     0,   217,   125,    76,     0,    45,     0,     0,     0,
       0,     0,    41,     0,     0,     0,    73,    74,    68,     0,
       0,   218,   102,     0,   103,    34,   104,     0,   105,     0,
     207,    10,   208,    11,    12,    13,   209,   210,    14,   211,
       0,   219,   220,     0,     0,     0,     0,     0,    84,     0,
     100,     0,   101,   206,    81,   205,    97,     0,     0,     0,
      88,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    69,    67,     0,     0,     0,   129,    42,
       0,    37,     0,    38,    44,    40,    43,    39,    78,    94,
       0,     0,     0,     0,     0,     0,    85,    86,    24,    27,
      25,    30,    31,    32,    33,     0,     0,   226,   222,     0,
       0,     0,     0,   138,     0,     0,     0,     0,    82,    83,
      99,     0,    98,   137,   132,     0,     0,     0,   112,   113,
     111,   115,   116,   114,     0,     0,     0,   127,   126,    66,
      64,    65,    55,    60,    51,    63,    54,    21,    20,     0,
       9,     8,     7,     0,    96,    80,    79,    95,    26,    50,
      49,     0,     0,     0,     0,     0,     0,     0,   136,     0,
     135,     0,   134,   131,     0,     0,    57,    59,    62,    53,
      56,    58,    61,    52,    47,    48,    46,   107,   225,   224,
     223,   221,   108,   109,   106,   142,   141,   140,   139,   133
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -195,   567,  -195,  -195,  -195,   -40,   464,  -118,   618,  -195,
     392,  -195,   270,   635,   479,   300,  -195,  -195,  -195,  -195,
    -195,   485,   521,  -195,  -189,  -195,   390,  -195,  -195,  -195,
    -194,  -195,  -195,  -195,   273,  -195,  -195,   568,  -195,  -195,
     180,   519,  -195,  -195,  -191,     2,   -60,  -195,   315,  -195,
     240,  -137
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    69,    70,   303,   190,    66,    67,   159,    96,   244,
     245,   141,   191,    75,   106,   246,   247,   142,   143,   144,
     145,   168,   107,   248,   203,   204,   249,   146,    59,   250,
     205,   206,   192,   147,    76,   148,   149,    89,   108,    90,
     150,   151,    60,   152,    77,    97,    62,    63,   207,   193,
     153,   194
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     215,    78,    61,   163,   263,   270,   220,   272,   268,   309,
     269,    64,   223,   225,    93,    65,   274,   276,    65,   313,
      81,   278,   280,   281,   283,   285,    68,    85,    71,   289,
     290,   291,   335,    86,   292,   294,   296,    78,   160,   102,
      85,    82,   161,    81,   -77,   128,   226,   314,   129,   -77,
     277,   104,   227,   256,    87,   166,   258,   310,   167,    68,
     103,   336,   130,    83,   286,   162,   119,   221,   222,   -77,
     318,   105,    68,   320,   323,    68,   113,   270,   269,   131,
     132,   218,   133,   134,   326,   327,   329,   135,   273,   136,
     137,   208,   138,   330,   331,   333,   120,   121,   122,    72,
     117,    73,    74,   219,   139,   140,   -77,   -77,   311,   209,
     304,    72,   297,    73,   128,    88,   305,   129,   210,   126,
      64,   118,   315,   317,    65,   319,   259,   321,   345,   325,
     346,   130,   216,   347,   349,   238,   211,   238,   213,   156,
     282,   239,    72,   239,    73,    74,   275,   293,   131,   132,
     217,   133,   134,    78,   306,   240,   135,   240,   136,   137,
     307,   138,   241,    72,   241,    73,   242,   243,   242,   243,
      72,   229,    73,   139,   140,   338,   339,   341,   279,   295,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,   230,
      21,    72,    72,    73,    73,   232,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,     1,   322,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    79,    21,   157,    72,    65,    73,
     158,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    95,   328,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,   164,
      21,   228,    72,   165,    73,   228,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,   212,   332,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    72,    21,    73,    72,   284,    73,
     161,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,   -75,   128,
     238,   195,   129,   -75,   196,   166,   239,   348,   167,   197,
     233,   198,   199,   200,   234,   201,   130,   202,   287,   288,
     240,   235,   264,   -75,   170,   261,   265,   241,   173,   236,
      72,   242,    73,   131,   132,   175,   133,   134,   237,   299,
     177,   135,   179,   136,   137,   251,   138,   300,   252,   298,
     301,   240,   253,   302,   254,   262,   266,   312,   139,   140,
     -75,   -75,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,   334,    21,    72,    74,    73,    74,    80,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,   337,    21,   260,   123,   342,   343,
     344,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,   154,   124,
     224,   129,   170,   308,    84,   230,   173,   155,    91,   128,
     231,   232,   129,   175,     0,   130,    92,    94,   177,    72,
     179,    73,    74,    72,     0,    73,   130,     0,   197,   240,
     198,   267,   131,   132,     0,   133,   134,     0,     0,     0,
     135,     0,   136,   137,     0,   138,   133,   134,     0,     0,
       0,   135,     0,   136,   137,     0,   138,   139,   140,   169,
       0,   170,     0,   171,   172,   173,   174,     0,   139,   140,
      98,    99,   175,     0,   100,   101,   176,   177,   178,   179,
     214,     0,   170,     0,   171,   172,   173,   174,     0,     0,
     115,   116,     0,   175,     0,     0,     0,   176,   177,   178,
     179,   109,     0,   110,   111,   112,   114,     0,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,     0,     0,
     125,   127,   271,   200,     0,   201,     0,   202,     0,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   255,
       0,   170,     0,   171,   172,   173,   174,     0,     0,     0,
       0,     0,   175,     0,     0,     0,   176,   177,   178,   179,
     257,     0,   170,     0,   171,   172,   173,   174,     0,     0,
       0,     0,     0,   175,     0,     0,     0,   176,   177,   178,
     179,     0,     0,     0,     0,     0,     0,     0,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   197,     0,
     198,   199,   200,     0,   201,     0,   202,     0,     0,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   316,
       0,   170,     0,   171,   172,   173,   174,     0,     0,     0,
       0,     0,   175,     0,     0,     0,   176,   177,   178,   179,
     324,     0,   170,     0,   171,   172,   173,   174,     0,     0,
       0,     0,     0,   175,     0,     0,     0,   176,   177,   178,
     179,     0,     0,     0,     0,     0,     0,     0,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   340,
       0,   170,     0,   171,   172,   173,   174,     0,     0,     0,
       0,     0,   175,     0,     0,     0,   176,   177,   178,   179,
     170,     0,   171,   172,   173,   174,     0,     0,     0,     0,
       0,   175,     0,     0,     0,   176,   177,   178,   179,     0,
       0,    72,     0,    73,     0,     0,     0,     0,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   170,     0,   171,
     172,   173,   174,     0,     0,     0,     0,     0,   175,     0,
       0,     0,   176,   177,   178,   179,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189
};

static const yytype_int16 yycheck[] =
{
     137,    61,     0,   121,   195,   199,     1,   201,   197,     1,
     199,     1,     1,     1,     1,     5,   207,     1,     5,     1,
      23,   212,   213,   214,   215,     1,    62,    67,     0,   220,
     221,   222,     1,     1,   225,   226,   227,    97,     1,     1,
      80,     1,     5,    23,     0,     1,    34,    29,     4,     5,
      34,     5,    40,   190,    22,    44,   193,    49,    47,    62,
      22,    30,    18,    23,    40,    28,     1,    62,    63,    25,
     261,    25,    62,   264,   265,    62,     1,   271,   267,    35,
      36,     1,    38,    39,   275,   276,   277,    43,     1,    45,
      46,     1,    48,   284,   285,   286,    31,    32,    33,    24,
       1,    26,    27,    23,    60,    61,    62,    63,   245,    19,
       9,    24,   230,    26,     1,    63,    15,     4,     1,     1,
       1,    22,   259,   260,     5,   262,     1,   264,   319,   266,
     321,    18,     1,   324,   325,    10,    19,    10,   136,    28,
       1,    16,    24,    16,    26,    27,    34,     1,    35,    36,
      19,    38,    39,   213,     9,    30,    43,    30,    45,    46,
      15,    48,    37,    24,    37,    26,    41,    42,    41,    42,
      24,    28,    26,    60,    61,   312,   313,   314,     1,     1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    23,
      23,    24,    24,    26,    26,    29,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,     1,     1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     1,    23,     1,    24,     5,    26,
       5,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,     1,     1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     1,
      23,   151,    24,     5,    26,   155,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,     1,     1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    24,    23,    26,    24,    40,    26,
       5,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,     0,     1,
      10,     1,     4,     5,     4,    44,    16,     1,    47,     9,
      28,    11,    12,    13,    28,    15,    18,    17,   218,   219,
      30,    28,     1,    25,     3,   195,   196,    37,     7,    28,
      24,    41,    26,    35,    36,    14,    38,    39,    28,     1,
      19,    43,    21,    45,    46,   170,    48,     9,   173,     5,
      12,    30,   177,    15,   179,   195,   196,    29,    60,    61,
      62,    63,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    30,    23,    24,    27,    26,    27,    63,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,   311,    23,   194,   108,   315,   316,
     317,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,     1,   108,
     145,     4,     3,   243,    67,    23,     7,   118,    70,     1,
      28,    29,     4,    14,    -1,    18,    79,    80,    19,    24,
      21,    26,    27,    24,    -1,    26,    18,    -1,     9,    30,
      11,    12,    35,    36,    -1,    38,    39,    -1,    -1,    -1,
      43,    -1,    45,    46,    -1,    48,    38,    39,    -1,    -1,
      -1,    43,    -1,    45,    46,    -1,    48,    60,    61,     1,
      -1,     3,    -1,     5,     6,     7,     8,    -1,    60,    61,
      82,    83,    14,    -1,    86,    87,    18,    19,    20,    21,
       1,    -1,     3,    -1,     5,     6,     7,     8,    -1,    -1,
     102,   103,    -1,    14,    -1,    -1,    -1,    18,    19,    20,
      21,    96,    -1,    98,    99,   100,   101,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    -1,
     115,   116,    12,    13,    -1,    15,    -1,    17,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,     1,
      -1,     3,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    14,    -1,    -1,    -1,    18,    19,    20,    21,
       1,    -1,     3,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,     9,    -1,
      11,    12,    13,    -1,    15,    -1,    17,    -1,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,     1,
      -1,     3,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    14,    -1,    -1,    -1,    18,    19,    20,    21,
       1,    -1,     3,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,     1,
      -1,     3,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    14,    -1,    -1,    -1,    18,    19,    20,    21,
       3,    -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    14,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    -1,    26,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,     3,    -1,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    23,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    94,
     108,   111,   112,   113,     1,     5,    71,    72,    62,    67,
      68,     0,    24,    26,    27,    79,   100,   110,   112,     1,
      72,    23,     1,    23,    67,    71,     1,    22,    63,   103,
     105,   103,    67,     1,    67,     1,    74,   111,    74,    74,
      74,    74,     1,    22,     5,    25,    80,    88,   104,    79,
      79,    79,    79,     1,    79,    74,    74,     1,    22,     1,
      31,    32,    33,    80,    88,    79,     1,    79,     1,     4,
      18,    35,    36,    38,    39,    43,    45,    46,    48,    60,
      61,    77,    83,    84,    85,    86,    93,    99,   101,   102,
     106,   107,   109,   116,     1,   107,    28,     1,     5,    73,
       1,     5,    28,    73,     1,     5,    44,    47,    87,     1,
       3,     5,     6,     7,     8,    14,    18,    19,    20,    21,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      70,    78,    98,   115,   117,     1,     4,     9,    11,    12,
      13,    15,    17,    90,    91,    96,    97,   114,     1,    19,
       1,    19,     1,   111,     1,   117,     1,    19,     1,    23,
       1,    62,    63,     1,    87,     1,    34,    40,   106,    28,
      23,    28,    29,    28,    28,    28,    28,    28,    10,    16,
      30,    37,    41,    42,    75,    76,    81,    82,    89,    92,
      95,   114,   114,   114,   114,     1,   117,     1,   117,     1,
      76,    78,    81,   110,     1,    78,    81,    12,    90,    90,
      96,    12,    96,     1,   110,    34,     1,    34,   110,     1,
     110,   110,     1,   110,    40,     1,    40,   116,   116,   110,
     110,   110,   110,     1,   110,     1,   110,    73,     5,     1,
       9,    12,    15,    69,     9,    15,     9,    15,    92,     1,
      49,   117,    29,     1,    29,   117,     1,   117,   110,   117,
     110,   117,     1,   110,     1,   117,   110,   110,     1,   110,
     110,   110,     1,   110,    30,     1,    30,   100,   117,   117,
       1,   117,   100,   100,   100,   110,   110,   110,     1,   110
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    66,    67,    67,    68,    68,    68,    69,    69,    69,
      70,    70,    70,    70,    70,    71,    71,    71,    72,    72,
      73,    73,    74,    74,    75,    75,    76,    76,    77,    77,
      78,    78,    78,    78,    78,    79,    79,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    81,    81,    81,    82,
      82,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    84,    84,    84,    85,    85,    85,
      86,    86,    86,    87,    87,    88,    88,    88,    89,    89,
      89,    90,    90,    90,    91,    92,    92,    93,    93,    94,
      94,    94,    94,    94,    95,    95,    95,    96,    96,    96,
      97,    97,    98,    98,    98,    98,    99,    99,    99,    99,
     100,   101,   101,   101,   102,   102,   102,   103,   104,   104,
     104,   104,   105,   105,   105,   106,   106,   106,   107,   107,
     108,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   110,   110,   111,   111,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   113,   114,   114,   115,   115,   115,
     115,   115,   116,   116,   116,   116,   116,   116,   117,   117,
     117,   117,   117,   117,   117,   117,   117
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     4,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     1,     2,
       3,     3,     1,     1,     1,     1,     2,     1,     1,     1,
       2,     2,     2,     2,     1,     1,     1,     4,     4,     4,
       4,     3,     4,     4,     4,     3,     3,     3,     3,     2,
       2,     3,     4,     4,     3,     3,     4,     4,     4,     4,
       3,     4,     4,     3,     3,     3,     3,     2,     2,     2,
       1,     1,     1,     1,     1,     3,     3,     3,     1,     2,
       2,     1,     2,     2,     1,     1,     1,     2,     2,     3,
       2,     3,     3,     3,     1,     2,     2,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     5,     5,     5,     5,
       1,     3,     3,     3,     3,     3,     3,     2,     1,     1,
       2,     2,     4,     4,     4,     1,     3,     3,     1,     2,
       1,     4,     3,     5,     4,     4,     4,     3,     3,     5,
       5,     5,     5,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     2,     4,     4,     4,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* Act: ActHeader Scene  */
#line 185 "grammar.y"
                {
  (yyval.str) = cat2((yyvsp[-1].str), (yyvsp[0].str));
}
#line 1612 "grammar.tab.c"
    break;

  case 3: /* Act: Act Scene  */
#line 188 "grammar.y"
          {
  (yyval.str) = cat2((yyvsp[-1].str), (yyvsp[0].str));
}
#line 1620 "grammar.tab.c"
    break;

  case 4: /* ActHeader: ACT_ROMAN COLON Comment EndSymbol  */
#line 193 "grammar.y"
                                  {
  free(current_act);
  current_act = newstr(str2varname((yyvsp[-3].str)));
  (yyval.str) = cat4(newstr("\n"), strpad(cat2(newstr(current_act), newstr(":")), COMMENT_COLUMN, ' '), (yyvsp[-1].str), newstr("\n"));
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 1632 "grammar.tab.c"
    break;

  case 5: /* ActHeader: ACT_ROMAN COLON Comment error  */
#line 200 "grammar.y"
                              {
  report_warning("period or exclamation mark");
  free(current_act);
  current_act = newstr(str2varname((yyvsp[-3].str)));
  (yyval.str) = cat4(newstr("\n"), strpad(cat2(newstr(current_act), newstr(":")), COMMENT_COLUMN, ' '), (yyvsp[-1].str), newstr("\n"));
  free((yyvsp[-2].str));
}
#line 1644 "grammar.tab.c"
    break;

  case 6: /* ActHeader: ACT_ROMAN error Comment EndSymbol  */
#line 207 "grammar.y"
                                  {
  report_warning("colon");
  free(current_act);
  current_act = newstr(str2varname((yyvsp[-3].str)));
  (yyval.str) = cat4(newstr("\n"), strpad(cat2(newstr(current_act), newstr(":")), COMMENT_COLUMN, ' '), (yyvsp[-1].str), newstr("\n"));
  free((yyvsp[0].str));
}
#line 1656 "grammar.tab.c"
    break;

  case 7: /* Adjective: POSITIVE_ADJECTIVE  */
#line 216 "grammar.y"
                   {
  (yyval.str) = (yyvsp[0].str);
}
#line 1664 "grammar.tab.c"
    break;

  case 8: /* Adjective: NEUTRAL_ADJECTIVE  */
#line 219 "grammar.y"
                  {
  (yyval.str) = (yyvsp[0].str);
}
#line 1672 "grammar.tab.c"
    break;

  case 9: /* Adjective: NEGATIVE_ADJECTIVE  */
#line 222 "grammar.y"
                   {
  (yyval.str) = (yyvsp[0].str);
}
#line 1680 "grammar.tab.c"
    break;

  case 10: /* BinaryOperator: THE_DIFFERENCE_BETWEEN  */
#line 227 "grammar.y"
                       {
  (yyval.stringlist).list = (char **) malloc(3*sizeof(char **));
  (yyval.stringlist).list[0] = cat3(newstr("int_sub("), int2str(yylineno), newstr(", "));
  (yyval.stringlist).list[1] = newstr(", ");
  (yyval.stringlist).list[2] = newstr(")");
  free((yyvsp[0].str));
}
#line 1692 "grammar.tab.c"
    break;

  case 11: /* BinaryOperator: THE_PRODUCT_OF  */
#line 234 "grammar.y"
               {
  (yyval.stringlist).list = (char **) malloc(3*sizeof(char **));
  (yyval.stringlist).list[0] = cat3(newstr("int_mul("), int2str(yylineno), newstr(", "));
  (yyval.stringlist).list[1] = newstr(", ");
  (yyval.stringlist).list[2] = newstr(")");
  free((yyvsp[0].str));
}
#line 1704 "grammar.tab.c"
    break;

  case 12: /* BinaryOperator: THE_QUOTIENT_BETWEEN  */
#line 241 "grammar.y"
                     {
  (yyval.stringlist).list = (char **) malloc(3*sizeof(char **));
  (yyval.stringlist).list[0] = cat3(newstr("int_div("), int2str(yylineno), newstr(", "));
  (yyval.stringlist).list[1] = newstr(", ");
  (yyval.stringlist).list[2] = newstr(")");
  free((yyvsp[0].str));
}
#line 1716 "grammar.tab.c"
    break;

  case 13: /* BinaryOperator: THE_REMAINDER_OF_THE_QUOTIENT_BETWEEN  */
#line 248 "grammar.y"
                                      {
  (yyval.stringlist).list = (char **) malloc(3*sizeof(char **));
  (yyval.stringlist).list[0] = cat3(newstr("int_mod("), int2str(yylineno), newstr(", "));
  (yyval.stringlist).list[1] = newstr(", ");
  (yyval.stringlist).list[2] = newstr(")");
  free((yyvsp[0].str));
}
#line 1728 "grammar.tab.c"
    break;

  case 14: /* BinaryOperator: THE_SUM_OF  */
#line 255 "grammar.y"
           {
  (yyval.stringlist).list = (char **) malloc(3*sizeof(char **));
  (yyval.stringlist).list[0] = cat3(newstr("int_add("), int2str(yylineno), newstr(", "));
  (yyval.stringlist).list[1] = newstr(", ");
  (yyval.stringlist).list[2] = newstr(")");
  free((yyvsp[0].str));
}
#line 1740 "grammar.tab.c"
    break;

  case 15: /* CharacterDeclaration: CHARACTER COMMA Comment EndSymbol  */
#line 264 "grammar.y"
                                  {
  (yyval.stringlist).list = (char **) malloc(2*sizeof(char **));
  (yyval.stringlist).list[0] = cat3(strpad(cat3(newstr("CHARACTER *"), str2varname(newstr((yyvsp[-3].str))),
				newstr(";")), COMMENT_COLUMN, ' '),
		    (yyvsp[-1].str), newstr("\n"));
  (yyval.stringlist).list[1] = cat4(str2varname(newstr((yyvsp[-3].str))), newstr(" = initialize_character(\""),
		    (yyvsp[-3].str), newstr("\");\n"));
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 1755 "grammar.tab.c"
    break;

  case 16: /* CharacterDeclaration: error COMMA Comment EndSymbol  */
#line 274 "grammar.y"
                              {
  report_error("character name");
  (yyval.stringlist).list = (char **) malloc(2*sizeof(char **));
  (yyval.stringlist).list[0] = newstr("");
  (yyval.stringlist).list[1] = newstr("");
}
#line 1766 "grammar.tab.c"
    break;

  case 17: /* CharacterDeclaration: CHARACTER error Comment EndSymbol  */
#line 280 "grammar.y"
                                  {
  report_error("comma");
  (yyval.stringlist).list = (char **) malloc(2*sizeof(char **));
  (yyval.stringlist).list[0] = newstr("");
  (yyval.stringlist).list[1] = newstr("");
}
#line 1777 "grammar.tab.c"
    break;

  case 18: /* CharacterDeclarationList: CharacterDeclaration  */
#line 288 "grammar.y"
                     {
  (yyval.stringlist).list = (char **) malloc(2*sizeof(char **));
  (yyval.stringlist).list[0] = (yyvsp[0].stringlist).list[0];
  (yyval.stringlist).list[1] = (yyvsp[0].stringlist).list[1];
  free((yyvsp[0].stringlist).list);
}
#line 1788 "grammar.tab.c"
    break;

  case 19: /* CharacterDeclarationList: CharacterDeclarationList CharacterDeclaration  */
#line 294 "grammar.y"
                                              {
  (yyval.stringlist).list = (yyvsp[-1].stringlist).list;
  (yyval.stringlist).list[0] = cat2((yyvsp[-1].stringlist).list[0], (yyvsp[0].stringlist).list[0]);
  (yyval.stringlist).list[1] = cat2((yyvsp[-1].stringlist).list[1], (yyvsp[0].stringlist).list[1]);
  free((yyvsp[0].stringlist).list);
}
#line 1799 "grammar.tab.c"
    break;

  case 20: /* CharacterList: CHARACTER AND CHARACTER  */
#line 302 "grammar.y"
                        {
  (yyval.stringlist).list = (char **) malloc(2*sizeof(char **));
  (yyval.stringlist).list[0] = (yyvsp[-2].str);
  (yyval.stringlist).list[1] = (yyvsp[0].str);
  (yyval.stringlist).num = 2;
  free((yyvsp[-1].str));
}
#line 1811 "grammar.tab.c"
    break;

  case 21: /* CharacterList: CHARACTER COMMA CharacterList  */
#line 309 "grammar.y"
                              {
  (yyval.stringlist).num = (yyvsp[0].stringlist).num + 1;
  (yyval.stringlist).list = realloc((yyvsp[0].stringlist).list, (yyval.stringlist).num*sizeof(char **));
  (yyval.stringlist).list[(yyval.stringlist).num - 1] = (yyvsp[-2].str);
  free((yyvsp[-1].str));
}
#line 1822 "grammar.tab.c"
    break;

  case 22: /* Comment: String  */
#line 317 "grammar.y"
       {
  (yyval.str) = cat3(newstr("/* "), (yyvsp[0].str), newstr(" */"));
}
#line 1830 "grammar.tab.c"
    break;

  case 23: /* Comment: error  */
#line 320 "grammar.y"
      {
  report_warning("comment");
  (yyval.str) = newstr("/* NO COMMENT FOUND */");
}
#line 1839 "grammar.tab.c"
    break;

  case 24: /* Comparative: NegativeComparative  */
#line 326 "grammar.y"
                    {
  (yyval.str) = newstr("comp1 < comp2");
  free((yyvsp[0].str));
}
#line 1848 "grammar.tab.c"
    break;

  case 25: /* Comparative: PositiveComparative  */
#line 330 "grammar.y"
                    {
  (yyval.str) = newstr("comp1 > comp2");
  free((yyvsp[0].str));
}
#line 1857 "grammar.tab.c"
    break;

  case 26: /* Comparison: NOT NonnegatedComparison  */
#line 336 "grammar.y"
                         {
  (yyval.str) = cat2(newstr("!"), (yyvsp[0].str));
  free((yyvsp[-1].str));
}
#line 1866 "grammar.tab.c"
    break;

  case 27: /* Comparison: NonnegatedComparison  */
#line 340 "grammar.y"
                     {
  (yyval.str) = (yyvsp[0].str);
}
#line 1874 "grammar.tab.c"
    break;

  case 28: /* Conditional: IF_SO  */
#line 345 "grammar.y"
      {
  (yyval.str) = newstr("truth_flag");
  free((yyvsp[0].str));
}
#line 1883 "grammar.tab.c"
    break;

  case 29: /* Conditional: IF_NOT  */
#line 349 "grammar.y"
       {
  (yyval.str) = newstr("!truth_flag");
  free((yyvsp[0].str));
}
#line 1892 "grammar.tab.c"
    break;

  case 30: /* Constant: ARTICLE UnarticulatedConstant  */
#line 355 "grammar.y"
                              {
  (yyval.str) = (yyvsp[0].str);
  free((yyvsp[-1].str));
}
#line 1901 "grammar.tab.c"
    break;

  case 31: /* Constant: FIRST_PERSON_POSSESSIVE UnarticulatedConstant  */
#line 359 "grammar.y"
                                              {
  (yyval.str) = (yyvsp[0].str);
  free((yyvsp[-1].str));
}
#line 1910 "grammar.tab.c"
    break;

  case 32: /* Constant: SECOND_PERSON_POSSESSIVE UnarticulatedConstant  */
#line 363 "grammar.y"
                                               {
  (yyval.str) = (yyvsp[0].str);
  free((yyvsp[-1].str));
}
#line 1919 "grammar.tab.c"
    break;

  case 33: /* Constant: THIRD_PERSON_POSSESSIVE UnarticulatedConstant  */
#line 367 "grammar.y"
                                              {
  (yyval.str) = (yyvsp[0].str);
  free((yyvsp[-1].str));
}
#line 1928 "grammar.tab.c"
    break;

  case 34: /* Constant: NOTHING  */
#line 371 "grammar.y"
        {
  (yyval.str) = newstr("0");
  free((yyvsp[0].str));
}
#line 1937 "grammar.tab.c"
    break;

  case 35: /* EndSymbol: QuestionSymbol  */
#line 377 "grammar.y"
               {
  (yyval.str) = (yyvsp[0].str);
}
#line 1945 "grammar.tab.c"
    break;

  case 36: /* EndSymbol: StatementSymbol  */
#line 380 "grammar.y"
                {
  (yyval.str) = (yyvsp[0].str);
}
#line 1953 "grammar.tab.c"
    break;

  case 37: /* EnterExit: LEFT_BRACKET ENTER CHARACTER RIGHT_BRACKET  */
#line 385 "grammar.y"
                                           {
  (yyval.str) = cat5(newstr("\nenter_scene("), int2str(yylineno), newstr(", "), str2varname((yyvsp[-1].str)), newstr(");\n"));
  free((yyvsp[-3].str));
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 1964 "grammar.tab.c"
    break;

  case 38: /* EnterExit: LEFT_BRACKET ENTER CharacterList RIGHT_BRACKET  */
#line 391 "grammar.y"
                                               {
  (yyval.str) = newstr("\n");
  for (i = 0; i < (yyvsp[-1].stringlist).num; i++) {
    (yyval.str) = cat6((yyval.str), newstr("enter_scene("), int2str(yylineno), newstr(", "),
	      str2varname((yyvsp[-1].stringlist).list[i]), newstr(");\n"));
  }
  free((yyvsp[-1].stringlist).list);
  free((yyvsp[-3].str));
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 1980 "grammar.tab.c"
    break;

  case 39: /* EnterExit: LEFT_BRACKET EXIT CHARACTER RIGHT_BRACKET  */
#line 402 "grammar.y"
                                          {
  (yyval.str) = cat5(newstr("\nexit_scene("), int2str(yylineno), newstr(", "), str2varname((yyvsp[-1].str)), newstr(");\n"));
  free((yyvsp[-3].str));
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 1991 "grammar.tab.c"
    break;

  case 40: /* EnterExit: LEFT_BRACKET EXEUNT CharacterList RIGHT_BRACKET  */
#line 408 "grammar.y"
                                                {
  (yyval.str) = newstr("\n");
  for (i = 0; i < (yyvsp[-1].stringlist).num; i++) {
    (yyval.str) = cat6((yyval.str), newstr("exit_scene("), int2str(yylineno), newstr(", "),
	      str2varname((yyvsp[-1].stringlist).list[i]), newstr(");\n"));
  }
  free((yyvsp[-1].stringlist).list);
  free((yyvsp[-3].str));
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 2007 "grammar.tab.c"
    break;

  case 41: /* EnterExit: LEFT_BRACKET EXEUNT RIGHT_BRACKET  */
#line 419 "grammar.y"
                                  {
  (yyval.str) = cat3(newstr("\nexit_scene_all("), int2str(yylineno), newstr(");\n"));
  free((yyvsp[-2].str));
  free((yyvsp[-1].str));
  free((yyvsp[0].str));
}
#line 2018 "grammar.tab.c"
    break;

  case 42: /* EnterExit: LEFT_BRACKET ENTER error RIGHT_BRACKET  */
#line 425 "grammar.y"
                                       {
  report_error("character or character list");
  (yyval.str) = newstr("");
  free((yyvsp[-3].str));
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 2030 "grammar.tab.c"
    break;

  case 43: /* EnterExit: LEFT_BRACKET EXIT error RIGHT_BRACKET  */
#line 432 "grammar.y"
                                      {
  report_error("character");
  (yyval.str) = newstr("");
  free((yyvsp[-3].str));
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 2042 "grammar.tab.c"
    break;

  case 44: /* EnterExit: LEFT_BRACKET EXEUNT error RIGHT_BRACKET  */
#line 439 "grammar.y"
                                        {
  report_error("character list or nothing");
  (yyval.str) = newstr("");
  free((yyvsp[-3].str));
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 2054 "grammar.tab.c"
    break;

  case 45: /* EnterExit: LEFT_BRACKET error RIGHT_BRACKET  */
#line 446 "grammar.y"
                                 {
  report_error("'enter', 'exit' or 'exeunt'");
  (yyval.str) = newstr("");
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 2065 "grammar.tab.c"
    break;

  case 46: /* Equality: AS Adjective AS  */
#line 454 "grammar.y"
                {
  (yyval.str) = newstr("comp1 == comp2");
  free((yyvsp[-2].str));
  free((yyvsp[-1].str));
  free((yyvsp[0].str));
}
#line 2076 "grammar.tab.c"
    break;

  case 47: /* Equality: AS error AS  */
#line 460 "grammar.y"
            {
  report_error("adjective");
  (yyval.str) = newstr("");
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 2087 "grammar.tab.c"
    break;

  case 48: /* Equality: AS Adjective error  */
#line 466 "grammar.y"
                   {
  report_error("as");
  (yyval.str) = newstr("");
  free((yyvsp[-2].str));
  free((yyvsp[-1].str));
}
#line 2098 "grammar.tab.c"
    break;

  case 49: /* Inequality: Comparative THAN  */
#line 474 "grammar.y"
                 {
  (yyval.str) = (yyvsp[-1].str);
  free((yyvsp[0].str));
}
#line 2107 "grammar.tab.c"
    break;

  case 50: /* Inequality: Comparative error  */
#line 478 "grammar.y"
                  {
  report_warning("'than'");
  (yyval.str) = (yyvsp[-1].str);
}
#line 2116 "grammar.tab.c"
    break;

  case 51: /* InOut: OpenYour HEART StatementSymbol  */
#line 484 "grammar.y"
                               {
  (yyval.str) = cat3(newstr("int_output("), int2str(yylineno), newstr(", second_person);\n"));
  free((yyvsp[-2].str));
  free((yyvsp[-1].str));
  free((yyvsp[0].str));
}
#line 2127 "grammar.tab.c"
    break;

  case 52: /* InOut: SPEAK SECOND_PERSON_POSSESSIVE MIND StatementSymbol  */
#line 490 "grammar.y"
                                                    {
  (yyval.str) = cat3(newstr("char_output("), int2str(yylineno), newstr(", second_person);\n"));
  free((yyvsp[-3].str));
  free((yyvsp[-2].str));
  free((yyvsp[-1].str));
  free((yyvsp[0].str));
}
#line 2139 "grammar.tab.c"
    break;

  case 53: /* InOut: LISTEN_TO SECOND_PERSON_POSSESSIVE HEART StatementSymbol  */
#line 497 "grammar.y"
                                                         {
  (yyval.str) = cat3(newstr("int_input("), int2str(yylineno), newstr(", second_person);\n"));
  free((yyvsp[-3].str));
  free((yyvsp[-2].str));
  free((yyvsp[-1].str));
  free((yyvsp[0].str));
}
#line 2151 "grammar.tab.c"
    break;

  case 54: /* InOut: OpenYour MIND StatementSymbol  */
#line 504 "grammar.y"
                              {
  (yyval.str) = cat3(newstr("char_input("), int2str(yylineno), newstr(", second_person);\n"));
  free((yyvsp[-2].str));
  free((yyvsp[-1].str));
  free((yyvsp[0].str));
}
#line 2162 "grammar.tab.c"
    break;

  case 55: /* InOut: OpenYour error StatementSymbol  */
#line 510 "grammar.y"
                               {
  report_error("'mind' or 'heart'");
  (yyval.str) = newstr("");
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 2173 "grammar.tab.c"
    break;

  case 56: /* InOut: SPEAK error MIND StatementSymbol  */
#line 516 "grammar.y"
                                 {
  report_warning("possessive pronoun, second person");
  (yyval.str) = cat3(newstr("char_output("), int2str(yylineno), newstr(", second_person);\n"));
  free((yyvsp[-3].str));
  free((yyvsp[-1].str));
  free((yyvsp[0].str));
}
#line 2185 "grammar.tab.c"
    break;

  case 57: /* InOut: LISTEN_TO error HEART StatementSymbol  */
#line 523 "grammar.y"
                                      {
  report_warning("possessive pronoun, second person");
  (yyval.str) = cat3(newstr("int_input("), int2str(yylineno), newstr(", second_person);\n"));
  free((yyvsp[-3].str));
  free((yyvsp[-1].str));
  free((yyvsp[0].str));
}
#line 2197 "grammar.tab.c"
    break;

  case 58: /* InOut: SPEAK SECOND_PERSON_POSSESSIVE error StatementSymbol  */
#line 530 "grammar.y"
                                                     {
  report_warning("'mind'");
  (yyval.str) = cat3(newstr("char_output("), int2str(yylineno), newstr(", second_person);\n"));
  free((yyvsp[-3].str));
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 2209 "grammar.tab.c"
    break;

  case 59: /* InOut: LISTEN_TO SECOND_PERSON_POSSESSIVE error StatementSymbol  */
#line 537 "grammar.y"
                                                         {
  report_warning("'heart'");
  (yyval.str) = cat3(newstr("int_input("), int2str(yylineno), newstr(", second_person);\n"));
  free((yyvsp[-3].str));
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 2221 "grammar.tab.c"
    break;

  case 60: /* InOut: OpenYour HEART error  */
#line 544 "grammar.y"
                     {
  report_warning("period or exclamation mark");
  (yyval.str) = cat3(newstr("int_output("), int2str(yylineno), newstr(", second_person);\n"));
  free((yyvsp[-2].str));
  free((yyvsp[-1].str));
}
#line 2232 "grammar.tab.c"
    break;

  case 61: /* InOut: SPEAK SECOND_PERSON_POSSESSIVE MIND error  */
#line 550 "grammar.y"
                                          {
  report_warning("period or exclamation mark");
  (yyval.str) = cat3(newstr("char_output("), int2str(yylineno), newstr(", second_person);\n"));
  free((yyvsp[-3].str));
  free((yyvsp[-2].str));
  free((yyvsp[-1].str));
}
#line 2244 "grammar.tab.c"
    break;

  case 62: /* InOut: LISTEN_TO SECOND_PERSON_POSSESSIVE HEART error  */
#line 557 "grammar.y"
                                               {
  report_warning("period or exclamation mark");
  (yyval.str) = cat3(newstr("int_input("), int2str(yylineno), newstr(", second_person);\n"));
  free((yyvsp[-3].str));
  free((yyvsp[-2].str));
  free((yyvsp[-1].str));
}
#line 2256 "grammar.tab.c"
    break;

  case 63: /* InOut: OpenYour MIND error  */
#line 564 "grammar.y"
                    {
  report_warning("period or exclamation mark");
  (yyval.str) = cat3(newstr("char_input("), int2str(yylineno), newstr(", second_person);\n"));
  free((yyvsp[-2].str));
  free((yyvsp[-1].str));
}
#line 2267 "grammar.tab.c"
    break;

  case 64: /* Jump: JumpPhrase ACT_ROMAN StatementSymbol  */
#line 572 "grammar.y"
                                     {
  (yyval.str) = cat3(newstr("goto "), str2varname((yyvsp[-1].str)), newstr(";\n"));
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 2277 "grammar.tab.c"
    break;

  case 65: /* Jump: JumpPhrase SCENE_ROMAN StatementSymbol  */
#line 577 "grammar.y"
                                       {
  (yyval.str) = cat5(newstr("goto "), newstr(current_act), newstr("_"),
	    str2varname((yyvsp[-1].str)), newstr(";\n"));
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 2288 "grammar.tab.c"
    break;

  case 66: /* Jump: JumpPhrase error StatementSymbol  */
#line 583 "grammar.y"
                                 {
  report_error("'act [roman number]' or 'scene [roman number]'");
  (yyval.str) = newstr("");
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 2299 "grammar.tab.c"
    break;

  case 67: /* JumpPhrase: JumpPhraseBeginning JumpPhraseEnd  */
#line 591 "grammar.y"
                                  {
  (yyval.str) = cat3((yyvsp[-1].str), newstr(" "), (yyvsp[0].str));
}
#line 2307 "grammar.tab.c"
    break;

  case 68: /* JumpPhrase: error JumpPhraseEnd  */
#line 594 "grammar.y"
                    {
  report_warning("'let us', 'we must' or 'we shall'");
  (yyval.str) = newstr("");
  free((yyvsp[0].str));
}
#line 2317 "grammar.tab.c"
    break;

  case 69: /* JumpPhrase: JumpPhraseBeginning error  */
#line 599 "grammar.y"
                          {
  report_warning("'proceed to' or 'return to'");
  (yyval.str) = newstr("");
  free((yyvsp[-1].str));
}
#line 2327 "grammar.tab.c"
    break;

  case 70: /* JumpPhraseBeginning: LET_US  */
#line 606 "grammar.y"
       {
  (yyval.str) = (yyvsp[0].str);
}
#line 2335 "grammar.tab.c"
    break;

  case 71: /* JumpPhraseBeginning: WE_MUST  */
#line 609 "grammar.y"
        {
  (yyval.str) = (yyvsp[0].str);
}
#line 2343 "grammar.tab.c"
    break;

  case 72: /* JumpPhraseBeginning: WE_SHALL  */
#line 612 "grammar.y"
         {
  (yyval.str) = (yyvsp[0].str);
}
#line 2351 "grammar.tab.c"
    break;

  case 73: /* JumpPhraseEnd: PROCEED_TO  */
#line 617 "grammar.y"
           {
  (yyval.str) = (yyvsp[0].str);
}
#line 2359 "grammar.tab.c"
    break;

  case 74: /* JumpPhraseEnd: RETURN_TO  */
#line 620 "grammar.y"
          {
  (yyval.str) = (yyvsp[0].str);
}
#line 2367 "grammar.tab.c"
    break;

  case 75: /* Line: CHARACTER COLON SentenceList  */
#line 625 "grammar.y"
                             {
  (yyval.str) = cat6(newstr("\nactivate_character("), int2str(yylineno), newstr(", "), str2varname((yyvsp[-2].str)),
	    newstr(");\n"), (yyvsp[0].str));
  free((yyvsp[-1].str));
}
#line 2377 "grammar.tab.c"
    break;

  case 76: /* Line: CHARACTER COLON error  */
#line 630 "grammar.y"
                      {
  report_error("sentence list");
  (yyval.str) = newstr("");
  free((yyvsp[-2].str));
  free((yyvsp[-1].str));
}
#line 2388 "grammar.tab.c"
    break;

  case 77: /* Line: CHARACTER error SentenceList  */
#line 636 "grammar.y"
                             {
  report_error("colon");
  (yyval.str) = newstr("");
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 2399 "grammar.tab.c"
    break;

  case 78: /* NegativeComparative: NEGATIVE_COMPARATIVE  */
#line 644 "grammar.y"
                     {
  (yyval.str) = (yyvsp[0].str);
}
#line 2407 "grammar.tab.c"
    break;

  case 79: /* NegativeComparative: MORE NEGATIVE_ADJECTIVE  */
#line 647 "grammar.y"
                        {
  (yyval.str) = cat3((yyvsp[-1].str), newstr(" "), (yyvsp[0].str));
}
#line 2415 "grammar.tab.c"
    break;

  case 80: /* NegativeComparative: LESS POSITIVE_ADJECTIVE  */
#line 650 "grammar.y"
                        {
  (yyval.str) = cat3((yyvsp[-1].str), newstr(" "), (yyvsp[0].str));
}
#line 2423 "grammar.tab.c"
    break;

  case 81: /* NegativeConstant: NegativeNoun  */
#line 655 "grammar.y"
             {
  (yyval.str) = newstr("(-1)");
  free((yyvsp[0].str));
}
#line 2432 "grammar.tab.c"
    break;

  case 82: /* NegativeConstant: NEGATIVE_ADJECTIVE NegativeConstant  */
#line 659 "grammar.y"
                                    {
  (yyval.str) = cat2(newstr("2*"), (yyvsp[0].str));
  free((yyvsp[-1].str));
}
#line 2441 "grammar.tab.c"
    break;

  case 83: /* NegativeConstant: NEUTRAL_ADJECTIVE NegativeConstant  */
#line 663 "grammar.y"
                                   {
  (yyval.str) = cat2(newstr("2*"), (yyvsp[0].str));
  free((yyvsp[-1].str));
}
#line 2450 "grammar.tab.c"
    break;

  case 84: /* NegativeNoun: NEGATIVE_NOUN  */
#line 669 "grammar.y"
              {
  (yyval.str) = (yyvsp[0].str);
}
#line 2458 "grammar.tab.c"
    break;

  case 85: /* NonnegatedComparison: Equality  */
#line 674 "grammar.y"
         {
  (yyval.str) = cat3(newstr("("), (yyvsp[0].str), newstr(")"));;
}
#line 2466 "grammar.tab.c"
    break;

  case 86: /* NonnegatedComparison: Inequality  */
#line 677 "grammar.y"
           {
  (yyval.str) = cat3(newstr("("), (yyvsp[0].str), newstr(")"));;
}
#line 2474 "grammar.tab.c"
    break;

  case 87: /* OpenYour: OPEN SECOND_PERSON_POSSESSIVE  */
#line 682 "grammar.y"
                              {
  (yyval.str) = newstr("");
  free((yyvsp[-1].str));
  free((yyvsp[0].str));
}
#line 2484 "grammar.tab.c"
    break;

  case 88: /* OpenYour: OPEN error  */
#line 687 "grammar.y"
           {
  report_warning("possessive pronoun, second person");
  (yyval.str) = newstr("");
  free((yyvsp[-1].str));
}
#line 2494 "grammar.tab.c"
    break;

  case 89: /* Play: Title CharacterDeclarationList Act  */
#line 694 "grammar.y"
                                   {
  (yyval.str) = cat6((yyvsp[-2].str), newstr("\n"), (yyvsp[-1].stringlist).list[0], 
	    newstr("\nint comp1, comp2;\n\nglobal_initialize();\n\n"),
	    (yyvsp[-1].stringlist).list[1], (yyvsp[0].str));
  free((yyvsp[-1].stringlist).list);
}
#line 2505 "grammar.tab.c"
    break;

  case 90: /* Play: Play Act  */
#line 700 "grammar.y"
         {
  (yyval.str) = cat2((yyvsp[-1].str), (yyvsp[0].str));  
}
#line 2513 "grammar.tab.c"
    break;

  case 91: /* Play: Title CharacterDeclarationList error  */
#line 703 "grammar.y"
                                     {
  report_error("act");
  (yyval.str) = newstr("");
  free((yyvsp[-1].stringlist).list[0]);
  free((yyvsp[-1].stringlist).list[1]);
  free((yyvsp[-1].stringlist).list);
}
#line 2525 "grammar.tab.c"
    break;

  case 92: /* Play: Title error Act  */
#line 710 "grammar.y"
                {
  report_error("character declaration list");
  (yyval.str) = newstr("");
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 2536 "grammar.tab.c"
    break;

  case 93: /* Play: error CharacterDeclarationList Act  */
#line 716 "grammar.y"
                                   {
  report_warning("title");
  (yyval.str) = cat4((yyvsp[-1].stringlist).list[0], newstr("\n"), (yyvsp[-1].stringlist).list[1], (yyvsp[0].str));
  free((yyvsp[-1].stringlist).list);
}
#line 2546 "grammar.tab.c"
    break;

  case 94: /* PositiveComparative: POSITIVE_COMPARATIVE  */
#line 723 "grammar.y"
                     {
  (yyval.str) = (yyvsp[0].str);
}
#line 2554 "grammar.tab.c"
    break;

  case 95: /* PositiveComparative: MORE POSITIVE_ADJECTIVE  */
#line 726 "grammar.y"
                        {
  (yyval.str) = cat3((yyvsp[-1].str), newstr(" "), (yyvsp[0].str));
}
#line 2562 "grammar.tab.c"
    break;

  case 96: /* PositiveComparative: LESS NEGATIVE_ADJECTIVE  */
#line 729 "grammar.y"
                        {
  (yyval.str) = cat3((yyvsp[-1].str), newstr(" "), (yyvsp[0].str));
}
#line 2570 "grammar.tab.c"
    break;

  case 97: /* PositiveConstant: PositiveNoun  */
#line 734 "grammar.y"
             {
  (yyval.str) = newstr("1");
  free((yyvsp[0].str));
}
#line 2579 "grammar.tab.c"
    break;

  case 98: /* PositiveConstant: POSITIVE_ADJECTIVE PositiveConstant  */
#line 738 "grammar.y"
                                    {
  (yyval.str) = cat2(newstr("2*"), (yyvsp[0].str));
  free((yyvsp[-1].str));
}
#line 2588 "grammar.tab.c"
    break;

  case 99: /* PositiveConstant: NEUTRAL_ADJECTIVE PositiveConstant  */
#line 742 "grammar.y"
                                   {
  (yyval.str) = cat2(newstr("2*"), (yyvsp[0].str));
  free((yyvsp[-1].str));
}
#line 2597 "grammar.tab.c"
    break;

  case 100: /* PositiveNoun: NEUTRAL_NOUN  */
#line 748 "grammar.y"
             {
  (yyval.str) = (yyvsp[0].str);
}
#line 2605 "grammar.tab.c"
    break;

  case 101: /* PositiveNoun: POSITIVE_NOUN  */
#line 751 "grammar.y"
              {
  (yyval.str) = (yyvsp[0].str);
}
#line 2613 "grammar.tab.c"
    break;

  case 102: /* Pronoun: FIRST_PERSON  */
#line 756 "grammar.y"
             {
  (yyval.str) = newstr("first_person");
}
#line 2621 "grammar.tab.c"
    break;

  case 103: /* Pronoun: FIRST_PERSON_REFLEXIVE  */
#line 759 "grammar.y"
                       {
  (yyval.str) = newstr("first_person");
}
#line 2629 "grammar.tab.c"
    break;

  case 104: /* Pronoun: SECOND_PERSON  */
#line 762 "grammar.y"
              {
  (yyval.str) = newstr("second_person");
}
#line 2637 "grammar.tab.c"
    break;

  case 105: /* Pronoun: SECOND_PERSON_REFLEXIVE  */
#line 765 "grammar.y"
                        {
  (yyval.str) = newstr("second_person");
}
#line 2645 "grammar.tab.c"
    break;

  case 106: /* Question: BE Value Comparison Value QuestionSymbol  */
#line 770 "grammar.y"
                                         {
  (yyval.str) = cat9(newstr("comp1 = "), (yyvsp[-3].str), newstr(";\n"),
	    newstr("comp2 = "), (yyvsp[-1].str), newstr(";\n"),
	    newstr("truth_flag = "), (yyvsp[-2].str), newstr(";\n"));
  free((yyvsp[-4].str));
  free((yyvsp[0].str));
}
#line 2657 "grammar.tab.c"
    break;

  case 107: /* Question: BE error Comparison Value QuestionSymbol  */
#line 777 "grammar.y"
                                         {
  report_error("value");
  (yyval.str) = newstr("");
  free((yyvsp[-4].str));
  free((yyvsp[-2].str));
  free((yyvsp[-1].str));
  free((yyvsp[0].str));
}
#line 2670 "grammar.tab.c"
    break;

  case 108: /* Question: BE Value error Value QuestionSymbol  */
#line 785 "grammar.y"
                                    {
  report_error("comparison");
  (yyval.str) = newstr("");
  free((yyvsp[-4].str));
  free((yyvsp[-3].str));
  free((yyvsp[-1].str));
  free((yyvsp[0].str));
}
#line 2683 "grammar.tab.c"
    break;

  case 109: /* Question: BE Value Comparison error QuestionSymbol  */
#line 793 "grammar.y"
                                         {
  report_error("value");
  (yyval.str) = newstr("");
  free((yyvsp[-4].str));
  free((yyvsp[-3].str));
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 2696 "grammar.tab.c"
    break;

  case 110: /* QuestionSymbol: QUESTION_MARK  */
#line 803 "grammar.y"
              {
  (yyval.str) = (yyvsp[0].str);
}
#line 2704 "grammar.tab.c"
    break;

  case 111: /* Recall: RECALL String StatementSymbol  */
#line 808 "grammar.y"
                              {
  (yyval.str) = cat3(newstr("pop("), int2str(yylineno), newstr(", second_person);\n"));
  free((yyvsp[-2].str));
  free((yyvsp[-1].str));
  free((yyvsp[0].str));
}
#line 2715 "grammar.tab.c"
    break;

  case 112: /* Recall: RECALL error StatementSymbol  */
#line 814 "grammar.y"
                             {
  report_warning("string");
  (yyval.str) = cat3(newstr("pop("), int2str(yylineno), newstr(", second_person);\n"));
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 2726 "grammar.tab.c"
    break;

  case 113: /* Recall: RECALL String error  */
#line 820 "grammar.y"
                    {
  report_warning("period or exclamation mark");
  (yyval.str) = cat3(newstr("pop("), int2str(yylineno), newstr(", second_person);\n"));
  free((yyvsp[-2].str));
  free((yyvsp[-1].str));
}
#line 2737 "grammar.tab.c"
    break;

  case 114: /* Remember: REMEMBER Value StatementSymbol  */
#line 828 "grammar.y"
                               {
  (yyval.str) = cat5(newstr("push("), int2str(yylineno), newstr(", second_person, "), (yyvsp[-1].str), newstr(");\n"));
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 2747 "grammar.tab.c"
    break;

  case 115: /* Remember: REMEMBER error StatementSymbol  */
#line 833 "grammar.y"
                               {
  report_error("value");
  (yyval.str) = newstr("");
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 2758 "grammar.tab.c"
    break;

  case 116: /* Remember: REMEMBER Value error  */
#line 839 "grammar.y"
                     {
  report_warning("period or exclamation mark");
  (yyval.str) = cat5(newstr("push("), int2str(yylineno), newstr(", second_person, "), (yyvsp[-1].str), newstr(");\n"));
  free((yyvsp[-2].str));
}
#line 2768 "grammar.tab.c"
    break;

  case 117: /* Scene: SceneHeader SceneContents  */
#line 846 "grammar.y"
                          {
  (yyval.str) = cat2((yyvsp[-1].str), (yyvsp[0].str));
}
#line 2776 "grammar.tab.c"
    break;

  case 118: /* SceneContents: EnterExit  */
#line 851 "grammar.y"
          {
  (yyval.str) = (yyvsp[0].str);
}
#line 2784 "grammar.tab.c"
    break;

  case 119: /* SceneContents: Line  */
#line 854 "grammar.y"
     {
  (yyval.str) = (yyvsp[0].str);
}
#line 2792 "grammar.tab.c"
    break;

  case 120: /* SceneContents: SceneContents EnterExit  */
#line 857 "grammar.y"
                        {
  (yyval.str) = cat2((yyvsp[-1].str), (yyvsp[0].str));
}
#line 2800 "grammar.tab.c"
    break;

  case 121: /* SceneContents: SceneContents Line  */
#line 860 "grammar.y"
                   {
  (yyval.str) = cat2((yyvsp[-1].str), (yyvsp[0].str));
}
#line 2808 "grammar.tab.c"
    break;

  case 122: /* SceneHeader: SCENE_ROMAN COLON Comment EndSymbol  */
#line 865 "grammar.y"
                                    {
  free(current_scene);
  current_scene = cat3(newstr(current_act), newstr("_"), str2varname((yyvsp[-3].str)));
  (yyval.str) = cat4(newstr("\n"), strpad(cat2(newstr(current_scene), newstr(":")), COMMENT_COLUMN, ' '), (yyvsp[-1].str), newstr("\n"));
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 2820 "grammar.tab.c"
    break;

  case 123: /* SceneHeader: SCENE_ROMAN COLON Comment error  */
#line 872 "grammar.y"
                                {
  report_warning("period or exclamation mark");
  free(current_scene);
  current_scene = cat3(newstr(current_act), newstr("_"), str2varname((yyvsp[-3].str)));
  (yyval.str) = cat4(newstr("\n"), strpad(cat2(newstr(current_scene), newstr(":")), COMMENT_COLUMN, ' '), (yyvsp[-1].str), newstr("\n"));
  free((yyvsp[-2].str));
}
#line 2832 "grammar.tab.c"
    break;

  case 124: /* SceneHeader: SCENE_ROMAN error Comment EndSymbol  */
#line 879 "grammar.y"
                                    {
  report_warning("colon");
  free(current_scene);
  current_scene = cat3(newstr(current_act), newstr("_"), str2varname((yyvsp[-3].str)));
  (yyval.str) = cat4(newstr("\n"), strpad(cat2(newstr(current_scene), newstr(":")), COMMENT_COLUMN, ' '), (yyvsp[-1].str), newstr("\n"));
  free((yyvsp[0].str));
}
#line 2844 "grammar.tab.c"
    break;

  case 125: /* Sentence: UnconditionalSentence  */
#line 888 "grammar.y"
                      {
  (yyval.str) = (yyvsp[0].str);
}
#line 2852 "grammar.tab.c"
    break;

  case 126: /* Sentence: Conditional COMMA UnconditionalSentence  */
#line 891 "grammar.y"
                                        {
  (yyval.str) = cat5(newstr("if ("), (yyvsp[-2].str), newstr(") {\n"), strindent((yyvsp[0].str), INDENT), newstr("}\n"));
}
#line 2860 "grammar.tab.c"
    break;

  case 127: /* Sentence: Conditional error UnconditionalSentence  */
#line 894 "grammar.y"
                                        {
  report_warning("comma");
  (yyval.str) = cat5(newstr("if ("), (yyvsp[-2].str), newstr(") {\n"), strindent((yyvsp[0].str), INDENT), newstr("}\n"));
}
#line 2869 "grammar.tab.c"
    break;

  case 128: /* SentenceList: Sentence  */
#line 900 "grammar.y"
         {
  (yyval.str) = (yyvsp[0].str);
}
#line 2877 "grammar.tab.c"
    break;

  case 129: /* SentenceList: SentenceList Sentence  */
#line 903 "grammar.y"
                      {
  (yyval.str) = cat2((yyvsp[-1].str), (yyvsp[0].str));
}
#line 2885 "grammar.tab.c"
    break;

  case 130: /* StartSymbol: Play  */
#line 908 "grammar.y"
     {
  char *program;

  program = strindent(cat2((yyvsp[0].str), newstr("\nreturn 0;")), INDENT);
  if (num_errors == 0) {
    printf("/********************************************************************\n");
    printf(" *   This C program was generated by spl2c, the Shakespeare to C    *\n");
    printf(" *          converter by Jon Åslund and Karl Hasselström.           *\n");
    printf(" ********************************************************************/\n");
    printf("\n");
    printf("/* libspl definitions and function prototypes */\n");
    printf("#include <spl.h>\n");
    printf("\n");
    printf("int main(void)\n");
    printf("{\n");
    printf("%s\n", program);
    printf("}\n");
  }
  free(program);
}
#line 2910 "grammar.tab.c"
    break;

  case 131: /* Statement: SECOND_PERSON BE Constant StatementSymbol  */
#line 930 "grammar.y"
                                          {
  (yyval.str) = cat5(newstr("assign("), int2str(yylineno), newstr(", second_person, "), (yyvsp[-1].str), newstr(");\n"));
  free((yyvsp[-3].str));
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 2921 "grammar.tab.c"
    break;

  case 132: /* Statement: SECOND_PERSON UnarticulatedConstant StatementSymbol  */
#line 936 "grammar.y"
                                                    {
  (yyval.str) = cat5(newstr("assign("), int2str(yylineno), newstr(", second_person, "), (yyvsp[-1].str), newstr(");\n"));
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 2931 "grammar.tab.c"
    break;

  case 133: /* Statement: SECOND_PERSON BE Equality Value StatementSymbol  */
#line 941 "grammar.y"
                                                {
  (yyval.str) = cat5(newstr("assign("), int2str(yylineno), newstr(", second_person, "), (yyvsp[-1].str), newstr(");\n"));
  free((yyvsp[-4].str));
  free((yyvsp[-3].str));
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 2943 "grammar.tab.c"
    break;

  case 134: /* Statement: SECOND_PERSON BE Constant error  */
#line 948 "grammar.y"
                                {
  report_warning("period or exclamation mark");
  (yyval.str) = cat5(newstr("assign("), int2str(yylineno), newstr(", second_person, "), (yyvsp[-1].str), newstr(");\n"));
  free((yyvsp[-3].str));
  free((yyvsp[-2].str));
}
#line 2954 "grammar.tab.c"
    break;

  case 135: /* Statement: SECOND_PERSON BE error StatementSymbol  */
#line 954 "grammar.y"
                                       {
  report_error("constant");
  (yyval.str) = newstr("");
  free((yyvsp[-3].str));
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 2966 "grammar.tab.c"
    break;

  case 136: /* Statement: SECOND_PERSON error Constant StatementSymbol  */
#line 961 "grammar.y"
                                             {
  report_warning("be");
  (yyval.str) = cat5(newstr("assign("), int2str(yylineno), newstr(", second_person, "), (yyvsp[-1].str), newstr(");\n"));
  free((yyvsp[-3].str));
  free((yyvsp[0].str));
}
#line 2977 "grammar.tab.c"
    break;

  case 137: /* Statement: SECOND_PERSON UnarticulatedConstant error  */
#line 967 "grammar.y"
                                          {
  report_warning("period or exclamation mark");
  (yyval.str) = cat5(newstr("assign("), int2str(yylineno), newstr(", second_person, "), (yyvsp[-1].str), newstr(");\n"));
  free((yyvsp[-2].str));
}
#line 2987 "grammar.tab.c"
    break;

  case 138: /* Statement: SECOND_PERSON error StatementSymbol  */
#line 972 "grammar.y"
                                    {
  report_error("constant without article");
  (yyval.str) = newstr("");
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 2998 "grammar.tab.c"
    break;

  case 139: /* Statement: SECOND_PERSON BE Equality Value error  */
#line 978 "grammar.y"
                                      {
  report_warning("period or exclamation mark");
  (yyval.str) = cat5(newstr("assign("), int2str(yylineno), newstr(", second_person, "), (yyvsp[-1].str), newstr(");\n"));
  free((yyvsp[-4].str));
  free((yyvsp[-3].str));
  free((yyvsp[-2].str));
}
#line 3010 "grammar.tab.c"
    break;

  case 140: /* Statement: SECOND_PERSON BE Equality error StatementSymbol  */
#line 985 "grammar.y"
                                                {
  report_error("value");
  (yyval.str) = newstr("");
  free((yyvsp[-4].str));
  free((yyvsp[-3].str));
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 3023 "grammar.tab.c"
    break;

  case 141: /* Statement: SECOND_PERSON BE error Value StatementSymbol  */
#line 993 "grammar.y"
                                             {
  report_warning("equality");
  (yyval.str) = cat5(newstr("assign("), int2str(yylineno), newstr(", second_person, "), (yyvsp[-1].str), newstr(");\n"));
  free((yyvsp[-4].str));
  free((yyvsp[-3].str));
  free((yyvsp[0].str));
}
#line 3035 "grammar.tab.c"
    break;

  case 142: /* Statement: SECOND_PERSON error Equality Value StatementSymbol  */
#line 1000 "grammar.y"
                                                   {
  report_warning("be");
  (yyval.str) = cat5(newstr("assign("), int2str(yylineno), newstr(", second_person, "), (yyvsp[-1].str), newstr(");\n"));
  free((yyvsp[-4].str));
  free((yyvsp[-2].str));
  free((yyvsp[0].str));
}
#line 3047 "grammar.tab.c"
    break;

  case 143: /* StatementSymbol: EXCLAMATION_MARK  */
#line 1009 "grammar.y"
                 {
  (yyval.str) = (yyvsp[0].str);
}
#line 3055 "grammar.tab.c"
    break;

  case 144: /* StatementSymbol: PERIOD  */
#line 1012 "grammar.y"
       {
  (yyval.str) = (yyvsp[0].str);
}
#line 3063 "grammar.tab.c"
    break;

  case 145: /* String: StringSymbol  */
#line 1017 "grammar.y"
             {
  (yyval.str) = (yyvsp[0].str);
}
#line 3071 "grammar.tab.c"
    break;

  case 146: /* String: String StringSymbol  */
#line 1020 "grammar.y"
                    {
  (yyval.str) = cat3((yyvsp[-1].str), newstr(" "), (yyvsp[0].str));
}
#line 3079 "grammar.tab.c"
    break;

  case 147: /* StringSymbol: ARTICLE  */
#line 1024 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3085 "grammar.tab.c"
    break;

  case 148: /* StringSymbol: BE  */
#line 1025 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3091 "grammar.tab.c"
    break;

  case 149: /* StringSymbol: CHARACTER  */
#line 1026 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3097 "grammar.tab.c"
    break;

  case 150: /* StringSymbol: FIRST_PERSON  */
#line 1027 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3103 "grammar.tab.c"
    break;

  case 151: /* StringSymbol: FIRST_PERSON_POSSESSIVE  */
#line 1028 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3109 "grammar.tab.c"
    break;

  case 152: /* StringSymbol: FIRST_PERSON_REFLEXIVE  */
#line 1029 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3115 "grammar.tab.c"
    break;

  case 153: /* StringSymbol: NEGATIVE_ADJECTIVE  */
#line 1030 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3121 "grammar.tab.c"
    break;

  case 154: /* StringSymbol: NEGATIVE_COMPARATIVE  */
#line 1031 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3127 "grammar.tab.c"
    break;

  case 155: /* StringSymbol: NEGATIVE_NOUN  */
#line 1032 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3133 "grammar.tab.c"
    break;

  case 156: /* StringSymbol: NEUTRAL_ADJECTIVE  */
#line 1033 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3139 "grammar.tab.c"
    break;

  case 157: /* StringSymbol: NEUTRAL_NOUN  */
#line 1034 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3145 "grammar.tab.c"
    break;

  case 158: /* StringSymbol: NOTHING  */
#line 1035 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3151 "grammar.tab.c"
    break;

  case 159: /* StringSymbol: POSITIVE_ADJECTIVE  */
#line 1036 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3157 "grammar.tab.c"
    break;

  case 160: /* StringSymbol: POSITIVE_COMPARATIVE  */
#line 1037 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3163 "grammar.tab.c"
    break;

  case 161: /* StringSymbol: POSITIVE_NOUN  */
#line 1038 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3169 "grammar.tab.c"
    break;

  case 162: /* StringSymbol: SECOND_PERSON  */
#line 1039 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3175 "grammar.tab.c"
    break;

  case 163: /* StringSymbol: SECOND_PERSON_POSSESSIVE  */
#line 1040 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3181 "grammar.tab.c"
    break;

  case 164: /* StringSymbol: SECOND_PERSON_REFLEXIVE  */
#line 1041 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3187 "grammar.tab.c"
    break;

  case 165: /* StringSymbol: THIRD_PERSON_POSSESSIVE  */
#line 1042 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3193 "grammar.tab.c"
    break;

  case 166: /* StringSymbol: COMMA  */
#line 1044 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3199 "grammar.tab.c"
    break;

  case 167: /* StringSymbol: AND  */
#line 1046 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3205 "grammar.tab.c"
    break;

  case 168: /* StringSymbol: AS  */
#line 1047 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3211 "grammar.tab.c"
    break;

  case 169: /* StringSymbol: ENTER  */
#line 1048 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3217 "grammar.tab.c"
    break;

  case 170: /* StringSymbol: EXEUNT  */
#line 1049 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3223 "grammar.tab.c"
    break;

  case 171: /* StringSymbol: EXIT  */
#line 1050 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3229 "grammar.tab.c"
    break;

  case 172: /* StringSymbol: HEART  */
#line 1051 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3235 "grammar.tab.c"
    break;

  case 173: /* StringSymbol: IF_NOT  */
#line 1052 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3241 "grammar.tab.c"
    break;

  case 174: /* StringSymbol: IF_SO  */
#line 1053 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3247 "grammar.tab.c"
    break;

  case 175: /* StringSymbol: LESS  */
#line 1054 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3253 "grammar.tab.c"
    break;

  case 176: /* StringSymbol: LET_US  */
#line 1055 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3259 "grammar.tab.c"
    break;

  case 177: /* StringSymbol: LISTEN_TO  */
#line 1056 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3265 "grammar.tab.c"
    break;

  case 178: /* StringSymbol: MIND  */
#line 1057 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3271 "grammar.tab.c"
    break;

  case 179: /* StringSymbol: MORE  */
#line 1058 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3277 "grammar.tab.c"
    break;

  case 180: /* StringSymbol: NOT  */
#line 1059 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3283 "grammar.tab.c"
    break;

  case 181: /* StringSymbol: OPEN  */
#line 1060 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3289 "grammar.tab.c"
    break;

  case 182: /* StringSymbol: PROCEED_TO  */
#line 1061 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3295 "grammar.tab.c"
    break;

  case 183: /* StringSymbol: RECALL  */
#line 1062 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3301 "grammar.tab.c"
    break;

  case 184: /* StringSymbol: REMEMBER  */
#line 1063 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3307 "grammar.tab.c"
    break;

  case 185: /* StringSymbol: RETURN_TO  */
#line 1064 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3313 "grammar.tab.c"
    break;

  case 186: /* StringSymbol: SPEAK  */
#line 1065 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3319 "grammar.tab.c"
    break;

  case 187: /* StringSymbol: THAN  */
#line 1066 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3325 "grammar.tab.c"
    break;

  case 188: /* StringSymbol: THE_CUBE_OF  */
#line 1067 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3331 "grammar.tab.c"
    break;

  case 189: /* StringSymbol: THE_DIFFERENCE_BETWEEN  */
#line 1068 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3337 "grammar.tab.c"
    break;

  case 190: /* StringSymbol: THE_FACTORIAL_OF  */
#line 1069 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3343 "grammar.tab.c"
    break;

  case 191: /* StringSymbol: THE_PRODUCT_OF  */
#line 1070 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3349 "grammar.tab.c"
    break;

  case 192: /* StringSymbol: THE_QUOTIENT_BETWEEN  */
#line 1071 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3355 "grammar.tab.c"
    break;

  case 193: /* StringSymbol: THE_REMAINDER_OF_THE_QUOTIENT_BETWEEN  */
#line 1072 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3361 "grammar.tab.c"
    break;

  case 194: /* StringSymbol: THE_SQUARE_OF  */
#line 1073 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3367 "grammar.tab.c"
    break;

  case 195: /* StringSymbol: THE_SQUARE_ROOT_OF  */
#line 1074 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3373 "grammar.tab.c"
    break;

  case 196: /* StringSymbol: THE_SUM_OF  */
#line 1075 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3379 "grammar.tab.c"
    break;

  case 197: /* StringSymbol: TWICE  */
#line 1076 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3385 "grammar.tab.c"
    break;

  case 198: /* StringSymbol: WE_MUST  */
#line 1077 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3391 "grammar.tab.c"
    break;

  case 199: /* StringSymbol: WE_SHALL  */
#line 1078 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3397 "grammar.tab.c"
    break;

  case 200: /* StringSymbol: ACT_ROMAN  */
#line 1080 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3403 "grammar.tab.c"
    break;

  case 201: /* StringSymbol: SCENE_ROMAN  */
#line 1081 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3409 "grammar.tab.c"
    break;

  case 202: /* StringSymbol: ROMAN_NUMBER  */
#line 1082 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3415 "grammar.tab.c"
    break;

  case 203: /* StringSymbol: NONMATCH  */
#line 1084 "grammar.y"
                                                     { (yyval.str) = (yyvsp[0].str); }
#line 3421 "grammar.tab.c"
    break;

  case 204: /* Title: String EndSymbol  */
#line 1088 "grammar.y"
                 {
  (yyval.str) = cat3(newstr("/******************************************************************\n * "),
	    strpad(str2upper((yyvsp[-1].str)), 63, ' '),
	    newstr("*\n ******************************************************************/\n"));
  free((yyvsp[0].str));
}
#line 3432 "grammar.tab.c"
    break;

  case 205: /* UnarticulatedConstant: PositiveConstant  */
#line 1096 "grammar.y"
                 {
  (yyval.str) = (yyvsp[0].str);
}
#line 3440 "grammar.tab.c"
    break;

  case 206: /* UnarticulatedConstant: NegativeConstant  */
#line 1099 "grammar.y"
                 {
  (yyval.str) = (yyvsp[0].str);
}
#line 3448 "grammar.tab.c"
    break;

  case 207: /* UnaryOperator: THE_CUBE_OF  */
#line 1104 "grammar.y"
            {
  (yyval.stringlist).list = (char **) malloc(2*sizeof(char **));
  (yyval.stringlist).list[0] = cat3(newstr("int_cube("), int2str(yylineno), newstr(", "));
  (yyval.stringlist).list[1] = newstr(")");
  free((yyvsp[0].str));
}
#line 3459 "grammar.tab.c"
    break;

  case 208: /* UnaryOperator: THE_FACTORIAL_OF  */
#line 1110 "grammar.y"
                 {
  (yyval.stringlist).list = (char **) malloc(2*sizeof(char **));
  (yyval.stringlist).list[0] = cat3(newstr("int_factorial("), int2str(yylineno), newstr(", "));
  (yyval.stringlist).list[1] = newstr(")");
  free((yyvsp[0].str));
}
#line 3470 "grammar.tab.c"
    break;

  case 209: /* UnaryOperator: THE_SQUARE_OF  */
#line 1116 "grammar.y"
              {
  (yyval.stringlist).list = (char **) malloc(2*sizeof(char **));
  (yyval.stringlist).list[0] = cat3(newstr("int_square("), int2str(yylineno), newstr(", "));
  (yyval.stringlist).list[1] = newstr(")");
  free((yyvsp[0].str));
}
#line 3481 "grammar.tab.c"
    break;

  case 210: /* UnaryOperator: THE_SQUARE_ROOT_OF  */
#line 1122 "grammar.y"
                   {
  (yyval.stringlist).list = (char **) malloc(2*sizeof(char **));
  (yyval.stringlist).list[0] = cat3(newstr("int_sqrt("), int2str(yylineno), newstr(", "));
  (yyval.stringlist).list[1] = newstr(")");
  free((yyvsp[0].str));
}
#line 3492 "grammar.tab.c"
    break;

  case 211: /* UnaryOperator: TWICE  */
#line 1128 "grammar.y"
      {
  (yyval.stringlist).list = (char **) malloc(2*sizeof(char **));
  (yyval.stringlist).list[0] = cat3(newstr("int_twice("), int2str(yylineno), newstr(", "));
  (yyval.stringlist).list[1] = newstr(")");
  free((yyvsp[0].str));
}
#line 3503 "grammar.tab.c"
    break;

  case 212: /* UnconditionalSentence: InOut  */
#line 1136 "grammar.y"
      {
  (yyval.str) = (yyvsp[0].str);
}
#line 3511 "grammar.tab.c"
    break;

  case 213: /* UnconditionalSentence: Jump  */
#line 1139 "grammar.y"
     {
  (yyval.str) = (yyvsp[0].str);
}
#line 3519 "grammar.tab.c"
    break;

  case 214: /* UnconditionalSentence: Question  */
#line 1142 "grammar.y"
         {
  (yyval.str) = (yyvsp[0].str);
}
#line 3527 "grammar.tab.c"
    break;

  case 215: /* UnconditionalSentence: Recall  */
#line 1145 "grammar.y"
       {
  (yyval.str) = (yyvsp[0].str);
}
#line 3535 "grammar.tab.c"
    break;

  case 216: /* UnconditionalSentence: Remember  */
#line 1148 "grammar.y"
         {
  (yyval.str) = (yyvsp[0].str);
}
#line 3543 "grammar.tab.c"
    break;

  case 217: /* UnconditionalSentence: Statement  */
#line 1151 "grammar.y"
          {
  (yyval.str) = (yyvsp[0].str);
}
#line 3551 "grammar.tab.c"
    break;

  case 218: /* Value: CHARACTER  */
#line 1156 "grammar.y"
          {
  (yyval.str) = cat2(str2varname((yyvsp[0].str)), newstr("->value"));
}
#line 3559 "grammar.tab.c"
    break;

  case 219: /* Value: Constant  */
#line 1159 "grammar.y"
         {
  (yyval.str) = (yyvsp[0].str);
}
#line 3567 "grammar.tab.c"
    break;

  case 220: /* Value: Pronoun  */
#line 1162 "grammar.y"
        {
  (yyval.str) = cat5(newstr("value_of("), int2str(yylineno), newstr(", "), (yyvsp[0].str), newstr(")"));
}
#line 3575 "grammar.tab.c"
    break;

  case 221: /* Value: BinaryOperator Value AND Value  */
#line 1165 "grammar.y"
                               {
  (yyval.str) = cat5((yyvsp[-3].stringlist).list[0], (yyvsp[-2].str), (yyvsp[-3].stringlist).list[1], (yyvsp[0].str), (yyvsp[-3].stringlist).list[2]);
  free((yyvsp[-3].stringlist).list);
  free((yyvsp[-1].str));
}
#line 3585 "grammar.tab.c"
    break;

  case 222: /* Value: UnaryOperator Value  */
#line 1170 "grammar.y"
                    {
  (yyval.str) = cat3((yyvsp[-1].stringlist).list[0], (yyvsp[0].str), (yyvsp[-1].stringlist).list[1]);
  free((yyvsp[-1].stringlist).list);
}
#line 3594 "grammar.tab.c"
    break;

  case 223: /* Value: BinaryOperator Value AND error  */
#line 1174 "grammar.y"
                               {
  report_error("value");
  (yyval.str) = newstr("");
  free((yyvsp[-3].stringlist).list[0]);
  free((yyvsp[-3].stringlist).list[1]);
  free((yyvsp[-3].stringlist).list[2]);
  free((yyvsp[-3].stringlist).list);
  free((yyvsp[-2].str));
  free((yyvsp[-1].str));
}
#line 3609 "grammar.tab.c"
    break;

  case 224: /* Value: BinaryOperator Value error Value  */
#line 1184 "grammar.y"
                                 {
  report_warning("'and'");
  (yyval.str) = cat5((yyvsp[-3].stringlist).list[0], (yyvsp[-2].str), (yyvsp[-3].stringlist).list[1], (yyvsp[0].str), (yyvsp[-3].stringlist).list[2]);
  free((yyvsp[-3].stringlist).list);
}
#line 3619 "grammar.tab.c"
    break;

  case 225: /* Value: BinaryOperator error AND Value  */
#line 1189 "grammar.y"
                               {
  report_error("value");
  (yyval.str) = newstr("");
  free((yyvsp[-3].stringlist).list[0]);
  free((yyvsp[-3].stringlist).list[1]);
  free((yyvsp[-3].stringlist).list[2]);
  free((yyvsp[-3].stringlist).list);
  free((yyvsp[-1].str));
  free((yyvsp[0].str));
}
#line 3634 "grammar.tab.c"
    break;

  case 226: /* Value: UnaryOperator error  */
#line 1199 "grammar.y"
                    {
  report_error("value");
  (yyval.str) = newstr("");
  free((yyvsp[-1].stringlist).list[0]);
  free((yyvsp[-1].stringlist).list[1]);
  free((yyvsp[-1].stringlist).list);
}
#line 3646 "grammar.tab.c"
    break;


#line 3650 "grammar.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1207 "grammar.y"


int yyerror(char *s)
{
  /* Don't do anything special here. */
  return 0;
}

void report_error(const char *expected_symbol)
{
  fprintf(stderr, "Error at line %d: %s expected\n", yylineno, expected_symbol);
  num_errors++;
}

void report_warning(const char *expected_symbol)
{
  fprintf(stderr, "Warning at line %d: %s expected\n", yylineno, expected_symbol);
  num_warnings++;
}

int main(void)
{
#if(YYDEBUG == 1)
  yydebug = 1;
#endif
  if (yyparse() == 0) {
    if (num_errors > 0) {
      fprintf(stderr, "%d errors and %d warnings found. No code output.\n", num_errors, num_warnings);
      exit(1);
    } else if (num_warnings > 0) {
      fprintf(stderr, "%d warnings found. Code may be defective.\n", num_warnings);
    }
  } else {
      fprintf(stderr, "Unrecognized error encountered. No code output.\n");
      exit(1);
  }
  return 0;
}
