#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 123
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
  sym_con_ctl_stmt = 9,
  anon_sym_SEMI = 10,
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
  [sym_con_ctl_stmt] = "con_ctl_stmt",
  [anon_sym_SEMI] = ";",
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
  [sym_con_ctl_stmt] = sym_con_ctl_stmt,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [sym_con_ctl_stmt] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
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
      if (eof) ADVANCE(14);
      if (lookahead == '!') ADVANCE(67);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '%') ADVANCE(51);
      if (lookahead == '&') ADVANCE(61);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '>') ADVANCE(68);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == ']') ADVANCE(24);
      if (lookahead == '^') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '}') ADVANCE(16);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == '+') ADVANCE(4);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '}') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == ']') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(72);
      END_STATE();
    case 7:
      if (lookahead == '<') ADVANCE(45);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(48);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(45);
      END_STATE();
    case 10:
      if (lookahead == ']') ADVANCE(45);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 12:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == ']') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '}') ADVANCE(16);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(59);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(48);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '>') ADVANCE(9);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == '*' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '=') ADVANCE(45);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_TSTRING);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_XINTEGER);
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_XINTEGER);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_TDOUBLE);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_OPERATOR_X__);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_OPERATOR_X__);
      if (lookahead == '+') ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_OPERATOR_X__);
      if (lookahead == '-') ADVANCE(45);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_KEY_FUNCTION);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_OP_SUB);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_OP_DIV);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_OP_MOD);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_OP_ADD_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_OP_SUB_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_OP_MUL_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_OP_DIV_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_OP_MOD_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_OP_LEFT_SHIFT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_OP_RIGHT_SHIFT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_OP_INC);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_OP_DEC);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_BIT_AND);
      if (lookahead == '&') ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_BIT_OR);
      if (lookahead == '|') ADVANCE(66);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_BIT_XOR);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_BIT_NOT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_OP_AND);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_OP_OR);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_OP_NOT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_OP_GT);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '>') ADVANCE(58);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_OP_LT);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_OP_GE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_OP_LE);
      END_STATE();
    case 72:
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
      ACCEPT_TOKEN(sym_KEY_EXTEND);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_KEY_PUBLIC);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_KEY_RETURN);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_KEY_SWITCH);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_KEY_DEFAULT);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_KEY_INCLUDE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_KEY_REQUIRE);
      if (lookahead == '_') ADVANCE(119);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_KEY_CONTINUE);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_KEY_RESTRICT);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_KEY_REQUIRE_ONCE);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 13},
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 20},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 20},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 20},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 20},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 13},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
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
    [sym_con_ctl_stmt] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [sym_source_file] = STATE(100),
    [sym_statement] = STATE(2),
    [sym_out_declar_stmt] = STATE(18),
    [sym_func_declar_stmt] = STATE(20),
    [sym_func_name_types] = STATE(99),
    [sym_call_statement] = STATE(61),
    [sym_class_declar_stmt] = STATE(20),
    [sym_class_name_prefix] = STATE(94),
    [sym_class_member_stmt] = STATE(51),
    [sym_this_stmt] = STATE(51),
    [sym_static_member_stmt] = STATE(51),
    [sym_simple_stmt] = STATE(18),
    [sym__simple_stmt_types] = STATE(117),
    [sym_require_stmt] = STATE(117),
    [sym_require_operators] = STATE(90),
    [sym_var_declar_stmt] = STATE(117),
    [sym_var_prefix] = STATE(55),
    [sym__elements_var_declar_stmt] = STATE(43),
    [sym__element_var_declar_stmt] = STATE(43),
    [sym__array_var_declar_stmt] = STATE(43),
    [sym_self_inc_dec_stmt] = STATE(117),
    [sym_self_inc_dec_operators] = STATE(83),
    [sym_interrupt_stmt] = STATE(117),
    [sym_restrict_stmt] = STATE(117),
    [sym_try_stmt] = STATE(18),
    [sym_namespace_declar_stmt] = STATE(20),
    [sym_id_expr] = STATE(35),
    [sym_array_ele_stmt] = STATE(51),
    [sym_common_values_expr] = STATE(74),
    [sym_common_object_expr] = STATE(87),
    [aux_sym_source_file_repeat1] = STATE(2),
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
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_id_expr,
    STATE(55), 1,
      sym_var_prefix,
    STATE(61), 1,
      sym_call_statement,
    STATE(74), 1,
      sym_common_values_expr,
    STATE(83), 1,
      sym_self_inc_dec_operators,
    STATE(87), 1,
      sym_common_object_expr,
    STATE(90), 1,
      sym_require_operators,
    STATE(94), 1,
      sym_class_name_prefix,
    STATE(99), 1,
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
    STATE(3), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    ACTIONS(25), 3,
      sym_KEY_REQUIRE,
      sym_KEY_REQUIRE_ONCE,
      sym_KEY_INCLUDE,
    STATE(18), 3,
      sym_out_declar_stmt,
      sym_simple_stmt,
      sym_try_stmt,
    STATE(20), 3,
      sym_func_declar_stmt,
      sym_class_declar_stmt,
      sym_namespace_declar_stmt,
    STATE(43), 3,
      sym__elements_var_declar_stmt,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
    STATE(51), 4,
      sym_class_member_stmt,
      sym_this_stmt,
      sym_static_member_stmt,
      sym_array_ele_stmt,
    STATE(117), 6,
      sym__simple_stmt_types,
      sym_require_stmt,
      sym_var_declar_stmt,
      sym_self_inc_dec_stmt,
      sym_interrupt_stmt,
      sym_restrict_stmt,
  [111] = 30,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym__IDENTIFIER,
    ACTIONS(40), 1,
      sym_con_ctl_stmt,
    ACTIONS(43), 1,
      sym_OPERATOR_X__,
    ACTIONS(46), 1,
      sym_KEY_THIS,
    ACTIONS(49), 1,
      sym_KEY_AUTO,
    ACTIONS(55), 1,
      sym_KEY_RETURN,
    ACTIONS(61), 1,
      sym_KEY_RESTRICT,
    ACTIONS(64), 1,
      sym_KEY_SET,
    ACTIONS(70), 1,
      sym_KEY_TRY,
    ACTIONS(76), 1,
      sym_BIT_NOT,
    STATE(35), 1,
      sym_id_expr,
    STATE(55), 1,
      sym_var_prefix,
    STATE(61), 1,
      sym_call_statement,
    STATE(74), 1,
      sym_common_values_expr,
    STATE(83), 1,
      sym_self_inc_dec_operators,
    STATE(87), 1,
      sym_common_object_expr,
    STATE(90), 1,
      sym_require_operators,
    STATE(94), 1,
      sym_class_name_prefix,
    STATE(99), 1,
      sym_func_name_types,
    ACTIONS(52), 2,
      sym_KEY_BREAK,
      sym_KEY_CONTINUE,
    ACTIONS(58), 2,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    ACTIONS(73), 2,
      sym_OP_INC,
      sym_OP_DEC,
    STATE(3), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    ACTIONS(67), 3,
      sym_KEY_REQUIRE,
      sym_KEY_REQUIRE_ONCE,
      sym_KEY_INCLUDE,
    STATE(18), 3,
      sym_out_declar_stmt,
      sym_simple_stmt,
      sym_try_stmt,
    STATE(20), 3,
      sym_func_declar_stmt,
      sym_class_declar_stmt,
      sym_namespace_declar_stmt,
    STATE(43), 3,
      sym__elements_var_declar_stmt,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
    STATE(51), 4,
      sym_class_member_stmt,
      sym_this_stmt,
      sym_static_member_stmt,
      sym_array_ele_stmt,
    STATE(117), 6,
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
    STATE(29), 1,
      sym_block_item,
    STATE(39), 1,
      sym_id_expr,
    STATE(55), 1,
      sym_var_prefix,
    STATE(61), 1,
      sym_call_statement,
    STATE(74), 1,
      sym_common_values_expr,
    STATE(83), 1,
      sym_self_inc_dec_operators,
    STATE(87), 1,
      sym_common_object_expr,
    STATE(90), 1,
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
    STATE(33), 2,
      sym_simple_stmt,
      sym_try_stmt,
    ACTIONS(25), 3,
      sym_KEY_REQUIRE,
      sym_KEY_REQUIRE_ONCE,
      sym_KEY_INCLUDE,
    STATE(43), 3,
      sym__elements_var_declar_stmt,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
    STATE(51), 4,
      sym_class_member_stmt,
      sym_this_stmt,
      sym_static_member_stmt,
      sym_array_ele_stmt,
    STATE(121), 6,
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
    STATE(29), 1,
      sym_block_item,
    STATE(39), 1,
      sym_id_expr,
    STATE(55), 1,
      sym_var_prefix,
    STATE(61), 1,
      sym_call_statement,
    STATE(74), 1,
      sym_common_values_expr,
    STATE(83), 1,
      sym_self_inc_dec_operators,
    STATE(87), 1,
      sym_common_object_expr,
    STATE(90), 1,
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
    STATE(33), 2,
      sym_simple_stmt,
      sym_try_stmt,
    ACTIONS(25), 3,
      sym_KEY_REQUIRE,
      sym_KEY_REQUIRE_ONCE,
      sym_KEY_INCLUDE,
    STATE(43), 3,
      sym__elements_var_declar_stmt,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
    STATE(51), 4,
      sym_class_member_stmt,
      sym_this_stmt,
      sym_static_member_stmt,
      sym_array_ele_stmt,
    STATE(121), 6,
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
    STATE(49), 1,
      sym_common_values_expr,
    STATE(54), 1,
      sym_call_statement,
    STATE(76), 1,
      sym_common_number_expr,
    STATE(80), 1,
      sym_common_object_expr,
    STATE(89), 1,
      sym_self_inc_dec_operators,
    ACTIONS(29), 2,
      sym_OP_INC,
      sym_OP_DEC,
    STATE(68), 2,
      sym_self_inc_dec_stmt,
      sym_arithmetic_stmt,
    STATE(69), 2,
      sym__arithmetic_add_sub_stmt,
      sym__arithmetic_mul_div_stmt,
    STATE(71), 2,
      sym_number_expr,
      sym_common_result_of_call_expr,
    STATE(51), 4,
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
    STATE(49), 1,
      sym_common_values_expr,
    STATE(54), 1,
      sym_call_statement,
    STATE(67), 1,
      sym_common_number_expr,
    STATE(80), 1,
      sym_common_object_expr,
    STATE(89), 1,
      sym_self_inc_dec_operators,
    ACTIONS(29), 2,
      sym_OP_INC,
      sym_OP_DEC,
    STATE(68), 2,
      sym_self_inc_dec_stmt,
      sym_arithmetic_stmt,
    STATE(69), 2,
      sym__arithmetic_add_sub_stmt,
      sym__arithmetic_mul_div_stmt,
    STATE(71), 2,
      sym_number_expr,
      sym_common_result_of_call_expr,
    STATE(51), 4,
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
    STATE(49), 1,
      sym_common_values_expr,
    STATE(54), 1,
      sym_call_statement,
    STATE(73), 1,
      sym_common_number_expr,
    STATE(80), 1,
      sym_common_object_expr,
    STATE(89), 1,
      sym_self_inc_dec_operators,
    ACTIONS(29), 2,
      sym_OP_INC,
      sym_OP_DEC,
    STATE(68), 2,
      sym_self_inc_dec_stmt,
      sym_arithmetic_stmt,
    STATE(69), 2,
      sym__arithmetic_add_sub_stmt,
      sym__arithmetic_mul_div_stmt,
    STATE(71), 2,
      sym_number_expr,
      sym_common_result_of_call_expr,
    STATE(51), 4,
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
    STATE(49), 1,
      sym_common_values_expr,
    STATE(54), 1,
      sym_call_statement,
    STATE(64), 1,
      sym_common_number_expr,
    STATE(80), 1,
      sym_common_object_expr,
    STATE(89), 1,
      sym_self_inc_dec_operators,
    ACTIONS(29), 2,
      sym_OP_INC,
      sym_OP_DEC,
    STATE(68), 2,
      sym_self_inc_dec_stmt,
      sym_arithmetic_stmt,
    STATE(69), 2,
      sym__arithmetic_add_sub_stmt,
      sym__arithmetic_mul_div_stmt,
    STATE(71), 2,
      sym_number_expr,
      sym_common_result_of_call_expr,
    STATE(51), 4,
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
    ACTIONS(93), 5,
      anon_sym_PLUS,
      sym__IDENTIFIER,
      sym_KEY_EXTEND,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    ACTIONS(95), 16,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      sym_OPERATOR_X__,
      sym_KEY_FUNCTION,
      sym_OP_INC,
      sym_OP_DEC,
      sym_BIT_NOT,
      sym_OP_SCOPE,
  [652] = 2,
    ACTIONS(97), 6,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
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
  [678] = 2,
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
  [703] = 2,
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
  [728] = 2,
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
  [753] = 2,
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
  [778] = 2,
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
  [803] = 2,
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
  [828] = 2,
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
  [853] = 2,
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
  [878] = 2,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      sym_OPERATOR_X__,
      sym_OP_INC,
      sym_OP_DEC,
      sym_BIT_NOT,
    ACTIONS(135), 15,
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
  [903] = 11,
    ACTIONS(5), 1,
      sym__IDENTIFIER,
    ACTIONS(9), 1,
      sym_OPERATOR_X__,
    ACTIONS(31), 1,
      sym_BIT_NOT,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_id_expr,
    STATE(55), 1,
      sym_var_prefix,
    STATE(99), 1,
      sym_func_name_types,
    ACTIONS(19), 2,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    STATE(25), 2,
      sym_class_body,
      aux_sym_class_declar_stmt_repeat1,
    STATE(50), 2,
      sym_func_declar_stmt,
      sym_var_declar_stmt,
    STATE(43), 3,
      sym__elements_var_declar_stmt,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
  [942] = 11,
    ACTIONS(5), 1,
      sym__IDENTIFIER,
    ACTIONS(9), 1,
      sym_OPERATOR_X__,
    ACTIONS(31), 1,
      sym_BIT_NOT,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_id_expr,
    STATE(55), 1,
      sym_var_prefix,
    STATE(99), 1,
      sym_func_name_types,
    ACTIONS(19), 2,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    STATE(27), 2,
      sym_class_body,
      aux_sym_class_declar_stmt_repeat1,
    STATE(50), 2,
      sym_func_declar_stmt,
      sym_var_declar_stmt,
    STATE(43), 3,
      sym__elements_var_declar_stmt,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
  [981] = 11,
    ACTIONS(5), 1,
      sym__IDENTIFIER,
    ACTIONS(9), 1,
      sym_OPERATOR_X__,
    ACTIONS(31), 1,
      sym_BIT_NOT,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_id_expr,
    STATE(55), 1,
      sym_var_prefix,
    STATE(99), 1,
      sym_func_name_types,
    ACTIONS(19), 2,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    STATE(27), 2,
      sym_class_body,
      aux_sym_class_declar_stmt_repeat1,
    STATE(50), 2,
      sym_func_declar_stmt,
      sym_var_declar_stmt,
    STATE(43), 3,
      sym__elements_var_declar_stmt,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
  [1020] = 11,
    ACTIONS(5), 1,
      sym__IDENTIFIER,
    ACTIONS(9), 1,
      sym_OPERATOR_X__,
    ACTIONS(31), 1,
      sym_BIT_NOT,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_id_expr,
    STATE(55), 1,
      sym_var_prefix,
    STATE(99), 1,
      sym_func_name_types,
    ACTIONS(19), 2,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    STATE(27), 2,
      sym_class_body,
      aux_sym_class_declar_stmt_repeat1,
    STATE(50), 2,
      sym_func_declar_stmt,
      sym_var_declar_stmt,
    STATE(43), 3,
      sym__elements_var_declar_stmt,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
  [1059] = 11,
    ACTIONS(5), 1,
      sym__IDENTIFIER,
    ACTIONS(9), 1,
      sym_OPERATOR_X__,
    ACTIONS(31), 1,
      sym_BIT_NOT,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_id_expr,
    STATE(55), 1,
      sym_var_prefix,
    STATE(99), 1,
      sym_func_name_types,
    ACTIONS(19), 2,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    STATE(24), 2,
      sym_class_body,
      aux_sym_class_declar_stmt_repeat1,
    STATE(50), 2,
      sym_func_declar_stmt,
      sym_var_declar_stmt,
    STATE(43), 3,
      sym__elements_var_declar_stmt,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
  [1098] = 11,
    ACTIONS(143), 1,
      sym__IDENTIFIER,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    ACTIONS(148), 1,
      sym_OPERATOR_X__,
    ACTIONS(154), 1,
      sym_BIT_NOT,
    STATE(37), 1,
      sym_id_expr,
    STATE(55), 1,
      sym_var_prefix,
    STATE(99), 1,
      sym_func_name_types,
    ACTIONS(151), 2,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    STATE(27), 2,
      sym_class_body,
      aux_sym_class_declar_stmt_repeat1,
    STATE(50), 2,
      sym_func_declar_stmt,
      sym_var_declar_stmt,
    STATE(43), 3,
      sym__elements_var_declar_stmt,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
  [1137] = 11,
    ACTIONS(5), 1,
      sym__IDENTIFIER,
    ACTIONS(9), 1,
      sym_OPERATOR_X__,
    ACTIONS(31), 1,
      sym_BIT_NOT,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_id_expr,
    STATE(55), 1,
      sym_var_prefix,
    STATE(99), 1,
      sym_func_name_types,
    ACTIONS(19), 2,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    STATE(23), 2,
      sym_class_body,
      aux_sym_class_declar_stmt_repeat1,
    STATE(50), 2,
      sym_func_declar_stmt,
      sym_var_declar_stmt,
    STATE(43), 3,
      sym__elements_var_declar_stmt,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
  [1176] = 2,
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
  [1196] = 2,
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
  [1216] = 2,
    ACTIONS(117), 3,
      anon_sym_RBRACE,
      sym_OP_INC,
      sym_OP_DEC,
    ACTIONS(119), 12,
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
  [1236] = 2,
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
  [1256] = 2,
    ACTIONS(173), 3,
      anon_sym_RBRACE,
      sym_OP_INC,
      sym_OP_DEC,
    ACTIONS(171), 12,
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
  [1276] = 2,
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
  [1296] = 10,
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
    STATE(58), 1,
      sym_self_inc_dec_operators,
    STATE(112), 1,
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
  [1330] = 5,
    ACTIONS(189), 1,
      anon_sym_PLUS,
    ACTIONS(191), 1,
      sym_OP_SCOPE,
    STATE(58), 1,
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
  [1351] = 4,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      sym_KEY_FUNCTION,
    ACTIONS(193), 3,
      sym__IDENTIFIER,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    ACTIONS(179), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_OPERATOR_X__,
      sym_BIT_NOT,
  [1369] = 3,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 3,
      sym__IDENTIFIER,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    ACTIONS(179), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_OPERATOR_X__,
      sym_BIT_NOT,
  [1385] = 6,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      sym_OP_SCOPE,
    STATE(58), 1,
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
  [1407] = 2,
    ACTIONS(195), 3,
      sym__IDENTIFIER,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    ACTIONS(197), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_OPERATOR_X__,
      sym_BIT_NOT,
  [1420] = 2,
    ACTIONS(199), 3,
      sym__IDENTIFIER,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    ACTIONS(201), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_OPERATOR_X__,
      sym_BIT_NOT,
  [1433] = 3,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(203), 3,
      sym__IDENTIFIER,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    ACTIONS(205), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_OPERATOR_X__,
      sym_BIT_NOT,
  [1448] = 3,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(209), 3,
      sym__IDENTIFIER,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    ACTIONS(211), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_OPERATOR_X__,
      sym_BIT_NOT,
  [1463] = 1,
    ACTIONS(213), 6,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1472] = 1,
    ACTIONS(215), 6,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1481] = 1,
    ACTIONS(217), 6,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1490] = 1,
    ACTIONS(95), 6,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1499] = 1,
    ACTIONS(219), 6,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1508] = 3,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 2,
      anon_sym_DOT,
      anon_sym_LBRACK,
    ACTIONS(225), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1521] = 2,
    ACTIONS(227), 3,
      sym__IDENTIFIER,
      sym_KEY_LOCAL,
      sym_KEY_CONST,
    ACTIONS(229), 3,
      anon_sym_RBRACE,
      sym_OPERATOR_X__,
      sym_BIT_NOT,
  [1532] = 1,
    ACTIONS(177), 6,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1541] = 1,
    ACTIONS(231), 6,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1550] = 1,
    ACTIONS(233), 6,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1559] = 3,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
    ACTIONS(235), 1,
      anon_sym_DOT,
    ACTIONS(237), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1571] = 3,
    ACTIONS(239), 1,
      sym__IDENTIFIER,
    STATE(38), 1,
      sym_id_expr,
    STATE(42), 3,
      sym__elements_var_declar_stmt,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
  [1583] = 1,
    ACTIONS(241), 5,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
      sym__IDENTIFIER,
  [1591] = 3,
    ACTIONS(239), 1,
      sym__IDENTIFIER,
    STATE(38), 1,
      sym_id_expr,
    STATE(40), 2,
      sym__element_var_declar_stmt,
      sym__array_var_declar_stmt,
  [1602] = 1,
    ACTIONS(243), 4,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1609] = 4,
    ACTIONS(239), 1,
      sym__IDENTIFIER,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym_id_expr,
    STATE(86), 1,
      sym_multiple_id_expr,
  [1622] = 3,
    ACTIONS(239), 1,
      sym__IDENTIFIER,
    STATE(75), 1,
      sym_id_expr,
    STATE(84), 1,
      sym_multiple_id_expr,
  [1632] = 3,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
    ACTIONS(235), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_SEMI,
  [1642] = 3,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym_func_param_list,
  [1652] = 3,
    ACTIONS(253), 1,
      anon_sym_,
    STATE(5), 1,
      sym_block,
    STATE(30), 1,
      sym_EMPTY,
  [1662] = 1,
    ACTIONS(255), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1668] = 3,
    ACTIONS(253), 1,
      anon_sym_,
    STATE(4), 1,
      sym_block,
    STATE(30), 1,
      sym_EMPTY,
  [1678] = 1,
    ACTIONS(257), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1684] = 1,
    ACTIONS(259), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1690] = 1,
    ACTIONS(237), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1696] = 1,
    ACTIONS(261), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1702] = 1,
    ACTIONS(263), 3,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1708] = 1,
    ACTIONS(225), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1714] = 3,
    ACTIONS(265), 1,
      anon_sym_,
    ACTIONS(267), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      sym_assign_stmt_value,
  [1724] = 3,
    ACTIONS(269), 1,
      anon_sym_RBRACK,
    ACTIONS(271), 1,
      anon_sym_PLUS,
    ACTIONS(273), 1,
      anon_sym_STAR,
  [1734] = 2,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 2,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1742] = 1,
    ACTIONS(275), 3,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1748] = 3,
    ACTIONS(271), 1,
      anon_sym_PLUS,
    ACTIONS(273), 1,
      anon_sym_STAR,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
  [1758] = 3,
    ACTIONS(185), 1,
      sym_KEY_EXTEND,
    ACTIONS(279), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym_class_name_suffix,
  [1768] = 2,
    ACTIONS(239), 1,
      sym__IDENTIFIER,
    STATE(96), 1,
      sym_id_expr,
  [1775] = 2,
    ACTIONS(239), 1,
      sym__IDENTIFIER,
    STATE(70), 1,
      sym_id_expr,
  [1782] = 2,
    ACTIONS(281), 1,
      anon_sym_DOT,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
  [1789] = 2,
    ACTIONS(285), 1,
      sym__IDENTIFIER,
    STATE(44), 1,
      sym_id_expr,
  [1796] = 2,
    ACTIONS(239), 1,
      sym__IDENTIFIER,
    STATE(98), 1,
      sym_id_expr,
  [1803] = 2,
    ACTIONS(239), 1,
      sym__IDENTIFIER,
    STATE(58), 1,
      sym_id_expr,
  [1810] = 2,
    ACTIONS(287), 1,
      anon_sym_LBRACE,
    ACTIONS(289), 1,
      anon_sym_COMMA,
  [1817] = 2,
    ACTIONS(285), 1,
      sym__IDENTIFIER,
    STATE(46), 1,
      sym_id_expr,
  [1824] = 2,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
  [1831] = 2,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(293), 1,
      anon_sym_DOT,
  [1838] = 2,
    ACTIONS(295), 1,
      anon_sym_,
    STATE(106), 1,
      sym_args_list,
  [1845] = 2,
    ACTIONS(285), 1,
      sym__IDENTIFIER,
    STATE(58), 1,
      sym_id_expr,
  [1852] = 2,
    ACTIONS(297), 1,
      sym_TSTRING,
    STATE(115), 1,
      sym_string_expr,
  [1859] = 2,
    ACTIONS(239), 1,
      sym__IDENTIFIER,
    STATE(46), 1,
      sym_id_expr,
  [1866] = 2,
    ACTIONS(295), 1,
      anon_sym_,
    STATE(97), 1,
      sym_args_list,
  [1873] = 2,
    ACTIONS(239), 1,
      sym__IDENTIFIER,
    STATE(44), 1,
      sym_id_expr,
  [1880] = 2,
    ACTIONS(239), 1,
      sym__IDENTIFIER,
    STATE(77), 1,
      sym_id_expr,
  [1887] = 2,
    ACTIONS(239), 1,
      sym__IDENTIFIER,
    STATE(122), 1,
      sym_id_expr,
  [1894] = 1,
    ACTIONS(299), 1,
      sym_KEY_FUNCTION,
  [1898] = 1,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
  [1902] = 1,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
  [1906] = 1,
    ACTIONS(305), 1,
      sym_KEY_FUNCTION,
  [1910] = 1,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
  [1914] = 1,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
  [1918] = 1,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
  [1922] = 1,
    ACTIONS(313), 1,
      sym_TSTRING,
  [1926] = 1,
    ACTIONS(315), 1,
      anon_sym_LBRACE,
  [1930] = 1,
    ACTIONS(317), 1,
      sym_KEY_PUBLIC,
  [1934] = 1,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
  [1938] = 1,
    ACTIONS(321), 1,
      anon_sym_SEMI,
  [1942] = 1,
    ACTIONS(323), 1,
      sym__IDENTIFIER,
  [1946] = 1,
    ACTIONS(325), 1,
      anon_sym_LBRACE,
  [1950] = 1,
    ACTIONS(183), 1,
      sym_KEY_FUNCTION,
  [1954] = 1,
    ACTIONS(327), 1,
      anon_sym_EQ,
  [1958] = 1,
    ACTIONS(279), 1,
      anon_sym_LBRACE,
  [1962] = 1,
    ACTIONS(329), 1,
      anon_sym_SEMI,
  [1966] = 1,
    ACTIONS(331), 1,
      anon_sym_SEMI,
  [1970] = 1,
    ACTIONS(333), 1,
      anon_sym_SEMI,
  [1974] = 1,
    ACTIONS(335), 1,
      sym__IDENTIFIER,
  [1978] = 1,
    ACTIONS(337), 1,
      anon_sym_SEMI,
  [1982] = 1,
    ACTIONS(339), 1,
      anon_sym_SEMI,
  [1986] = 1,
    ACTIONS(341), 1,
      anon_sym_SEMI,
  [1990] = 1,
    ACTIONS(343), 1,
      anon_sym_LBRACE,
  [1994] = 1,
    ACTIONS(345), 1,
      anon_sym_SEMI,
  [1998] = 1,
    ACTIONS(347), 1,
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
  [SMALL_STATE(13)] = 678,
  [SMALL_STATE(14)] = 703,
  [SMALL_STATE(15)] = 728,
  [SMALL_STATE(16)] = 753,
  [SMALL_STATE(17)] = 778,
  [SMALL_STATE(18)] = 803,
  [SMALL_STATE(19)] = 828,
  [SMALL_STATE(20)] = 853,
  [SMALL_STATE(21)] = 878,
  [SMALL_STATE(22)] = 903,
  [SMALL_STATE(23)] = 942,
  [SMALL_STATE(24)] = 981,
  [SMALL_STATE(25)] = 1020,
  [SMALL_STATE(26)] = 1059,
  [SMALL_STATE(27)] = 1098,
  [SMALL_STATE(28)] = 1137,
  [SMALL_STATE(29)] = 1176,
  [SMALL_STATE(30)] = 1196,
  [SMALL_STATE(31)] = 1216,
  [SMALL_STATE(32)] = 1236,
  [SMALL_STATE(33)] = 1256,
  [SMALL_STATE(34)] = 1276,
  [SMALL_STATE(35)] = 1296,
  [SMALL_STATE(36)] = 1330,
  [SMALL_STATE(37)] = 1351,
  [SMALL_STATE(38)] = 1369,
  [SMALL_STATE(39)] = 1385,
  [SMALL_STATE(40)] = 1407,
  [SMALL_STATE(41)] = 1420,
  [SMALL_STATE(42)] = 1433,
  [SMALL_STATE(43)] = 1448,
  [SMALL_STATE(44)] = 1463,
  [SMALL_STATE(45)] = 1472,
  [SMALL_STATE(46)] = 1481,
  [SMALL_STATE(47)] = 1490,
  [SMALL_STATE(48)] = 1499,
  [SMALL_STATE(49)] = 1508,
  [SMALL_STATE(50)] = 1521,
  [SMALL_STATE(51)] = 1532,
  [SMALL_STATE(52)] = 1541,
  [SMALL_STATE(53)] = 1550,
  [SMALL_STATE(54)] = 1559,
  [SMALL_STATE(55)] = 1571,
  [SMALL_STATE(56)] = 1583,
  [SMALL_STATE(57)] = 1591,
  [SMALL_STATE(58)] = 1602,
  [SMALL_STATE(59)] = 1609,
  [SMALL_STATE(60)] = 1622,
  [SMALL_STATE(61)] = 1632,
  [SMALL_STATE(62)] = 1642,
  [SMALL_STATE(63)] = 1652,
  [SMALL_STATE(64)] = 1662,
  [SMALL_STATE(65)] = 1668,
  [SMALL_STATE(66)] = 1678,
  [SMALL_STATE(67)] = 1684,
  [SMALL_STATE(68)] = 1690,
  [SMALL_STATE(69)] = 1696,
  [SMALL_STATE(70)] = 1702,
  [SMALL_STATE(71)] = 1708,
  [SMALL_STATE(72)] = 1714,
  [SMALL_STATE(73)] = 1724,
  [SMALL_STATE(74)] = 1734,
  [SMALL_STATE(75)] = 1742,
  [SMALL_STATE(76)] = 1748,
  [SMALL_STATE(77)] = 1758,
  [SMALL_STATE(78)] = 1768,
  [SMALL_STATE(79)] = 1775,
  [SMALL_STATE(80)] = 1782,
  [SMALL_STATE(81)] = 1789,
  [SMALL_STATE(82)] = 1796,
  [SMALL_STATE(83)] = 1803,
  [SMALL_STATE(84)] = 1810,
  [SMALL_STATE(85)] = 1817,
  [SMALL_STATE(86)] = 1824,
  [SMALL_STATE(87)] = 1831,
  [SMALL_STATE(88)] = 1838,
  [SMALL_STATE(89)] = 1845,
  [SMALL_STATE(90)] = 1852,
  [SMALL_STATE(91)] = 1859,
  [SMALL_STATE(92)] = 1866,
  [SMALL_STATE(93)] = 1873,
  [SMALL_STATE(94)] = 1880,
  [SMALL_STATE(95)] = 1887,
  [SMALL_STATE(96)] = 1894,
  [SMALL_STATE(97)] = 1898,
  [SMALL_STATE(98)] = 1902,
  [SMALL_STATE(99)] = 1906,
  [SMALL_STATE(100)] = 1910,
  [SMALL_STATE(101)] = 1914,
  [SMALL_STATE(102)] = 1918,
  [SMALL_STATE(103)] = 1922,
  [SMALL_STATE(104)] = 1926,
  [SMALL_STATE(105)] = 1930,
  [SMALL_STATE(106)] = 1934,
  [SMALL_STATE(107)] = 1938,
  [SMALL_STATE(108)] = 1942,
  [SMALL_STATE(109)] = 1946,
  [SMALL_STATE(110)] = 1950,
  [SMALL_STATE(111)] = 1954,
  [SMALL_STATE(112)] = 1958,
  [SMALL_STATE(113)] = 1962,
  [SMALL_STATE(114)] = 1966,
  [SMALL_STATE(115)] = 1970,
  [SMALL_STATE(116)] = 1974,
  [SMALL_STATE(117)] = 1978,
  [SMALL_STATE(118)] = 1982,
  [SMALL_STATE(119)] = 1986,
  [SMALL_STATE(120)] = 1990,
  [SMALL_STATE(121)] = 1994,
  [SMALL_STATE(122)] = 1998,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(116),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(114),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(105),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declar_stmt, 6),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_declar_stmt, 6),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_expr, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_expr, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declar_stmt, 5),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_declar_stmt, 5),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declar_stmt, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declar_stmt, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declar_stmt, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declar_stmt, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_stmt, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_stmt, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declar_stmt, 5),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declar_stmt, 5),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_stmt, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_stmt, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_declar_stmt, 5),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_declar_stmt, 5),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out_declar_stmt, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out_declar_stmt, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declar_stmt, 6),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declar_stmt, 6),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_declar_stmt_repeat1, 2), SHIFT_REPEAT(11),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_declar_stmt_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_declar_stmt_repeat1, 2), SHIFT_REPEAT(110),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_declar_stmt_repeat1, 2), SHIFT_REPEAT(108),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_declar_stmt_repeat1, 2), SHIFT_REPEAT(78),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EMPTY, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EMPTY, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_item, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_item, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_values_expr, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element_var_declar_stmt, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_name_types, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_common_values_expr, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element_var_declar_stmt, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__elements_var_declar_stmt, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__elements_var_declar_stmt, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_var_declar_stmt, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_var_declar_stmt, 4),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declar_stmt, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declar_stmt, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declar_stmt, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declar_stmt, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_member_stmt, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_this_stmt, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_member_stmt, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 6),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_object_expr, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_number_expr, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_body, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_ele_stmt, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_result_of_call_expr, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_inc_dec_operators, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_inc_dec_stmt, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_stmt_types, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arithmetic_add_sub_stmt, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_expr, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arithmetic_mul_div_stmt, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_stmt, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiple_id_expr, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interrupt_stmt, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiple_id_expr, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_suffix, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_name_types, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [307] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args_list, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_operators, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_param_list, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restrict_stmt, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_prefix, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interrupt_stmt, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interrupt_stmt, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_stmt, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_prefix, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_expr, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt_value, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_param_list, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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
