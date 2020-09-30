#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 125
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 123
#define ALIAS_COUNT 0
#define TOKEN_COUNT 75
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym__IDENTIFIER = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_ = 7,
  anon_sym_DOT = 8,
  anon_sym_SEMI = 9,
  sym_con_ctl_stmt = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  anon_sym_PLUS = 13,
  anon_sym_STAR = 14,
  anon_sym_EQ = 15,
  sym_TSTRING = 16,
  sym_XINTEGER = 17,
  sym_TDOUBLE = 18,
  sym_OPERATOR_X__ = 19,
  sym_KEY_FUNCTION = 20,
  sym_KEY_DELETE = 21,
  sym_KEY_NEW = 22,
  sym_KEY_THIS = 23,
  sym_KEY_EXTEND = 24,
  sym_KEY_AUTO = 25,
  sym_KEY_NULL = 26,
  sym_KEY_TRUE = 27,
  sym_KEY_FALSE = 28,
  sym_KEY_IF = 29,
  sym_KEY_ELSE = 30,
  sym_KEY_WHILE = 31,
  sym_KEY_FOR = 32,
  sym_KEY_SWITCH = 33,
  sym_KEY_CASE = 34,
  sym_KEY_DEFAULT = 35,
  sym_KEY_BREAK = 36,
  sym_KEY_RETURN = 37,
  sym_KEY_CONTINUE = 38,
  sym_KEY_LOCAL = 39,
  sym_KEY_CONST = 40,
  sym_KEY_RESTRICT = 41,
  sym_KEY_SET = 42,
  sym_KEY_PUBLIC = 43,
  sym_KEY_REQUIRE = 44,
  sym_KEY_REQUIRE_ONCE = 45,
  sym_KEY_INCLUDE = 46,
  sym_KEY_REF = 47,
  sym_KEY_IS = 48,
  sym_KEY_TRY = 49,
  sym_KEY_CATCH = 50,
  sym_OP_SUB = 51,
  sym_OP_DIV = 52,
  sym_OP_MOD = 53,
  sym_OP_ADD_EQ = 54,
  sym_OP_SUB_EQ = 55,
  sym_OP_MUL_EQ = 56,
  sym_OP_DIV_EQ = 57,
  sym_OP_MOD_EQ = 58,
  sym_OP_LEFT_SHIFT = 59,
  sym_OP_RIGHT_SHIFT = 60,
  sym_OP_INC = 61,
  sym_OP_DEC = 62,
  sym_BIT_AND = 63,
  sym_BIT_OR = 64,
  sym_BIT_XOR = 65,
  sym_BIT_NOT = 66,
  sym_OP_AND = 67,
  sym_OP_OR = 68,
  sym_OP_NOT = 69,
  sym_OP_GT = 70,
  sym_OP_LT = 71,
  sym_OP_GE = 72,
  sym_OP_LE = 73,
  sym_OP_SCOPE = 74,
  sym_source_file = 75,
  sym_statement = 76,
  sym_out_declar_stmt = 77,
  sym_func_declar_stmt = 78,
  sym_func_name_types = 79,
  sym_func_param_list = 80,
  sym_call_statement = 81,
  sym_args_list = 82,
  sym_class_declar_stmt = 83,
  sym_class_name_prefix = 84,
  sym_class_name_suffix = 85,
  sym_class_body = 86,
  sym_class_member_stmt = 87,
  sym_this_stmt = 88,
  sym_static_member_stmt = 89,
  sym_simple_stmt = 90,
  sym__simple_stmt_types = 91,
  sym_require_stmt = 92,
  sym_require_operators = 93,
  sym_var_declar_stmt = 94,
  sym_var_prefix = 95,
  sym__elements_var_declar_stmt = 96,
  sym__element_var_declar_stmt = 97,
  sym__array_var_declar_stmt = 98,
  sym_self_inc_dec_stmt = 99,
  sym_self_inc_dec_operators = 100,
  sym_interrupt_stmt = 101,
  sym_restrict_stmt = 102,
  sym_assign_stmt_value = 103,
  sym_arithmetic_stmt = 104,
  sym__arithmetic_add_sub_stmt = 105,
  sym__arithmetic_mul_div_stmt = 106,
  sym_block = 107,
  sym_block_item = 108,
  sym_try_stmt = 109,
  sym_namespace_declar_stmt = 110,
  sym_multiple_id_expr = 111,
  sym_id_expr = 112,
  sym_number_expr = 113,
  sym_string_expr = 114,
  sym_array_ele_stmt = 115,
  sym_common_values_expr = 116,
  sym_common_result_of_call_expr = 117,
  sym_common_number_expr = 118,
  sym_common_object_expr = 119,
  sym_EMPTY = 120,
  aux_sym_source_file_repeat1 = 121,
  aux_sym_class_declar_stmt_repeat1 = 122,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__IDENTIFIER] = "_IDENTIFIER",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_] = "",
  [anon_sym_DOT] = ".",
  [anon_sym_SEMI] = ";",
  [sym_con_ctl_stmt] = "con_ctl_stmt",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_EQ] = "=",
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
  [sym_KEY_BREAK] = "KEY_BREAK",
  [sym_KEY_RETURN] = "KEY_RETURN",
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
  [sym_OP_SUB] = "OP_SUB",
  [sym_OP_DIV] = "OP_DIV",
  [sym_OP_MOD] = "OP_MOD",
  [sym_OP_ADD_EQ] = "OP_ADD_EQ",
  [sym_OP_SUB_EQ] = "OP_SUB_EQ",
  [sym_OP_MUL_EQ] = "OP_MUL_EQ",
  [sym_OP_DIV_EQ] = "OP_DIV_EQ",
  [sym_OP_MOD_EQ] = "OP_MOD_EQ",
  [sym_OP_LEFT_SHIFT] = "OP_LEFT_SHIFT",
  [sym_OP_RIGHT_SHIFT] = "OP_RIGHT_SHIFT",
  [sym_OP_INC] = "OP_INC",
  [sym_OP_DEC] = "OP_DEC",
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
  [sym_OP_SCOPE] = "OP_SCOPE",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_out_declar_stmt] = "out_declar_stmt",
  [sym_func_declar_stmt] = "func_declar_stmt",
  [sym_func_name_types] = "func_name_types",
  [sym_func_param_list] = "func_param_list",
  [sym_call_statement] = "call_statement",
  [sym_args_list] = "args_list",
  [sym_class_declar_stmt] = "class_declar_stmt",
  [sym_class_name_prefix] = "class_name_prefix",
  [sym_class_name_suffix] = "class_name_suffix",
  [sym_class_body] = "class_body",
  [sym_class_member_stmt] = "class_member_stmt",
  [sym_this_stmt] = "this_stmt",
  [sym_static_member_stmt] = "static_member_stmt",
  [sym_simple_stmt] = "simple_stmt",
  [sym__simple_stmt_types] = "_simple_stmt_types",
  [sym_require_stmt] = "require_stmt",
  [sym_require_operators] = "require_operators",
  [sym_var_declar_stmt] = "var_declar_stmt",
  [sym_var_prefix] = "var_prefix",
  [sym__elements_var_declar_stmt] = "_elements_var_declar_stmt",
  [sym__element_var_declar_stmt] = "_element_var_declar_stmt",
  [sym__array_var_declar_stmt] = "_array_var_declar_stmt",
  [sym_self_inc_dec_stmt] = "self_inc_dec_stmt",
  [sym_self_inc_dec_operators] = "self_inc_dec_operators",
  [sym_interrupt_stmt] = "interrupt_stmt",
  [sym_restrict_stmt] = "restrict_stmt",
  [sym_assign_stmt_value] = "assign_stmt_value",
  [sym_arithmetic_stmt] = "arithmetic_stmt",
  [sym__arithmetic_add_sub_stmt] = "_arithmetic_add_sub_stmt",
  [sym__arithmetic_mul_div_stmt] = "_arithmetic_mul_div_stmt",
  [sym_block] = "block",
  [sym_block_item] = "block_item",
  [sym_try_stmt] = "try_stmt",
  [sym_namespace_declar_stmt] = "namespace_declar_stmt",
  [sym_multiple_id_expr] = "multiple_id_expr",
  [sym_id_expr] = "id_expr",
  [sym_number_expr] = "number_expr",
  [sym_string_expr] = "string_expr",
  [sym_array_ele_stmt] = "array_ele_stmt",
  [sym_common_values_expr] = "common_values_expr",
  [sym_common_result_of_call_expr] = "common_result_of_call_expr",
  [sym_common_number_expr] = "common_number_expr",
  [sym_common_object_expr] = "common_object_expr",
  [sym_EMPTY] = "EMPTY",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_class_declar_stmt_repeat1] = "class_declar_stmt_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__IDENTIFIER] = sym__IDENTIFIER,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_] = anon_sym_,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_con_ctl_stmt] = sym_con_ctl_stmt,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_EQ] = anon_sym_EQ,
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
  [sym_KEY_BREAK] = sym_KEY_BREAK,
  [sym_KEY_RETURN] = sym_KEY_RETURN,
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
  [sym_OP_SUB] = sym_OP_SUB,
  [sym_OP_DIV] = sym_OP_DIV,
  [sym_OP_MOD] = sym_OP_MOD,
  [sym_OP_ADD_EQ] = sym_OP_ADD_EQ,
  [sym_OP_SUB_EQ] = sym_OP_SUB_EQ,
  [sym_OP_MUL_EQ] = sym_OP_MUL_EQ,
  [sym_OP_DIV_EQ] = sym_OP_DIV_EQ,
  [sym_OP_MOD_EQ] = sym_OP_MOD_EQ,
  [sym_OP_LEFT_SHIFT] = sym_OP_LEFT_SHIFT,
  [sym_OP_RIGHT_SHIFT] = sym_OP_RIGHT_SHIFT,
  [sym_OP_INC] = sym_OP_INC,
  [sym_OP_DEC] = sym_OP_DEC,
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
  [sym_OP_SCOPE] = sym_OP_SCOPE,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_out_declar_stmt] = sym_out_declar_stmt,
  [sym_func_declar_stmt] = sym_func_declar_stmt,
  [sym_func_name_types] = sym_func_name_types,
  [sym_func_param_list] = sym_func_param_list,
  [sym_call_statement] = sym_call_statement,
  [sym_args_list] = sym_args_list,
  [sym_class_declar_stmt] = sym_class_declar_stmt,
  [sym_class_name_prefix] = sym_class_name_prefix,
  [sym_class_name_suffix] = sym_class_name_suffix,
  [sym_class_body] = sym_class_body,
  [sym_class_member_stmt] = sym_class_member_stmt,
  [sym_this_stmt] = sym_this_stmt,
  [sym_static_member_stmt] = sym_static_member_stmt,
  [sym_simple_stmt] = sym_simple_stmt,
  [sym__simple_stmt_types] = sym__simple_stmt_types,
  [sym_require_stmt] = sym_require_stmt,
  [sym_require_operators] = sym_require_operators,
  [sym_var_declar_stmt] = sym_var_declar_stmt,
  [sym_var_prefix] = sym_var_prefix,
  [sym__elements_var_declar_stmt] = sym__elements_var_declar_stmt,
  [sym__element_var_declar_stmt] = sym__element_var_declar_stmt,
  [sym__array_var_declar_stmt] = sym__array_var_declar_stmt,
  [sym_self_inc_dec_stmt] = sym_self_inc_dec_stmt,
  [sym_self_inc_dec_operators] = sym_self_inc_dec_operators,
  [sym_interrupt_stmt] = sym_interrupt_stmt,
  [sym_restrict_stmt] = sym_restrict_stmt,
  [sym_assign_stmt_value] = sym_assign_stmt_value,
  [sym_arithmetic_stmt] = sym_arithmetic_stmt,
  [sym__arithmetic_add_sub_stmt] = sym__arithmetic_add_sub_stmt,
  [sym__arithmetic_mul_div_stmt] = sym__arithmetic_mul_div_stmt,
  [sym_block] = sym_block,
  [sym_block_item] = sym_block_item,
  [sym_try_stmt] = sym_try_stmt,
  [sym_namespace_declar_stmt] = sym_namespace_declar_stmt,
  [sym_multiple_id_expr] = sym_multiple_id_expr,
  [sym_id_expr] = sym_id_expr,
  [sym_number_expr] = sym_number_expr,
  [sym_string_expr] = sym_string_expr,
  [sym_array_ele_stmt] = sym_array_ele_stmt,
  [sym_common_values_expr] = sym_common_values_expr,
  [sym_common_result_of_call_expr] = sym_common_result_of_call_expr,
  [sym_common_number_expr] = sym_common_number_expr,
  [sym_common_object_expr] = sym_common_object_expr,
  [sym_EMPTY] = sym_EMPTY,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_class_declar_stmt_repeat1] = aux_sym_class_declar_stmt_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__IDENTIFIER] = {
    .visible = false,
    .named = true,
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_con_ctl_stmt] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
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
  [sym_KEY_BREAK] = {
    .visible = true,
    .named = true,
  },
  [sym_KEY_RETURN] = {
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
  [sym_OP_SUB] = {
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
  [sym_OP_INC] = {
    .visible = true,
    .named = true,
  },
  [sym_OP_DEC] = {
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
  [sym_call_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_args_list] = {
    .visible = true,
    .named = true,
  },
  [sym_class_declar_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name_suffix] = {
    .visible = true,
    .named = true,
  },
  [sym_class_body] = {
    .visible = true,
    .named = true,
  },
  [sym_class_member_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_this_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_static_member_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_stmt_types] = {
    .visible = false,
    .named = true,
  },
  [sym_require_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_require_operators] = {
    .visible = true,
    .named = true,
  },
  [sym_var_declar_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_var_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym__elements_var_declar_stmt] = {
    .visible = false,
    .named = true,
  },
  [sym__element_var_declar_stmt] = {
    .visible = false,
    .named = true,
  },
  [sym__array_var_declar_stmt] = {
    .visible = false,
    .named = true,
  },
  [sym_self_inc_dec_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_self_inc_dec_operators] = {
    .visible = true,
    .named = true,
  },
  [sym_interrupt_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_restrict_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_stmt_value] = {
    .visible = true,
    .named = true,
  },
  [sym_arithmetic_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym__arithmetic_add_sub_stmt] = {
    .visible = false,
    .named = true,
  },
  [sym__arithmetic_mul_div_stmt] = {
    .visible = false,
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
  [sym_multiple_id_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_id_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_number_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_string_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_array_ele_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_common_values_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_common_result_of_call_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_common_number_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_common_object_expr] = {
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
  [aux_sym_class_declar_stmt_repeat1] = {
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
      if (eof) ADVANCE(13);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '>') ADVANCE(67);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '^') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '~') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(71);
      END_STATE();
    case 6:
      if (lookahead == '<') ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(44);
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(44);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 11:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '~') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(58);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(47);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == '*' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '=') ADVANCE(44);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(34);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_TSTRING);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_XINTEGER);
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_XINTEGER);
      if (lookahead == '.') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_TDOUBLE);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_OPERATOR_X__);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_OPERATOR_X__);
      if (lookahead == '+') ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_OPERATOR_X__);
      if (lookahead == '-') ADVANCE(44);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_KEY_FUNCTION);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_OP_SUB);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_OP_DIV);
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_OP_MOD);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_OP_ADD_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_OP_SUB_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_OP_MUL_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_OP_DIV_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_OP_MOD_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_OP_LEFT_SHIFT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_OP_RIGHT_SHIFT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_OP_INC);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_OP_DEC);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_BIT_AND);
      if (lookahead == '&') ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_BIT_OR);
      if (lookahead == '|') ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_BIT_XOR);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_BIT_NOT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_OP_AND);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_OP_OR);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_OP_NOT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_OP_GT);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(57);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_OP_LT);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_OP_GE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_OP_LE);
      END_STATE();
    case 71:
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
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(14);
      if (lookahead == 'x') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'w') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'h') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_KEY_IF);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_KEY_IS);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == 'w') ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'q') ADVANCE(56);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(62);
      if (lookahead == 'y') ADVANCE(63);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_con_ctl_stmt);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_KEY_FOR);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_KEY_NEW);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_KEY_REF);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_KEY_SET);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_KEY_TRY);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_KEY_AUTO);
      END_STATE();
    case 66:
      if (lookahead == 'k') ADVANCE(87);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_KEY_CASE);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(88);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_KEY_ELSE);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_KEY_NULL);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_KEY_THIS);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_KEY_TRUE);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_KEY_BREAK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_KEY_CATCH);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_KEY_CONST);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_KEY_FALSE);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_KEY_LOCAL);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 101:
      if (lookahead == 'h') ADVANCE(112);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_KEY_WHILE);
      END_STATE();
    case 103:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_KEY_DELETE);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_KEY_PUBLIC);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_KEY_RETURN);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_KEY_SWITCH);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_KEY_DEFAULT);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_KEY_EXTEND);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_KEY_INCLUDE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_KEY_REQUIRE);
      if (lookahead == '_') ADVANCE(120);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_KEY_CONTINUE);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_KEY_RESTRICT);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_KEY_REQUIRE_ONCE);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 19},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 19},
  [63] = {.lex_state = 19},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 19},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 12},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__IDENTIFIER] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_con_ctl_stmt] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
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
    [sym_KEY_BREAK] = ACTIONS(1),
    [sym_KEY_RETURN] = ACTIONS(1),
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
    [sym_OP_SUB] = ACTIONS(1),
    [sym_OP_DIV] = ACTIONS(1),
    [sym_OP_MOD] = ACTIONS(1),
    [sym_OP_ADD_EQ] = ACTIONS(1),
    [sym_OP_SUB_EQ] = ACTIONS(1),
    [sym_OP_MUL_EQ] = ACTIONS(1),
    [sym_OP_DIV_EQ] = ACTIONS(1),
    [sym_OP_MOD_EQ] = ACTIONS(1),
    [sym_OP_LEFT_SHIFT] = ACTIONS(1),
    [sym_OP_RIGHT_SHIFT] = ACTIONS(1),
    [sym_OP_INC] = ACTIONS(1),
    [sym_OP_DEC] = ACTIONS(1),
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
    [sym_OP_SCOPE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(102),
    [sym_statement] = STATE(3),
    [sym_out_declar_stmt] = STATE(19),
    [sym_func_declar_stmt] = STATE(18),
    [sym_func_name_types] = STATE(101),
    [sym_call_statement] = STATE(59),
    [sym_class_declar_stmt] = STATE(18),
    [sym_class_name_prefix] = STATE(93),
    [sym_class_member_stmt] = STATE(41),
    [sym_this_stmt] = STATE(41),
    [sym_static_member_stmt] = STATE(41),
    [sym_simple_stmt] = STATE(19),
    [sym__simple_stmt_types] = STATE(98),
    [sym_require_stmt] = STATE(98),
    [sym_require_operators] = STATE(89),
    [sym_var_declar_stmt] = STATE(98),
    [sym_var_prefix] = STATE(49),
    [sym__elements_var_declar_stmt] = STATE(84),
    [sym__element_var_declar_stmt] = STATE(84),
    [sym__array_var_declar_stmt] = STATE(84),
    [sym_self_inc_dec_stmt] = STATE(98),
    [sym_self_inc_dec_operators] = STATE(83),
    [sym_interrupt_stmt] = STATE(98),
    [sym_restrict_stmt] = STATE(98),
    [sym_try_stmt] = STATE(19),
    [sym_namespace_declar_stmt] = STATE(18),
    [sym_id_expr] = STATE(35),
    [sym_array_ele_stmt] = STATE(41),
    [sym_common_values_expr] = STATE(68),
    [sym_common_object_expr] = STATE(78),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__IDENTIFIER] = ACTIONS(5),
    [sym_con_ctl_stmt] = ACTIONS(7),
    [sym_OPERATOR_X__] = ACTIONS(9),
    [sym_KEY_THIS] = ACTIONS(11),
    [sym_KEY_AUTO] = ACTIONS(13),
    [sym_KEY_BREAK] = ACTIONS(15),
    [sym_KEY_RETURN] = ACTIONS(17),
    [sym_KEY_CONTINUE] = ACTIONS(15),
    [sym_KEY_LOCAL] = ACTIONS(19),
    [sym_KEY_CONST] = ACTIONS(19),
    [sym_KEY_RESTRICT] = ACTIONS(21),
    [sym_KEY_SET] = ACTIONS(23),
    [sym_KEY_REQUIRE] = ACTIONS(25),
    [sym_KEY_REQUIRE_ONCE] = ACTIONS(25),
    [sym_KEY_INCLUDE] = ACTIONS(25),
    [sym_KEY_TRY] = ACTIONS(27),
    [sym_OP_INC] = ACTIONS(29),
    [sym_OP_DEC] = ACTIONS(29),
    [sym_BIT_NOT] = ACTIONS(31),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 30,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym__IDENTIFIER,
    ACTIONS(38), 1,
      sym_con_ctl_stmt,
    ACTIONS(41), 1,
      sym_OPERATOR_X__,
    ACTIONS(44), 1,
      sym_KEY_THIS,
    ACTIONS(47), 1,
      sym_KEY_AUTO,
    ACTIONS(53), 1,
      sym_KEY_RETURN,
    ACTIONS(59), 1,
      sym_KEY_RESTRICT,
    ACTIONS(62), 1,
      sym_KEY_SET,
    ACTIONS(68), 1,
      sym_KEY_TRY,
    ACTIONS(74), 1,
      sym_BIT_NOT,
    STATE(35), 1,
      sym_id_expr,
    STATE(49), 1,
      sym_var_prefix,
    STATE(59), 1,
      sym_call_statement,
    STATE(68), 1,
      sym_common_values_expr,
    STATE(78), 1,
      sym_common_object_expr,
    STATE(83), 1,
      sym_self_inc_dec_operators,
    STATE(89), 1,
      sym_require_operators,
    STATE(93), 1,
      sym_class_name_prefix,
    STATE(101), 1,
      sym_func_name_types,
    ACTIONS(50), 2,
      sym_KEY_BREAK,
      sym_KEY_CONTINUE,
    ACTIONS(56), 2,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    ACTIONS(71), 2,
      sym_OP_INC,
      sym_OP_DEC,
    STATE(2), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    ACTIONS(65), 3,
      sym_KEY_REQUIRE,
      sym_KEY_REQUIRE_ONCE,
      sym_KEY_INCLUDE,
    STATE(18), 3,
      sym_func_declar_stmt,
      sym_class_declar_stmt,
      sym_namespace_declar_stmt,
    STATE(19), 3,
      sym_out_declar_stmt,
      sym_simple_stmt,
      sym_try_stmt,
    STATE(84), 3,
      sym__elements_var_declar_stmt,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
    STATE(41), 4,
      sym_class_member_stmt,
      sym_this_stmt,
      sym_static_member_stmt,
      sym_array_ele_stmt,
    STATE(98), 6,
      sym__simple_stmt_types,
      sym_require_stmt,
      sym_var_declar_stmt,
      sym_self_inc_dec_stmt,
      sym_interrupt_stmt,
      sym_restrict_stmt,
  [111] = 30,
    ACTIONS(5), 1,
      sym__IDENTIFIER,
    ACTIONS(7), 1,
      sym_con_ctl_stmt,
    ACTIONS(9), 1,
      sym_OPERATOR_X__,
    ACTIONS(11), 1,
      sym_KEY_THIS,
    ACTIONS(13), 1,
      sym_KEY_AUTO,
    ACTIONS(17), 1,
      sym_KEY_RETURN,
    ACTIONS(21), 1,
      sym_KEY_RESTRICT,
    ACTIONS(23), 1,
      sym_KEY_SET,
    ACTIONS(27), 1,
      sym_KEY_TRY,
    ACTIONS(31), 1,
      sym_BIT_NOT,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_id_expr,
    STATE(49), 1,
      sym_var_prefix,
    STATE(59), 1,
      sym_call_statement,
    STATE(68), 1,
      sym_common_values_expr,
    STATE(78), 1,
      sym_common_object_expr,
    STATE(83), 1,
      sym_self_inc_dec_operators,
    STATE(89), 1,
      sym_require_operators,
    STATE(93), 1,
      sym_class_name_prefix,
    STATE(101), 1,
      sym_func_name_types,
    ACTIONS(15), 2,
      sym_KEY_BREAK,
      sym_KEY_CONTINUE,
    ACTIONS(19), 2,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    ACTIONS(29), 2,
      sym_OP_INC,
      sym_OP_DEC,
    STATE(2), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    ACTIONS(25), 3,
      sym_KEY_REQUIRE,
      sym_KEY_REQUIRE_ONCE,
      sym_KEY_INCLUDE,
    STATE(18), 3,
      sym_func_declar_stmt,
      sym_class_declar_stmt,
      sym_namespace_declar_stmt,
    STATE(19), 3,
      sym_out_declar_stmt,
      sym_simple_stmt,
      sym_try_stmt,
    STATE(84), 3,
      sym__elements_var_declar_stmt,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
    STATE(41), 4,
      sym_class_member_stmt,
      sym_this_stmt,
      sym_static_member_stmt,
      sym_array_ele_stmt,
    STATE(98), 6,
      sym__simple_stmt_types,
      sym_require_stmt,
      sym_var_declar_stmt,
      sym_self_inc_dec_stmt,
      sym_interrupt_stmt,
      sym_restrict_stmt,
  [222] = 22,
    ACTIONS(5), 1,
      sym__IDENTIFIER,
    ACTIONS(11), 1,
      sym_KEY_THIS,
    ACTIONS(17), 1,
      sym_KEY_RETURN,
    ACTIONS(21), 1,
      sym_KEY_RESTRICT,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(81), 1,
      sym_KEY_TRY,
    STATE(31), 1,
      sym_block_item,
    STATE(37), 1,
      sym_id_expr,
    STATE(49), 1,
      sym_var_prefix,
    STATE(59), 1,
      sym_call_statement,
    STATE(68), 1,
      sym_common_values_expr,
    STATE(78), 1,
      sym_common_object_expr,
    STATE(83), 1,
      sym_self_inc_dec_operators,
    STATE(89), 1,
      sym_require_operators,
    ACTIONS(15), 2,
      sym_KEY_BREAK,
      sym_KEY_CONTINUE,
    ACTIONS(19), 2,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    ACTIONS(29), 2,
      sym_OP_INC,
      sym_OP_DEC,
    STATE(30), 2,
      sym_simple_stmt,
      sym_try_stmt,
    ACTIONS(25), 3,
      sym_KEY_REQUIRE,
      sym_KEY_REQUIRE_ONCE,
      sym_KEY_INCLUDE,
    STATE(84), 3,
      sym__elements_var_declar_stmt,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
    STATE(41), 4,
      sym_class_member_stmt,
      sym_this_stmt,
      sym_static_member_stmt,
      sym_array_ele_stmt,
    STATE(123), 6,
      sym__simple_stmt_types,
      sym_require_stmt,
      sym_var_declar_stmt,
      sym_self_inc_dec_stmt,
      sym_interrupt_stmt,
      sym_restrict_stmt,
  [305] = 22,
    ACTIONS(5), 1,
      sym__IDENTIFIER,
    ACTIONS(11), 1,
      sym_KEY_THIS,
    ACTIONS(17), 1,
      sym_KEY_RETURN,
    ACTIONS(21), 1,
      sym_KEY_RESTRICT,
    ACTIONS(81), 1,
      sym_KEY_TRY,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym_block_item,
    STATE(37), 1,
      sym_id_expr,
    STATE(49), 1,
      sym_var_prefix,
    STATE(59), 1,
      sym_call_statement,
    STATE(68), 1,
      sym_common_values_expr,
    STATE(78), 1,
      sym_common_object_expr,
    STATE(83), 1,
      sym_self_inc_dec_operators,
    STATE(89), 1,
      sym_require_operators,
    ACTIONS(15), 2,
      sym_KEY_BREAK,
      sym_KEY_CONTINUE,
    ACTIONS(19), 2,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    ACTIONS(29), 2,
      sym_OP_INC,
      sym_OP_DEC,
    STATE(30), 2,
      sym_simple_stmt,
      sym_try_stmt,
    ACTIONS(25), 3,
      sym_KEY_REQUIRE,
      sym_KEY_REQUIRE_ONCE,
      sym_KEY_INCLUDE,
    STATE(84), 3,
      sym__elements_var_declar_stmt,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
    STATE(41), 4,
      sym_class_member_stmt,
      sym_this_stmt,
      sym_static_member_stmt,
      sym_array_ele_stmt,
    STATE(123), 6,
      sym__simple_stmt_types,
      sym_require_stmt,
      sym_var_declar_stmt,
      sym_self_inc_dec_stmt,
      sym_interrupt_stmt,
      sym_restrict_stmt,
  [388] = 15,
    ACTIONS(5), 1,
      sym__IDENTIFIER,
    ACTIONS(11), 1,
      sym_KEY_THIS,
    ACTIONS(85), 1,
      sym_XINTEGER,
    ACTIONS(87), 1,
      sym_TDOUBLE,
    STATE(36), 1,
      sym_id_expr,
    STATE(46), 1,
      sym_common_values_expr,
    STATE(51), 1,
      sym_call_statement,
    STATE(65), 1,
      sym_common_number_expr,
    STATE(82), 1,
      sym_common_object_expr,
    STATE(90), 1,
      sym_self_inc_dec_operators,
    ACTIONS(29), 2,
      sym_OP_INC,
      sym_OP_DEC,
    STATE(69), 2,
      sym_self_inc_dec_stmt,
      sym_arithmetic_stmt,
    STATE(70), 2,
      sym__arithmetic_add_sub_stmt,
      sym__arithmetic_mul_div_stmt,
    STATE(72), 2,
      sym_number_expr,
      sym_common_result_of_call_expr,
    STATE(41), 4,
      sym_class_member_stmt,
      sym_this_stmt,
      sym_static_member_stmt,
      sym_array_ele_stmt,
  [441] = 15,
    ACTIONS(5), 1,
      sym__IDENTIFIER,
    ACTIONS(11), 1,
      sym_KEY_THIS,
    ACTIONS(85), 1,
      sym_XINTEGER,
    ACTIONS(87), 1,
      sym_TDOUBLE,
    STATE(36), 1,
      sym_id_expr,
    STATE(46), 1,
      sym_common_values_expr,
    STATE(51), 1,
      sym_call_statement,
    STATE(74), 1,
      sym_common_number_expr,
    STATE(82), 1,
      sym_common_object_expr,
    STATE(90), 1,
      sym_self_inc_dec_operators,
    ACTIONS(29), 2,
      sym_OP_INC,
      sym_OP_DEC,
    STATE(69), 2,
      sym_self_inc_dec_stmt,
      sym_arithmetic_stmt,
    STATE(70), 2,
      sym__arithmetic_add_sub_stmt,
      sym__arithmetic_mul_div_stmt,
    STATE(72), 2,
      sym_number_expr,
      sym_common_result_of_call_expr,
    STATE(41), 4,
      sym_class_member_stmt,
      sym_this_stmt,
      sym_static_member_stmt,
      sym_array_ele_stmt,
  [494] = 15,
    ACTIONS(5), 1,
      sym__IDENTIFIER,
    ACTIONS(11), 1,
      sym_KEY_THIS,
    ACTIONS(85), 1,
      sym_XINTEGER,
    ACTIONS(87), 1,
      sym_TDOUBLE,
    STATE(36), 1,
      sym_id_expr,
    STATE(46), 1,
      sym_common_values_expr,
    STATE(51), 1,
      sym_call_statement,
    STATE(56), 1,
      sym_common_number_expr,
    STATE(82), 1,
      sym_common_object_expr,
    STATE(90), 1,
      sym_self_inc_dec_operators,
    ACTIONS(29), 2,
      sym_OP_INC,
      sym_OP_DEC,
    STATE(69), 2,
      sym_self_inc_dec_stmt,
      sym_arithmetic_stmt,
    STATE(70), 2,
      sym__arithmetic_add_sub_stmt,
      sym__arithmetic_mul_div_stmt,
    STATE(72), 2,
      sym_number_expr,
      sym_common_result_of_call_expr,
    STATE(41), 4,
      sym_class_member_stmt,
      sym_this_stmt,
      sym_static_member_stmt,
      sym_array_ele_stmt,
  [547] = 15,
    ACTIONS(5), 1,
      sym__IDENTIFIER,
    ACTIONS(11), 1,
      sym_KEY_THIS,
    ACTIONS(85), 1,
      sym_XINTEGER,
    ACTIONS(87), 1,
      sym_TDOUBLE,
    STATE(36), 1,
      sym_id_expr,
    STATE(46), 1,
      sym_common_values_expr,
    STATE(51), 1,
      sym_call_statement,
    STATE(66), 1,
      sym_common_number_expr,
    STATE(82), 1,
      sym_common_object_expr,
    STATE(90), 1,
      sym_self_inc_dec_operators,
    ACTIONS(29), 2,
      sym_OP_INC,
      sym_OP_DEC,
    STATE(69), 2,
      sym_self_inc_dec_stmt,
      sym_arithmetic_stmt,
    STATE(70), 2,
      sym__arithmetic_add_sub_stmt,
      sym__arithmetic_mul_div_stmt,
    STATE(72), 2,
      sym_number_expr,
      sym_common_result_of_call_expr,
    STATE(41), 4,
      sym_class_member_stmt,
      sym_this_stmt,
      sym_static_member_stmt,
      sym_array_ele_stmt,
  [600] = 2,
    ACTIONS(89), 6,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_OPERATOR_X__,
      sym_OP_INC,
      sym_OP_DEC,
      sym_BIT_NOT,
    ACTIONS(91), 15,
      sym_con_ctl_stmt,
      sym__IDENTIFIER,
      sym_KEY_THIS,
      sym_KEY_AUTO,
      sym_KEY_BREAK,
      sym_KEY_RETURN,
      sym_KEY_CONTINUE,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
      sym_KEY_RESTRICT,
      sym_KEY_SET,
      sym_KEY_REQUIRE,
      sym_KEY_REQUIRE_ONCE,
      sym_KEY_INCLUDE,
      sym_KEY_TRY,
  [626] = 2,
    ACTIONS(93), 6,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_OPERATOR_X__,
      sym_OP_INC,
      sym_OP_DEC,
      sym_BIT_NOT,
    ACTIONS(95), 15,
      sym_con_ctl_stmt,
      sym__IDENTIFIER,
      sym_KEY_THIS,
      sym_KEY_AUTO,
      sym_KEY_BREAK,
      sym_KEY_RETURN,
      sym_KEY_CONTINUE,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
      sym_KEY_RESTRICT,
      sym_KEY_SET,
      sym_KEY_REQUIRE,
      sym_KEY_REQUIRE_ONCE,
      sym_KEY_INCLUDE,
      sym_KEY_TRY,
  [652] = 2,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      sym_OPERATOR_X__,
      sym_OP_INC,
      sym_OP_DEC,
      sym_BIT_NOT,
    ACTIONS(99), 15,
      sym_con_ctl_stmt,
      sym__IDENTIFIER,
      sym_KEY_THIS,
      sym_KEY_AUTO,
      sym_KEY_BREAK,
      sym_KEY_RETURN,
      sym_KEY_CONTINUE,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
      sym_KEY_RESTRICT,
      sym_KEY_SET,
      sym_KEY_REQUIRE,
      sym_KEY_REQUIRE_ONCE,
      sym_KEY_INCLUDE,
      sym_KEY_TRY,
  [677] = 2,
    ACTIONS(101), 5,
      ts_builtin_sym_end,
      sym_OPERATOR_X__,
      sym_OP_INC,
      sym_OP_DEC,
      sym_BIT_NOT,
    ACTIONS(103), 15,
      sym_con_ctl_stmt,
      sym__IDENTIFIER,
      sym_KEY_THIS,
      sym_KEY_AUTO,
      sym_KEY_BREAK,
      sym_KEY_RETURN,
      sym_KEY_CONTINUE,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
      sym_KEY_RESTRICT,
      sym_KEY_SET,
      sym_KEY_REQUIRE,
      sym_KEY_REQUIRE_ONCE,
      sym_KEY_INCLUDE,
      sym_KEY_TRY,
  [702] = 2,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      sym_OPERATOR_X__,
      sym_OP_INC,
      sym_OP_DEC,
      sym_BIT_NOT,
    ACTIONS(107), 15,
      sym_con_ctl_stmt,
      sym__IDENTIFIER,
      sym_KEY_THIS,
      sym_KEY_AUTO,
      sym_KEY_BREAK,
      sym_KEY_RETURN,
      sym_KEY_CONTINUE,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
      sym_KEY_RESTRICT,
      sym_KEY_SET,
      sym_KEY_REQUIRE,
      sym_KEY_REQUIRE_ONCE,
      sym_KEY_INCLUDE,
      sym_KEY_TRY,
  [727] = 2,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      sym_OPERATOR_X__,
      sym_OP_INC,
      sym_OP_DEC,
      sym_BIT_NOT,
    ACTIONS(111), 15,
      sym_con_ctl_stmt,
      sym__IDENTIFIER,
      sym_KEY_THIS,
      sym_KEY_AUTO,
      sym_KEY_BREAK,
      sym_KEY_RETURN,
      sym_KEY_CONTINUE,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
      sym_KEY_RESTRICT,
      sym_KEY_SET,
      sym_KEY_REQUIRE,
      sym_KEY_REQUIRE_ONCE,
      sym_KEY_INCLUDE,
      sym_KEY_TRY,
  [752] = 2,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      sym_OPERATOR_X__,
      sym_OP_INC,
      sym_OP_DEC,
      sym_BIT_NOT,
    ACTIONS(115), 15,
      sym_con_ctl_stmt,
      sym__IDENTIFIER,
      sym_KEY_THIS,
      sym_KEY_AUTO,
      sym_KEY_BREAK,
      sym_KEY_RETURN,
      sym_KEY_CONTINUE,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
      sym_KEY_RESTRICT,
      sym_KEY_SET,
      sym_KEY_REQUIRE,
      sym_KEY_REQUIRE_ONCE,
      sym_KEY_INCLUDE,
      sym_KEY_TRY,
  [777] = 2,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      sym_OPERATOR_X__,
      sym_OP_INC,
      sym_OP_DEC,
      sym_BIT_NOT,
    ACTIONS(119), 15,
      sym_con_ctl_stmt,
      sym__IDENTIFIER,
      sym_KEY_THIS,
      sym_KEY_AUTO,
      sym_KEY_BREAK,
      sym_KEY_RETURN,
      sym_KEY_CONTINUE,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
      sym_KEY_RESTRICT,
      sym_KEY_SET,
      sym_KEY_REQUIRE,
      sym_KEY_REQUIRE_ONCE,
      sym_KEY_INCLUDE,
      sym_KEY_TRY,
  [802] = 2,
    ACTIONS(121), 5,
      ts_builtin_sym_end,
      sym_OPERATOR_X__,
      sym_OP_INC,
      sym_OP_DEC,
      sym_BIT_NOT,
    ACTIONS(123), 15,
      sym_con_ctl_stmt,
      sym__IDENTIFIER,
      sym_KEY_THIS,
      sym_KEY_AUTO,
      sym_KEY_BREAK,
      sym_KEY_RETURN,
      sym_KEY_CONTINUE,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
      sym_KEY_RESTRICT,
      sym_KEY_SET,
      sym_KEY_REQUIRE,
      sym_KEY_REQUIRE_ONCE,
      sym_KEY_INCLUDE,
      sym_KEY_TRY,
  [827] = 2,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      sym_OPERATOR_X__,
      sym_OP_INC,
      sym_OP_DEC,
      sym_BIT_NOT,
    ACTIONS(127), 15,
      sym_con_ctl_stmt,
      sym__IDENTIFIER,
      sym_KEY_THIS,
      sym_KEY_AUTO,
      sym_KEY_BREAK,
      sym_KEY_RETURN,
      sym_KEY_CONTINUE,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
      sym_KEY_RESTRICT,
      sym_KEY_SET,
      sym_KEY_REQUIRE,
      sym_KEY_REQUIRE_ONCE,
      sym_KEY_INCLUDE,
      sym_KEY_TRY,
  [852] = 2,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      sym_OPERATOR_X__,
      sym_OP_INC,
      sym_OP_DEC,
      sym_BIT_NOT,
    ACTIONS(131), 15,
      sym_con_ctl_stmt,
      sym__IDENTIFIER,
      sym_KEY_THIS,
      sym_KEY_AUTO,
      sym_KEY_BREAK,
      sym_KEY_RETURN,
      sym_KEY_CONTINUE,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
      sym_KEY_RESTRICT,
      sym_KEY_SET,
      sym_KEY_REQUIRE,
      sym_KEY_REQUIRE_ONCE,
      sym_KEY_INCLUDE,
      sym_KEY_TRY,
  [877] = 12,
    ACTIONS(5), 1,
      sym__IDENTIFIER,
    ACTIONS(9), 1,
      sym_OPERATOR_X__,
    ACTIONS(31), 1,
      sym_BIT_NOT,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_func_declar_stmt,
    STATE(49), 1,
      sym_var_prefix,
    STATE(55), 1,
      sym_id_expr,
    STATE(101), 1,
      sym_func_name_types,
    STATE(113), 1,
      sym_var_declar_stmt,
    ACTIONS(19), 2,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    STATE(25), 2,
      sym_class_body,
      aux_sym_class_declar_stmt_repeat1,
    STATE(84), 3,
      sym__elements_var_declar_stmt,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
  [918] = 12,
    ACTIONS(5), 1,
      sym__IDENTIFIER,
    ACTIONS(9), 1,
      sym_OPERATOR_X__,
    ACTIONS(31), 1,
      sym_BIT_NOT,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_func_declar_stmt,
    STATE(49), 1,
      sym_var_prefix,
    STATE(55), 1,
      sym_id_expr,
    STATE(101), 1,
      sym_func_name_types,
    STATE(113), 1,
      sym_var_declar_stmt,
    ACTIONS(19), 2,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    STATE(23), 2,
      sym_class_body,
      aux_sym_class_declar_stmt_repeat1,
    STATE(84), 3,
      sym__elements_var_declar_stmt,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
  [959] = 12,
    ACTIONS(135), 1,
      sym__IDENTIFIER,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    ACTIONS(140), 1,
      sym_OPERATOR_X__,
    ACTIONS(146), 1,
      sym_BIT_NOT,
    STATE(38), 1,
      sym_func_declar_stmt,
    STATE(49), 1,
      sym_var_prefix,
    STATE(55), 1,
      sym_id_expr,
    STATE(101), 1,
      sym_func_name_types,
    STATE(113), 1,
      sym_var_declar_stmt,
    ACTIONS(143), 2,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    STATE(23), 2,
      sym_class_body,
      aux_sym_class_declar_stmt_repeat1,
    STATE(84), 3,
      sym__elements_var_declar_stmt,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
  [1000] = 12,
    ACTIONS(5), 1,
      sym__IDENTIFIER,
    ACTIONS(9), 1,
      sym_OPERATOR_X__,
    ACTIONS(31), 1,
      sym_BIT_NOT,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_func_declar_stmt,
    STATE(49), 1,
      sym_var_prefix,
    STATE(55), 1,
      sym_id_expr,
    STATE(101), 1,
      sym_func_name_types,
    STATE(113), 1,
      sym_var_declar_stmt,
    ACTIONS(19), 2,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    STATE(23), 2,
      sym_class_body,
      aux_sym_class_declar_stmt_repeat1,
    STATE(84), 3,
      sym__elements_var_declar_stmt,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
  [1041] = 12,
    ACTIONS(5), 1,
      sym__IDENTIFIER,
    ACTIONS(9), 1,
      sym_OPERATOR_X__,
    ACTIONS(31), 1,
      sym_BIT_NOT,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_func_declar_stmt,
    STATE(49), 1,
      sym_var_prefix,
    STATE(55), 1,
      sym_id_expr,
    STATE(101), 1,
      sym_func_name_types,
    STATE(113), 1,
      sym_var_declar_stmt,
    ACTIONS(19), 2,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    STATE(23), 2,
      sym_class_body,
      aux_sym_class_declar_stmt_repeat1,
    STATE(84), 3,
      sym__elements_var_declar_stmt,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
  [1082] = 12,
    ACTIONS(5), 1,
      sym__IDENTIFIER,
    ACTIONS(9), 1,
      sym_OPERATOR_X__,
    ACTIONS(31), 1,
      sym_BIT_NOT,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_func_declar_stmt,
    STATE(49), 1,
      sym_var_prefix,
    STATE(55), 1,
      sym_id_expr,
    STATE(101), 1,
      sym_func_name_types,
    STATE(113), 1,
      sym_var_declar_stmt,
    ACTIONS(19), 2,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    STATE(24), 2,
      sym_class_body,
      aux_sym_class_declar_stmt_repeat1,
    STATE(84), 3,
      sym__elements_var_declar_stmt,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
  [1123] = 12,
    ACTIONS(5), 1,
      sym__IDENTIFIER,
    ACTIONS(9), 1,
      sym_OPERATOR_X__,
    ACTIONS(31), 1,
      sym_BIT_NOT,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_func_declar_stmt,
    STATE(49), 1,
      sym_var_prefix,
    STATE(55), 1,
      sym_id_expr,
    STATE(101), 1,
      sym_func_name_types,
    STATE(113), 1,
      sym_var_declar_stmt,
    ACTIONS(19), 2,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    STATE(22), 2,
      sym_class_body,
      aux_sym_class_declar_stmt_repeat1,
    STATE(84), 3,
      sym__elements_var_declar_stmt,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
  [1164] = 2,
    ACTIONS(157), 3,
      anon_sym_RBRACE,
      sym_OP_INC,
      sym_OP_DEC,
    ACTIONS(155), 12,
      sym__IDENTIFIER,
      sym_KEY_THIS,
      sym_KEY_BREAK,
      sym_KEY_RETURN,
      sym_KEY_CONTINUE,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
      sym_KEY_RESTRICT,
      sym_KEY_REQUIRE,
      sym_KEY_REQUIRE_ONCE,
      sym_KEY_INCLUDE,
      sym_KEY_TRY,
  [1184] = 2,
    ACTIONS(161), 3,
      anon_sym_RBRACE,
      sym_OP_INC,
      sym_OP_DEC,
    ACTIONS(159), 12,
      sym__IDENTIFIER,
      sym_KEY_THIS,
      sym_KEY_BREAK,
      sym_KEY_RETURN,
      sym_KEY_CONTINUE,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
      sym_KEY_RESTRICT,
      sym_KEY_REQUIRE,
      sym_KEY_REQUIRE_ONCE,
      sym_KEY_INCLUDE,
      sym_KEY_TRY,
  [1204] = 2,
    ACTIONS(165), 3,
      anon_sym_RBRACE,
      sym_OP_INC,
      sym_OP_DEC,
    ACTIONS(163), 12,
      sym__IDENTIFIER,
      sym_KEY_THIS,
      sym_KEY_BREAK,
      sym_KEY_RETURN,
      sym_KEY_CONTINUE,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
      sym_KEY_RESTRICT,
      sym_KEY_REQUIRE,
      sym_KEY_REQUIRE_ONCE,
      sym_KEY_INCLUDE,
      sym_KEY_TRY,
  [1224] = 2,
    ACTIONS(169), 3,
      anon_sym_RBRACE,
      sym_OP_INC,
      sym_OP_DEC,
    ACTIONS(167), 12,
      sym__IDENTIFIER,
      sym_KEY_THIS,
      sym_KEY_BREAK,
      sym_KEY_RETURN,
      sym_KEY_CONTINUE,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
      sym_KEY_RESTRICT,
      sym_KEY_REQUIRE,
      sym_KEY_REQUIRE_ONCE,
      sym_KEY_INCLUDE,
      sym_KEY_TRY,
  [1244] = 2,
    ACTIONS(109), 3,
      anon_sym_RBRACE,
      sym_OP_INC,
      sym_OP_DEC,
    ACTIONS(111), 12,
      sym__IDENTIFIER,
      sym_KEY_THIS,
      sym_KEY_BREAK,
      sym_KEY_RETURN,
      sym_KEY_CONTINUE,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
      sym_KEY_RESTRICT,
      sym_KEY_REQUIRE,
      sym_KEY_REQUIRE_ONCE,
      sym_KEY_INCLUDE,
      sym_KEY_TRY,
  [1264] = 2,
    ACTIONS(101), 3,
      anon_sym_RBRACE,
      sym_OP_INC,
      sym_OP_DEC,
    ACTIONS(103), 12,
      sym__IDENTIFIER,
      sym_KEY_THIS,
      sym_KEY_BREAK,
      sym_KEY_RETURN,
      sym_KEY_CONTINUE,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
      sym_KEY_RESTRICT,
      sym_KEY_REQUIRE,
      sym_KEY_REQUIRE_ONCE,
      sym_KEY_INCLUDE,
      sym_KEY_TRY,
  [1284] = 2,
    ACTIONS(173), 1,
      anon_sym_PLUS,
    ACTIONS(171), 14,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      sym_KEY_FUNCTION,
      sym_KEY_EXTEND,
      sym_OP_INC,
      sym_OP_DEC,
      sym_OP_SCOPE,
  [1304] = 10,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      sym_KEY_FUNCTION,
    ACTIONS(185), 1,
      sym_KEY_EXTEND,
    ACTIONS(187), 1,
      sym_OP_SCOPE,
    STATE(53), 1,
      sym_self_inc_dec_operators,
    STATE(121), 1,
      sym_class_name_suffix,
    ACTIONS(29), 2,
      sym_OP_INC,
      sym_OP_DEC,
    ACTIONS(177), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1338] = 5,
    ACTIONS(189), 1,
      anon_sym_PLUS,
    ACTIONS(191), 1,
      sym_OP_SCOPE,
    STATE(53), 1,
      sym_self_inc_dec_operators,
    ACTIONS(29), 2,
      sym_OP_INC,
      sym_OP_DEC,
    ACTIONS(177), 5,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
  [1359] = 6,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      sym_OP_SCOPE,
    STATE(53), 1,
      sym_self_inc_dec_operators,
    ACTIONS(29), 2,
      sym_OP_INC,
      sym_OP_DEC,
    ACTIONS(177), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1381] = 2,
    ACTIONS(193), 3,
      sym__IDENTIFIER,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    ACTIONS(195), 3,
      anon_sym_RBRACE,
      sym_OPERATOR_X__,
      sym_BIT_NOT,
  [1392] = 1,
    ACTIONS(197), 6,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1401] = 1,
    ACTIONS(199), 6,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1410] = 1,
    ACTIONS(177), 6,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1419] = 2,
    ACTIONS(201), 3,
      sym__IDENTIFIER,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    ACTIONS(203), 3,
      anon_sym_RBRACE,
      sym_OPERATOR_X__,
      sym_BIT_NOT,
  [1430] = 1,
    ACTIONS(205), 6,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1439] = 1,
    ACTIONS(207), 6,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1448] = 1,
    ACTIONS(209), 6,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1457] = 3,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 2,
      anon_sym_DOT,
      anon_sym_LBRACK,
    ACTIONS(215), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1470] = 1,
    ACTIONS(217), 6,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1479] = 1,
    ACTIONS(171), 6,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1488] = 3,
    ACTIONS(219), 1,
      sym__IDENTIFIER,
    STATE(71), 1,
      sym_id_expr,
    STATE(76), 3,
      sym__elements_var_declar_stmt,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
  [1500] = 1,
    ACTIONS(221), 5,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
      sym__IDENTIFIER,
  [1508] = 3,
    ACTIONS(213), 1,
      anon_sym_LBRACK,
    ACTIONS(223), 1,
      anon_sym_DOT,
    ACTIONS(225), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1520] = 3,
    ACTIONS(219), 1,
      sym__IDENTIFIER,
    STATE(71), 1,
      sym_id_expr,
    STATE(80), 2,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
  [1531] = 1,
    ACTIONS(227), 4,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1538] = 4,
    ACTIONS(219), 1,
      sym__IDENTIFIER,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      sym_id_expr,
    STATE(75), 1,
      sym_multiple_id_expr,
  [1551] = 3,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      sym_KEY_FUNCTION,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1562] = 3,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    ACTIONS(233), 1,
      anon_sym_PLUS,
    ACTIONS(235), 1,
      anon_sym_STAR,
  [1572] = 3,
    ACTIONS(219), 1,
      sym__IDENTIFIER,
    STATE(73), 1,
      sym_id_expr,
    STATE(77), 1,
      sym_multiple_id_expr,
  [1582] = 3,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(120), 1,
      sym_func_param_list,
  [1592] = 3,
    ACTIONS(213), 1,
      anon_sym_LBRACK,
    ACTIONS(223), 1,
      anon_sym_DOT,
    ACTIONS(241), 1,
      anon_sym_SEMI,
  [1602] = 3,
    ACTIONS(243), 1,
      anon_sym_,
    STATE(4), 1,
      sym_block,
    STATE(28), 1,
      sym_EMPTY,
  [1612] = 3,
    ACTIONS(185), 1,
      sym_KEY_EXTEND,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      sym_class_name_suffix,
  [1622] = 3,
    ACTIONS(243), 1,
      anon_sym_,
    STATE(5), 1,
      sym_block,
    STATE(28), 1,
      sym_EMPTY,
  [1632] = 3,
    ACTIONS(247), 1,
      anon_sym_,
    ACTIONS(249), 1,
      anon_sym_SEMI,
    STATE(114), 1,
      sym_assign_stmt_value,
  [1642] = 1,
    ACTIONS(251), 3,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1648] = 1,
    ACTIONS(253), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1654] = 1,
    ACTIONS(255), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1660] = 1,
    ACTIONS(257), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1666] = 2,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 2,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1674] = 1,
    ACTIONS(225), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1680] = 1,
    ACTIONS(259), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1686] = 2,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1694] = 1,
    ACTIONS(215), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1700] = 1,
    ACTIONS(261), 3,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1706] = 3,
    ACTIONS(233), 1,
      anon_sym_PLUS,
    ACTIONS(235), 1,
      anon_sym_STAR,
    ACTIONS(263), 1,
      anon_sym_RBRACK,
  [1716] = 2,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    ACTIONS(267), 1,
      anon_sym_COMMA,
  [1723] = 2,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_SEMI,
  [1730] = 2,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
  [1737] = 2,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
  [1744] = 2,
    ACTIONS(219), 1,
      sym__IDENTIFIER,
    STATE(103), 1,
      sym_id_expr,
  [1751] = 1,
    ACTIONS(279), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1756] = 2,
    ACTIONS(281), 1,
      sym__IDENTIFIER,
    STATE(45), 1,
      sym_id_expr,
  [1763] = 2,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
  [1770] = 2,
    ACTIONS(219), 1,
      sym__IDENTIFIER,
    STATE(53), 1,
      sym_id_expr,
  [1777] = 2,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_SEMI,
  [1784] = 2,
    ACTIONS(287), 1,
      anon_sym_,
    STATE(104), 1,
      sym_args_list,
  [1791] = 2,
    ACTIONS(219), 1,
      sym__IDENTIFIER,
    STATE(45), 1,
      sym_id_expr,
  [1798] = 2,
    ACTIONS(219), 1,
      sym__IDENTIFIER,
    STATE(64), 1,
      sym_id_expr,
  [1805] = 2,
    ACTIONS(281), 1,
      sym__IDENTIFIER,
    STATE(44), 1,
      sym_id_expr,
  [1812] = 2,
    ACTIONS(289), 1,
      sym_TSTRING,
    STATE(122), 1,
      sym_string_expr,
  [1819] = 2,
    ACTIONS(281), 1,
      sym__IDENTIFIER,
    STATE(53), 1,
      sym_id_expr,
  [1826] = 2,
    ACTIONS(219), 1,
      sym__IDENTIFIER,
    STATE(97), 1,
      sym_id_expr,
  [1833] = 1,
    ACTIONS(291), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1838] = 2,
    ACTIONS(219), 1,
      sym__IDENTIFIER,
    STATE(61), 1,
      sym_id_expr,
  [1845] = 2,
    ACTIONS(219), 1,
      sym__IDENTIFIER,
    STATE(100), 1,
      sym_id_expr,
  [1852] = 2,
    ACTIONS(287), 1,
      anon_sym_,
    STATE(108), 1,
      sym_args_list,
  [1859] = 2,
    ACTIONS(219), 1,
      sym__IDENTIFIER,
    STATE(44), 1,
      sym_id_expr,
  [1866] = 1,
    ACTIONS(293), 1,
      anon_sym_LPAREN,
  [1870] = 1,
    ACTIONS(295), 1,
      anon_sym_SEMI,
  [1874] = 1,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
  [1878] = 1,
    ACTIONS(299), 1,
      anon_sym_SEMI,
  [1882] = 1,
    ACTIONS(301), 1,
      sym_KEY_FUNCTION,
  [1886] = 1,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
  [1890] = 1,
    ACTIONS(305), 1,
      sym_KEY_FUNCTION,
  [1894] = 1,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
  [1898] = 1,
    ACTIONS(309), 1,
      sym_TSTRING,
  [1902] = 1,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
  [1906] = 1,
    ACTIONS(313), 1,
      sym_KEY_PUBLIC,
  [1910] = 1,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
  [1914] = 1,
    ACTIONS(317), 1,
      anon_sym_SEMI,
  [1918] = 1,
    ACTIONS(319), 1,
      sym__IDENTIFIER,
  [1922] = 1,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
  [1926] = 1,
    ACTIONS(323), 1,
      anon_sym_SEMI,
  [1930] = 1,
    ACTIONS(325), 1,
      anon_sym_SEMI,
  [1934] = 1,
    ACTIONS(327), 1,
      anon_sym_SEMI,
  [1938] = 1,
    ACTIONS(183), 1,
      sym_KEY_FUNCTION,
  [1942] = 1,
    ACTIONS(329), 1,
      anon_sym_SEMI,
  [1946] = 1,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
  [1950] = 1,
    ACTIONS(333), 1,
      sym__IDENTIFIER,
  [1954] = 1,
    ACTIONS(335), 1,
      anon_sym_EQ,
  [1958] = 1,
    ACTIONS(337), 1,
      anon_sym_LBRACE,
  [1962] = 1,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
  [1966] = 1,
    ACTIONS(339), 1,
      anon_sym_SEMI,
  [1970] = 1,
    ACTIONS(341), 1,
      anon_sym_SEMI,
  [1974] = 1,
    ACTIONS(343), 1,
      anon_sym_SEMI,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 111,
  [SMALL_STATE(4)] = 222,
  [SMALL_STATE(5)] = 305,
  [SMALL_STATE(6)] = 388,
  [SMALL_STATE(7)] = 441,
  [SMALL_STATE(8)] = 494,
  [SMALL_STATE(9)] = 547,
  [SMALL_STATE(10)] = 600,
  [SMALL_STATE(11)] = 626,
  [SMALL_STATE(12)] = 652,
  [SMALL_STATE(13)] = 677,
  [SMALL_STATE(14)] = 702,
  [SMALL_STATE(15)] = 727,
  [SMALL_STATE(16)] = 752,
  [SMALL_STATE(17)] = 777,
  [SMALL_STATE(18)] = 802,
  [SMALL_STATE(19)] = 827,
  [SMALL_STATE(20)] = 852,
  [SMALL_STATE(21)] = 877,
  [SMALL_STATE(22)] = 918,
  [SMALL_STATE(23)] = 959,
  [SMALL_STATE(24)] = 1000,
  [SMALL_STATE(25)] = 1041,
  [SMALL_STATE(26)] = 1082,
  [SMALL_STATE(27)] = 1123,
  [SMALL_STATE(28)] = 1164,
  [SMALL_STATE(29)] = 1184,
  [SMALL_STATE(30)] = 1204,
  [SMALL_STATE(31)] = 1224,
  [SMALL_STATE(32)] = 1244,
  [SMALL_STATE(33)] = 1264,
  [SMALL_STATE(34)] = 1284,
  [SMALL_STATE(35)] = 1304,
  [SMALL_STATE(36)] = 1338,
  [SMALL_STATE(37)] = 1359,
  [SMALL_STATE(38)] = 1381,
  [SMALL_STATE(39)] = 1392,
  [SMALL_STATE(40)] = 1401,
  [SMALL_STATE(41)] = 1410,
  [SMALL_STATE(42)] = 1419,
  [SMALL_STATE(43)] = 1430,
  [SMALL_STATE(44)] = 1439,
  [SMALL_STATE(45)] = 1448,
  [SMALL_STATE(46)] = 1457,
  [SMALL_STATE(47)] = 1470,
  [SMALL_STATE(48)] = 1479,
  [SMALL_STATE(49)] = 1488,
  [SMALL_STATE(50)] = 1500,
  [SMALL_STATE(51)] = 1508,
  [SMALL_STATE(52)] = 1520,
  [SMALL_STATE(53)] = 1531,
  [SMALL_STATE(54)] = 1538,
  [SMALL_STATE(55)] = 1551,
  [SMALL_STATE(56)] = 1562,
  [SMALL_STATE(57)] = 1572,
  [SMALL_STATE(58)] = 1582,
  [SMALL_STATE(59)] = 1592,
  [SMALL_STATE(60)] = 1602,
  [SMALL_STATE(61)] = 1612,
  [SMALL_STATE(62)] = 1622,
  [SMALL_STATE(63)] = 1632,
  [SMALL_STATE(64)] = 1642,
  [SMALL_STATE(65)] = 1648,
  [SMALL_STATE(66)] = 1654,
  [SMALL_STATE(67)] = 1660,
  [SMALL_STATE(68)] = 1666,
  [SMALL_STATE(69)] = 1674,
  [SMALL_STATE(70)] = 1680,
  [SMALL_STATE(71)] = 1686,
  [SMALL_STATE(72)] = 1694,
  [SMALL_STATE(73)] = 1700,
  [SMALL_STATE(74)] = 1706,
  [SMALL_STATE(75)] = 1716,
  [SMALL_STATE(76)] = 1723,
  [SMALL_STATE(77)] = 1730,
  [SMALL_STATE(78)] = 1737,
  [SMALL_STATE(79)] = 1744,
  [SMALL_STATE(80)] = 1751,
  [SMALL_STATE(81)] = 1756,
  [SMALL_STATE(82)] = 1763,
  [SMALL_STATE(83)] = 1770,
  [SMALL_STATE(84)] = 1777,
  [SMALL_STATE(85)] = 1784,
  [SMALL_STATE(86)] = 1791,
  [SMALL_STATE(87)] = 1798,
  [SMALL_STATE(88)] = 1805,
  [SMALL_STATE(89)] = 1812,
  [SMALL_STATE(90)] = 1819,
  [SMALL_STATE(91)] = 1826,
  [SMALL_STATE(92)] = 1833,
  [SMALL_STATE(93)] = 1838,
  [SMALL_STATE(94)] = 1845,
  [SMALL_STATE(95)] = 1852,
  [SMALL_STATE(96)] = 1859,
  [SMALL_STATE(97)] = 1866,
  [SMALL_STATE(98)] = 1870,
  [SMALL_STATE(99)] = 1874,
  [SMALL_STATE(100)] = 1878,
  [SMALL_STATE(101)] = 1882,
  [SMALL_STATE(102)] = 1886,
  [SMALL_STATE(103)] = 1890,
  [SMALL_STATE(104)] = 1894,
  [SMALL_STATE(105)] = 1898,
  [SMALL_STATE(106)] = 1902,
  [SMALL_STATE(107)] = 1906,
  [SMALL_STATE(108)] = 1910,
  [SMALL_STATE(109)] = 1914,
  [SMALL_STATE(110)] = 1918,
  [SMALL_STATE(111)] = 1922,
  [SMALL_STATE(112)] = 1926,
  [SMALL_STATE(113)] = 1930,
  [SMALL_STATE(114)] = 1934,
  [SMALL_STATE(115)] = 1938,
  [SMALL_STATE(116)] = 1942,
  [SMALL_STATE(117)] = 1946,
  [SMALL_STATE(118)] = 1950,
  [SMALL_STATE(119)] = 1954,
  [SMALL_STATE(120)] = 1958,
  [SMALL_STATE(121)] = 1962,
  [SMALL_STATE(122)] = 1966,
  [SMALL_STATE(123)] = 1970,
  [SMALL_STATE(124)] = 1974,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(116),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(109),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(105),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declar_stmt, 6),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_declar_stmt, 6),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declar_stmt, 5),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_declar_stmt, 5),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declar_stmt, 5),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declar_stmt, 5),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_stmt, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_stmt, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declar_stmt, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declar_stmt, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_stmt, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_stmt, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declar_stmt, 6),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declar_stmt, 6),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_declar_stmt, 5),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_declar_stmt, 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out_declar_stmt, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out_declar_stmt, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declar_stmt, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declar_stmt, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_declar_stmt_repeat1, 2), SHIFT_REPEAT(34),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_declar_stmt_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_declar_stmt_repeat1, 2), SHIFT_REPEAT(115),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_declar_stmt_repeat1, 2), SHIFT_REPEAT(110),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_declar_stmt_repeat1, 2), SHIFT_REPEAT(79),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EMPTY, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EMPTY, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_item, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_item, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_expr, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_expr, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_values_expr, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element_var_declar_stmt, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_name_types, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_common_values_expr, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_body, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 6),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 4),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_body, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_ele_stmt, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_member_stmt, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_member_stmt, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_object_expr, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_number_expr, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_this_stmt, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_inc_dec_operators, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_result_of_call_expr, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_inc_dec_stmt, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_stmt_types, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interrupt_stmt, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiple_id_expr, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arithmetic_mul_div_stmt, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arithmetic_add_sub_stmt, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_expr, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_stmt, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiple_id_expr, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declar_stmt, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_suffix, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__elements_var_declar_stmt, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declar_stmt, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_var_declar_stmt, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_param_list, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [303] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_name_types, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_operators, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_param_list, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restrict_stmt, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_prefix, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args_list, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt_value, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interrupt_stmt, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interrupt_stmt, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_prefix, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_stmt, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_expr, 1),
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
    .keyword_capture_token = sym__IDENTIFIER,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
