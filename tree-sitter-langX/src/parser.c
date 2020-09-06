#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 10
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2

enum {
  sym_func_declar_stmt = 1,
  anon_sym_SEMI = 2,
  sym_class_declar_stmt = 3,
  sym_con_ctl_stmt = 4,
  sym_simple_stmt = 5,
  sym_IDENTIFIER = 6,
  sym_TSTRING = 7,
  sym_XINTEGER = 8,
  sym_TDOUBLE = 9,
  sym_source_file = 10,
  sym_statement = 11,
  sym_declar_stmt = 12,
  sym_var_declar_stmt = 13,
  sym_id_expr = 14,
  aux_sym_source_file_repeat1 = 15,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_func_declar_stmt] = "func_declar_stmt",
  [anon_sym_SEMI] = ";",
  [sym_class_declar_stmt] = "class_declar_stmt",
  [sym_con_ctl_stmt] = "con_ctl_stmt",
  [sym_simple_stmt] = "simple_stmt",
  [sym_IDENTIFIER] = "IDENTIFIER",
  [sym_TSTRING] = "TSTRING",
  [sym_XINTEGER] = "XINTEGER",
  [sym_TDOUBLE] = "TDOUBLE",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_declar_stmt] = "declar_stmt",
  [sym_var_declar_stmt] = "var_declar_stmt",
  [sym_id_expr] = "id_expr",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_func_declar_stmt] = sym_func_declar_stmt,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_class_declar_stmt] = sym_class_declar_stmt,
  [sym_con_ctl_stmt] = sym_con_ctl_stmt,
  [sym_simple_stmt] = sym_simple_stmt,
  [sym_IDENTIFIER] = sym_IDENTIFIER,
  [sym_TSTRING] = sym_TSTRING,
  [sym_XINTEGER] = sym_XINTEGER,
  [sym_TDOUBLE] = sym_TDOUBLE,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_declar_stmt] = sym_declar_stmt,
  [sym_var_declar_stmt] = sym_var_declar_stmt,
  [sym_id_expr] = sym_id_expr,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_func_declar_stmt] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
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
  [sym_simple_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_IDENTIFIER] = {
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
  [sym_var_declar_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_id_expr] = {
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
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '0') ADVANCE(21);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_func_declar_stmt);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_class_declar_stmt);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_con_ctl_stmt);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_simple_stmt);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 's') ADVANCE(7);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'u') ADVANCE(14);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == 'x') ADVANCE(8);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_IDENTIFIER);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_TSTRING);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_XINTEGER);
      if (lookahead == '.') ADVANCE(2);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_XINTEGER);
      if (lookahead == '.') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_TDOUBLE);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
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
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_func_declar_stmt] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_class_declar_stmt] = ACTIONS(1),
    [sym_con_ctl_stmt] = ACTIONS(1),
    [sym_simple_stmt] = ACTIONS(1),
    [sym_IDENTIFIER] = ACTIONS(1),
    [sym_TSTRING] = ACTIONS(1),
    [sym_XINTEGER] = ACTIONS(1),
    [sym_TDOUBLE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(8),
    [sym_statement] = STATE(2),
    [sym_declar_stmt] = STATE(5),
    [sym_var_declar_stmt] = STATE(4),
    [sym_id_expr] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_func_declar_stmt] = ACTIONS(5),
    [sym_class_declar_stmt] = ACTIONS(5),
    [sym_con_ctl_stmt] = ACTIONS(7),
    [sym_simple_stmt] = ACTIONS(7),
    [sym_IDENTIFIER] = ACTIONS(9),
  },
  [2] = {
    [sym_statement] = STATE(3),
    [sym_declar_stmt] = STATE(5),
    [sym_var_declar_stmt] = STATE(4),
    [sym_id_expr] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_func_declar_stmt] = ACTIONS(5),
    [sym_class_declar_stmt] = ACTIONS(5),
    [sym_con_ctl_stmt] = ACTIONS(7),
    [sym_simple_stmt] = ACTIONS(7),
    [sym_IDENTIFIER] = ACTIONS(9),
  },
  [3] = {
    [sym_statement] = STATE(3),
    [sym_declar_stmt] = STATE(5),
    [sym_var_declar_stmt] = STATE(4),
    [sym_id_expr] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_func_declar_stmt] = ACTIONS(15),
    [sym_class_declar_stmt] = ACTIONS(15),
    [sym_con_ctl_stmt] = ACTIONS(18),
    [sym_simple_stmt] = ACTIONS(18),
    [sym_IDENTIFIER] = ACTIONS(21),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 5,
      sym_func_declar_stmt,
      sym_class_declar_stmt,
      sym_con_ctl_stmt,
      sym_simple_stmt,
      sym_IDENTIFIER,
  [11] = 2,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 5,
      sym_func_declar_stmt,
      sym_class_declar_stmt,
      sym_con_ctl_stmt,
      sym_simple_stmt,
      sym_IDENTIFIER,
  [22] = 2,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 5,
      sym_func_declar_stmt,
      sym_class_declar_stmt,
      sym_con_ctl_stmt,
      sym_simple_stmt,
      sym_IDENTIFIER,
  [33] = 1,
    ACTIONS(36), 1,
      anon_sym_SEMI,
  [37] = 1,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
  [41] = 1,
    ACTIONS(40), 1,
      anon_sym_SEMI,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 11,
  [SMALL_STATE(6)] = 22,
  [SMALL_STATE(7)] = 33,
  [SMALL_STATE(8)] = 37,
  [SMALL_STATE(9)] = 41,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declar_stmt, 1),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declar_stmt, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declar_stmt, 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declar_stmt, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_expr, 1),
  [38] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
