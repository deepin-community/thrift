/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 4 "thrift/thrifty.yy" /* yacc.c:339  */

/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements. See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership. The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied. See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/**
 * Thrift parser.
 *
 * This parser is used on a thrift definition file.
 *
 */

#ifndef __STDC_LIMIT_MACROS
#define __STDC_LIMIT_MACROS
#endif
#ifndef __STDC_FORMAT_MACROS
#define __STDC_FORMAT_MACROS
#endif
#include <stdio.h>
#include <string.h>
#ifndef _MSC_VER
#include <inttypes.h>
#else
#include <stdint.h>
#endif
#include <limits.h>
#ifdef _MSC_VER
#include "thrift/windows/config.h"
#endif
#include "thrift/main.h"
#include "thrift/common.h"
#include "thrift/globals.h"
#include "thrift/parse/t_program.h"
#include "thrift/parse/t_scope.h"

#ifdef _MSC_VER
//warning C4065: switch statement contains 'default' but no 'case' labels
#pragma warning(disable:4065)
#endif

/**
 * This global variable is used for automatic numbering of field indices etc.
 * when parsing the members of a struct. Field values are automatically
 * assigned starting from -1 and working their way down.
 */
int y_field_val = -1;
/**
 * This global variable is used for automatic numbering of enum values.
 * y_enum_val is the last value assigned; the next auto-assigned value will be
 * y_enum_val+1, and then it continues working upwards.  Explicitly specified
 * enum values reset y_enum_val to that value.
 */
int32_t y_enum_val = -1;
int g_arglist = 0;
const int struct_is_struct = 0;
const int struct_is_union = 1;


#line 140 "thrift/thrifty.cc" /* yacc.c:339  */

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
#ifndef YY_YY_THRIFT_THRIFTY_HH_INCLUDED
# define YY_YY_THRIFT_THRIFTY_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "thrift/thrifty.yy" /* yacc.c:355  */

#include "thrift/parse/t_program.h"

#line 174 "thrift/thrifty.cc" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    tok_identifier = 258,
    tok_literal = 259,
    tok_doctext = 260,
    tok_int_constant = 261,
    tok_dub_constant = 262,
    tok_include = 263,
    tok_namespace = 264,
    tok_cpp_include = 265,
    tok_cpp_type = 266,
    tok_xsd_all = 267,
    tok_xsd_optional = 268,
    tok_xsd_nillable = 269,
    tok_xsd_attrs = 270,
    tok_void = 271,
    tok_bool = 272,
    tok_string = 273,
    tok_binary = 274,
    tok_uuid = 275,
    tok_byte = 276,
    tok_i8 = 277,
    tok_i16 = 278,
    tok_i32 = 279,
    tok_i64 = 280,
    tok_double = 281,
    tok_map = 282,
    tok_list = 283,
    tok_set = 284,
    tok_oneway = 285,
    tok_async = 286,
    tok_typedef = 287,
    tok_struct = 288,
    tok_xception = 289,
    tok_throws = 290,
    tok_extends = 291,
    tok_service = 292,
    tok_enum = 293,
    tok_const = 294,
    tok_required = 295,
    tok_optional = 296,
    tok_union = 297,
    tok_reference = 298
  };
#endif
/* Tokens.  */
#define tok_identifier 258
#define tok_literal 259
#define tok_doctext 260
#define tok_int_constant 261
#define tok_dub_constant 262
#define tok_include 263
#define tok_namespace 264
#define tok_cpp_include 265
#define tok_cpp_type 266
#define tok_xsd_all 267
#define tok_xsd_optional 268
#define tok_xsd_nillable 269
#define tok_xsd_attrs 270
#define tok_void 271
#define tok_bool 272
#define tok_string 273
#define tok_binary 274
#define tok_uuid 275
#define tok_byte 276
#define tok_i8 277
#define tok_i16 278
#define tok_i32 279
#define tok_i64 280
#define tok_double 281
#define tok_map 282
#define tok_list 283
#define tok_set 284
#define tok_oneway 285
#define tok_async 286
#define tok_typedef 287
#define tok_struct 288
#define tok_xception 289
#define tok_throws 290
#define tok_extends 291
#define tok_service 292
#define tok_enum 293
#define tok_const 294
#define tok_required 295
#define tok_optional 296
#define tok_union 297
#define tok_reference 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 82 "thrift/thrifty.yy" /* yacc.c:355  */

  char*          id;
  int64_t        iconst;
  double         dconst;
  bool           tbool;
  t_doc*         tdoc;
  t_type*        ttype;
  t_base_type*   tbase;
  t_typedef*     ttypedef;
  t_enum*        tenum;
  t_enum_value*  tenumv;
  t_const*       tconst;
  t_const_value* tconstv;
  t_struct*      tstruct;
  t_service*     tservice;
  t_function*    tfunction;
  t_field*       tfield;
  char*          dtext;
  char*          keyword;
  t_field::e_req ereq;
  t_annotation*  tannot;
  t_field_id     tfieldid;

