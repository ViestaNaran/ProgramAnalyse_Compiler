/* A Bison parser, made by GNU Bison 3.7.3.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    COMMA = 258,                   /* COMMA  */
    COLON = 259,                   /* COLON  */
    EQUALTO = 260,                 /* EQUALTO  */
    SEMI_COLON = 261,              /* SEMI_COLON  */
    OPEN_BRACKET = 262,            /* OPEN_BRACKET  */
    CLOSE_BRACKET = 263,           /* CLOSE_BRACKET  */
    CURLY_BRACE_OPEN = 264,        /* CURLY_BRACE_OPEN  */
    CURLY_BRACE_CLOSE = 265,       /* CURLY_BRACE_CLOSE  */
    SQUARE_BRACKET_OPEN = 266,     /* SQUARE_BRACKET_OPEN  */
    SQUARE_BRACKET_CLOSE = 267,    /* SQUARE_BRACKET_CLOSE  */
    CHARACTER_VALUE = 268,         /* CHARACTER_VALUE  */
    INT_VALUE = 269,               /* INT_VALUE  */
    STRING_VALUE = 270,            /* STRING_VALUE  */
    INT = 271,                     /* INT  */
    STRING = 272,                  /* STRING  */
    DATA_TYPE = 273,               /* DATA_TYPE  */
    IDENTIFIER = 274,              /* IDENTIFIER  */
    ARRAY_IDENTIFIER = 275         /* ARRAY_IDENTIFIER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define COMMA 258
#define COLON 259
#define EQUALTO 260
#define SEMI_COLON 261
#define OPEN_BRACKET 262
#define CLOSE_BRACKET 263
#define CURLY_BRACE_OPEN 264
#define CURLY_BRACE_CLOSE 265
#define SQUARE_BRACKET_OPEN 266
#define SQUARE_BRACKET_CLOSE 267
#define CHARACTER_VALUE 268
#define INT_VALUE 269
#define STRING_VALUE 270
#define INT 271
#define STRING 272
#define DATA_TYPE 273
#define IDENTIFIER 274
#define ARRAY_IDENTIFIER 275

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 38 "syntax2.y"

    int intVal;
    char* dataType;
    char* strVal;
    char charVal;

#line 113 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
