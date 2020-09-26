#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym_IDENTIFIER = 1,
  anon_sym_SEMI = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_COMMA = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  anon_sym_ = 10,
  sym_class_declar_stmt = 11,
  sym_con_ctl_stmt = 12,
  sym_TSTRING = 13,
  sym_XINTEGER = 14,
  sym_TDOUBLE = 15,
  sym_OPERATOR_X__ = 16,
  sym_KEY_FUNCTION = 17,
  sym_KEY_DELETE = 18,
  sym_KEY_NEW = 19,
  sym_KEY_THIS = 20,
  sym_KEY_EXTEND = 21,
  sym_KEY_AUTO = 22,
  sym_KEY_NULL = 23,
  sym_KEY_TRUE = 24,
  sym_KEY_FALSE = 25,
  sym_KEY_IF = 26,
  sym_KEY_ELSE = 27,
  sym_KEY_WHILE = 28,
  sym_KEY_FOR = 29,
  sym_KEY_SWITCH = 30,
  sym_KEY_CASE = 31,
  sym_KEY_DEFAULT = 32,
  sym_KEY_CONTINUE = 33,
  sym_KEY_LOCAL = 34,
  sym_KEY_CONST = 35,
  sym_KEY_RESTRICT = 36,
  sym_KEY_SET = 37,
  sym_KEY_PUBLIC = 38,
  sym_KEY_REQUIRE = 39,
  sym_KEY_REQUIRE_ONCE = 40,
  sym_KEY_INCLUDE = 41,
  sym_KEY_REF = 42,
  sym_KEY_IS = 43,
  sym_KEY_TRY = 44,
  sym_KEY_CATCH = 45,
  sym_OP_ADD = 46,
  sym_OP_SUB = 47,
  sym_OP_MUL = 48,
  sym_OP_DIV = 49,
  sym_OP_MOD = 50,
  sym_OP_ADD_EQ = 51,
  sym_OP_SUB_EQ = 52,
  sym_OP_MUL_EQ = 53,
  sym_OP_DIV_EQ = 54,
  sym_OP_MOD_EQ = 55,
  sym_OP_LEFT_SHIFT = 56,
  sym_OP_RIGHT_SHIFT = 57,
  sym_BIT_AND = 58,
  sym_BIT_OR = 59,
  sym_BIT_XOR = 60,
  sym_BIT_NOT = 61,
  sym_OP_AND = 62,
  sym_OP_OR = 63,
  sym_OP_NOT = 64,
  sym_OP_GT = 65,
  sym_OP_LT = 66,
  sym_OP_GE = 67,
  sym_OP_LE = 68,
  sym_OP_DOT = 69,
  sym_OP_SCOPE = 70,
  sym_source_file = 71,
  sym_statement = 72,
  sym_out_declar_stmt = 73,
  sym_func_declar_stmt = 74,
  sym_func_name_types = 75,
  sym_func_param_list = 76,
  sym_func_param_types = 77,
  sym_simple_stmt = 78,
  sym_simple_stmt_types = 79,
  sym_call_statement = 80,
  sym_block = 81,
  sym_block_item = 82,
  sym_try_stmt = 83,
  sym_namespace_declar_stmt = 84,
  sym_id_expr = 85,
  sym_EMPTY = 86,
  aux_sym_source_file_repeat1 = 87,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_IDENTIFIER] = "IDENTIFIER",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_] = "",
  [sym_class_declar_stmt] = "class_declar_stmt",
  [sym_con_ctl_stmt] = "con_ctl_stmt",
  [sym_TSTRING] = "TSTRING",
  [sym_XINTEGER] = "XINTEGER",
  [sym_TDOUBLE] = "TDOUBLE",
  [sym_OPERATOR_X__] = "OPERATOR_X__",
  [sym_KEY_FUNCTION] = "KEY_FUNCTION",
  [sym_KEY_DELETE] = "KEY_DELETE",
  [sym_KEY_NEW] = "KEY_NEW",
  [sym_KEY_THIS] = "KEY_THIS",
  [sym_KEY_EXTEND] = "KEY_EXTEND",
  [sym_KEY_AUTO] = "KEY_AUTO",
  [sym_KEY_NULL] = "KEY_NULL",
  [sym_KEY_TRUE] = "KEY_TRUE",
  [sym_KEY_FALSE] = "KEY_FALSE",
  [sym_KEY_IF] = "KEY_IF",
  [sym_KEY_ELSE] = "KEY_ELSE",
  [sym_KEY_WHILE] = "KEY_WHILE",
  [sym_KEY_FOR] = "KEY_FOR",
  [sym_KEY_SWITCH] = "KEY_SWITCH",
  [sym_KEY_CASE] = "KEY_CASE",
  [sym_KEY_DEFAULT] = "KEY_DEFAULT",
  [sym_KEY_CONTINUE] = "KEY_CONTINUE",
  [sym_KEY_LOCAL] = "KEY_LOCAL",
  [sym_KEY_CONST] = "KEY_CONST",
  [sym_KEY_RESTRICT] = "KEY_RESTRICT",
  [sym_KEY_SET] = "KEY_SET",
  [sym_KEY_PUBLIC] = "KEY_PUBLIC",
  [sym_KEY_REQUIRE] = "KEY_REQUIRE",
  [sym_KEY_REQUIRE_ONCE] = "KEY_REQUIRE_ONCE",
  [sym_KEY_INCLUDE] = "KEY_INCLUDE",
  [sym_KEY_REF] = "KEY_REF",
  [sym_KEY_IS] = "KEY_IS",
  [sym_KEY_TRY] = "KEY_TRY",
  [sym_KEY_CATCH] = "KEY_CATCH",
  [sym_OP_ADD] = "OP_ADD",
  [sym_OP_SUB] = "OP_SUB",
  [sym_OP_MUL] = "OP_MUL",
  [sym_OP_DIV] = "OP_DIV",
  [sym_OP_MOD] = "OP_MOD",
  [sym_OP_ADD_EQ] = "OP_ADD_EQ",
  [sym_OP_SUB_EQ] = "OP_SUB_EQ",
  [sym_OP_MUL_EQ] = "OP_MUL_EQ",
  [sym_OP_DIV_EQ] = "OP_DIV_EQ",
  [sym_OP_MOD_EQ] = "OP_MOD_EQ",
  [sym_OP_LEFT_SHIFT] = "OP_LEFT_SHIFT",
  [sym_OP_RIGHT_SHIFT] = "OP_RIGHT_SHIFT",
  [sym_BIT_AND] = "BIT_AND",
  [sym_BIT_OR] = "BIT_OR",
  [sym_BIT_XOR] = "BIT_XOR",
  [sym_BIT_NOT] = "BIT_NOT",
  [sym_OP_AND] = "OP_AND",
  [sym_OP_OR] = "OP_OR",
  [sym_OP_NOT] = "OP_NOT",
  [sym_OP_GT] = "OP_GT",
  [sym_OP_LT] = "OP_LT",
  [sym_OP_GE] = "OP_GE",
  [sym_OP_LE] = "OP_LE",
  [sym_OP_DOT] = "OP_DOT",
  [sym_OP_SCOPE] = "OP_SCOPE",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_out_declar_stmt] = "out_declar_stmt",
  [sym_func_declar_stmt] = "func_declar_stmt",
  [sym_func_name_types] = "func_name_types",
  [sym_func_param_list] = "func_param_list",
  [sym_func_param_types] = "func_param_types",
  [sym_simple_stmt] = "simple_stmt",
  [sym_simple_stmt_types] = "simple_stmt_types",
  [sym_call_statement] = "call_statement",
  [sym_block] = "block",
  [sym_block_item] = "block_item",
  [sym_try_stmt] = "try_stmt",
  [sym_namespace_declar_stmt] = "namespace_declar_stmt",
  [sym_id_expr] = "id_expr",
  [sym_EMPTY] = "EMPTY",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_IDENTIFIER] = sym_IDENTIFIER,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_] = anon_sym_,
  [sym_class_declar_stmt] = sym_class_declar_stmt,
  [sym_con_ctl_stmt] = sym_con_ctl_stmt,
  [sym_TSTRING] = sym_TSTRING,
  [sym_XINTEGER] = sym_XINTEGER,
  [sym_TDOUBLE] = sym_TDOUBLE,
  [sym_OPERATOR_X__] = sym_OPERATOR_X__,
  [sym_KEY_FUNCTION] = sym_KEY_FUNCTION,
  [sym_KEY_DELETE] = sym_KEY_DELETE,
  [sym_KEY_NEW] = sym_KEY_NEW,
  [sym_KEY_THIS] = sym_KEY_THIS,
  [sym_KEY_EXTEND] = sym_KEY_EXTEND,
  [sym_KEY_AUTO] = sym_KEY_AUTO,
  [sym_KEY_NULL] = sym_KEY_NULL,
  [sym_KEY_TRUE] = sym_KEY_TRUE,
  [sym_KEY_FALSE] = sym_KEY_FALSE,
  [sym_KEY_IF] = sym_KEY_IF,
  [sym_KEY_ELSE] = sym_KEY_ELSE,
  [sym_KEY_WHILE] = sym_KEY_WHILE,
  [sym_KEY_FOR] = sym_KEY_FOR,
  [sym_KEY_SWITCH] = sym_KEY_SWITCH,
  [sym_KEY_CASE] = sym_KEY_CASE,
  [sym_KEY_DEFAULT] = sym_KEY_DEFAULT,
  [sym_KEY_CONTINUE] = sym_KEY_CONTINUE,
  [sym_KEY_LOCAL] = sym_KEY_LOCAL,
  [sym_KEY_CONST] = sym_KEY_CONST,
  [sym_KEY_RESTRICT] = sym_KEY_RESTRICT,
  [sym_KEY_SET] = sym_KEY_SET,
  [sym_KEY_PUBLIC] = sym_KEY_PUBLIC,
  [sym_KEY_REQUIRE] = sym_KEY_REQUIRE,
  [sym_KEY_REQUIRE_ONCE] = sym_KEY_REQUIRE_ONCE,
  [sym_KEY_INCLUDE] = sym_KEY_INCLUDE,
  [sym_KEY_REF] = sym_KEY_REF,
  [sym_KEY_IS] = sym_KEY_IS,
  [sym_KEY_TRY] = sym_KEY_TRY,
  [sym_KEY_CATCH] = sym_KEY_CATCH,
  [sym_OP_ADD] = sym_OP_ADD,
  [sym_OP_SUB] = sym_OP_SUB,
  [sym_OP_MUL] = sym_OP_MUL,
  [sym_OP_DIV] = sym_OP_DIV,
  [sym_OP_MOD] = sym_OP_MOD,
  [sym_OP_ADD_EQ] = sym_OP_ADD_EQ,
  [sym_OP_SUB_EQ] = sym_OP_SUB_EQ,
  [sym_OP_MUL_EQ] = sym_OP_MUL_EQ,
  [sym_OP_DIV_EQ] = sym_OP_DIV_EQ,
  [sym_OP_MOD_EQ] = sym_OP_MOD_EQ,
  [sym_OP_LEFT_SHIFT] = sym_OP_LEFT_SHIFT,
  [sym_OP_RIGHT_SHIFT] = sym_OP_RIGHT_SHIFT,
  [sym_BIT_AND] = sym_BIT_AND,
  [sym_BIT_OR] = sym_BIT_OR,
  [sym_BIT_XOR] = sym_BIT_XOR,
  [sym_BIT_NOT] = sym_BIT_NOT,
  [sym_OP_AND] = sym_OP_AND,
  [sym_OP_OR] = sym_OP_OR,
  [sym_OP_NOT] = sym_OP_NOT,
  [sym_OP_GT] = sym_OP_GT,
  [sym_OP_LT] = sym_OP_LT,
  [sym_OP_GE] = sym_OP_GE,
  [sym_OP_LE] = sym_OP_LE,
  [sym_OP_DOT] = sym_OP_DOT,
  [sym_OP_SCOPE] = sym_OP_SCOPE,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_out_declar_stmt] = sym_out_declar_stmt,
  [sym_func_declar_stmt] = sym_func_declar_stmt,
  [sym_func_name_types] = sym_func_name_types,
  [sym_func_param_list] = sym_func_param_list,
  [sym_func_param_types] = sym_func_param_types,
  [sym_simple_stmt] = sym_simple_stmt,
  [sym_simple_stmt_types] = sym_simple_stmt_types,
  [sym_call_statement] = sym_call_statement,
  [sym_block] = sym_block,
  [sym_block_item] = sym_block_item,
  [sym_try_stmt] = sym_try_stmt,
  [sym_namespace_declar_stmt] = sym_namespace_declar_stmt,
  [sym_id_expr] = sym_id_expr,
  [sym_EMPTY] = sym_EMPTY,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_IDENTIFIER] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym_class_declar_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_con_ctl_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_TSTRING] = {
    .visible = true,
    .named = true,
  },
  [sym_XINTEGER] = {
    .visible = true,
    .named = true,
  },
  [sym_TDOUBLE] = {
    .visible = true,
    .named = true,
  },
  [sym_OPERATOR_X__] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_FUNCTION] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_DELETE] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_NEW] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_THIS] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_EXTEND] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_AUTO] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_NULL] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_TRUE] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_FALSE] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_IF] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_ELSE] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_WHILE] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_FOR] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_SWITCH] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_CASE] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_DEFAULT] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_CONTINUE] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_LOCAL] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_CONST] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_RESTRICT] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_SET] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_PUBLIC] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_REQUIRE] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_REQUIRE_ONCE] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_INCLUDE] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_REF] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_IS] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_TRY] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_CATCH] = {
    .visible = true,
    .named = true,
  },
  [sym_OP_ADD] = {
    .visible = true,
    .named = true,
  },
  [sym_OP_SUB] = {
    .visible = true,
    .named = true,
  },
  [sym_OP_MUL] = {
    .visible = true,
    .named = true,
  },
  [sym_OP_DIV] = {
    .visible = true,
    .named = true,
  },
  [sym_OP_MOD] = {
    .visible = true,
    .named = true,
  },
  [sym_OP_ADD_EQ] = {
    .visible = true,
    .named = true,
  },
  [sym_OP_SUB_EQ] = {
    .visible = true,
    .named = true,
  },
  [sym_OP_MUL_EQ] = {
    .visible = true,
    .named = true,
  },
  [sym_OP_DIV_EQ] = {
    .visible = true,
    .named = true,
  },
  [sym_OP_MOD_EQ] = {
    .visible = true,
    .named = true,
  },
  [sym_OP_LEFT_SHIFT] = {
    .visible = true,
    .named = true,
  },
  [sym_OP_RIGHT_SHIFT] = {
    .visible = true,
    .named = true,
  },
  [sym_BIT_AND] = {
    .visible = true,
    .named = true,
  },
  [sym_BIT_OR] = {
    .visible = true,
    .named = true,
  },
  [sym_BIT_XOR] = {
    .visible = true,
    .named = true,
  },
  [sym_BIT_NOT] = {
    .visible = true,
    .named = true,
  },
  [sym_OP_AND] = {
    .visible = true,
    .named = true,
  },
  [sym_OP_OR] = {
    .visible = true,
    .named = true,
  },
  [sym_OP_NOT] = {
    .visible = true,
    .named = true,
  },
  [sym_OP_GT] = {
    .visible = true,
    .named = true,
  },
  [sym_OP_LT] = {
    .visible = true,
    .named = true,
  },
  [sym_OP_GE] = {
    .visible = true,
    .named = true,
  },
  [sym_OP_LE] = {
    .visible = true,
    .named = true,
  },
  [sym_OP_DOT] = {
    .visible = true,
    .named = true,
  },
  [sym_OP_SCOPE] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_out_declar_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_func_declar_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_func_name_types] = {
    .visible = true,
    .named = true,
  },
  [sym_func_param_list] = {
    .visible = true,
    .named = true,
  },
  [sym_func_param_types] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_stmt_types] = {
    .visible = true,
    .named = true,
  },
  [sym_call_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block_item] = {
    .visible = true,
    .named = true,
  },
  [sym_try_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_declar_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_id_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_EMPTY] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '!') ADVANCE(55);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '%') ADVANCE(41);
      if (lookahead == '&') ADVANCE(49);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '0') ADVANCE(30);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == ';') ADVANCE(11);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == ']') ADVANCE(18);
      if (lookahead == '^') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '|') ADVANCE(50);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '~') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(61);
      END_STATE();
    case 4:
      if (lookahead == '<') ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(36);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == ']') ADVANCE(33);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == '[') ADVANCE(7);
      if (lookahead == '*' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '=') ADVANCE(33);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'r') ADVANCE(20);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_TSTRING);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_XINTEGER);
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_XINTEGER);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_TDOUBLE);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_OPERATOR_X__);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_OPERATOR_X__);
      if (lookahead == '+') ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_OPERATOR_X__);
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_KEY_FUNCTION);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_OP_ADD);
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_OP_SUB);
      if (lookahead == '=') ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_OP_MUL);
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_OP_DIV);
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_OP_MOD);
      if (lookahead == '=') ADVANCE(46);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_OP_ADD_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_OP_SUB_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_OP_MUL_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_OP_DIV_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_OP_MOD_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_OP_LEFT_SHIFT);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_OP_RIGHT_SHIFT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_BIT_AND);
      if (lookahead == '&') ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_BIT_OR);
      if (lookahead == '|') ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_BIT_XOR);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_BIT_NOT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_OP_AND);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_OP_OR);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_OP_NOT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_OP_GT);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '>') ADVANCE(48);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_OP_LT);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_OP_GE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_OP_LE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_OP_DOT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_OP_SCOPE);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'w') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'w') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == 'h') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'x') ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_KEY_IF);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_KEY_IS);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'w') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 'q') ADVANCE(55);
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'y') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_con_ctl_stmt);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_KEY_FOR);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_KEY_NEW);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_KEY_REF);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_KEY_SET);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_KEY_TRY);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_KEY_AUTO);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_KEY_CASE);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_KEY_ELSE);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_KEY_NULL);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_KEY_THIS);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_KEY_TRUE);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_KEY_CATCH);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_class_declar_stmt);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_KEY_CONST);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_KEY_FALSE);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_KEY_LOCAL);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_KEY_WHILE);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_KEY_DELETE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_KEY_EXTEND);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_KEY_PUBLIC);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_KEY_SWITCH);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_KEY_DEFAULT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_KEY_INCLUDE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_KEY_REQUIRE);
      if (lookahead == '_') ADVANCE(114);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_KEY_CONTINUE);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_KEY_RESTRICT);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_KEY_REQUIRE_ONCE);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_IDENTIFIER] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_class_declar_stmt] = ACTIONS(1),
    [sym_con_ctl_stmt] = ACTIONS(1),
    [sym_TSTRING] = ACTIONS(1),
    [sym_XINTEGER] = ACTIONS(1),
    [sym_TDOUBLE] = ACTIONS(1),
    [sym_OPERATOR_X__] = ACTIONS(1),
    [sym_KEY_FUNCTION] = ACTIONS(1),
    [sym_KEY_DELETE] = ACTIONS(1),
    [sym_KEY_NEW] = ACTIONS(1),
    [sym_KEY_THIS] = ACTIONS(1),
    [sym_KEY_EXTEND] = ACTIONS(1),
    [sym_KEY_AUTO] = ACTIONS(1),
    [sym_KEY_NULL] = ACTIONS(1),
    [sym_KEY_TRUE] = ACTIONS(1),
    [sym_KEY_FALSE] = ACTIONS(1),
    [sym_KEY_IF] = ACTIONS(1),
    [sym_KEY_ELSE] = ACTIONS(1),
    [sym_KEY_WHILE] = ACTIONS(1),
    [sym_KEY_FOR] = ACTIONS(1),
    [sym_KEY_SWITCH] = ACTIONS(1),
    [sym_KEY_CASE] = ACTIONS(1),
    [sym_KEY_DEFAULT] = ACTIONS(1),
    [sym_KEY_CONTINUE] = ACTIONS(1),
    [sym_KEY_LOCAL] = ACTIONS(1),
    [sym_KEY_CONST] = ACTIONS(1),
    [sym_KEY_RESTRICT] = ACTIONS(1),
    [sym_KEY_SET] = ACTIONS(1),
    [sym_KEY_PUBLIC] = ACTIONS(1),
    [sym_KEY_REQUIRE] = ACTIONS(1),
    [sym_KEY_REQUIRE_ONCE] = ACTIONS(1),
    [sym_KEY_INCLUDE] = ACTIONS(1),
    [sym_KEY_REF] = ACTIONS(1),
    [sym_KEY_IS] = ACTIONS(1),
    [sym_KEY_TRY] = ACTIONS(1),
    [sym_KEY_CATCH] = ACTIONS(1),
    [sym_OP_ADD] = ACTIONS(1),
    [sym_OP_SUB] = ACTIONS(1),
    [sym_OP_MUL] = ACTIONS(1),
    [sym_OP_DIV] = ACTIONS(1),
    [sym_OP_MOD] = ACTIONS(1),
    [sym_OP_ADD_EQ] = ACTIONS(1),
    [sym_OP_SUB_EQ] = ACTIONS(1),
    [sym_OP_MUL_EQ] = ACTIONS(1),
    [sym_OP_DIV_EQ] = ACTIONS(1),
    [sym_OP_MOD_EQ] = ACTIONS(1),
    [sym_OP_LEFT_SHIFT] = ACTIONS(1),
    [sym_OP_RIGHT_SHIFT] = ACTIONS(1),
    [sym_BIT_AND] = ACTIONS(1),
    [sym_BIT_OR] = ACTIONS(1),
    [sym_BIT_XOR] = ACTIONS(1),
    [sym_BIT_NOT] = ACTIONS(1),
    [sym_OP_AND] = ACTIONS(1),
    [sym_OP_OR] = ACTIONS(1),
    [sym_OP_NOT] = ACTIONS(1),
    [sym_OP_GT] = ACTIONS(1),
    [sym_OP_LT] = ACTIONS(1),
    [sym_OP_GE] = ACTIONS(1),
    [sym_OP_LE] = ACTIONS(1),
    [sym_OP_DOT] = ACTIONS(1),
    [sym_OP_SCOPE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(39),
    [sym_statement] = STATE(3),
    [sym_out_declar_stmt] = STATE(6),
    [sym_func_declar_stmt] = STATE(5),
    [sym_func_name_types] = STATE(37),
    [sym_simple_stmt] = STATE(6),
    [sym_simple_stmt_types] = STATE(36),
    [sym_call_statement] = STATE(35),
    [sym_try_stmt] = STATE(6),
    [sym_namespace_declar_stmt] = STATE(34),
    [sym_id_expr] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_IDENTIFIER] = ACTIONS(5),
    [sym_class_declar_stmt] = ACTIONS(7),
    [sym_con_ctl_stmt] = ACTIONS(9),
    [sym_OPERATOR_X__] = ACTIONS(11),
    [sym_KEY_SET] = ACTIONS(13),
    [sym_KEY_TRY] = ACTIONS(15),
    [sym_BIT_NOT] = ACTIONS(17),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_IDENTIFIER,
    ACTIONS(24), 1,
      sym_class_declar_stmt,
    ACTIONS(27), 1,
      sym_con_ctl_stmt,
    ACTIONS(30), 1,
      sym_OPERATOR_X__,
    ACTIONS(33), 1,
      sym_KEY_SET,
    ACTIONS(36), 1,
      sym_KEY_TRY,
    ACTIONS(39), 1,
      sym_BIT_NOT,
    STATE(5), 1,
      sym_func_declar_stmt,
    STATE(21), 1,
      sym_id_expr,
    STATE(34), 1,
      sym_namespace_declar_stmt,
    STATE(35), 1,
      sym_call_statement,
    STATE(36), 1,
      sym_simple_stmt_types,
    STATE(37), 1,
      sym_func_name_types,
    STATE(2), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(6), 3,
      sym_out_declar_stmt,
      sym_simple_stmt,
      sym_try_stmt,
  [52] = 16,
    ACTIONS(5), 1,
      sym_IDENTIFIER,
    ACTIONS(7), 1,
      sym_class_declar_stmt,
    ACTIONS(9), 1,
      sym_con_ctl_stmt,
    ACTIONS(11), 1,
      sym_OPERATOR_X__,
    ACTIONS(13), 1,
      sym_KEY_SET,
    ACTIONS(15), 1,
      sym_KEY_TRY,
    ACTIONS(17), 1,
      sym_BIT_NOT,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_func_declar_stmt,
    STATE(21), 1,
      sym_id_expr,
    STATE(34), 1,
      sym_namespace_declar_stmt,
    STATE(35), 1,
      sym_call_statement,
    STATE(36), 1,
      sym_simple_stmt_types,
    STATE(37), 1,
      sym_func_name_types,
    STATE(2), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(6), 3,
      sym_out_declar_stmt,
      sym_simple_stmt,
      sym_try_stmt,
  [104] = 8,
    ACTIONS(5), 1,
      sym_IDENTIFIER,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    ACTIONS(46), 1,
      sym_KEY_TRY,
    STATE(19), 1,
      sym_block_item,
    STATE(35), 1,
      sym_call_statement,
    STATE(38), 1,
      sym_id_expr,
    STATE(41), 1,
      sym_simple_stmt_types,
    STATE(18), 2,
      sym_simple_stmt,
      sym_try_stmt,
  [130] = 2,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      sym_OPERATOR_X__,
      sym_BIT_NOT,
    ACTIONS(50), 5,
      sym_class_declar_stmt,
      sym_con_ctl_stmt,
      sym_IDENTIFIER,
      sym_KEY_SET,
      sym_KEY_TRY,
  [143] = 2,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      sym_OPERATOR_X__,
      sym_BIT_NOT,
    ACTIONS(54), 5,
      sym_class_declar_stmt,
      sym_con_ctl_stmt,
      sym_IDENTIFIER,
      sym_KEY_SET,
      sym_KEY_TRY,
  [156] = 2,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      sym_OPERATOR_X__,
      sym_BIT_NOT,
    ACTIONS(58), 5,
      sym_class_declar_stmt,
      sym_con_ctl_stmt,
      sym_IDENTIFIER,
      sym_KEY_SET,
      sym_KEY_TRY,
  [169] = 2,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      sym_OPERATOR_X__,
      sym_BIT_NOT,
    ACTIONS(62), 5,
      sym_class_declar_stmt,
      sym_con_ctl_stmt,
      sym_IDENTIFIER,
      sym_KEY_SET,
      sym_KEY_TRY,
  [182] = 2,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      sym_OPERATOR_X__,
      sym_BIT_NOT,
    ACTIONS(66), 5,
      sym_class_declar_stmt,
      sym_con_ctl_stmt,
      sym_IDENTIFIER,
      sym_KEY_SET,
      sym_KEY_TRY,
  [195] = 2,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      sym_OPERATOR_X__,
      sym_BIT_NOT,
    ACTIONS(70), 5,
      sym_class_declar_stmt,
      sym_con_ctl_stmt,
      sym_IDENTIFIER,
      sym_KEY_SET,
      sym_KEY_TRY,
  [208] = 2,
    ACTIONS(72), 2,
      sym_IDENTIFIER,
      sym_KEY_TRY,
    ACTIONS(74), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [219] = 4,
    ACTIONS(5), 1,
      sym_IDENTIFIER,
    ACTIONS(76), 1,
      anon_sym_,
    STATE(25), 1,
      sym_func_param_types,
    STATE(26), 2,
      sym_id_expr,
      sym_EMPTY,
  [233] = 1,
    ACTIONS(78), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_KEY_FUNCTION,
  [240] = 4,
    ACTIONS(76), 1,
      anon_sym_,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_EMPTY,
    STATE(31), 1,
      sym_func_param_list,
  [253] = 2,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    ACTIONS(58), 2,
      sym_IDENTIFIER,
      sym_KEY_TRY,
  [261] = 2,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 2,
      sym_IDENTIFIER,
      sym_KEY_TRY,
  [269] = 2,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 2,
      sym_IDENTIFIER,
      sym_KEY_TRY,
  [277] = 2,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 2,
      sym_IDENTIFIER,
      sym_KEY_TRY,
  [285] = 2,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(90), 2,
      sym_IDENTIFIER,
      sym_KEY_TRY,
  [293] = 3,
    ACTIONS(76), 1,
      anon_sym_,
    STATE(4), 1,
      sym_block,
    STATE(17), 1,
      sym_EMPTY,
  [303] = 2,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_KEY_FUNCTION,
  [310] = 1,
    ACTIONS(98), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [315] = 2,
    ACTIONS(100), 1,
      sym_IDENTIFIER,
    STATE(33), 1,
      sym_id_expr,
  [322] = 2,
    ACTIONS(100), 1,
      sym_IDENTIFIER,
    STATE(22), 1,
      sym_id_expr,
  [329] = 2,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    ACTIONS(104), 1,
      anon_sym_COMMA,
  [336] = 1,
    ACTIONS(106), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [341] = 1,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
  [345] = 1,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
  [349] = 1,
    ACTIONS(112), 1,
      anon_sym_SEMI,
  [353] = 1,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
  [357] = 1,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
  [361] = 1,
    ACTIONS(96), 1,
      sym_KEY_FUNCTION,
  [365] = 1,
    ACTIONS(118), 1,
      sym_KEY_FUNCTION,
  [369] = 1,
    ACTIONS(120), 1,
      anon_sym_SEMI,
  [373] = 1,
    ACTIONS(122), 1,
      anon_sym_SEMI,
  [377] = 1,
    ACTIONS(124), 1,
      anon_sym_SEMI,
  [381] = 1,
    ACTIONS(126), 1,
      sym_KEY_FUNCTION,
  [385] = 1,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
  [389] = 1,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
  [393] = 1,
    ACTIONS(130), 1,
      anon_sym_SEMI,
  [397] = 1,
    ACTIONS(132), 1,
      anon_sym_SEMI,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 130,
  [SMALL_STATE(6)] = 143,
  [SMALL_STATE(7)] = 156,
  [SMALL_STATE(8)] = 169,
  [SMALL_STATE(9)] = 182,
  [SMALL_STATE(10)] = 195,
  [SMALL_STATE(11)] = 208,
  [SMALL_STATE(12)] = 219,
  [SMALL_STATE(13)] = 233,
  [SMALL_STATE(14)] = 240,
  [SMALL_STATE(15)] = 253,
  [SMALL_STATE(16)] = 261,
  [SMALL_STATE(17)] = 269,
  [SMALL_STATE(18)] = 277,
  [SMALL_STATE(19)] = 285,
  [SMALL_STATE(20)] = 293,
  [SMALL_STATE(21)] = 303,
  [SMALL_STATE(22)] = 310,
  [SMALL_STATE(23)] = 315,
  [SMALL_STATE(24)] = 322,
  [SMALL_STATE(25)] = 329,
  [SMALL_STATE(26)] = 336,
  [SMALL_STATE(27)] = 341,
  [SMALL_STATE(28)] = 345,
  [SMALL_STATE(29)] = 349,
  [SMALL_STATE(30)] = 353,
  [SMALL_STATE(31)] = 357,
  [SMALL_STATE(32)] = 361,
  [SMALL_STATE(33)] = 365,
  [SMALL_STATE(34)] = 369,
  [SMALL_STATE(35)] = 373,
  [SMALL_STATE(36)] = 377,
  [SMALL_STATE(37)] = 381,
  [SMALL_STATE(38)] = 385,
  [SMALL_STATE(39)] = 389,
  [SMALL_STATE(40)] = 393,
  [SMALL_STATE(41)] = 397,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out_declar_stmt, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out_declar_stmt, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_stmt, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_stmt, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out_declar_stmt, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out_declar_stmt, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declar_stmt, 6),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_declar_stmt, 6),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_stmt, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_stmt, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EMPTY, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EMPTY, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_expr, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_item, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_item, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_name_types, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_param_types, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_param_types, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_param_list, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_param_list, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_name_types, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_stmt_types, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [128] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_declar_stmt, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_langX(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_IDENTIFIER,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