#line 296 "thrift/thrifty.cc" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_THRIFT_THRIFTY_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 313 "thrift/thrifty.cc" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   215

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  143
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  224

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

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
      53,    54,    44,     2,    45,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    52,    46,
      55,    49,    56,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    48,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   249,   249,   261,   272,   281,   286,   291,   295,   307,
     315,   325,   338,   346,   351,   359,   374,   392,   399,   406,
     413,   422,   424,   427,   430,   443,   471,   478,   485,   499,
     514,   526,   545,   554,   560,   565,   571,   576,   583,   590,
     597,   604,   611,   618,   625,   629,   635,   650,   655,   660,
     665,   670,   675,   680,   685,   690,   704,   718,   723,   728,
     741,   746,   753,   759,   774,   778,   783,   788,   798,   803,
     813,   820,   854,   859,   864,   876,   881,   886,   891,   896,
     901,   906,   911,   916,   921,   926,   931,   936,   941,   946,
     951,   956,   961,   966,   971,   976,   981,   986,   991,   996,
    1001,  1006,  1011,  1019,  1059,  1069,  1074,  1079,  1083,  1095,
    1100,  1109,  1114,  1119,  1126,  1145,  1150,  1156,  1169,  1174,
    1179,  1184,  1189,  1194,  1199,  1204,  1209,  1214,  1220,  1231,
    1236,  1241,  1248,  1258,  1268,  1286,  1291,  1296,  1302,  1307,
    1315,  1321,  1330,  1336
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tok_identifier", "tok_literal",
  "tok_doctext", "tok_int_constant", "tok_dub_constant", "tok_include",
  "tok_namespace", "tok_cpp_include", "tok_cpp_type", "tok_xsd_all",
  "tok_xsd_optional", "tok_xsd_nillable", "tok_xsd_attrs", "tok_void",
  "tok_bool", "tok_string", "tok_binary", "tok_uuid", "tok_byte", "tok_i8",
  "tok_i16", "tok_i32", "tok_i64", "tok_double", "tok_map", "tok_list",
  "tok_set", "tok_oneway", "tok_async", "tok_typedef", "tok_struct",
  "tok_xception", "tok_throws", "tok_extends", "tok_service", "tok_enum",
  "tok_const", "tok_required", "tok_optional", "tok_union",
  "tok_reference", "'*'", "','", "';'", "'{'", "'}'", "'='", "'['", "']'",
  "':'", "'('", "')'", "'<'", "'>'", "$accept", "Program",
  "CaptureDocText", "DestroyDocText", "HeaderList", "Header", "Include",
  "DefinitionList", "Definition", "TypeDefinition",
  "CommaOrSemicolonOptional", "Typedef", "Enum", "EnumDefList", "EnumDef",
  "EnumValue", "Const", "ConstValue", "ConstList", "ConstListContents",
  "ConstMap", "ConstMapContents", "StructHead", "Struct", "XsdAll",
  "XsdOptional", "XsdNillable", "XsdAttributes", "Xception", "Service",
  "FlagArgs", "UnflagArgs", "Extends", "FunctionList", "Function",
  "Oneway", "Throws", "FieldList", "Field", "FieldName", "FieldIdentifier",
  "FieldReference", "FieldRequiredness", "FieldValue", "FunctionType",
  "FieldType", "BaseType", "SimpleBaseType", "ContainerType",
  "SimpleContainerType", "MapType", "SetType", "ListType", "CppType",
  "TypeAnnotations", "TypeAnnotationList", "TypeAnnotation",
  "TypeAnnotationValue", YY_NULLPTR
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
     295,   296,   297,   298,    42,    44,    59,   123,   125,    61,
      91,    93,    58,    40,    41,    60,    62
};
# endif

#define YYPACT_NINF -123

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-123)))

#define YYTABLE_NINF -59

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -123,    11,     6,  -123,    28,    18,    17,     9,    22,  -123,
    -123,    50,  -123,    26,    29,  -123,   186,  -123,    36,    40,
      44,   186,  -123,  -123,  -123,  -123,  -123,  -123,    48,  -123,
    -123,  -123,     1,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,    45,    45,    45,    52,  -123,
       1,  -123,     1,  -123,  -123,  -123,    10,    34,    25,    61,
      53,  -123,  -123,    69,    20,    24,    31,     1,  -123,  -123,
    -123,    87,    46,  -123,    42,  -123,    47,     4,  -123,   186,
     186,   186,    -4,    51,  -123,  -123,    54,    27,  -123,    49,
    -123,  -123,    55,    39,    57,  -123,  -123,  -123,     1,    90,
    -123,  -123,     1,    98,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,    -4,  -123,  -123,    58,    99,    -4,   186,    45,  -123,
    -123,    56,     5,    59,  -123,    60,     1,    21,    16,  -123,
       1,  -123,  -123,    63,  -123,  -123,  -123,  -123,   186,    19,
      62,  -123,   105,    -4,  -123,    64,  -123,    -4,  -123,  -123,
      72,  -123,  -123,   159,     1,  -123,  -123,    27,  -123,  -123,
     118,  -123,   102,  -123,  -123,    -4,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,    71,    70,  -123,
      27,   111,  -123,  -123,  -123,   116,    78,  -123,   110,   129,
     119,     1,   112,     1,  -123,    -4,  -123,    -4,   120,  -123,
     113,  -123,  -123,  -123
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,    13,     1,     0,     3,     0,     0,     0,     5,
       7,     0,    11,     0,     0,    10,     0,    44,     0,     0,
       0,     0,    45,    12,    15,    17,    18,    14,     0,    19,
      20,    16,   138,     9,   114,   121,   118,   119,   120,   122,
     123,   124,   125,   126,   127,   136,   136,   136,     0,   115,
     138,   116,   138,   129,   130,   131,     0,    60,     0,     0,
      48,   140,     8,     0,     0,     0,     0,   138,   117,   128,
      70,     0,     0,    27,     0,    47,     0,     0,   135,     0,
       0,     0,    23,     3,    59,    57,     3,     0,    70,   143,
     137,   139,     0,     0,     0,    21,    22,    24,   138,   104,
      69,    62,   138,     0,    26,    35,    34,    32,    33,    43,
      40,    23,    36,    37,     3,     0,    23,     0,   136,   133,
      55,     0,   109,     3,    25,    30,   138,     0,     0,    31,
     138,   142,   141,     0,   134,   103,   107,   108,     0,    66,
       0,    61,     0,    23,    41,     0,    38,    23,    46,   132,
     106,    64,    65,     0,   138,    29,    28,     0,    39,   105,
       0,   113,     0,   112,    56,    23,    72,    75,    73,    74,
      76,    77,    84,    85,    86,    78,    79,    80,    81,    82,
      83,    87,    88,    89,    90,    91,    92,    93,    95,    97,
      96,    98,    99,   100,   101,   102,    94,   111,     0,    42,
       0,    50,    70,   110,    49,    52,     3,    51,    54,    68,
       0,   138,     0,   138,    70,    23,    70,    23,     3,    71,
       3,    63,    53,    67
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -123,  -123,    -1,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -103,  -123,  -123,  -123,  -123,  -123,  -123,  -122,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,   -85,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,   -20,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,   -37,   -50,  -123,  -123,  -123
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    99,     4,     2,     9,    10,     5,    23,    24,
      97,    25,    26,    86,   104,   126,    27,   111,   112,   128,
     113,   127,    28,    29,    76,   205,   208,   211,    30,    31,
     101,   140,    72,   123,   141,   153,   213,    83,   100,   197,
     122,   160,   138,   201,   162,    48,    49,    50,    51,    52,
      53,    54,    55,    64,    62,    77,    91,   116
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,    59,    69,   114,    11,   145,   147,    89,   129,    65,
      66,     3,    13,   132,    -4,    -4,    -4,    82,    -2,   105,
     106,    12,   107,   108,   105,   106,    15,   107,   108,    32,
     105,   106,    33,   107,   108,   165,     6,     7,     8,    56,
     156,    95,    96,    57,   158,   136,   137,    58,   120,   151,
     152,    60,   124,    14,    61,    67,    63,    70,    90,    92,
      93,    94,   199,   109,    74,    75,   110,   146,   109,   144,
      71,   110,    73,    78,   109,    79,   143,   110,   203,    80,
     148,   134,    16,    17,    18,   103,    81,    19,    20,    21,
      84,    87,    22,    85,    88,   118,   121,   133,   115,    98,
     117,   125,   102,   131,   164,   198,   130,   -58,   135,   142,
     154,   155,   219,   119,   221,   159,   157,   206,   150,   149,
     200,   166,   139,   202,   204,   210,   167,   168,   169,   218,
     207,   220,   209,   163,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   215,    34,   217,   212,   216,   214,   223,   222,     0,
       0,     0,     0,     0,     0,   161,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47
};

