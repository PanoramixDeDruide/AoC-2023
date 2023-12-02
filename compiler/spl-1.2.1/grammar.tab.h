/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_GRAMMAR_TAB_H_INCLUDED
# define YY_YY_GRAMMAR_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ARTICLE = 258,                 /* ARTICLE  */
    BE = 259,                      /* BE  */
    CHARACTER = 260,               /* CHARACTER  */
    FIRST_PERSON = 261,            /* FIRST_PERSON  */
    FIRST_PERSON_POSSESSIVE = 262, /* FIRST_PERSON_POSSESSIVE  */
    FIRST_PERSON_REFLEXIVE = 263,  /* FIRST_PERSON_REFLEXIVE  */
    NEGATIVE_ADJECTIVE = 264,      /* NEGATIVE_ADJECTIVE  */
    NEGATIVE_COMPARATIVE = 265,    /* NEGATIVE_COMPARATIVE  */
    NEGATIVE_NOUN = 266,           /* NEGATIVE_NOUN  */
    NEUTRAL_ADJECTIVE = 267,       /* NEUTRAL_ADJECTIVE  */
    NEUTRAL_NOUN = 268,            /* NEUTRAL_NOUN  */
    NOTHING = 269,                 /* NOTHING  */
    POSITIVE_ADJECTIVE = 270,      /* POSITIVE_ADJECTIVE  */
    POSITIVE_COMPARATIVE = 271,    /* POSITIVE_COMPARATIVE  */
    POSITIVE_NOUN = 272,           /* POSITIVE_NOUN  */
    SECOND_PERSON = 273,           /* SECOND_PERSON  */
    SECOND_PERSON_POSSESSIVE = 274, /* SECOND_PERSON_POSSESSIVE  */
    SECOND_PERSON_REFLEXIVE = 275, /* SECOND_PERSON_REFLEXIVE  */
    THIRD_PERSON_POSSESSIVE = 276, /* THIRD_PERSON_POSSESSIVE  */
    COLON = 277,                   /* COLON  */
    COMMA = 278,                   /* COMMA  */
    EXCLAMATION_MARK = 279,        /* EXCLAMATION_MARK  */
    LEFT_BRACKET = 280,            /* LEFT_BRACKET  */
    PERIOD = 281,                  /* PERIOD  */
    QUESTION_MARK = 282,           /* QUESTION_MARK  */
    RIGHT_BRACKET = 283,           /* RIGHT_BRACKET  */
    AND = 284,                     /* AND  */
    AS = 285,                      /* AS  */
    ENTER = 286,                   /* ENTER  */
    EXEUNT = 287,                  /* EXEUNT  */
    EXIT = 288,                    /* EXIT  */
    HEART = 289,                   /* HEART  */
    IF_NOT = 290,                  /* IF_NOT  */
    IF_SO = 291,                   /* IF_SO  */
    LESS = 292,                    /* LESS  */
    LET_US = 293,                  /* LET_US  */
    LISTEN_TO = 294,               /* LISTEN_TO  */
    MIND = 295,                    /* MIND  */
    MORE = 296,                    /* MORE  */
    NOT = 297,                     /* NOT  */
    OPEN = 298,                    /* OPEN  */
    PROCEED_TO = 299,              /* PROCEED_TO  */
    RECALL = 300,                  /* RECALL  */
    REMEMBER = 301,                /* REMEMBER  */
    RETURN_TO = 302,               /* RETURN_TO  */
    SPEAK = 303,                   /* SPEAK  */
    THAN = 304,                    /* THAN  */
    THE_CUBE_OF = 305,             /* THE_CUBE_OF  */
    THE_DIFFERENCE_BETWEEN = 306,  /* THE_DIFFERENCE_BETWEEN  */
    THE_FACTORIAL_OF = 307,        /* THE_FACTORIAL_OF  */
    THE_PRODUCT_OF = 308,          /* THE_PRODUCT_OF  */
    THE_QUOTIENT_BETWEEN = 309,    /* THE_QUOTIENT_BETWEEN  */
    THE_REMAINDER_OF_THE_QUOTIENT_BETWEEN = 310, /* THE_REMAINDER_OF_THE_QUOTIENT_BETWEEN  */
    THE_SQUARE_OF = 311,           /* THE_SQUARE_OF  */
    THE_SQUARE_ROOT_OF = 312,      /* THE_SQUARE_ROOT_OF  */
    THE_SUM_OF = 313,              /* THE_SUM_OF  */
    TWICE = 314,                   /* TWICE  */
    WE_MUST = 315,                 /* WE_MUST  */
    WE_SHALL = 316,                /* WE_SHALL  */
    ACT_ROMAN = 317,               /* ACT_ROMAN  */
    SCENE_ROMAN = 318,             /* SCENE_ROMAN  */
    ROMAN_NUMBER = 319,            /* ROMAN_NUMBER  */
    NONMATCH = 320                 /* NONMATCH  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 50 "grammar.y"

  char *str;
  struct {
    int num;
    char **list;
  } stringlist;

#line 137 "grammar.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */
