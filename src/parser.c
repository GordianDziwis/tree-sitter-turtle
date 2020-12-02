#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 81
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_DOT = 1,
  anon_sym_ATprefix = 2,
  anon_sym_ATbase = 3,
  anon_sym_BASE = 4,
  anon_sym_PREFIX = 5,
  anon_sym_SEMI = 6,
  anon_sym_COMMA = 7,
  anon_sym_a = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  sym_iri_reference = 13,
  sym_integer = 14,
  sym_decimal = 15,
  sym_double = 16,
  sym__string_literal_quote = 17,
  sym__string_literal_single_quote = 18,
  sym__string_literal_long_single_quote = 19,
  sym__string_literal_long_quote = 20,
  anon_sym_CARET_CARET = 21,
  anon_sym_true = 22,
  anon_sym_false = 23,
  anon_sym_COLON = 24,
  anon_sym__COLON = 25,
  aux_sym_blank_node_label_token1 = 26,
  sym_lang_tag = 27,
  sym_anon = 28,
  sym_pn_prefix = 29,
  sym_pn_local = 30,
  sym_turtle_doc = 31,
  sym_statement = 32,
  sym_directive = 33,
  sym_prefix_id = 34,
  sym_base = 35,
  sym_sparql_base = 36,
  sym_sparql_prefix = 37,
  sym_triples = 38,
  sym_property_list = 39,
  sym_object_list = 40,
  sym_predicate = 41,
  sym_subject = 42,
  sym__object = 43,
  sym__literal = 44,
  sym_blank_node_property_list = 45,
  sym_collection = 46,
  sym__numeric_literal = 47,
  sym_string = 48,
  sym_rdf_literal = 49,
  sym_boolean_literal = 50,
  sym__iri = 51,
  sym_prefixed_name = 52,
  sym_blank_node = 53,
  sym_namespace = 54,
  sym_blank_node_label = 55,
  aux_sym_turtle_doc_repeat1 = 56,
  aux_sym_property_list_repeat1 = 57,
  aux_sym_object_list_repeat1 = 58,
  aux_sym_collection_repeat1 = 59,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT] = ".",
  [anon_sym_ATprefix] = "@prefix",
  [anon_sym_ATbase] = "@base",
  [anon_sym_BASE] = "BASE",
  [anon_sym_PREFIX] = "PREFIX",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [anon_sym_a] = "a",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_iri_reference] = "iri_reference",
  [sym_integer] = "integer",
  [sym_decimal] = "decimal",
  [sym_double] = "double",
  [sym__string_literal_quote] = "_string_literal_quote",
  [sym__string_literal_single_quote] = "_string_literal_single_quote",
  [sym__string_literal_long_single_quote] = "_string_literal_long_single_quote",
  [sym__string_literal_long_quote] = "_string_literal_long_quote",
  [anon_sym_CARET_CARET] = "^^",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_COLON] = ":",
  [anon_sym__COLON] = "_:",
  [aux_sym_blank_node_label_token1] = "blank_node_label_token1",
  [sym_lang_tag] = "lang_tag",
  [sym_anon] = "anon",
  [sym_pn_prefix] = "pn_prefix",
  [sym_pn_local] = "pn_local",
  [sym_turtle_doc] = "turtle_doc",
  [sym_statement] = "statement",
  [sym_directive] = "directive",
  [sym_prefix_id] = "prefix_id",
  [sym_base] = "base",
  [sym_sparql_base] = "sparql_base",
  [sym_sparql_prefix] = "sparql_prefix",
  [sym_triples] = "triples",
  [sym_property_list] = "property_list",
  [sym_object_list] = "object_list",
  [sym_predicate] = "predicate",
  [sym_subject] = "subject",
  [sym__object] = "_object",
  [sym__literal] = "_literal",
  [sym_blank_node_property_list] = "blank_node_property_list",
  [sym_collection] = "collection",
  [sym__numeric_literal] = "_numeric_literal",
  [sym_string] = "string",
  [sym_rdf_literal] = "rdf_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym__iri] = "_iri",
  [sym_prefixed_name] = "prefixed_name",
  [sym_blank_node] = "blank_node",
  [sym_namespace] = "namespace",
  [sym_blank_node_label] = "blank_node_label",
  [aux_sym_turtle_doc_repeat1] = "turtle_doc_repeat1",
  [aux_sym_property_list_repeat1] = "property_list_repeat1",
  [aux_sym_object_list_repeat1] = "object_list_repeat1",
  [aux_sym_collection_repeat1] = "collection_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_ATprefix] = anon_sym_ATprefix,
  [anon_sym_ATbase] = anon_sym_ATbase,
  [anon_sym_BASE] = anon_sym_BASE,
  [anon_sym_PREFIX] = anon_sym_PREFIX,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_a] = anon_sym_a,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_iri_reference] = sym_iri_reference,
  [sym_integer] = sym_integer,
  [sym_decimal] = sym_decimal,
  [sym_double] = sym_double,
  [sym__string_literal_quote] = sym__string_literal_quote,
  [sym__string_literal_single_quote] = sym__string_literal_single_quote,
  [sym__string_literal_long_single_quote] = sym__string_literal_long_single_quote,
  [sym__string_literal_long_quote] = sym__string_literal_long_quote,
  [anon_sym_CARET_CARET] = anon_sym_CARET_CARET,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym__COLON] = anon_sym__COLON,
  [aux_sym_blank_node_label_token1] = aux_sym_blank_node_label_token1,
  [sym_lang_tag] = sym_lang_tag,
  [sym_anon] = sym_anon,
  [sym_pn_prefix] = sym_pn_prefix,
  [sym_pn_local] = sym_pn_local,
  [sym_turtle_doc] = sym_turtle_doc,
  [sym_statement] = sym_statement,
  [sym_directive] = sym_directive,
  [sym_prefix_id] = sym_prefix_id,
  [sym_base] = sym_base,
  [sym_sparql_base] = sym_sparql_base,
  [sym_sparql_prefix] = sym_sparql_prefix,
  [sym_triples] = sym_triples,
  [sym_property_list] = sym_property_list,
  [sym_object_list] = sym_object_list,
  [sym_predicate] = sym_predicate,
  [sym_subject] = sym_subject,
  [sym__object] = sym__object,
  [sym__literal] = sym__literal,
  [sym_blank_node_property_list] = sym_blank_node_property_list,
  [sym_collection] = sym_collection,
  [sym__numeric_literal] = sym__numeric_literal,
  [sym_string] = sym_string,
  [sym_rdf_literal] = sym_rdf_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym__iri] = sym__iri,
  [sym_prefixed_name] = sym_prefixed_name,
  [sym_blank_node] = sym_blank_node,
  [sym_namespace] = sym_namespace,
  [sym_blank_node_label] = sym_blank_node_label,
  [aux_sym_turtle_doc_repeat1] = aux_sym_turtle_doc_repeat1,
  [aux_sym_property_list_repeat1] = aux_sym_property_list_repeat1,
  [aux_sym_object_list_repeat1] = aux_sym_object_list_repeat1,
  [aux_sym_collection_repeat1] = aux_sym_collection_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATprefix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATbase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BASE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PREFIX] = {
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
  [anon_sym_a] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_iri_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_double] = {
    .visible = true,
    .named = true,
  },
  [sym__string_literal_quote] = {
    .visible = false,
    .named = true,
  },
  [sym__string_literal_single_quote] = {
    .visible = false,
    .named = true,
  },
  [sym__string_literal_long_single_quote] = {
    .visible = false,
    .named = true,
  },
  [sym__string_literal_long_quote] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_CARET_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_blank_node_label_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_lang_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_anon] = {
    .visible = true,
    .named = true,
  },
  [sym_pn_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_pn_local] = {
    .visible = true,
    .named = true,
  },
  [sym_turtle_doc] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_id] = {
    .visible = true,
    .named = true,
  },
  [sym_base] = {
    .visible = true,
    .named = true,
  },
  [sym_sparql_base] = {
    .visible = true,
    .named = true,
  },
  [sym_sparql_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_triples] = {
    .visible = true,
    .named = true,
  },
  [sym_property_list] = {
    .visible = true,
    .named = true,
  },
  [sym_object_list] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_subject] = {
    .visible = true,
    .named = true,
  },
  [sym__object] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_blank_node_property_list] = {
    .visible = true,
    .named = true,
  },
  [sym_collection] = {
    .visible = true,
    .named = true,
  },
  [sym__numeric_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_rdf_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__iri] = {
    .visible = false,
    .named = true,
  },
  [sym_prefixed_name] = {
    .visible = true,
    .named = true,
  },
  [sym_blank_node] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_blank_node_label] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_turtle_doc_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_collection_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_datatype = 1,
  field_value = 2,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_datatype] = "datatype",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[3] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 0},
  [1] =
    {field_datatype, 1},
    {field_datatype, 2},
    {field_value, 0},
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_pn_prefix_character_set_1(int32_t lookahead) {
  return
    lookahead == '-' ||
    ('0' <= lookahead && lookahead <= '9') ||
    ('A' <= lookahead && lookahead <= 'Z') ||
    lookahead == '_' ||
    ('a' <= lookahead && lookahead <= 't') ||
    ('v' <= lookahead && lookahead <= 'z') ||
    lookahead == 183 ||
    (768 <= lookahead && lookahead <= 879) ||
    lookahead == 8255 ||
    lookahead == 8256;
}

static inline bool sym_pn_prefix_character_set_2(int32_t lookahead) {
  return
    lookahead == '-' ||
    ('0' <= lookahead && lookahead <= '9') ||
    ('A' <= lookahead && lookahead <= 'Z') ||
    lookahead == '_' ||
    ('a' <= lookahead && lookahead <= 'r') ||
    ('t' <= lookahead && lookahead <= 'z') ||
    lookahead == 183 ||
    (768 <= lookahead && lookahead <= 879) ||
    lookahead == 8255 ||
    lookahead == 8256;
}

static inline bool sym_pn_prefix_character_set_3(int32_t lookahead) {
  return
    lookahead == '-' ||
    ('0' <= lookahead && lookahead <= '9') ||
    ('A' <= lookahead && lookahead <= 'Z') ||
    lookahead == '_' ||
    ('a' <= lookahead && lookahead <= 'q') ||
    ('s' <= lookahead && lookahead <= 'z') ||
    lookahead == 183 ||
    (768 <= lookahead && lookahead <= 879) ||
    lookahead == 8255 ||
    lookahead == 8256;
}

static inline bool sym_pn_prefix_character_set_4(int32_t lookahead) {
  return
    lookahead == '-' ||
    ('0' <= lookahead && lookahead <= '9') ||
    ('A' <= lookahead && lookahead <= 'Z') ||
    lookahead == '_' ||
    ('a' <= lookahead && lookahead <= 'k') ||
    ('m' <= lookahead && lookahead <= 'z') ||
    lookahead == 183 ||
    (768 <= lookahead && lookahead <= 879) ||
    lookahead == 8255 ||
    lookahead == 8256;
}

static inline bool sym_pn_prefix_character_set_5(int32_t lookahead) {
  return
    lookahead == '-' ||
    ('0' <= lookahead && lookahead <= '9') ||
    ('A' <= lookahead && lookahead <= 'Z') ||
    lookahead == '_' ||
    ('a' <= lookahead && lookahead <= 'd') ||
    ('f' <= lookahead && lookahead <= 'z') ||
    lookahead == 183 ||
    (768 <= lookahead && lookahead <= 879) ||
    lookahead == 8255 ||
    lookahead == 8256;
}

static inline bool sym_pn_prefix_character_set_11(int32_t lookahead) {
  return
    lookahead == '-' ||
    ('0' <= lookahead && lookahead <= '9') ||
    ('A' <= lookahead && lookahead <= 'D') ||
    ('F' <= lookahead && lookahead <= 'Z') ||
    lookahead == '_' ||
    ('a' <= lookahead && lookahead <= 'z') ||
    lookahead == 183 ||
    (768 <= lookahead && lookahead <= 879) ||
    lookahead == 8255 ||
    lookahead == 8256;
}

static inline bool sym_pn_local_character_set_1(int32_t lookahead) {
  return
    lookahead == '-' ||
    lookahead == ':' ||
    ('A' <= lookahead && lookahead <= 'D') ||
    ('F' <= lookahead && lookahead <= 'Z') ||
    lookahead == '_' ||
    ('a' <= lookahead && lookahead <= 'd') ||
    ('f' <= lookahead && lookahead <= 'z') ||
    lookahead == 183 ||
    (768 <= lookahead && lookahead <= 879) ||
    lookahead == 8255 ||
    lookahead == 8256;
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(96);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == '^') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(94)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '_') ADVANCE(162);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '.') ADVANCE(98);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '@') ADVANCE(90);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == '^') ADVANCE(32);
      if (lookahead == '_') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(141);
      if (lookahead == 't') ADVANCE(137);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '@') ADVANCE(90);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '^') ADVANCE(32);
      if (lookahead == '_') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(141);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '_') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(141);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '.') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(59);
      if (sym_pn_local_character_set_1(lookahead)) ADVANCE(164);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(163);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(164);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '@') ADVANCE(90);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == '^') ADVANCE(32);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 21:
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(129);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < 0 || ' ' < lookahead) &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == 'U') ADVANCE(85);
      if (lookahead == 'u') ADVANCE(65);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(6);
      END_STATE();
    case 28:
      if (lookahead == 'U') ADVANCE(86);
      if (lookahead == 'u') ADVANCE(66);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 29:
      if (lookahead == 'U') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 30:
      if (lookahead == 'U') ADVANCE(88);
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(9);
      END_STATE();
    case 31:
      if (lookahead == 'U') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(19);
      END_STATE();
    case 32:
      if (lookahead == '^') ADVANCE(122);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 41:
      if (lookahead == 'x') ADVANCE(99);
      END_STATE();
    case 42:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == ']') ADVANCE(134);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 47:
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '/') ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(164);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 90:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 93:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(150);
      if (lookahead == '.') ADVANCE(93);
      END_STATE();
    case 94:
      if (eof) ADVANCE(96);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == '^') ADVANCE(32);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(94)
      END_STATE();
    case 95:
      if (eof) ADVANCE(96);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == 'B') ADVANCE(149);
      if (lookahead == 'P') ADVANCE(144);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '_') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(95)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_ATprefix);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_ATbase);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_BASE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(150);
      if (lookahead == '.') ADVANCE(93);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PREFIX);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(150);
      if (lookahead == '.') ADVANCE(93);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(163);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(47);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(150);
      if (lookahead == '.') ADVANCE(93);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == ']') ADVANCE(134);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_iri_reference);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__string_literal_quote);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__string_literal_quote);
      if (lookahead == '"') ADVANCE(9);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__string_literal_single_quote);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__string_literal_single_quote);
      if (lookahead == '\'') ADVANCE(19);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__string_literal_long_single_quote);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__string_literal_long_quote);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(163);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(47);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(150);
      if (lookahead == '.') ADVANCE(93);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(163);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(47);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(150);
      if (lookahead == '.') ADVANCE(93);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(164);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(47);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym__COLON);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym__COLON);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(164);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(47);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_blank_node_label_token1);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_lang_tag);
      if (lookahead == '-') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_lang_tag);
      if (lookahead == '-') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_anon);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (sym_pn_prefix_character_set_1(lookahead)) ADVANCE(150);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (sym_pn_prefix_character_set_2(lookahead)) ADVANCE(150);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (sym_pn_prefix_character_set_3(lookahead)) ADVANCE(150);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (sym_pn_prefix_character_set_4(lookahead)) ADVANCE(150);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (sym_pn_prefix_character_set_5(lookahead)) ADVANCE(150);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (sym_pn_prefix_character_set_5(lookahead)) ADVANCE(150);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(150);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'W') ||
          lookahead == 'Y' ||
          lookahead == 'Z' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(150);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 'X') ADVANCE(102);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(150);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 'S') ADVANCE(148);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Q') ||
          ('S' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(150);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(147);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(150);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 'I') ADVANCE(142);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(150);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 'F') ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (sym_pn_prefix_character_set_11(lookahead)) ADVANCE(150);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 'E') ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (sym_pn_prefix_character_set_11(lookahead)) ADVANCE(150);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 'E') ADVANCE(101);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(150);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 'A') ADVANCE(143);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(150);
      if (lookahead == '.') ADVANCE(93);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(164);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(59);
      if (sym_pn_local_character_set_1(lookahead)) ADVANCE(164);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(59);
      if (sym_pn_local_character_set_1(lookahead)) ADVANCE(164);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(164);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(59);
      if (sym_pn_prefix_character_set_1(lookahead)) ADVANCE(163);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(59);
      if (sym_pn_prefix_character_set_2(lookahead)) ADVANCE(163);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(59);
      if (sym_pn_prefix_character_set_3(lookahead)) ADVANCE(163);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(59);
      if (sym_pn_prefix_character_set_4(lookahead)) ADVANCE(163);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(59);
      if (sym_pn_prefix_character_set_5(lookahead)) ADVANCE(163);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(59);
      if (sym_pn_prefix_character_set_5(lookahead)) ADVANCE(163);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(163);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(164);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(47);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(163);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(47);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(164);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(47);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 95},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 95},
  [11] = {.lex_state = 95},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 95},
  [28] = {.lex_state = 95},
  [29] = {.lex_state = 95},
  [30] = {.lex_state = 95},
  [31] = {.lex_state = 95},
  [32] = {.lex_state = 95},
  [33] = {.lex_state = 95},
  [34] = {.lex_state = 20},
  [35] = {.lex_state = 20},
  [36] = {.lex_state = 20},
  [37] = {.lex_state = 20},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 20},
  [40] = {.lex_state = 20},
  [41] = {.lex_state = 20},
  [42] = {.lex_state = 20},
  [43] = {.lex_state = 20},
  [44] = {.lex_state = 20},
  [45] = {.lex_state = 24},
  [46] = {.lex_state = 24},
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 20},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 24},
  [63] = {.lex_state = 24},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 92},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 92},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_ATprefix] = ACTIONS(1),
    [anon_sym_ATbase] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_a] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_iri_reference] = ACTIONS(1),
    [sym__string_literal_quote] = ACTIONS(1),
    [sym__string_literal_single_quote] = ACTIONS(1),
    [sym__string_literal_long_single_quote] = ACTIONS(1),
    [sym__string_literal_long_quote] = ACTIONS(1),
    [anon_sym_CARET_CARET] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_blank_node_label_token1] = ACTIONS(1),
    [sym_anon] = ACTIONS(1),
  },
  [1] = {
    [sym_turtle_doc] = STATE(65),
    [sym_statement] = STATE(10),
    [sym_directive] = STATE(29),
    [sym_prefix_id] = STATE(31),
    [sym_base] = STATE(31),
    [sym_sparql_base] = STATE(31),
    [sym_sparql_prefix] = STATE(31),
    [sym_triples] = STATE(67),
    [sym_subject] = STATE(38),
    [sym_blank_node_property_list] = STATE(35),
    [sym_collection] = STATE(58),
    [sym__iri] = STATE(58),
    [sym_prefixed_name] = STATE(58),
    [sym_blank_node] = STATE(58),
    [sym_namespace] = STATE(50),
    [sym_blank_node_label] = STATE(39),
    [aux_sym_turtle_doc_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_ATprefix] = ACTIONS(5),
    [anon_sym_ATbase] = ACTIONS(7),
    [anon_sym_BASE] = ACTIONS(9),
    [anon_sym_PREFIX] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_iri_reference] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym__COLON] = ACTIONS(21),
    [sym_anon] = ACTIONS(23),
    [sym_pn_prefix] = ACTIONS(25),
  },
  [2] = {
    [sym__object] = STATE(6),
    [sym__literal] = STATE(6),
    [sym_blank_node_property_list] = STATE(6),
    [sym_collection] = STATE(6),
    [sym__numeric_literal] = STATE(6),
    [sym_string] = STATE(16),
    [sym_rdf_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym__iri] = STATE(6),
    [sym_prefixed_name] = STATE(6),
    [sym_blank_node] = STATE(6),
    [sym_namespace] = STATE(18),
    [sym_blank_node_label] = STATE(22),
    [aux_sym_collection_repeat1] = STATE(6),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(31),
    [sym_iri_reference] = ACTIONS(33),
    [sym_integer] = ACTIONS(35),
    [sym_decimal] = ACTIONS(35),
    [sym_double] = ACTIONS(33),
    [sym__string_literal_quote] = ACTIONS(37),
    [sym__string_literal_single_quote] = ACTIONS(37),
    [sym__string_literal_long_single_quote] = ACTIONS(39),
    [sym__string_literal_long_quote] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_COLON] = ACTIONS(43),
    [anon_sym__COLON] = ACTIONS(45),
    [sym_anon] = ACTIONS(47),
    [sym_pn_prefix] = ACTIONS(49),
  },
  [3] = {
    [sym__object] = STATE(2),
    [sym__literal] = STATE(2),
    [sym_blank_node_property_list] = STATE(2),
    [sym_collection] = STATE(2),
    [sym__numeric_literal] = STATE(2),
    [sym_string] = STATE(16),
    [sym_rdf_literal] = STATE(2),
    [sym_boolean_literal] = STATE(2),
    [sym__iri] = STATE(2),
    [sym_prefixed_name] = STATE(2),
    [sym_blank_node] = STATE(2),
    [sym_namespace] = STATE(18),
    [sym_blank_node_label] = STATE(22),
    [aux_sym_collection_repeat1] = STATE(2),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(51),
    [sym_iri_reference] = ACTIONS(53),
    [sym_integer] = ACTIONS(55),
    [sym_decimal] = ACTIONS(55),
    [sym_double] = ACTIONS(53),
    [sym__string_literal_quote] = ACTIONS(37),
    [sym__string_literal_single_quote] = ACTIONS(37),
    [sym__string_literal_long_single_quote] = ACTIONS(39),
    [sym__string_literal_long_quote] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_COLON] = ACTIONS(43),
    [anon_sym__COLON] = ACTIONS(45),
    [sym_anon] = ACTIONS(47),
    [sym_pn_prefix] = ACTIONS(49),
  },
  [4] = {
    [sym__object] = STATE(6),
    [sym__literal] = STATE(6),
    [sym_blank_node_property_list] = STATE(6),
    [sym_collection] = STATE(6),
    [sym__numeric_literal] = STATE(6),
    [sym_string] = STATE(16),
    [sym_rdf_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym__iri] = STATE(6),
    [sym_prefixed_name] = STATE(6),
    [sym_blank_node] = STATE(6),
    [sym_namespace] = STATE(18),
    [sym_blank_node_label] = STATE(22),
    [aux_sym_collection_repeat1] = STATE(6),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(57),
    [sym_iri_reference] = ACTIONS(33),
    [sym_integer] = ACTIONS(35),
    [sym_decimal] = ACTIONS(35),
    [sym_double] = ACTIONS(33),
    [sym__string_literal_quote] = ACTIONS(37),
    [sym__string_literal_single_quote] = ACTIONS(37),
    [sym__string_literal_long_single_quote] = ACTIONS(39),
    [sym__string_literal_long_quote] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_COLON] = ACTIONS(43),
    [anon_sym__COLON] = ACTIONS(45),
    [sym_anon] = ACTIONS(47),
    [sym_pn_prefix] = ACTIONS(49),
  },
  [5] = {
    [sym__object] = STATE(4),
    [sym__literal] = STATE(4),
    [sym_blank_node_property_list] = STATE(4),
    [sym_collection] = STATE(4),
    [sym__numeric_literal] = STATE(4),
    [sym_string] = STATE(16),
    [sym_rdf_literal] = STATE(4),
    [sym_boolean_literal] = STATE(4),
    [sym__iri] = STATE(4),
    [sym_prefixed_name] = STATE(4),
    [sym_blank_node] = STATE(4),
    [sym_namespace] = STATE(18),
    [sym_blank_node_label] = STATE(22),
    [aux_sym_collection_repeat1] = STATE(4),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(59),
    [sym_iri_reference] = ACTIONS(61),
    [sym_integer] = ACTIONS(63),
    [sym_decimal] = ACTIONS(63),
    [sym_double] = ACTIONS(61),
    [sym__string_literal_quote] = ACTIONS(37),
    [sym__string_literal_single_quote] = ACTIONS(37),
    [sym__string_literal_long_single_quote] = ACTIONS(39),
    [sym__string_literal_long_quote] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_COLON] = ACTIONS(43),
    [anon_sym__COLON] = ACTIONS(45),
    [sym_anon] = ACTIONS(47),
    [sym_pn_prefix] = ACTIONS(49),
  },
  [6] = {
    [sym__object] = STATE(6),
    [sym__literal] = STATE(6),
    [sym_blank_node_property_list] = STATE(6),
    [sym_collection] = STATE(6),
    [sym__numeric_literal] = STATE(6),
    [sym_string] = STATE(16),
    [sym_rdf_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym__iri] = STATE(6),
    [sym_prefixed_name] = STATE(6),
    [sym_blank_node] = STATE(6),
    [sym_namespace] = STATE(18),
    [sym_blank_node_label] = STATE(22),
    [aux_sym_collection_repeat1] = STATE(6),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_RPAREN] = ACTIONS(71),
    [sym_iri_reference] = ACTIONS(73),
    [sym_integer] = ACTIONS(76),
    [sym_decimal] = ACTIONS(76),
    [sym_double] = ACTIONS(73),
    [sym__string_literal_quote] = ACTIONS(79),
    [sym__string_literal_single_quote] = ACTIONS(79),
    [sym__string_literal_long_single_quote] = ACTIONS(82),
    [sym__string_literal_long_quote] = ACTIONS(82),
    [anon_sym_true] = ACTIONS(85),
    [anon_sym_false] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(88),
    [anon_sym__COLON] = ACTIONS(91),
    [sym_anon] = ACTIONS(94),
    [sym_pn_prefix] = ACTIONS(97),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym__COLON,
    ACTIONS(23), 1,
      sym_anon,
    ACTIONS(104), 1,
      anon_sym_COLON,
    ACTIONS(106), 1,
      sym_pn_prefix,
    STATE(39), 1,
      sym_blank_node_label,
    STATE(47), 1,
      sym_string,
    STATE(56), 1,
      sym_namespace,
    STATE(57), 1,
      sym_object_list,
    ACTIONS(37), 2,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
    ACTIONS(39), 2,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(100), 2,
      sym_iri_reference,
      sym_double,
    ACTIONS(102), 2,
      sym_integer,
      sym_decimal,
    STATE(49), 10,
      sym__object,
      sym__literal,
      sym_blank_node_property_list,
      sym_collection,
      sym__numeric_literal,
      sym_rdf_literal,
      sym_boolean_literal,
      sym__iri,
      sym_prefixed_name,
      sym_blank_node,
  [63] = 16,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym__COLON,
    ACTIONS(23), 1,
      sym_anon,
    ACTIONS(104), 1,
      anon_sym_COLON,
    ACTIONS(106), 1,
      sym_pn_prefix,
    STATE(39), 1,
      sym_blank_node_label,
    STATE(47), 1,
      sym_string,
    STATE(56), 1,
      sym_namespace,
    STATE(64), 1,
      sym_object_list,
    ACTIONS(37), 2,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
    ACTIONS(39), 2,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(100), 2,
      sym_iri_reference,
      sym_double,
    ACTIONS(102), 2,
      sym_integer,
      sym_decimal,
    STATE(49), 10,
      sym__object,
      sym__literal,
      sym_blank_node_property_list,
      sym_collection,
      sym__numeric_literal,
      sym_rdf_literal,
      sym_boolean_literal,
      sym__iri,
      sym_prefixed_name,
      sym_blank_node,
  [126] = 15,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym__COLON,
    ACTIONS(23), 1,
      sym_anon,
    ACTIONS(104), 1,
      anon_sym_COLON,
    ACTIONS(106), 1,
      sym_pn_prefix,
    STATE(39), 1,
      sym_blank_node_label,
    STATE(47), 1,
      sym_string,
    STATE(56), 1,
      sym_namespace,
    ACTIONS(37), 2,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
    ACTIONS(39), 2,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(108), 2,
      sym_iri_reference,
      sym_double,
    ACTIONS(110), 2,
      sym_integer,
      sym_decimal,
    STATE(61), 10,
      sym__object,
      sym__literal,
      sym_blank_node_property_list,
      sym_collection,
      sym__numeric_literal,
      sym_rdf_literal,
      sym_boolean_literal,
      sym__iri,
      sym_prefixed_name,
      sym_blank_node,
  [186] = 21,
    ACTIONS(5), 1,
      anon_sym_ATprefix,
    ACTIONS(7), 1,
      anon_sym_ATbase,
    ACTIONS(9), 1,
      anon_sym_BASE,
    ACTIONS(11), 1,
      anon_sym_PREFIX,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_iri_reference,
    ACTIONS(19), 1,
      anon_sym_COLON,
    ACTIONS(21), 1,
      anon_sym__COLON,
    ACTIONS(23), 1,
      sym_anon,
    ACTIONS(25), 1,
      sym_pn_prefix,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_directive,
    STATE(35), 1,
      sym_blank_node_property_list,
    STATE(38), 1,
      sym_subject,
    STATE(39), 1,
      sym_blank_node_label,
    STATE(50), 1,
      sym_namespace,
    STATE(67), 1,
      sym_triples,
    STATE(11), 2,
      sym_statement,
      aux_sym_turtle_doc_repeat1,
    STATE(31), 4,
      sym_prefix_id,
      sym_base,
      sym_sparql_base,
      sym_sparql_prefix,
    STATE(58), 4,
      sym_collection,
      sym__iri,
      sym_prefixed_name,
      sym_blank_node,
  [257] = 21,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      anon_sym_ATprefix,
    ACTIONS(119), 1,
      anon_sym_ATbase,
    ACTIONS(122), 1,
      anon_sym_BASE,
    ACTIONS(125), 1,
      anon_sym_PREFIX,
    ACTIONS(128), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      sym_iri_reference,
    ACTIONS(137), 1,
      anon_sym_COLON,
    ACTIONS(140), 1,
      anon_sym__COLON,
    ACTIONS(143), 1,
      sym_anon,
    ACTIONS(146), 1,
      sym_pn_prefix,
    STATE(29), 1,
      sym_directive,
    STATE(35), 1,
      sym_blank_node_property_list,
    STATE(38), 1,
      sym_subject,
    STATE(39), 1,
      sym_blank_node_label,
    STATE(50), 1,
      sym_namespace,
    STATE(67), 1,
      sym_triples,
    STATE(11), 2,
      sym_statement,
      aux_sym_turtle_doc_repeat1,
    STATE(31), 4,
      sym_prefix_id,
      sym_base,
      sym_sparql_base,
      sym_sparql_prefix,
    STATE(58), 4,
      sym_collection,
      sym__iri,
      sym_prefixed_name,
      sym_blank_node,
  [328] = 2,
    ACTIONS(149), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(151), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_iri_reference,
      sym_double,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
      anon_sym_CARET_CARET,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
  [356] = 2,
    ACTIONS(153), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(155), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_iri_reference,
      sym_double,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [382] = 2,
    ACTIONS(157), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(159), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_iri_reference,
      sym_double,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [408] = 2,
    ACTIONS(161), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(163), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_iri_reference,
      sym_double,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [434] = 4,
    ACTIONS(169), 1,
      anon_sym_CARET_CARET,
    ACTIONS(171), 1,
      sym_lang_tag,
    ACTIONS(165), 8,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(167), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_iri_reference,
      sym_double,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [462] = 2,
    ACTIONS(175), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_iri_reference,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
      sym_anon,
    ACTIONS(173), 12,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      sym_double,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_pn_prefix,
      sym_pn_local,
  [485] = 3,
    ACTIONS(181), 1,
      sym_pn_local,
    ACTIONS(179), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_iri_reference,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
      sym_anon,
    ACTIONS(177), 11,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      sym_double,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_pn_prefix,
  [510] = 2,
    ACTIONS(185), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_iri_reference,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
      sym_anon,
    ACTIONS(183), 12,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      sym_double,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_pn_prefix,
      sym_pn_local,
  [533] = 2,
    ACTIONS(187), 8,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(189), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_iri_reference,
      sym_double,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [555] = 2,
    ACTIONS(191), 8,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(193), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_iri_reference,
      sym_double,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [577] = 2,
    ACTIONS(195), 8,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(197), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_iri_reference,
      sym_double,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [599] = 2,
    ACTIONS(199), 8,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(201), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_iri_reference,
      sym_double,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [621] = 2,
    ACTIONS(203), 8,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(205), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_iri_reference,
      sym_double,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [643] = 2,
    ACTIONS(207), 8,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(209), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_iri_reference,
      sym_double,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [665] = 2,
    ACTIONS(211), 8,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(213), 8,
      anon_sym_LPAREN,
      sym_iri_reference,
      sym_double,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [686] = 2,
    ACTIONS(217), 4,
      anon_sym_BASE,
      anon_sym_PREFIX,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(215), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      sym_iri_reference,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [703] = 2,
    ACTIONS(221), 4,
      anon_sym_BASE,
      anon_sym_PREFIX,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(219), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      sym_iri_reference,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [720] = 2,
    ACTIONS(225), 4,
      anon_sym_BASE,
      anon_sym_PREFIX,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(223), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      sym_iri_reference,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [737] = 2,
    ACTIONS(229), 4,
      anon_sym_BASE,
      anon_sym_PREFIX,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(227), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      sym_iri_reference,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [754] = 2,
    ACTIONS(233), 4,
      anon_sym_BASE,
      anon_sym_PREFIX,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(231), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      sym_iri_reference,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [771] = 2,
    ACTIONS(237), 4,
      anon_sym_BASE,
      anon_sym_PREFIX,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(235), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      sym_iri_reference,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [788] = 2,
    ACTIONS(241), 4,
      anon_sym_BASE,
      anon_sym_PREFIX,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(239), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      sym_iri_reference,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [805] = 8,
    ACTIONS(43), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      sym_pn_prefix,
    ACTIONS(245), 1,
      anon_sym_a,
    ACTIONS(247), 1,
      sym_iri_reference,
    STATE(8), 1,
      sym_predicate,
    STATE(18), 1,
      sym_namespace,
    STATE(26), 2,
      sym__iri,
      sym_prefixed_name,
    ACTIONS(243), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [833] = 9,
    ACTIONS(43), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      sym_pn_prefix,
    ACTIONS(245), 1,
      anon_sym_a,
    ACTIONS(247), 1,
      sym_iri_reference,
    ACTIONS(249), 1,
      anon_sym_DOT,
    STATE(7), 1,
      sym_predicate,
    STATE(18), 1,
      sym_namespace,
    STATE(72), 1,
      sym_property_list,
    STATE(26), 2,
      sym__iri,
      sym_prefixed_name,
  [862] = 8,
    ACTIONS(43), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      sym_pn_prefix,
    ACTIONS(245), 1,
      anon_sym_a,
    ACTIONS(247), 1,
      sym_iri_reference,
    STATE(7), 1,
      sym_predicate,
    STATE(18), 1,
      sym_namespace,
    STATE(76), 1,
      sym_property_list,
    STATE(26), 2,
      sym__iri,
      sym_prefixed_name,
  [888] = 8,
    ACTIONS(43), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      sym_pn_prefix,
    ACTIONS(245), 1,
      anon_sym_a,
    ACTIONS(247), 1,
      sym_iri_reference,
    STATE(7), 1,
      sym_predicate,
    STATE(18), 1,
      sym_namespace,
    STATE(69), 1,
      sym_property_list,
    STATE(26), 2,
      sym__iri,
      sym_prefixed_name,
  [914] = 8,
    ACTIONS(43), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      sym_pn_prefix,
    ACTIONS(245), 1,
      anon_sym_a,
    ACTIONS(247), 1,
      sym_iri_reference,
    STATE(7), 1,
      sym_predicate,
    STATE(18), 1,
      sym_namespace,
    STATE(72), 1,
      sym_property_list,
    STATE(26), 2,
      sym__iri,
      sym_prefixed_name,
  [940] = 2,
    ACTIONS(195), 2,
      anon_sym_a,
      sym_pn_prefix,
    ACTIONS(197), 6,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_iri_reference,
      anon_sym_COLON,
  [953] = 2,
    ACTIONS(199), 2,
      anon_sym_a,
      sym_pn_prefix,
    ACTIONS(201), 6,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_iri_reference,
      anon_sym_COLON,
  [966] = 2,
    ACTIONS(203), 2,
      anon_sym_a,
      sym_pn_prefix,
    ACTIONS(205), 6,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_iri_reference,
      anon_sym_COLON,
  [979] = 2,
    ACTIONS(187), 2,
      anon_sym_a,
      sym_pn_prefix,
    ACTIONS(189), 6,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_iri_reference,
      anon_sym_COLON,
  [992] = 2,
    ACTIONS(191), 2,
      anon_sym_a,
      sym_pn_prefix,
    ACTIONS(193), 6,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_iri_reference,
      anon_sym_COLON,
  [1005] = 2,
    ACTIONS(207), 2,
      anon_sym_a,
      sym_pn_prefix,
    ACTIONS(209), 6,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_iri_reference,
      anon_sym_COLON,
  [1018] = 5,
    ACTIONS(104), 1,
      anon_sym_COLON,
    ACTIONS(251), 1,
      sym_iri_reference,
    ACTIONS(253), 1,
      sym_pn_prefix,
    STATE(56), 1,
      sym_namespace,
    STATE(14), 2,
      sym__iri,
      sym_prefixed_name,
  [1035] = 5,
    ACTIONS(43), 1,
      anon_sym_COLON,
    ACTIONS(251), 1,
      sym_iri_reference,
    ACTIONS(255), 1,
      sym_pn_prefix,
    STATE(18), 1,
      sym_namespace,
    STATE(14), 2,
      sym__iri,
      sym_prefixed_name,
  [1052] = 3,
    ACTIONS(171), 1,
      sym_lang_tag,
    ACTIONS(257), 1,
      anon_sym_CARET_CARET,
    ACTIONS(167), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1065] = 1,
    ACTIONS(185), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_pn_local,
  [1073] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_object_list_repeat1,
    ACTIONS(259), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [1085] = 3,
    ACTIONS(179), 1,
      sym_iri_reference,
    ACTIONS(263), 1,
      sym_pn_local,
    ACTIONS(177), 3,
      anon_sym_a,
      anon_sym_COLON,
      sym_pn_prefix,
  [1097] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_object_list_repeat1,
    ACTIONS(265), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [1109] = 2,
    ACTIONS(175), 1,
      sym_iri_reference,
    ACTIONS(173), 4,
      anon_sym_a,
      anon_sym_COLON,
      sym_pn_prefix,
      sym_pn_local,
  [1119] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_object_list_repeat1,
    ACTIONS(267), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [1131] = 2,
    ACTIONS(185), 1,
      sym_iri_reference,
    ACTIONS(183), 4,
      anon_sym_a,
      anon_sym_COLON,
      sym_pn_prefix,
      sym_pn_local,
  [1141] = 1,
    ACTIONS(175), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_pn_local,
  [1149] = 2,
    ACTIONS(272), 1,
      sym_pn_local,
    ACTIONS(179), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1159] = 3,
    ACTIONS(276), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      aux_sym_property_list_repeat1,
    ACTIONS(274), 2,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1170] = 2,
    ACTIONS(278), 2,
      anon_sym_a,
      sym_pn_prefix,
    ACTIONS(280), 2,
      sym_iri_reference,
      anon_sym_COLON,
  [1179] = 3,
    ACTIONS(276), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_property_list_repeat1,
    ACTIONS(282), 2,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1190] = 3,
    ACTIONS(286), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_property_list_repeat1,
    ACTIONS(284), 2,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1201] = 1,
    ACTIONS(267), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1208] = 3,
    ACTIONS(19), 1,
      anon_sym_COLON,
    ACTIONS(289), 1,
      sym_pn_prefix,
    STATE(70), 1,
      sym_namespace,
  [1218] = 3,
    ACTIONS(19), 1,
      anon_sym_COLON,
    ACTIONS(289), 1,
      sym_pn_prefix,
    STATE(80), 1,
      sym_namespace,
  [1228] = 1,
    ACTIONS(291), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [1234] = 1,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
  [1238] = 1,
    ACTIONS(295), 1,
      anon_sym_COLON,
  [1242] = 1,
    ACTIONS(297), 1,
      anon_sym_DOT,
  [1246] = 1,
    ACTIONS(299), 1,
      aux_sym_blank_node_label_token1,
  [1250] = 1,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
  [1254] = 1,
    ACTIONS(303), 1,
      sym_iri_reference,
  [1258] = 1,
    ACTIONS(305), 1,
      anon_sym_DOT,
  [1262] = 1,
    ACTIONS(307), 1,
      anon_sym_DOT,
  [1266] = 1,
    ACTIONS(309), 1,
      sym_iri_reference,
  [1270] = 1,
    ACTIONS(311), 1,
      anon_sym_DOT,
  [1274] = 1,
    ACTIONS(313), 1,
      anon_sym_COLON,
  [1278] = 1,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
  [1282] = 1,
    ACTIONS(317), 1,
      aux_sym_blank_node_label_token1,
  [1286] = 1,
    ACTIONS(319), 1,
      sym_iri_reference,
  [1290] = 1,
    ACTIONS(321), 1,
      anon_sym_COLON,
  [1294] = 1,
    ACTIONS(323), 1,
      sym_iri_reference,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 63,
  [SMALL_STATE(9)] = 126,
  [SMALL_STATE(10)] = 186,
  [SMALL_STATE(11)] = 257,
  [SMALL_STATE(12)] = 328,
  [SMALL_STATE(13)] = 356,
  [SMALL_STATE(14)] = 382,
  [SMALL_STATE(15)] = 408,
  [SMALL_STATE(16)] = 434,
  [SMALL_STATE(17)] = 462,
  [SMALL_STATE(18)] = 485,
  [SMALL_STATE(19)] = 510,
  [SMALL_STATE(20)] = 533,
  [SMALL_STATE(21)] = 555,
  [SMALL_STATE(22)] = 577,
  [SMALL_STATE(23)] = 599,
  [SMALL_STATE(24)] = 621,
  [SMALL_STATE(25)] = 643,
  [SMALL_STATE(26)] = 665,
  [SMALL_STATE(27)] = 686,
  [SMALL_STATE(28)] = 703,
  [SMALL_STATE(29)] = 720,
  [SMALL_STATE(30)] = 737,
  [SMALL_STATE(31)] = 754,
  [SMALL_STATE(32)] = 771,
  [SMALL_STATE(33)] = 788,
  [SMALL_STATE(34)] = 805,
  [SMALL_STATE(35)] = 833,
  [SMALL_STATE(36)] = 862,
  [SMALL_STATE(37)] = 888,
  [SMALL_STATE(38)] = 914,
  [SMALL_STATE(39)] = 940,
  [SMALL_STATE(40)] = 953,
  [SMALL_STATE(41)] = 966,
  [SMALL_STATE(42)] = 979,
  [SMALL_STATE(43)] = 992,
  [SMALL_STATE(44)] = 1005,
  [SMALL_STATE(45)] = 1018,
  [SMALL_STATE(46)] = 1035,
  [SMALL_STATE(47)] = 1052,
  [SMALL_STATE(48)] = 1065,
  [SMALL_STATE(49)] = 1073,
  [SMALL_STATE(50)] = 1085,
  [SMALL_STATE(51)] = 1097,
  [SMALL_STATE(52)] = 1109,
  [SMALL_STATE(53)] = 1119,
  [SMALL_STATE(54)] = 1131,
  [SMALL_STATE(55)] = 1141,
  [SMALL_STATE(56)] = 1149,
  [SMALL_STATE(57)] = 1159,
  [SMALL_STATE(58)] = 1170,
  [SMALL_STATE(59)] = 1179,
  [SMALL_STATE(60)] = 1190,
  [SMALL_STATE(61)] = 1201,
  [SMALL_STATE(62)] = 1208,
  [SMALL_STATE(63)] = 1218,
  [SMALL_STATE(64)] = 1228,
  [SMALL_STATE(65)] = 1234,
  [SMALL_STATE(66)] = 1238,
  [SMALL_STATE(67)] = 1242,
  [SMALL_STATE(68)] = 1246,
  [SMALL_STATE(69)] = 1250,
  [SMALL_STATE(70)] = 1254,
  [SMALL_STATE(71)] = 1258,
  [SMALL_STATE(72)] = 1262,
  [SMALL_STATE(73)] = 1266,
  [SMALL_STATE(74)] = 1270,
  [SMALL_STATE(75)] = 1274,
  [SMALL_STATE(76)] = 1278,
  [SMALL_STATE(77)] = 1282,
  [SMALL_STATE(78)] = 1286,
  [SMALL_STATE(79)] = 1290,
  [SMALL_STATE(80)] = 1294,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_turtle_doc, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_collection_repeat1, 2), SHIFT_REPEAT(36),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2), SHIFT_REPEAT(3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2), SHIFT_REPEAT(6),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_collection_repeat1, 2), SHIFT_REPEAT(6),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_collection_repeat1, 2), SHIFT_REPEAT(12),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2), SHIFT_REPEAT(12),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_collection_repeat1, 2), SHIFT_REPEAT(13),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2), SHIFT_REPEAT(19),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2), SHIFT_REPEAT(68),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2), SHIFT_REPEAT(22),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_collection_repeat1, 2), SHIFT_REPEAT(75),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_turtle_doc, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(62),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(78),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(73),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(63),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(37),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(5),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(58),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(54),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(77),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(39),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(66),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rdf_literal, 3, .production_id = 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rdf_literal, 3, .production_id = 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rdf_literal, 2, .production_id = 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rdf_literal, 2, .production_id = 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rdf_literal, 1, .production_id = 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rdf_literal, 1, .production_id = 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefixed_name, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefixed_name, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefixed_name, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefixed_name, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_node, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_node, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_node_label, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_node_label, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_node_property_list, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_node_property_list, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparql_prefix, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparql_prefix, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparql_base, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparql_base, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_id, 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_id, 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triples, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_list, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_list, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_list_repeat1, 2),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_list_repeat1, 2), SHIFT_REPEAT(9),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_list, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_list, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2), SHIFT_REPEAT(34),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 3),
  [293] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triples, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_turtle(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .field_names = ts_field_names,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