static const yytype_int16 yycheck[] =
{
      50,    21,    52,    88,     5,   127,   128,     3,   111,    46,
      47,     0,     3,   116,     8,     9,    10,    67,     0,     3,
       4,     4,     6,     7,     3,     4,     4,     6,     7,     3,
       3,     4,     3,     6,     7,   157,     8,     9,    10,     3,
     143,    45,    46,     3,   147,    40,    41,     3,    98,    30,
      31,     3,   102,    44,    53,     3,    11,    47,    54,    79,
      80,    81,   165,    47,     3,    12,    50,    51,    47,    48,
      36,    50,    47,     4,    47,    55,   126,    50,   200,    55,
     130,   118,    32,    33,    34,    86,    55,    37,    38,    39,
       3,    49,    42,    47,    47,    56,     6,   117,    49,    48,
      45,     3,    48,     4,   154,     3,    48,    48,    52,    49,
      48,     6,   215,    56,   217,    43,    52,   202,   138,    56,
      49,     3,   123,    53,    13,    15,     8,     9,    10,   214,
      14,   216,    54,   153,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,   211,     3,   213,    35,    53,    47,    54,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    58,    61,     0,    60,    64,     8,     9,    10,    62,
      63,    59,     4,     3,    44,     4,    32,    33,    34,    37,
      38,    39,    42,    65,    66,    68,    69,    73,    79,    80,
      85,    86,     3,     3,     3,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,   102,   103,
     104,   105,   106,   107,   108,   109,     3,     3,     3,   102,
       3,    53,   111,    11,   110,   110,   110,     3,   111,   111,
      47,    36,    89,    47,     3,    12,    81,   112,     4,    55,
      55,    55,   111,    94,     3,    47,    70,    49,    47,     3,
      54,   113,   102,   102,   102,    45,    46,    67,    48,    59,
      95,    87,    48,    59,    71,     3,     4,     6,     7,    47,
      50,    74,    75,    77,    94,    49,   114,    45,    56,    56,
     111,     6,    97,    90,   111,     3,    72,    78,    76,    67,
      48,     4,    67,   102,   110,    52,    40,    41,    99,    59,
      88,    91,    49,   111,    48,    74,    51,    74,   111,    56,
     102,    30,    31,    92,    48,     6,    67,    52,    67,    43,
      98,    16,   101,   102,   111,    74,     3,     8,     9,    10,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    96,     3,    67,
      49,   100,    53,    74,    13,    82,    94,    14,    83,    54,
      15,    84,    35,    93,    47,   111,    53,   111,    94,    67,
      94,    67,    48,    54
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    60,    61,    61,    62,    62,    62,
      62,    63,    64,    64,    65,    65,    65,    66,    66,    66,
      66,    67,    67,    67,    68,    69,    70,    70,    71,    72,
      72,    73,    74,    74,    74,    74,    74,    74,    75,    76,
      76,    77,    78,    78,    79,    79,    80,    81,    81,    82,
      82,    83,    83,    84,    84,    85,    86,    87,    88,    89,
      89,    90,    90,    91,    92,    92,    92,    93,    93,    94,
      94,    95,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    97,    97,    98,    98,    99,    99,    99,
     100,   100,   101,   101,   102,   102,   102,   103,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   105,   106,
     106,   106,   107,   108,   109,   110,   110,   111,   111,   112,
     112,   113,   114,   114
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     0,     3,     0,     1,     4,     3,
       2,     2,     3,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     5,     6,     2,     0,     4,     3,
       1,     6,     1,     1,     1,     1,     1,     1,     3,     3,
       0,     3,     5,     0,     1,     1,     7,     1,     0,     1,
       0,     1,     0,     4,     0,     6,     9,     0,     0,     2,
       0,     2,     0,    10,     1,     1,     0,     4,     0,     2,
       0,    12,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     1,     0,     1,     1,     0,
       2,     0,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     7,     5,     6,     2,     0,     3,     0,     2,
       0,     3,     2,     0
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
#line 250 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("Program -> Headers DefinitionList");
      if((g_program_doctext_candidate != nullptr) && (g_program_doctext_status != ALREADY_PROCESSED))
      {
        g_program->set_doc(g_program_doctext_candidate);
        g_program_doctext_status = ALREADY_PROCESSED;
      }
      clear_doctext();
    }
#line 1577 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 261 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      if (g_parse_mode == PROGRAM) {
        (yyval.dtext) = g_doctext;
        g_doctext = nullptr;
      } else {
        (yyval.dtext) = nullptr;
      }
    }
#line 1590 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 272 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      if (g_parse_mode == PROGRAM) {
        clear_doctext();
      }
    }
#line 1600 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 282 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("HeaderList -> HeaderList Header");
    }
#line 1608 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 286 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("HeaderList -> ");
    }
#line 1616 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 292 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("Header -> Include");
    }
#line 1624 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 296 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("Header -> tok_namespace tok_identifier tok_identifier");
      declare_valid_program_doctext();
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace((yyvsp[-2].id), (yyvsp[-1].id));
      }
      if ((yyvsp[0].ttype) != nullptr) {
        g_program->set_namespace_annotations((yyvsp[-2].id), (yyvsp[0].ttype)->annotations_);
        delete (yyvsp[0].ttype);
      }
    }
#line 1640 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 9:
#line 308 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("Header -> tok_namespace * tok_identifier");
      declare_valid_program_doctext();
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("*", (yyvsp[0].id));
      }
    }
