#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_IDENTIFIER = 1,
  sym_func_declar_stmt = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_SEMI = 5,
  anon_sym_COMMA = 6,
  sym_class_declar_stmt = 7,
  sym_con_ctl_stmt = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  sym_TSTRING = 11,
  sym_XINTEGER = 12,
  sym_TDOUBLE = 13,
  sym_source_file = 14,
  sym_statement = 15,
  sym_declar_stmt = 16,
  sym__element_var_declar_stmt = 17,
  sym_var_declar_stmt = 18,
  sym_simple_stmt = 19,
  sym_call_statement = 20,
  sym_id_expr = 21,
  sym_int_expr = 22,
  aux_sym_source_file_repeat1 = 23,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_IDENTIFIER] = "IDENTIFIER",
  [sym_func_declar_stmt] = "func_declar_stmt",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [sym_class_declar_stmt] = "class_declar_stmt",
  [sym_con_ctl_stmt] = "con_ctl_stmt",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_TSTRING] = "TSTRING",
  [sym_XINTEGER] = "XINTEGER",
  [sym_TDOUBLE] = "TDOUBLE",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_declar_stmt] = "declar_stmt",
  [sym__element_var_declar_stmt] = "_element_var_declar_stmt",
  [sym_var_declar_stmt] = "var_declar_stmt",
  [sym_simple_stmt] = "simple_stmt",
  [sym_call_statement] = "call_statement",
  [sym_id_expr] = "id_expr",
  [sym_int_expr] = "int_expr",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_IDENTIFIER] = sym_IDENTIFIER,
  [sym_func_declar_stmt] = sym_func_declar_stmt,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_class_declar_stmt] = sym_class_declar_stmt,
  [sym_con_ctl_stmt] = sym_con_ctl_stmt,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_TSTRING] = sym_TSTRING,
  [sym_XINTEGER] = sym_XINTEGER,
  [sym_TDOUBLE] = sym_TDOUBLE,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_declar_stmt] = sym_declar_stmt,
  [sym__element_var_declar_stmt] = sym__element_var_declar_stmt,
  [sym_var_declar_stmt] = sym_var_declar_stmt,
  [sym_simple_stmt] = sym_simple_stmt,
  [sym_call_statement] = sym_call_statement,
  [sym_id_expr] = sym_id_expr,
  [sym_int_expr] = sym_int_expr,
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
  [sym_func_declar_stmt] = {
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_declar_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym__element_var_declar_stmt] = {
    .visible = false,
    .named = true,
  },
  [sym_var_declar_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_call_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_id_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_int_expr] = {
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
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '[') ADVANCE(6);
      if (lookahead == ']') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '0') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_TSTRING);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_XINTEGER);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_XINTEGER);
      if (lookahead == '.') ADVANCE(3);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_XINTEGER);
      if (lookahead == '.') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_XINTEGER);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_TDOUBLE);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
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
      if (lookahead == 'c') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'x') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'x') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_con_ctl_stmt);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_func_declar_stmt);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_class_declar_stmt);
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_IDENTIFIER] = ACTIONS(1),
    [sym_func_declar_stmt] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_class_declar_stmt] = ACTIONS(1),
    [sym_con_ctl_stmt] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_TSTRING] = ACTIONS(1),
    [sym_XINTEGER] = ACTIONS(1),
    [sym_TDOUBLE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(17),
    [sym_statement] = STATE(2),
    [sym_declar_stmt] = STATE(10),
    [sym__element_var_declar_stmt] = STATE(15),
    [sym_var_declar_stmt] = STATE(9),
    [sym_simple_stmt] = STATE(10),
    [sym_call_statement] = STATE(6),
    [sym_id_expr] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_IDENTIFIER] = ACTIONS(5),
    [sym_func_declar_stmt] = ACTIONS(7),
    [sym_class_declar_stmt] = ACTIONS(7),
    [sym_con_ctl_stmt] = ACTIONS(9),
  },
  [2] = {
    [sym_statement] = STATE(3),
    [sym_declar_stmt] = STATE(10),
    [sym__element_var_declar_stmt] = STATE(15),
    [sym_var_declar_stmt] = STATE(9),
    [sym_simple_stmt] = STATE(10),
    [sym_call_statement] = STATE(6),
    [sym_id_expr] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_IDENTIFIER] = ACTIONS(5),
    [sym_func_declar_stmt] = ACTIONS(7),
    [sym_class_declar_stmt] = ACTIONS(7),
    [sym_con_ctl_stmt] = ACTIONS(9),
  },
  [3] = {
    [sym_statement] = STATE(3),
    [sym_declar_stmt] = STATE(10),
    [sym__element_var_declar_stmt] = STATE(15),
    [sym_var_declar_stmt] = STATE(9),
    [sym_simple_stmt] = STATE(10),
    [sym_call_statement] = STATE(6),
    [sym_id_expr] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_IDENTIFIER] = ACTIONS(15),
    [sym_func_declar_stmt] = ACTIONS(18),
    [sym_class_declar_stmt] = ACTIONS(18),
    [sym_con_ctl_stmt] = ACTIONS(21),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(24), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
    ACTIONS(26), 4,
      sym_func_declar_stmt,
      sym_class_declar_stmt,
      sym_con_ctl_stmt,
      sym_IDENTIFIER,
  [11] = 2,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 4,
      sym_func_declar_stmt,
      sym_class_declar_stmt,
      sym_con_ctl_stmt,
      sym_IDENTIFIER,
  [21] = 2,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 4,
      sym_func_declar_stmt,
      sym_class_declar_stmt,
      sym_con_ctl_stmt,
      sym_IDENTIFIER,
  [31] = 2,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 4,
      sym_func_declar_stmt,
      sym_class_declar_stmt,
      sym_con_ctl_stmt,
      sym_IDENTIFIER,
  [41] = 4,
    ACTIONS(40), 1,
      sym_IDENTIFIER,
    ACTIONS(42), 1,
      sym_XINTEGER,
    STATE(21), 1,
      sym_id_expr,
    STATE(20), 2,
      sym_call_statement,
      sym_int_expr,
  [55] = 2,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 4,
      sym_func_declar_stmt,
      sym_class_declar_stmt,
      sym_con_ctl_stmt,
      sym_IDENTIFIER,
  [65] = 2,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 4,
      sym_func_declar_stmt,
      sym_class_declar_stmt,
      sym_con_ctl_stmt,
      sym_IDENTIFIER,
  [75] = 3,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [86] = 4,
    ACTIONS(40), 1,
      sym_IDENTIFIER,
    STATE(5), 1,
      sym_var_declar_stmt,
    STATE(14), 1,
      sym_id_expr,
    STATE(15), 1,
      sym__element_var_declar_stmt,
  [99] = 1,
    ACTIONS(58), 4,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [106] = 2,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [114] = 2,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    ACTIONS(62), 1,
      anon_sym_COMMA,
  [121] = 1,
    ACTIONS(64), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [126] = 1,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
  [130] = 1,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
  [134] = 1,
    ACTIONS(70), 1,
      anon_sym_RBRACK,
  [138] = 1,
    ACTIONS(72), 1,
      anon_sym_RBRACK,
  [142] = 1,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 11,
  [SMALL_STATE(6)] = 21,
  [SMALL_STATE(7)] = 31,
  [SMALL_STATE(8)] = 41,
  [SMALL_STATE(9)] = 55,
  [SMALL_STATE(10)] = 65,
  [SMALL_STATE(11)] = 75,
  [SMALL_STATE(12)] = 86,
  [SMALL_STATE(13)] = 99,
  [SMALL_STATE(14)] = 106,
  [SMALL_STATE(15)] = 114,
  [SMALL_STATE(16)] = 121,
  [SMALL_STATE(17)] = 126,
  [SMALL_STATE(18)] = 130,
  [SMALL_STATE(19)] = 134,
  [SMALL_STATE(20)] = 138,
  [SMALL_STATE(21)] = 142,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 3),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declar_stmt, 3),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declar_stmt, 3),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_stmt, 1),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_stmt, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declar_stmt, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declar_stmt, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declar_stmt, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declar_stmt, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element_var_declar_stmt, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_expr, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element_var_declar_stmt, 4),
  [66] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_expr, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
