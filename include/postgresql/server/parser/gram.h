/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_BASE_YY_GRAM_H_INCLUDED
# define YY_BASE_YY_GRAM_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int base_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENT = 258,
    FCONST = 259,
    SCONST = 260,
    BCONST = 261,
    XCONST = 262,
    Op = 263,
    ICONST = 264,
    PARAM = 265,
    TYPECAST = 266,
    DOT_DOT = 267,
    COLON_EQUALS = 268,
    EQUALS_GREATER = 269,
    LESS_EQUALS = 270,
    GREATER_EQUALS = 271,
    NOT_EQUALS = 272,
    ABORT_P = 273,
    ABSOLUTE_P = 274,
    ACCESS = 275,
    ACTION = 276,
    ADD_P = 277,
    ADMIN = 278,
    AFTER = 279,
    AGGREGATE = 280,
    ALL = 281,
    ALSO = 282,
    ALTER = 283,
    ALWAYS = 284,
    ANALYSE = 285,
    ANALYZE = 286,
    AND = 287,
    ANY = 288,
    ARRAY = 289,
    AS = 290,
    ASC = 291,
    ASSERTION = 292,
    ASSIGNMENT = 293,
    ASYMMETRIC = 294,
    AT = 295,
    ATTACH = 296,
    ATTRIBUTE = 297,
    AUTHORIZATION = 298,
    BACKWARD = 299,
    BEFORE = 300,
    BEGIN_P = 301,
    BETWEEN = 302,
    BIGINT = 303,
    BINARY = 304,
    BIT = 305,
    BOOLEAN_P = 306,
    BOTH = 307,
    BY = 308,
    CACHE = 309,
    CALL = 310,
    CALLED = 311,
    CASCADE = 312,
    CASCADED = 313,
    CASE = 314,
    CAST = 315,
    CATALOG_P = 316,
    CHAIN = 317,
    CHAR_P = 318,
    CHARACTER = 319,
    CHARACTERISTICS = 320,
    CHECK = 321,
    CHECKPOINT = 322,
    CLASS = 323,
    CLOSE = 324,
    CLUSTER = 325,
    COALESCE = 326,
    COLLATE = 327,
    COLLATION = 328,
    COLUMN = 329,
    COLUMNS = 330,
    COMMENT = 331,
    COMMENTS = 332,
    COMMIT = 333,
    COMMITTED = 334,
    CONCURRENTLY = 335,
    CONFIGURATION = 336,
    CONFLICT = 337,
    CONNECTION = 338,
    CONSTRAINT = 339,
    CONSTRAINTS = 340,
    CONTENT_P = 341,
    CONTINUE_P = 342,
    CONVERSION_P = 343,
    COPY = 344,
    COST = 345,
    CREATE = 346,
    CROSS = 347,
    CSV = 348,
    CUBE = 349,
    CURRENT_P = 350,
    CURRENT_CATALOG = 351,
    CURRENT_DATE = 352,
    CURRENT_ROLE = 353,
    CURRENT_SCHEMA = 354,
    CURRENT_TIME = 355,
    CURRENT_TIMESTAMP = 356,
    CURRENT_USER = 357,
    CURSOR = 358,
    CYCLE = 359,
    DATA_P = 360,
    DATABASE = 361,
    DAY_P = 362,
    DEALLOCATE = 363,
    DEC = 364,
    DECIMAL_P = 365,
    DECLARE = 366,
    DEFAULT = 367,
    DEFAULTS = 368,
    DEFERRABLE = 369,
    DEFERRED = 370,
    DEFINER = 371,
    DELETE_P = 372,
    DELIMITER = 373,
    DELIMITERS = 374,
    DEPENDS = 375,
    DESC = 376,
    DETACH = 377,
    DICTIONARY = 378,
    DISABLE_P = 379,
    DISCARD = 380,
    DISTINCT = 381,
    DO = 382,
    DOCUMENT_P = 383,
    DOMAIN_P = 384,
    DOUBLE_P = 385,
    DROP = 386,
    EACH = 387,
    ELSE = 388,
    ENABLE_P = 389,
    ENCODING = 390,
    ENCRYPTED = 391,
    END_P = 392,
    ENUM_P = 393,
    ESCAPE = 394,
    EVENT = 395,
    EXCEPT = 396,
    EXCLUDE = 397,
    EXCLUDING = 398,
    EXCLUSIVE = 399,
    EXECUTE = 400,
    EXISTS = 401,
    EXPLAIN = 402,
    EXTENSION = 403,
    EXTERNAL = 404,
    EXTRACT = 405,
    FALSE_P = 406,
    FAMILY = 407,
    FETCH = 408,
    FILTER = 409,
    FIRST_P = 410,
    FLOAT_P = 411,
    FOLLOWING = 412,
    FOR = 413,
    FORCE = 414,
    FOREIGN = 415,
    FORWARD = 416,
    FREEZE = 417,
    FROM = 418,
    FULL = 419,
    FUNCTION = 420,
    FUNCTIONS = 421,
    GENERATED = 422,
    GLOBAL = 423,
    GRANT = 424,
    GRANTED = 425,
    GREATEST = 426,
    GROUP_P = 427,
    GROUPING = 428,
    GROUPS = 429,
    HANDLER = 430,
    HAVING = 431,
    HEADER_P = 432,
    HOLD = 433,
    HOUR_P = 434,
    IDENTITY_P = 435,
    IF_P = 436,
    ILIKE = 437,
    IMMEDIATE = 438,
    IMMUTABLE = 439,
    IMPLICIT_P = 440,
    IMPORT_P = 441,
    IN_P = 442,
    INCLUDE = 443,
    INCLUDING = 444,
    INCREMENT = 445,
    INDEX = 446,
    INDEXES = 447,
    INHERIT = 448,
    INHERITS = 449,
    INITIALLY = 450,
    INLINE_P = 451,
    INNER_P = 452,
    INOUT = 453,
    INPUT_P = 454,
    INSENSITIVE = 455,
    INSERT = 456,
    INSTEAD = 457,
    INT_P = 458,
    INTEGER = 459,
    INTERSECT = 460,
    INTERVAL = 461,
    INTO = 462,
    INVOKER = 463,
    IS = 464,
    ISNULL = 465,
    ISOLATION = 466,
    JOIN = 467,
    KEY = 468,
    LABEL = 469,
    LANGUAGE = 470,
    LARGE_P = 471,
    LAST_P = 472,
    LATERAL_P = 473,
    LEADING = 474,
    LEAKPROOF = 475,
    LEAST = 476,
    LEFT = 477,
    LEVEL = 478,
    LIKE = 479,
    LIMIT = 480,
    LISTEN = 481,
    LOAD = 482,
    LOCAL = 483,
    LOCALTIME = 484,
    LOCALTIMESTAMP = 485,
    LOCATION = 486,
    LOCK_P = 487,
    LOCKED = 488,
    LOGGED = 489,
    MAPPING = 490,
    MATCH = 491,
    MATERIALIZED = 492,
    MAXVALUE = 493,
    METHOD = 494,
    MINUTE_P = 495,
    MINVALUE = 496,
    MODE = 497,
    MONTH_P = 498,
    MOVE = 499,
    NAME_P = 500,
    NAMES = 501,
    NATIONAL = 502,
    NATURAL = 503,
    NCHAR = 504,
    NEW = 505,
    NEXT = 506,
    NO = 507,
    NONE = 508,
    NOT = 509,
    NOTHING = 510,
    NOTIFY = 511,
    NOTNULL = 512,
    NOWAIT = 513,
    NULL_P = 514,
    NULLIF = 515,
    NULLS_P = 516,
    NUMERIC = 517,
    OBJECT_P = 518,
    OF = 519,
    OFF = 520,
    OFFSET = 521,
    OIDS = 522,
    OLD = 523,
    ON = 524,
    ONLINE = 525,
    ONLY = 526,
    OPERATOR = 527,
    OPTION = 528,
    OPTIONS = 529,
    OR = 530,
    ORDER = 531,
    ORDINALITY = 532,
    OTHERS = 533,
    OUT_P = 534,
    OUTER_P = 535,
    OVER = 536,
    OVERLAPS = 537,
    OVERLAY = 538,
    OVERRIDING = 539,
    OWNED = 540,
    OWNER = 541,
    PARALLEL = 542,
    PARSER = 543,
    PARTIAL = 544,
    PARTITION = 545,
    PASSING = 546,
    PASSWORD = 547,
    PLACING = 548,
    PLANS = 549,
    POLICY = 550,
    POSITION = 551,
    PRECEDING = 552,
    PRECISION = 553,
    PRESERVE = 554,
    PREPARE = 555,
    PREPARED = 556,
    PRIMARY = 557,
    PRIOR = 558,
    PRIVILEGES = 559,
    PROCEDURAL = 560,
    PROCEDURE = 561,
    PROCEDURES = 562,
    PROGRAM = 563,
    PUBLICATION = 564,
    QUOTE = 565,
    RANGE = 566,
    READ = 567,
    REAL = 568,
    REASSIGN = 569,
    RECHECK = 570,
    RECURSIVE = 571,
    REF = 572,
    REFERENCES = 573,
    REFERENCING = 574,
    REFRESH = 575,
    REINDEX = 576,
    RELATIVE_P = 577,
    RELEASE = 578,
    RENAME = 579,
    REPEATABLE = 580,
    REPLACE = 581,
    REPLICA = 582,
    RESET = 583,
    RESTART = 584,
    RESTRICT = 585,
    RETURNING = 586,
    RETURNS = 587,
    REVOKE = 588,
    RIGHT = 589,
    ROLE = 590,
    ROLLBACK = 591,
    ROLLUP = 592,
    ROUTINE = 593,
    ROUTINES = 594,
    ROW = 595,
    ROWS = 596,
    RULE = 597,
    SAVEPOINT = 598,
    SCHEMA = 599,
    SCHEMAS = 600,
    SCROLL = 601,
    SEARCH = 602,
    SECOND_P = 603,
    SECURITY = 604,
    SELECT = 605,
    SEQUENCE = 606,
    SEQUENCES = 607,
    SERIALIZABLE = 608,
    SERVER = 609,
    SESSION = 610,
    SESSION_USER = 611,
    SET = 612,
    SETS = 613,
    SETOF = 614,
    SHARE = 615,
    SHOW = 616,
    SIMILAR = 617,
    SIMPLE = 618,
    SKIP = 619,
    SMALLINT = 620,
    SNAPSHOT = 621,
    SOME = 622,
    SQL_P = 623,
    STABLE = 624,
    STANDALONE_P = 625,
    START = 626,
    STATEMENT = 627,
    STATISTICS = 628,
    STDIN = 629,
    STDOUT = 630,
    STORAGE = 631,
    STORED = 632,
    STRICT_P = 633,
    STRIP_P = 634,
    SUBSCRIPTION = 635,
    SUBSTRING = 636,
    SUPPORT = 637,
    SYMMETRIC = 638,
    SYSID = 639,
    SYSTEM_P = 640,
    TABLE = 641,
    TABLES = 642,
    TABLESAMPLE = 643,
    TABLESPACE = 644,
    TEMP = 645,
    TEMPLATE = 646,
    TEMPORARY = 647,
    TEXT_P = 648,
    THEN = 649,
    TIES = 650,
    TIME = 651,
    TIMESTAMP = 652,
    TO = 653,
    TRAILING = 654,
    TRANSACTION = 655,
    TRANSFORM = 656,
    TREAT = 657,
    TRIGGER = 658,
    TRIM = 659,
    TRUE_P = 660,
    TRUNCATE = 661,
    TRUSTED = 662,
    TYPE_P = 663,
    TYPES_P = 664,
    UNBOUNDED = 665,
    UNCOMMITTED = 666,
    UNENCRYPTED = 667,
    UNION = 668,
    UNIQUE = 669,
    UNKNOWN = 670,
    UNLISTEN = 671,
    UNLOGGED = 672,
    UNTIL = 673,
    UPDATE = 674,
    USER = 675,
    USING = 676,
    VACUUM = 677,
    VALID = 678,
    VALIDATE = 679,
    VALIDATOR = 680,
    VALUE_P = 681,
    VALUES = 682,
    VARCHAR = 683,
    VARIADIC = 684,
    VARYING = 685,
    VERBOSE = 686,
    VERSION_P = 687,
    VIEW = 688,
    VIEWS = 689,
    VOLATILE = 690,
    WHEN = 691,
    WHERE = 692,
    WHITESPACE_P = 693,
    WINDOW = 694,
    WITH = 695,
    WITHIN = 696,
    WITHOUT = 697,
    WORK = 698,
    WRAPPER = 699,
    WRITE = 700,
    XML_P = 701,
    XMLATTRIBUTES = 702,
    XMLCONCAT = 703,
    XMLELEMENT = 704,
    XMLEXISTS = 705,
    XMLFOREST = 706,
    XMLNAMESPACES = 707,
    XMLPARSE = 708,
    XMLPI = 709,
    XMLROOT = 710,
    XMLSERIALIZE = 711,
    XMLTABLE = 712,
    YEAR_P = 713,
    YES_P = 714,
    ZONE = 715,
    NOT_LA = 716,
    NULLS_LA = 717,
    WITH_LA = 718,
    POSTFIXOP = 719,
    UMINUS = 720
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 203 "gram.y" /* yacc.c:1921  */

	core_YYSTYPE		core_yystype;
	/* these fields must match core_YYSTYPE: */
	int					ival;
	char				*str;
	const char			*keyword;

	char				chr;
	bool				boolean;
	JoinType			jtype;
	DropBehavior		dbehavior;
	OnCommitAction		oncommit;
	List				*list;
	Node				*node;
	Value				*value;
	ObjectType			objtype;
	TypeName			*typnam;
	FunctionParameter   *fun_param;
	FunctionParameterMode fun_param_mode;
	ObjectWithArgs		*objwithargs;
	DefElem				*defelt;
	SortBy				*sortby;
	WindowDef			*windef;
	JoinExpr			*jexpr;
	IndexElem			*ielem;
	Alias				*alias;
	RangeVar			*range;
	IntoClause			*into;
	WithClause			*with;
	InferClause			*infer;
	OnConflictClause	*onconflict;
	A_Indices			*aind;
	ResTarget			*target;
	struct PrivTarget	*privtarget;
	AccessPriv			*accesspriv;
	struct ImportQual	*importqual;
	InsertStmt			*istmt;
	VariableSetStmt		*vsetstmt;
	PartitionElem		*partelem;
	PartitionSpec		*partspec;
	PartitionBoundSpec	*partboundspec;
	RoleSpec			*rolespec;

#line 568 "gram.h" /* yacc.c:1921  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int base_yyparse (core_yyscan_t yyscanner);

#endif /* !YY_BASE_YY_GRAM_H_INCLUDED  */