#line 1652 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 10:
#line 316 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("Header -> tok_cpp_include tok_literal");
      declare_valid_program_doctext();
      if (g_parse_mode == PROGRAM) {
        g_program->add_cpp_include((yyvsp[0].id));
      }
    }
#line 1664 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 11:
#line 326 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("Include -> tok_include tok_literal");
      declare_valid_program_doctext();
      if (g_parse_mode == INCLUDES) {
        std::string path = include_file(std::string((yyvsp[0].id)));
        if (!path.empty()) {
          g_program->add_include(path, std::string((yyvsp[0].id)));
        }
      }
    }
#line 1679 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 339 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("DefinitionList -> DefinitionList Definition");
      if ((yyvsp[-1].dtext) != nullptr && (yyvsp[0].tdoc) != nullptr) {
        (yyvsp[0].tdoc)->set_doc((yyvsp[-1].dtext));
      }
    }
#line 1690 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 13:
#line 346 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("DefinitionList -> ");
    }
#line 1698 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 14:
#line 352 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("Definition -> Const");
      if (g_parse_mode == PROGRAM) {
        g_program->add_const((yyvsp[0].tconst));
      }
      (yyval.tdoc) = (yyvsp[0].tconst);
    }
#line 1710 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 360 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("Definition -> TypeDefinition");
      if (g_parse_mode == PROGRAM) {
        g_scope->add_type((yyvsp[0].ttype)->get_name(), (yyvsp[0].ttype));
        if (g_parent_scope != nullptr) {
          g_parent_scope->add_type(g_parent_prefix + (yyvsp[0].ttype)->get_name(), (yyvsp[0].ttype));
        }
        if (! g_program->is_unique_typename((yyvsp[0].ttype))) {
          yyerror("Type \"%s\" is already defined.", (yyvsp[0].ttype)->get_name().c_str());
          exit(1);
        }
      }
      (yyval.tdoc) = (yyvsp[0].ttype);
    }
#line 1729 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 375 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("Definition -> Service");
      if (g_parse_mode == PROGRAM) {
        g_scope->add_service((yyvsp[0].tservice)->get_name(), (yyvsp[0].tservice));
        if (g_parent_scope != nullptr) {
          g_parent_scope->add_service(g_parent_prefix + (yyvsp[0].tservice)->get_name(), (yyvsp[0].tservice));
        }
        g_program->add_service((yyvsp[0].tservice));
        if (! g_program->is_unique_typename((yyvsp[0].tservice))) {
          yyerror("Type \"%s\" is already defined.", (yyvsp[0].tservice)->get_name().c_str());
          exit(1);
        }
      }
      (yyval.tdoc) = (yyvsp[0].tservice);
    }
#line 1749 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 393 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("TypeDefinition -> Typedef");
      if (g_parse_mode == PROGRAM) {
        g_program->add_typedef((yyvsp[0].ttypedef));
      }
    }
#line 1760 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 400 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("TypeDefinition -> Enum");
      if (g_parse_mode == PROGRAM) {
        g_program->add_enum((yyvsp[0].tenum));
      }
    }
#line 1771 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 407 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("TypeDefinition -> Struct");
      if (g_parse_mode == PROGRAM) {
        g_program->add_struct((yyvsp[0].tstruct));
      }
    }
#line 1782 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 414 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("TypeDefinition -> Xception");
      if (g_parse_mode == PROGRAM) {
        g_program->add_xception((yyvsp[0].tstruct));
      }
    }
#line 1793 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 423 "thrift/thrifty.yy" /* yacc.c:1646  */
    {}
#line 1799 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 425 "thrift/thrifty.yy" /* yacc.c:1646  */
    {}
#line 1805 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 427 "thrift/thrifty.yy" /* yacc.c:1646  */
    {}
#line 1811 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 431 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("TypeDef -> tok_typedef FieldType tok_identifier");
      validate_simple_identifier( (yyvsp[-2].id));
      t_typedef *td = new t_typedef(g_program, (yyvsp[-3].ttype), (yyvsp[-2].id));
      (yyval.ttypedef) = td;
      if ((yyvsp[-1].ttype) != nullptr) {
        (yyval.ttypedef)->annotations_ = (yyvsp[-1].ttype)->annotations_;
        delete (yyvsp[-1].ttype);
      }
    }
#line 1826 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 444 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("Enum -> tok_enum tok_identifier { EnumDefList }");
      (yyval.tenum) = (yyvsp[-2].tenum);
      validate_simple_identifier( (yyvsp[-4].id));
      (yyval.tenum)->set_name((yyvsp[-4].id));
      if ((yyvsp[0].ttype) != nullptr) {
        (yyval.tenum)->annotations_ = (yyvsp[0].ttype)->annotations_;
        delete (yyvsp[0].ttype);
      }

      // make constants for all the enum values
      if (g_parse_mode == PROGRAM) {
        const std::vector<t_enum_value*>& enum_values = (yyval.tenum)->get_constants();
        std::vector<t_enum_value*>::const_iterator c_iter;
        for (c_iter = enum_values.begin(); c_iter != enum_values.end(); ++c_iter) {
          std::string const_name = (yyval.tenum)->get_name() + "." + (*c_iter)->get_name();
          t_const_value* const_val = new t_const_value((*c_iter)->get_value());
          const_val->set_enum((yyval.tenum));
          g_scope->add_constant(const_name, new t_const(g_type_i32, (*c_iter)->get_name(), const_val));
          if (g_parent_scope != nullptr) {
            g_parent_scope->add_constant(g_parent_prefix + const_name, new t_const(g_type_i32, (*c_iter)->get_name(), const_val));
          }
        }
      }
    }
#line 1856 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 472 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("EnumDefList -> EnumDefList EnumDef");
      (yyval.tenum) = (yyvsp[-1].tenum);
      (yyval.tenum)->append((yyvsp[0].tenumv));
    }
#line 1866 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 478 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("EnumDefList -> ");
      (yyval.tenum) = new t_enum(g_program);
      y_enum_val = -1;
    }
#line 1876 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 486 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("EnumDef -> EnumValue");
      (yyval.tenumv) = (yyvsp[-2].tenumv);
      if ((yyvsp[-3].dtext) != nullptr) {
        (yyval.tenumv)->set_doc((yyvsp[-3].dtext));
      }
	  if ((yyvsp[-1].ttype) != nullptr) {
        (yyval.tenumv)->annotations_ = (yyvsp[-1].ttype)->annotations_;
        delete (yyvsp[-1].ttype);
      }
    }
#line 1892 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 29:
#line 500 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("EnumValue -> tok_identifier = tok_int_constant");
      if ((yyvsp[0].iconst) < INT32_MIN || (yyvsp[0].iconst) > INT32_MAX) {
        // Note: this used to be just a warning.  However, since thrift always
        // treats enums as i32 values, I'm changing it to a fatal error.
        // I doubt this will affect many people, but users who run into this
        // will have to update their thrift files to manually specify the
        // truncated i32 value that thrift has always been using anyway.
        failure("64-bit value supplied for enum %s will be truncated.", (yyvsp[-2].id));
      }
      y_enum_val = static_cast<int32_t>((yyvsp[0].iconst));
      (yyval.tenumv) = new t_enum_value((yyvsp[-2].id), y_enum_val);
    }
#line 1910 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 515 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("EnumValue -> tok_identifier");
      validate_simple_identifier( (yyvsp[0].id));
      if (y_enum_val == INT32_MAX) {
        failure("enum value overflow at enum %s", (yyvsp[0].id));
      }
      ++y_enum_val;
      (yyval.tenumv) = new t_enum_value((yyvsp[0].id), y_enum_val);
    }
#line 1924 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 527 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("Const -> tok_const FieldType tok_identifier = ConstValue");
      if (g_parse_mode == PROGRAM) {
        validate_simple_identifier( (yyvsp[-3].id));
        g_scope->resolve_const_value((yyvsp[-1].tconstv), (yyvsp[-4].ttype));
        (yyval.tconst) = new t_const((yyvsp[-4].ttype), (yyvsp[-3].id), (yyvsp[-1].tconstv));
        validate_const_type((yyval.tconst));

        g_scope->add_constant((yyvsp[-3].id), (yyval.tconst));
        if (g_parent_scope != nullptr) {
          g_parent_scope->add_constant(g_parent_prefix + (yyvsp[-3].id), (yyval.tconst));
        }
      } else {
        (yyval.tconst) = nullptr;
      }
    }
#line 1945 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 32:
#line 546 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("ConstValue => tok_int_constant");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_integer((yyvsp[0].iconst));
      if (!g_allow_64bit_consts && ((yyvsp[0].iconst) < INT32_MIN || (yyvsp[0].iconst) > INT32_MAX)) {
        pwarning(1, "64-bit constant \"%" PRIi64"\" may not work in all languages.\n", (yyvsp[0].iconst));
      }
    }
#line 1958 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 555 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("ConstValue => tok_dub_constant");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_double((yyvsp[0].dconst));
    }
#line 1968 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 34:
#line 561 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("ConstValue => tok_literal");
      (yyval.tconstv) = new t_const_value((yyvsp[0].id));
    }
#line 1977 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 566 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("ConstValue => tok_identifier");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_identifier((yyvsp[0].id));
    }
#line 1987 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 572 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("ConstValue => ConstList");
      (yyval.tconstv) = (yyvsp[0].tconstv);
    }
#line 1996 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 577 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("ConstValue => ConstMap");
      (yyval.tconstv) = (yyvsp[0].tconstv);
    }
#line 2005 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 38:
#line 584 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("ConstList => [ ConstListContents ]");
      (yyval.tconstv) = (yyvsp[-1].tconstv);
    }
#line 2014 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 591 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("ConstListContents => ConstListContents ConstValue CommaOrSemicolonOptional");
      (yyval.tconstv) = (yyvsp[-2].tconstv);
      (yyval.tconstv)->add_list((yyvsp[-1].tconstv));
    }
#line 2024 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 597 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("ConstListContents =>");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_list();
    }
#line 2034 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 605 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("ConstMap => { ConstMapContents }");
      (yyval.tconstv) = (yyvsp[-1].tconstv);
    }
#line 2043 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 42:
#line 612 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("ConstMapContents => ConstMapContents ConstValue CommaOrSemicolonOptional");
      (yyval.tconstv) = (yyvsp[-4].tconstv);
      (yyval.tconstv)->add_map((yyvsp[-3].tconstv), (yyvsp[-1].tconstv));
    }
#line 2053 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 43:
#line 618 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("ConstMapContents =>");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_map();
    }
#line 2063 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 44:
#line 626 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      (yyval.iconst) = struct_is_struct;
    }
#line 2071 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 630 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      (yyval.iconst) = struct_is_union;
    }
#line 2079 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 636 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("Struct -> tok_struct tok_identifier { FieldList }");
      validate_simple_identifier( (yyvsp[-5].id));
      (yyvsp[-2].tstruct)->set_xsd_all((yyvsp[-4].tbool));
      (yyvsp[-2].tstruct)->set_union((yyvsp[-6].iconst) == struct_is_union);
      (yyval.tstruct) = (yyvsp[-2].tstruct);
      (yyval.tstruct)->set_name((yyvsp[-5].id));
      if ((yyvsp[0].ttype) != nullptr) {
        (yyval.tstruct)->annotations_ = (yyvsp[0].ttype)->annotations_;
        delete (yyvsp[0].ttype);
      }
    }
#line 2096 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 47:
#line 651 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      (yyval.tbool) = true;
    }
#line 2104 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 48:
#line 655 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      (yyval.tbool) = false;
    }
#line 2112 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 49:
#line 661 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      (yyval.tbool) = true;
    }
#line 2120 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 665 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      (yyval.tbool) = false;
    }
#line 2128 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 671 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      (yyval.tbool) = true;
    }
#line 2136 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 675 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      (yyval.tbool) = false;
    }
#line 2144 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 681 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      (yyval.tstruct) = (yyvsp[-1].tstruct);
    }
#line 2152 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 685 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      (yyval.tstruct) = nullptr;
    }
#line 2160 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 691 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("Xception -> tok_xception tok_identifier { FieldList }");
      validate_simple_identifier( (yyvsp[-4].id));
      (yyvsp[-2].tstruct)->set_name((yyvsp[-4].id));
      (yyvsp[-2].tstruct)->set_xception(true);
      (yyval.tstruct) = (yyvsp[-2].tstruct);
      if ((yyvsp[0].ttype) != nullptr) {
        (yyval.tstruct)->annotations_ = (yyvsp[0].ttype)->annotations_;
        delete (yyvsp[0].ttype);
      }
    }
#line 2176 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 705 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("Service -> tok_service tok_identifier { FunctionList }");
      validate_simple_identifier( (yyvsp[-7].id));
      (yyval.tservice) = (yyvsp[-3].tservice);
      (yyval.tservice)->set_name((yyvsp[-7].id));
      (yyval.tservice)->set_extends((yyvsp[-6].tservice));
      if ((yyvsp[0].ttype) != nullptr) {
        (yyval.tservice)->annotations_ = (yyvsp[0].ttype)->annotations_;
        delete (yyvsp[0].ttype);
      }
    }
#line 2192 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 718 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
       g_arglist = 1;
    }
#line 2200 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 723 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
       g_arglist = 0;
    }
#line 2208 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 729 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("Extends -> tok_extends tok_identifier");
      (yyval.tservice) = nullptr;
      if (g_parse_mode == PROGRAM) {
        (yyval.tservice) = g_scope->get_service((yyvsp[0].id));
        if ((yyval.tservice) == nullptr) {
          yyerror("Service \"%s\" has not been defined.", (yyvsp[0].id));
          exit(1);
        }
      }
    }
#line 2224 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 741 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      (yyval.tservice) = nullptr;
    }
#line 2232 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 747 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FunctionList -> FunctionList Function");
      (yyval.tservice) = (yyvsp[-1].tservice);
      (yyvsp[-1].tservice)->add_function((yyvsp[0].tfunction));
    }
#line 2242 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 753 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FunctionList -> ");
      (yyval.tservice) = new t_service(g_program);
    }
#line 2251 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 760 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      validate_simple_identifier( (yyvsp[-6].id));
      (yyvsp[-4].tstruct)->set_name(std::string((yyvsp[-6].id)) + "_args");
      (yyval.tfunction) = new t_function((yyvsp[-7].ttype), (yyvsp[-6].id), (yyvsp[-4].tstruct), (yyvsp[-2].tstruct), (yyvsp[-8].tbool));
      if ((yyvsp[-9].dtext) != nullptr) {
        (yyval.tfunction)->set_doc((yyvsp[-9].dtext));
      }
      if ((yyvsp[-1].ttype) != nullptr) {
        (yyval.tfunction)->annotations_ = (yyvsp[-1].ttype)->annotations_;
        delete (yyvsp[-1].ttype);
      }
    }
#line 2268 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 775 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      (yyval.tbool) = true;
    }
#line 2276 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 779 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      (yyval.tbool) = true;
    }
#line 2284 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 783 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      (yyval.tbool) = false;
    }
#line 2292 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 789 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("Throws -> tok_throws ( FieldList )");
      (yyval.tstruct) = (yyvsp[-1].tstruct);
      if (g_parse_mode == PROGRAM && !validate_throws((yyval.tstruct))) {
        yyerror("Throws clause may not contain non-exception types");
        exit(1);
      }
    }
#line 2305 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 798 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      (yyval.tstruct) = new t_struct(g_program);
    }
#line 2313 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 804 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldList -> FieldList , Field");
      (yyval.tstruct) = (yyvsp[-1].tstruct);
      if (!((yyval.tstruct)->append((yyvsp[0].tfield)))) {
        yyerror("\"%d: %s\" - field identifier/name has already been used", (yyvsp[0].tfield)->get_key(), (yyvsp[0].tfield)->get_name().c_str());
        exit(1);
      }
    }
#line 2326 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 813 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldList -> ");
      y_field_val = -1;
      (yyval.tstruct) = new t_struct(g_program);
    }
#line 2336 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 71:
#line 821 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("tok_int_constant : Field -> FieldType FieldName");
      if ((yyvsp[-10].tfieldid).auto_assigned) {
        pwarning(1, "No field key specified for %s, resulting protocol may have conflicts or not be backwards compatible!\n", (yyvsp[-6].id));
        if (g_strict >= 192) {
          yyerror("Implicit field keys are deprecated and not allowed with -strict");
          exit(1);
        }
      }
      validate_simple_identifier((yyvsp[-6].id));
      (yyval.tfield) = new t_field((yyvsp[-8].ttype), (yyvsp[-6].id), (yyvsp[-10].tfieldid).value);
      (yyval.tfield)->set_reference((yyvsp[-7].tbool));
      (yyval.tfield)->set_req((yyvsp[-9].ereq));
      if ((yyvsp[-5].tconstv) != nullptr) {
        g_scope->resolve_const_value((yyvsp[-5].tconstv), (yyvsp[-8].ttype));
        validate_field_value((yyval.tfield), (yyvsp[-5].tconstv));
        (yyval.tfield)->set_value((yyvsp[-5].tconstv));
      }
      (yyval.tfield)->set_xsd_optional((yyvsp[-4].tbool));
      (yyval.tfield)->set_xsd_nillable((yyvsp[-3].tbool));
      if ((yyvsp[-11].dtext) != nullptr) {
        (yyval.tfield)->set_doc((yyvsp[-11].dtext));
      }
      if ((yyvsp[-2].tstruct) != nullptr) {
        (yyval.tfield)->set_xsd_attrs((yyvsp[-2].tstruct));
      }
      if ((yyvsp[-1].ttype) != nullptr) {
        (yyval.tfield)->annotations_ = (yyvsp[-1].ttype)->annotations_;
        delete (yyvsp[-1].ttype);
      }
    }
#line 2372 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 855 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_identifier");
      (yyval.id) = (yyvsp[0].id);
    }
#line 2381 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 73:
#line 860 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_namespace");
      (yyval.id) = strdup("namespace");
    }
#line 2390 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 74:
#line 865 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_cpp_include");
      (yyval.id) = strdup("cpp_include");
    }
#line 2399 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 75:
#line 877 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_include");
      (yyval.id) = strdup("include");
    }
#line 2408 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 76:
#line 882 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_void");
      (yyval.id) = strdup("void");
    }
#line 2417 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 887 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_bool");
      (yyval.id) = strdup("bool");
    }
#line 2426 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 78:
#line 892 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_byte");
      (yyval.id) = strdup("byte");
    }
#line 2435 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 897 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_i8");
      (yyval.id) = strdup("i8");
    }
#line 2444 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 80:
#line 902 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_i16");
      (yyval.id) = strdup("i16");
    }
#line 2453 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 81:
#line 907 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_i32");
      (yyval.id) = strdup("i32");
    }
#line 2462 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 912 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_i64");
      (yyval.id) = strdup("i64");
    }
#line 2471 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 917 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_double");
      (yyval.id) = strdup("double");
    }
#line 2480 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 84:
#line 922 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_string");
      (yyval.id) = strdup("string");
    }
#line 2489 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 85:
#line 927 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_binary");
      (yyval.id) = strdup("binary");
    }
#line 2498 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 86:
#line 932 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_uuid");
      (yyval.id) = strdup("uuid");
    }
#line 2507 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 87:
#line 937 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_map");
      (yyval.id) = strdup("map");
    }
#line 2516 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 88:
#line 942 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_list");
      (yyval.id) = strdup("list");
    }
#line 2525 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 89:
#line 947 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_set");
      (yyval.id) = strdup("set");
    }
#line 2534 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 90:
#line 952 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_oneway");
      (yyval.id) = strdup("oneway");
    }
#line 2543 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 91:
#line 957 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_async");
      (yyval.id) = strdup("async");
    }
#line 2552 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 92:
#line 962 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_typedef");
      (yyval.id) = strdup("typedef");
    }
#line 2561 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 93:
#line 967 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_struct");
      (yyval.id) = strdup("struct");
    }
#line 2570 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 94:
#line 972 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_union");
      (yyval.id) = strdup("union");
    }
#line 2579 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 95:
#line 977 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_xception");
      (yyval.id) = strdup("exception");
    }
#line 2588 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 96:
#line 982 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_extends");
      (yyval.id) = strdup("extends");
    }
#line 2597 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 97:
#line 987 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_throws");
      (yyval.id) = strdup("throws");
    }
#line 2606 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 98:
#line 992 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_service");
      (yyval.id) = strdup("service");
    }
#line 2615 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 99:
#line 997 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_enum");
      (yyval.id) = strdup("enum");
    }
#line 2624 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 100:
#line 1002 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_const");
      (yyval.id) = strdup("const");
    }
#line 2633 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 101:
#line 1007 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_required");
      (yyval.id) = strdup("required");
    }
#line 2642 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 102:
#line 1012 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldName -> tok_optional");
      (yyval.id) = strdup("optional");
    }
#line 2651 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 103:
#line 1020 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      if ((yyvsp[-1].iconst) <= 0) {
        if (g_allow_neg_field_keys) {
          /*
           * g_allow_neg_field_keys exists to allow users to add explicitly
           * specified key values to old .thrift files without breaking
           * protocol compatibility.
           */
          if ((yyvsp[-1].iconst) != y_field_val) {
            /*
             * warn if the user-specified negative value isn't what
             * thrift would have auto-assigned.
             */
            pwarning(1, "Nonpositive field key (%" PRIi64") differs from what would be "
                     "auto-assigned by thrift (%d).\n", (yyvsp[-1].iconst), y_field_val);
          }
          /*
           * Leave $1 as-is, and update y_field_val to be one less than $1.
           * The FieldList parsing will catch any duplicate key values.
           */
          y_field_val = static_cast<int32_t>((yyvsp[-1].iconst) - 1);
          (yyval.tfieldid).value = static_cast<int32_t>((yyvsp[-1].iconst));
          (yyval.tfieldid).auto_assigned = false;
        } else {
          pwarning(1, "Nonpositive value (%d) not allowed as a field key.\n",
                   (yyvsp[-1].iconst));
          (yyval.tfieldid).value = y_field_val--;
          (yyval.tfieldid).auto_assigned = true;
        }
      } else {
        (yyval.tfieldid).value = static_cast<int32_t>((yyvsp[-1].iconst));
        (yyval.tfieldid).auto_assigned = false;
      }
      if( (SHRT_MIN > (yyval.tfieldid).value) || ((yyval.tfieldid).value > SHRT_MAX)) {
        pwarning(1, "Field key (%d) exceeds allowed range (%d..%d).\n",
                 (yyval.tfieldid).value, SHRT_MIN, SHRT_MAX);
      }
    }
#line 2694 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 104:
#line 1059 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      (yyval.tfieldid).value = y_field_val--;
      (yyval.tfieldid).auto_assigned = true;
      if( (SHRT_MIN > (yyval.tfieldid).value) || ((yyval.tfieldid).value > SHRT_MAX)) {
        pwarning(1, "Field key (%d) exceeds allowed range (%d..%d).\n",
                 (yyval.tfieldid).value, SHRT_MIN, SHRT_MAX);
      }
    }
#line 2707 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 105:
#line 1070 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      (yyval.tbool) = true;
    }
#line 2715 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 106:
#line 1074 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
     (yyval.tbool) = false;
   }
#line 2723 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 107:
#line 1080 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      (yyval.ereq) = t_field::T_REQUIRED;
    }
#line 2731 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 108:
#line 1084 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      if (g_arglist) {
        if (g_parse_mode == PROGRAM) {
          pwarning(1, "optional keyword is ignored in argument lists.\n");
        }
        (yyval.ereq) = t_field::T_OPT_IN_REQ_OUT;
      } else {
        (yyval.ereq) = t_field::T_OPTIONAL;
      }
    }
#line 2746 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 109:
#line 1095 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      (yyval.ereq) = t_field::T_OPT_IN_REQ_OUT;
    }
#line 2754 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 110:
#line 1101 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      if (g_parse_mode == PROGRAM) {
        (yyval.tconstv) = (yyvsp[0].tconstv);
      } else {
        (yyval.tconstv) = nullptr;
      }
    }
#line 2766 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 111:
#line 1109 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      (yyval.tconstv) = nullptr;
    }
#line 2774 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 112:
#line 1115 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FunctionType -> FieldType");
      (yyval.ttype) = (yyvsp[0].ttype);
    }
#line 2783 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 113:
#line 1120 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FunctionType -> tok_void");
      (yyval.ttype) = g_type_void;
    }
#line 2792 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 114:
#line 1127 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldType -> tok_identifier");
      if (g_parse_mode == INCLUDES) {
        // Ignore identifiers in include mode
        (yyval.ttype) = nullptr;
      } else {
        // Lookup the identifier in the current scope
        (yyval.ttype) = g_scope->get_type((yyvsp[0].id));
        if ((yyval.ttype) == nullptr) {
          /*
           * Either this type isn't yet declared, or it's never
             declared.  Either way allow it and we'll figure it out
             during generation.
           */
          (yyval.ttype) = new t_typedef(g_program, (yyvsp[0].id), true);
        }
      }
    }
#line 2815 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 115:
#line 1146 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldType -> BaseType");
      (yyval.ttype) = (yyvsp[0].ttype);
    }
#line 2824 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 116:
#line 1151 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("FieldType -> ContainerType");
      (yyval.ttype) = (yyvsp[0].ttype);
    }
#line 2833 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 117:
#line 1157 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("BaseType -> SimpleBaseType TypeAnnotations");
      if ((yyvsp[0].ttype) != nullptr) {
        (yyval.ttype) = new t_base_type(*static_cast<t_base_type*>((yyvsp[-1].ttype)));
        (yyval.ttype)->annotations_ = (yyvsp[0].ttype)->annotations_;
        delete (yyvsp[0].ttype);
      } else {
        (yyval.ttype) = (yyvsp[-1].ttype);
      }
    }
#line 2848 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 118:
#line 1170 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("BaseType -> tok_string");
      (yyval.ttype) = g_type_string;
    }
#line 2857 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 119:
#line 1175 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("BaseType -> tok_binary");
      (yyval.ttype) = g_type_binary;
    }
#line 2866 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 120:
#line 1180 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("BaseType -> tok_uuid");
      (yyval.ttype) = g_type_uuid;
    }
#line 2875 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 121:
#line 1185 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("BaseType -> tok_bool");
      (yyval.ttype) = g_type_bool;
    }
#line 2884 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 122:
#line 1190 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("BaseType -> tok_byte");
      (yyval.ttype) = g_type_i8;  // byte is signed in Thrift, just an alias for i8
    }
#line 2893 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 123:
#line 1195 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("BaseType -> tok_i8");
      (yyval.ttype) = g_type_i8;
    }
#line 2902 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 124:
#line 1200 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("BaseType -> tok_i16");
      (yyval.ttype) = g_type_i16;
    }
#line 2911 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 125:
#line 1205 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("BaseType -> tok_i32");
      (yyval.ttype) = g_type_i32;
    }
#line 2920 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 126:
#line 1210 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("BaseType -> tok_i64");
      (yyval.ttype) = g_type_i64;
    }
#line 2929 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 127:
#line 1215 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("BaseType -> tok_double");
      (yyval.ttype) = g_type_double;
    }
#line 2938 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 128:
#line 1221 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("ContainerType -> SimpleContainerType TypeAnnotations");
      (yyval.ttype) = (yyvsp[-1].ttype);
      if ((yyvsp[0].ttype) != nullptr) {
        (yyval.ttype)->annotations_ = (yyvsp[0].ttype)->annotations_;
        delete (yyvsp[0].ttype);
      }
    }
#line 2951 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 129:
#line 1232 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("SimpleContainerType -> MapType");
      (yyval.ttype) = (yyvsp[0].ttype);
    }
#line 2960 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 130:
#line 1237 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("SimpleContainerType -> SetType");
      (yyval.ttype) = (yyvsp[0].ttype);
    }
#line 2969 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 131:
#line 1242 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("SimpleContainerType -> ListType");
      (yyval.ttype) = (yyvsp[0].ttype);
    }
#line 2978 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 132:
#line 1249 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("MapType -> tok_map <FieldType, FieldType>");
      (yyval.ttype) = new t_map((yyvsp[-3].ttype), (yyvsp[-1].ttype));
      if ((yyvsp[-5].id) != nullptr) {
        ((t_container*)(yyval.ttype))->set_cpp_name(std::string((yyvsp[-5].id)));
      }
    }
#line 2990 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 133:
#line 1259 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("SetType -> tok_set<FieldType>");
      (yyval.ttype) = new t_set((yyvsp[-1].ttype));
      if ((yyvsp[-3].id) != nullptr) {
        ((t_container*)(yyval.ttype))->set_cpp_name(std::string((yyvsp[-3].id)));
      }
    }
#line 3002 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 134:
#line 1269 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("ListType -> tok_list<FieldType>");
      check_for_list_of_bytes((yyvsp[-2].ttype));
      (yyval.ttype) = new t_list((yyvsp[-2].ttype));
      if ((yyvsp[-4].id) != nullptr) {
        ((t_container*)(yyval.ttype))->set_cpp_name(std::string((yyvsp[-4].id)));
      }
      if ((yyvsp[0].id) != nullptr) {
        ((t_container*)(yyval.ttype))->set_cpp_name(std::string((yyvsp[0].id)));
        pwarning(1, "The syntax 'list<type> cpp_type \"c++ type\"' is deprecated. Use 'list cpp_type \"c++ type\" <type>' instead.\n");
      }
      if (((yyvsp[-4].id) != nullptr) && ((yyvsp[0].id) != nullptr)) {
        pwarning(1, "Two cpp_types clauses at list<%>\n", (yyvsp[-4].id));
      }
    }
#line 3022 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 135:
#line 1287 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      (yyval.id) = (yyvsp[0].id);
    }
#line 3030 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 136:
#line 1291 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      (yyval.id) = nullptr;
    }
#line 3038 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 137:
#line 1297 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("TypeAnnotations -> ( TypeAnnotationList )");
      (yyval.ttype) = (yyvsp[-1].ttype);
    }
#line 3047 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 138:
#line 1302 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      (yyval.ttype) = nullptr;
    }
#line 3055 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 139:
#line 1308 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("TypeAnnotationList -> TypeAnnotationList , TypeAnnotation");
      (yyval.ttype) = (yyvsp[-1].ttype);
      (yyval.ttype)->annotations_[(yyvsp[0].tannot)->key].push_back((yyvsp[0].tannot)->val);
      delete (yyvsp[0].tannot);
    }
#line 3066 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 140:
#line 1315 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      /* Just use a dummy structure to hold the annotations. */
      (yyval.ttype) = new t_struct(g_program);
    }
#line 3075 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 141:
#line 1322 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("TypeAnnotation -> TypeAnnotationValue");
      (yyval.tannot) = new t_annotation;
      (yyval.tannot)->key = (yyvsp[-2].id);
      (yyval.tannot)->val = (yyvsp[-1].id);
    }
#line 3086 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 142:
#line 1331 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("TypeAnnotationValue -> = tok_literal");
      (yyval.id) = (yyvsp[0].id);
    }
#line 3095 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;

  case 143:
#line 1336 "thrift/thrifty.yy" /* yacc.c:1646  */
    {
      pdebug("TypeAnnotationValue ->");
      (yyval.id) = strdup("1");
    }
#line 3104 "thrift/thrifty.cc" /* yacc.c:1646  */
    break;


#line 3108 "thrift/thrifty.cc" /* yacc.c:1646  */
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
#line 1341 "thrift/thrifty.yy" /* yacc.c:1906  */

