#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_comment = 1,
  anon_sym_DOT = 2,
  anon_sym_ATprefix = 3,
  anon_sym_ATbase = 4,
  anon_sym_BASE = 5,
  anon_sym_PREFIX = 6,
  anon_sym_SEMI = 7,
  anon_sym_COMMA = 8,
  anon_sym_a = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  sym_iri_reference = 14,
  sym_integer = 15,
  sym_decimal = 16,
  sym_double = 17,
  sym__string_literal_quote = 18,
  sym__string_literal_single_quote = 19,
  sym__string_literal_long_single_quote = 20,
  sym__string_literal_long_quote = 21,
  anon_sym_CARET_CARET = 22,
  anon_sym_true = 23,
  anon_sym_false = 24,
  anon_sym_COLON = 25,
  anon_sym__COLON = 26,
  aux_sym_blank_node_label_token1 = 27,
  sym_lang_tag = 28,
  sym_anon = 29,
  sym_pn_prefix = 30,
  sym_pn_local = 31,
  sym_turtle_doc = 32,
  sym_statement = 33,
  sym_directive = 34,
  sym_prefix_id = 35,
  sym_base = 36,
  sym_sparql_base = 37,
  sym_sparql_prefix = 38,
  sym_triples = 39,
  sym_property_list = 40,
  sym_object_list = 41,
  sym_predicate = 42,
  sym_subject = 43,
  sym__object = 44,
  sym__literal = 45,
  sym_blank_node_property_list = 46,
  sym_collection = 47,
  sym__numeric_literal = 48,
  sym_string = 49,
  sym_rdf_literal = 50,
  sym_boolean_literal = 51,
  sym__iri = 52,
  sym_prefixed_name = 53,
  sym__blank_node = 54,
  sym_namespace = 55,
  sym_blank_node_label = 56,
  aux_sym_turtle_doc_repeat1 = 57,
  aux_sym_property_list_repeat1 = 58,
  aux_sym_object_list_repeat1 = 59,
  aux_sym_collection_repeat1 = 60,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
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
  [sym__blank_node] = "_blank_node",
  [sym_namespace] = "namespace",
  [sym_blank_node_label] = "blank_node_label",
  [aux_sym_turtle_doc_repeat1] = "turtle_doc_repeat1",
  [aux_sym_property_list_repeat1] = "property_list_repeat1",
  [aux_sym_object_list_repeat1] = "object_list_repeat1",
  [aux_sym_collection_repeat1] = "collection_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
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
  [sym__blank_node] = sym__blank_node,
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
  [sym_comment] = {
    .visible = true,
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
  [sym__blank_node] = {
    .visible = false,
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
      if (eof) ADVANCE(97);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == ',') ADVANCE(106);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == 'B') ADVANCE(150);
      if (lookahead == 'P') ADVANCE(145);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == ']') ADVANCE(110);
      if (lookahead == '^') ADVANCE(34);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 't') ADVANCE(138);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '_') ADVANCE(163);
      if (lookahead == 'f') ADVANCE(162);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == ',') ADVANCE(106);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '@') ADVANCE(92);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == ']') ADVANCE(110);
      if (lookahead == '^') ADVANCE(34);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 't') ADVANCE(138);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '@') ADVANCE(92);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == '^') ADVANCE(34);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == ',') ADVANCE(106);
      if (lookahead == '.') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == ']') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(165);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == ',') ADVANCE(106);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '@') ADVANCE(92);
      if (lookahead == ']') ADVANCE(110);
      if (lookahead == '^') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == ',') ADVANCE(106);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == ']') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 18:
      if (lookahead == '%') ADVANCE(61);
      if (sym_pn_local_character_set_1(lookahead)) ADVANCE(165);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      if (lookahead == '\\') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 19:
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(164);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(49);
      END_STATE();
    case 20:
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(165);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(130);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < 0 || ' ' < lookahead) &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == 'U') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(67);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(6);
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
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 'U') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 32:
      if (lookahead == 'U') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(9);
      END_STATE();
    case 33:
      if (lookahead == 'U') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(71);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == '^') ADVANCE(123);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 43:
      if (lookahead == 'x') ADVANCE(101);
      END_STATE();
    case 44:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == ']') ADVANCE(135);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 49:
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '/') ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(165);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 92:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 94:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(151);
      if (lookahead == '.') ADVANCE(94);
      END_STATE();
    case 95:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(132);
      if (lookahead == '.') ADVANCE(95);
      END_STATE();
    case 96:
      if (eof) ADVANCE(97);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ',') ADVANCE(106);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == 'B') ADVANCE(150);
      if (lookahead == 'P') ADVANCE(145);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == ']') ADVANCE(110);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(96)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_ATprefix);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_ATbase);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_BASE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(151);
      if (lookahead == '.') ADVANCE(94);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PREFIX);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(151);
      if (lookahead == '.') ADVANCE(94);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(164);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(49);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(151);
      if (lookahead == '.') ADVANCE(94);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == ']') ADVANCE(135);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_iri_reference);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__string_literal_quote);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__string_literal_quote);
      if (lookahead == '"') ADVANCE(9);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__string_literal_single_quote);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__string_literal_single_quote);
      if (lookahead == '\'') ADVANCE(25);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__string_literal_long_single_quote);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__string_literal_long_quote);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(164);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(49);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(151);
      if (lookahead == '.') ADVANCE(94);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(164);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(49);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(151);
      if (lookahead == '.') ADVANCE(94);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(165);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(49);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym__COLON);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym__COLON);
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(165);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(49);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_blank_node_label_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(132);
      if (lookahead == '.') ADVANCE(95);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_lang_tag);
      if (lookahead == '-') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_lang_tag);
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_anon);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (sym_pn_prefix_character_set_1(lookahead)) ADVANCE(151);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (sym_pn_prefix_character_set_2(lookahead)) ADVANCE(151);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (sym_pn_prefix_character_set_3(lookahead)) ADVANCE(151);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (sym_pn_prefix_character_set_4(lookahead)) ADVANCE(151);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (sym_pn_prefix_character_set_5(lookahead)) ADVANCE(151);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (sym_pn_prefix_character_set_5(lookahead)) ADVANCE(151);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(151);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 143:
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
          lookahead == 8256) ADVANCE(151);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'X') ADVANCE(104);
      END_STATE();
    case 144:
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
          lookahead == 8256) ADVANCE(151);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'S') ADVANCE(149);
      END_STATE();
    case 145:
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
          lookahead == 8256) ADVANCE(151);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'R') ADVANCE(148);
      END_STATE();
    case 146:
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
          lookahead == 8256) ADVANCE(151);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'I') ADVANCE(143);
      END_STATE();
    case 147:
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
          lookahead == 8256) ADVANCE(151);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'F') ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (sym_pn_prefix_character_set_11(lookahead)) ADVANCE(151);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'E') ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (sym_pn_prefix_character_set_11(lookahead)) ADVANCE(151);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'E') ADVANCE(103);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(151);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'A') ADVANCE(144);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(151);
      if (lookahead == '.') ADVANCE(94);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(165);
      if (lookahead == '\\') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(61);
      if (sym_pn_local_character_set_1(lookahead)) ADVANCE(165);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      if (lookahead == '\\') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(61);
      if (sym_pn_local_character_set_1(lookahead)) ADVANCE(165);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      if (lookahead == '\\') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(165);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(61);
      if (sym_pn_prefix_character_set_1(lookahead)) ADVANCE(164);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(61);
      if (sym_pn_prefix_character_set_2(lookahead)) ADVANCE(164);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(61);
      if (sym_pn_prefix_character_set_3(lookahead)) ADVANCE(164);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(61);
      if (sym_pn_prefix_character_set_4(lookahead)) ADVANCE(164);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(61);
      if (sym_pn_prefix_character_set_5(lookahead)) ADVANCE(164);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(61);
      if (sym_pn_prefix_character_set_5(lookahead)) ADVANCE(164);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(164);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(165);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == ':') ADVANCE(131);
      if (lookahead == '\\') ADVANCE(49);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(164);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(49);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(165);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(49);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 96},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 96},
  [11] = {.lex_state = 96},
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
  [26] = {.lex_state = 96},
  [27] = {.lex_state = 96},
  [28] = {.lex_state = 96},
  [29] = {.lex_state = 96},
  [30] = {.lex_state = 96},
  [31] = {.lex_state = 96},
  [32] = {.lex_state = 96},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 96},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 96},
  [53] = {.lex_state = 96},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 96},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 96},
  [58] = {.lex_state = 96},
  [59] = {.lex_state = 96},
  [60] = {.lex_state = 96},
  [61] = {.lex_state = 15},
  [62] = {.lex_state = 15},
  [63] = {.lex_state = 96},
  [64] = {.lex_state = 96},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 17},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 96},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 96},
  [72] = {.lex_state = 17},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_ATprefix] = ACTIONS(1),
    [anon_sym_ATbase] = ACTIONS(1),
    [anon_sym_BASE] = ACTIONS(1),
    [anon_sym_PREFIX] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_a] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_iri_reference] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_decimal] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [sym__string_literal_quote] = ACTIONS(1),
    [sym__string_literal_single_quote] = ACTIONS(1),
    [sym__string_literal_long_single_quote] = ACTIONS(1),
    [sym__string_literal_long_quote] = ACTIONS(1),
    [anon_sym_CARET_CARET] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym__COLON] = ACTIONS(1),
    [sym_anon] = ACTIONS(1),
    [sym_pn_prefix] = ACTIONS(1),
  },
  [1] = {
    [sym_turtle_doc] = STATE(65),
    [sym_statement] = STATE(11),
    [sym_directive] = STATE(28),
    [sym_prefix_id] = STATE(27),
    [sym_base] = STATE(27),
    [sym_sparql_base] = STATE(27),
    [sym_sparql_prefix] = STATE(27),
    [sym_triples] = STATE(64),
    [sym_subject] = STATE(35),
    [sym_blank_node_property_list] = STATE(34),
    [sym_collection] = STATE(56),
    [sym__iri] = STATE(56),
    [sym_prefixed_name] = STATE(56),
    [sym__blank_node] = STATE(56),
    [sym_namespace] = STATE(46),
    [sym_blank_node_label] = STATE(56),
    [aux_sym_turtle_doc_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_ATprefix] = ACTIONS(7),
    [anon_sym_ATbase] = ACTIONS(9),
    [anon_sym_BASE] = ACTIONS(11),
    [anon_sym_PREFIX] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_iri_reference] = ACTIONS(19),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym__COLON] = ACTIONS(23),
    [sym_anon] = ACTIONS(19),
    [sym_pn_prefix] = ACTIONS(25),
  },
  [2] = {
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
    [sym__blank_node] = STATE(2),
    [sym_namespace] = STATE(19),
    [sym_blank_node_label] = STATE(2),
    [aux_sym_collection_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(30),
    [anon_sym_RPAREN] = ACTIONS(33),
    [sym_iri_reference] = ACTIONS(35),
    [sym_integer] = ACTIONS(38),
    [sym_decimal] = ACTIONS(38),
    [sym_double] = ACTIONS(35),
    [sym__string_literal_quote] = ACTIONS(41),
    [sym__string_literal_single_quote] = ACTIONS(41),
    [sym__string_literal_long_single_quote] = ACTIONS(44),
    [sym__string_literal_long_quote] = ACTIONS(44),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(50),
    [anon_sym__COLON] = ACTIONS(53),
    [sym_anon] = ACTIONS(35),
    [sym_pn_prefix] = ACTIONS(56),
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
    [sym__blank_node] = STATE(2),
    [sym_namespace] = STATE(19),
    [sym_blank_node_label] = STATE(2),
    [aux_sym_collection_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(63),
    [sym_iri_reference] = ACTIONS(65),
    [sym_integer] = ACTIONS(67),
    [sym_decimal] = ACTIONS(67),
    [sym_double] = ACTIONS(65),
    [sym__string_literal_quote] = ACTIONS(69),
    [sym__string_literal_single_quote] = ACTIONS(69),
    [sym__string_literal_long_single_quote] = ACTIONS(71),
    [sym__string_literal_long_quote] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_false] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym__COLON] = ACTIONS(77),
    [sym_anon] = ACTIONS(65),
    [sym_pn_prefix] = ACTIONS(79),
  },
  [4] = {
    [sym__object] = STATE(3),
    [sym__literal] = STATE(3),
    [sym_blank_node_property_list] = STATE(3),
    [sym_collection] = STATE(3),
    [sym__numeric_literal] = STATE(3),
    [sym_string] = STATE(16),
    [sym_rdf_literal] = STATE(3),
    [sym_boolean_literal] = STATE(3),
    [sym__iri] = STATE(3),
    [sym_prefixed_name] = STATE(3),
    [sym__blank_node] = STATE(3),
    [sym_namespace] = STATE(19),
    [sym_blank_node_label] = STATE(3),
    [aux_sym_collection_repeat1] = STATE(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(81),
    [sym_iri_reference] = ACTIONS(83),
    [sym_integer] = ACTIONS(85),
    [sym_decimal] = ACTIONS(85),
    [sym_double] = ACTIONS(83),
    [sym__string_literal_quote] = ACTIONS(69),
    [sym__string_literal_single_quote] = ACTIONS(69),
    [sym__string_literal_long_single_quote] = ACTIONS(71),
    [sym__string_literal_long_quote] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_false] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym__COLON] = ACTIONS(77),
    [sym_anon] = ACTIONS(83),
    [sym_pn_prefix] = ACTIONS(79),
  },
  [5] = {
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
    [sym__blank_node] = STATE(6),
    [sym_namespace] = STATE(19),
    [sym_blank_node_label] = STATE(6),
    [aux_sym_collection_repeat1] = STATE(6),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(87),
    [sym_iri_reference] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [sym_decimal] = ACTIONS(91),
    [sym_double] = ACTIONS(89),
    [sym__string_literal_quote] = ACTIONS(69),
    [sym__string_literal_single_quote] = ACTIONS(69),
    [sym__string_literal_long_single_quote] = ACTIONS(71),
    [sym__string_literal_long_quote] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_false] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym__COLON] = ACTIONS(77),
    [sym_anon] = ACTIONS(89),
    [sym_pn_prefix] = ACTIONS(79),
  },
  [6] = {
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
    [sym__blank_node] = STATE(2),
    [sym_namespace] = STATE(19),
    [sym_blank_node_label] = STATE(2),
    [aux_sym_collection_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(93),
    [sym_iri_reference] = ACTIONS(65),
    [sym_integer] = ACTIONS(67),
    [sym_decimal] = ACTIONS(67),
    [sym_double] = ACTIONS(65),
    [sym__string_literal_quote] = ACTIONS(69),
    [sym__string_literal_single_quote] = ACTIONS(69),
    [sym__string_literal_long_single_quote] = ACTIONS(71),
    [sym__string_literal_long_quote] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_false] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym__COLON] = ACTIONS(77),
    [sym_anon] = ACTIONS(65),
    [sym_pn_prefix] = ACTIONS(79),
  },
  [7] = {
    [sym_object_list] = STATE(59),
    [sym__object] = STATE(47),
    [sym__literal] = STATE(47),
    [sym_blank_node_property_list] = STATE(47),
    [sym_collection] = STATE(47),
    [sym__numeric_literal] = STATE(47),
    [sym_string] = STATE(45),
    [sym_rdf_literal] = STATE(47),
    [sym_boolean_literal] = STATE(47),
    [sym__iri] = STATE(47),
    [sym_prefixed_name] = STATE(47),
    [sym__blank_node] = STATE(47),
    [sym_namespace] = STATE(50),
    [sym_blank_node_label] = STATE(47),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_iri_reference] = ACTIONS(95),
    [sym_integer] = ACTIONS(97),
    [sym_decimal] = ACTIONS(97),
    [sym_double] = ACTIONS(95),
    [sym__string_literal_quote] = ACTIONS(69),
    [sym__string_literal_single_quote] = ACTIONS(69),
    [sym__string_literal_long_single_quote] = ACTIONS(71),
    [sym__string_literal_long_quote] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_false] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym__COLON] = ACTIONS(23),
    [sym_anon] = ACTIONS(95),
    [sym_pn_prefix] = ACTIONS(101),
  },
  [8] = {
    [sym_object_list] = STATE(60),
    [sym__object] = STATE(47),
    [sym__literal] = STATE(47),
    [sym_blank_node_property_list] = STATE(47),
    [sym_collection] = STATE(47),
    [sym__numeric_literal] = STATE(47),
    [sym_string] = STATE(45),
    [sym_rdf_literal] = STATE(47),
    [sym_boolean_literal] = STATE(47),
    [sym__iri] = STATE(47),
    [sym_prefixed_name] = STATE(47),
    [sym__blank_node] = STATE(47),
    [sym_namespace] = STATE(50),
    [sym_blank_node_label] = STATE(47),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_iri_reference] = ACTIONS(95),
    [sym_integer] = ACTIONS(97),
    [sym_decimal] = ACTIONS(97),
    [sym_double] = ACTIONS(95),
    [sym__string_literal_quote] = ACTIONS(69),
    [sym__string_literal_single_quote] = ACTIONS(69),
    [sym__string_literal_long_single_quote] = ACTIONS(71),
    [sym__string_literal_long_quote] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_false] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym__COLON] = ACTIONS(23),
    [sym_anon] = ACTIONS(95),
    [sym_pn_prefix] = ACTIONS(101),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym__COLON,
    ACTIONS(99), 1,
      anon_sym_COLON,
    ACTIONS(101), 1,
      sym_pn_prefix,
    STATE(45), 1,
      sym_string,
    STATE(50), 1,
      sym_namespace,
    ACTIONS(69), 2,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
    ACTIONS(71), 2,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(105), 2,
      sym_integer,
      sym_decimal,
    ACTIONS(103), 3,
      sym_iri_reference,
      sym_double,
      sym_anon,
    STATE(57), 11,
      sym__object,
      sym__literal,
      sym_blank_node_property_list,
      sym_collection,
      sym__numeric_literal,
      sym_rdf_literal,
      sym_boolean_literal,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
  [59] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      anon_sym_ATprefix,
    ACTIONS(112), 1,
      anon_sym_ATbase,
    ACTIONS(115), 1,
      anon_sym_BASE,
    ACTIONS(118), 1,
      anon_sym_PREFIX,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_COLON,
    ACTIONS(133), 1,
      anon_sym__COLON,
    ACTIONS(136), 1,
      sym_pn_prefix,
    STATE(28), 1,
      sym_directive,
    STATE(34), 1,
      sym_blank_node_property_list,
    STATE(35), 1,
      sym_subject,
    STATE(46), 1,
      sym_namespace,
    STATE(64), 1,
      sym_triples,
    ACTIONS(127), 2,
      sym_iri_reference,
      sym_anon,
    STATE(10), 2,
      sym_statement,
      aux_sym_turtle_doc_repeat1,
    STATE(27), 4,
      sym_prefix_id,
      sym_base,
      sym_sparql_base,
      sym_sparql_prefix,
    STATE(56), 5,
      sym_collection,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
  [129] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_ATprefix,
    ACTIONS(9), 1,
      anon_sym_ATbase,
    ACTIONS(11), 1,
      anon_sym_BASE,
    ACTIONS(13), 1,
      anon_sym_PREFIX,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_COLON,
    ACTIONS(23), 1,
      anon_sym__COLON,
    ACTIONS(25), 1,
      sym_pn_prefix,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym_directive,
    STATE(34), 1,
      sym_blank_node_property_list,
    STATE(35), 1,
      sym_subject,
    STATE(46), 1,
      sym_namespace,
    STATE(64), 1,
      sym_triples,
    ACTIONS(19), 2,
      sym_iri_reference,
      sym_anon,
    STATE(10), 2,
      sym_statement,
      aux_sym_turtle_doc_repeat1,
    STATE(27), 4,
      sym_prefix_id,
      sym_base,
      sym_sparql_base,
      sym_sparql_prefix,
    STATE(56), 5,
      sym_collection,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
  [199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(143), 14,
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
  [230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(147), 12,
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
  [259] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(151), 12,
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
  [288] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [317] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_CARET_CARET,
    ACTIONS(163), 1,
      sym_lang_tag,
    ACTIONS(157), 8,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(159), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_iri_reference,
      sym_double,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_iri_reference,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
      sym_anon,
    ACTIONS(165), 12,
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
  [374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_iri_reference,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
      sym_anon,
    ACTIONS(169), 12,
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
  [400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_pn_local,
    ACTIONS(175), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_iri_reference,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
      sym_anon,
    ACTIONS(173), 11,
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
  [428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 8,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(181), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_iri_reference,
      sym_double,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 8,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(185), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_iri_reference,
      sym_double,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [478] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [503] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [528] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 8,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(201), 8,
      anon_sym_LPAREN,
      sym_iri_reference,
      sym_double,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 4,
      anon_sym_BASE,
      anon_sym_PREFIX,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(203), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      sym_iri_reference,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 4,
      anon_sym_BASE,
      anon_sym_PREFIX,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(207), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      sym_iri_reference,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 4,
      anon_sym_BASE,
      anon_sym_PREFIX,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(211), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      sym_iri_reference,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [637] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [657] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [677] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [697] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [717] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_COLON,
    ACTIONS(79), 1,
      sym_pn_prefix,
    ACTIONS(233), 1,
      anon_sym_a,
    ACTIONS(235), 1,
      sym_iri_reference,
    STATE(8), 1,
      sym_predicate,
    STATE(19), 1,
      sym_namespace,
    STATE(25), 2,
      sym__iri,
      sym_prefixed_name,
    ACTIONS(231), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [748] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_COLON,
    ACTIONS(79), 1,
      sym_pn_prefix,
    ACTIONS(233), 1,
      anon_sym_a,
    ACTIONS(235), 1,
      sym_iri_reference,
    ACTIONS(237), 1,
      anon_sym_DOT,
    STATE(7), 1,
      sym_predicate,
    STATE(19), 1,
      sym_namespace,
    STATE(71), 1,
      sym_property_list,
    STATE(25), 2,
      sym__iri,
      sym_prefixed_name,
  [780] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_COLON,
    ACTIONS(79), 1,
      sym_pn_prefix,
    ACTIONS(233), 1,
      anon_sym_a,
    ACTIONS(235), 1,
      sym_iri_reference,
    STATE(7), 1,
      sym_predicate,
    STATE(19), 1,
      sym_namespace,
    STATE(71), 1,
      sym_property_list,
    STATE(25), 2,
      sym__iri,
      sym_prefixed_name,
  [809] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_COLON,
    ACTIONS(79), 1,
      sym_pn_prefix,
    ACTIONS(233), 1,
      anon_sym_a,
    ACTIONS(235), 1,
      sym_iri_reference,
    STATE(7), 1,
      sym_predicate,
    STATE(19), 1,
      sym_namespace,
    STATE(74), 1,
      sym_property_list,
    STATE(25), 2,
      sym__iri,
      sym_prefixed_name,
  [838] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_COLON,
    ACTIONS(79), 1,
      sym_pn_prefix,
    ACTIONS(233), 1,
      anon_sym_a,
    ACTIONS(235), 1,
      sym_iri_reference,
    STATE(7), 1,
      sym_predicate,
    STATE(19), 1,
      sym_namespace,
    STATE(68), 1,
      sym_property_list,
    STATE(25), 2,
      sym__iri,
      sym_prefixed_name,
  [867] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [883] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_a,
      sym_pn_prefix,
    ACTIONS(181), 6,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_iri_reference,
      anon_sym_COLON,
  [915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_a,
      sym_pn_prefix,
    ACTIONS(185), 6,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_iri_reference,
      anon_sym_COLON,
  [931] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [947] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_COLON,
    ACTIONS(239), 1,
      sym_iri_reference,
    ACTIONS(241), 1,
      sym_pn_prefix,
    STATE(50), 1,
      sym_namespace,
    STATE(14), 2,
      sym__iri,
      sym_prefixed_name,
  [967] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_COLON,
    ACTIONS(239), 1,
      sym_iri_reference,
    ACTIONS(243), 1,
      sym_pn_prefix,
    STATE(19), 1,
      sym_namespace,
    STATE(14), 2,
      sym__iri,
      sym_prefixed_name,
  [987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_lang_tag,
    ACTIONS(245), 1,
      anon_sym_CARET_CARET,
    ACTIONS(159), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1003] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_iri_reference,
    ACTIONS(247), 1,
      sym_pn_local,
    ACTIONS(173), 3,
      anon_sym_a,
      anon_sym_COLON,
      sym_pn_prefix,
  [1018] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_object_list_repeat1,
    ACTIONS(249), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [1033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_iri_reference,
    ACTIONS(165), 4,
      anon_sym_a,
      anon_sym_COLON,
      sym_pn_prefix,
      sym_pn_local,
  [1046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_pn_local,
  [1057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_pn_local,
    ACTIONS(175), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_pn_local,
  [1081] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_object_list_repeat1,
    ACTIONS(255), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [1096] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_object_list_repeat1,
    ACTIONS(257), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [1111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_iri_reference,
    ACTIONS(169), 4,
      anon_sym_a,
      anon_sym_COLON,
      sym_pn_prefix,
      sym_pn_local,
  [1124] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      aux_sym_property_list_repeat1,
    ACTIONS(262), 2,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 2,
      anon_sym_a,
      sym_pn_prefix,
    ACTIONS(269), 2,
      sym_iri_reference,
      anon_sym_COLON,
  [1150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      aux_sym_property_list_repeat1,
    ACTIONS(271), 2,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1174] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_SEMI,
    STATE(58), 1,
      aux_sym_property_list_repeat1,
    ACTIONS(275), 2,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [1197] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_COLON,
    ACTIONS(279), 1,
      sym_pn_prefix,
    STATE(75), 1,
      sym_namespace,
  [1210] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_COLON,
    ACTIONS(279), 1,
      sym_pn_prefix,
    STATE(70), 1,
      sym_namespace,
  [1223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_DOT,
  [1230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOT,
  [1237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
  [1244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_COLON,
  [1251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      aux_sym_blank_node_label_token1,
  [1258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_RBRACK,
  [1265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DOT,
  [1272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      sym_iri_reference,
  [1279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_DOT,
  [1286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      aux_sym_blank_node_label_token1,
  [1293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_COLON,
  [1300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
  [1307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym_iri_reference,
  [1314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_iri_reference,
  [1321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_COLON,
  [1328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym_iri_reference,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 59,
  [SMALL_STATE(11)] = 129,
  [SMALL_STATE(12)] = 199,
  [SMALL_STATE(13)] = 230,
  [SMALL_STATE(14)] = 259,
  [SMALL_STATE(15)] = 288,
  [SMALL_STATE(16)] = 317,
  [SMALL_STATE(17)] = 348,
  [SMALL_STATE(18)] = 374,
  [SMALL_STATE(19)] = 400,
  [SMALL_STATE(20)] = 428,
  [SMALL_STATE(21)] = 453,
  [SMALL_STATE(22)] = 478,
  [SMALL_STATE(23)] = 503,
  [SMALL_STATE(24)] = 528,
  [SMALL_STATE(25)] = 553,
  [SMALL_STATE(26)] = 577,
  [SMALL_STATE(27)] = 597,
  [SMALL_STATE(28)] = 617,
  [SMALL_STATE(29)] = 637,
  [SMALL_STATE(30)] = 657,
  [SMALL_STATE(31)] = 677,
  [SMALL_STATE(32)] = 697,
  [SMALL_STATE(33)] = 717,
  [SMALL_STATE(34)] = 748,
  [SMALL_STATE(35)] = 780,
  [SMALL_STATE(36)] = 809,
  [SMALL_STATE(37)] = 838,
  [SMALL_STATE(38)] = 867,
  [SMALL_STATE(39)] = 883,
  [SMALL_STATE(40)] = 899,
  [SMALL_STATE(41)] = 915,
  [SMALL_STATE(42)] = 931,
  [SMALL_STATE(43)] = 947,
  [SMALL_STATE(44)] = 967,
  [SMALL_STATE(45)] = 987,
  [SMALL_STATE(46)] = 1003,
  [SMALL_STATE(47)] = 1018,
  [SMALL_STATE(48)] = 1033,
  [SMALL_STATE(49)] = 1046,
  [SMALL_STATE(50)] = 1057,
  [SMALL_STATE(51)] = 1070,
  [SMALL_STATE(52)] = 1081,
  [SMALL_STATE(53)] = 1096,
  [SMALL_STATE(54)] = 1111,
  [SMALL_STATE(55)] = 1124,
  [SMALL_STATE(56)] = 1138,
  [SMALL_STATE(57)] = 1150,
  [SMALL_STATE(58)] = 1160,
  [SMALL_STATE(59)] = 1174,
  [SMALL_STATE(60)] = 1188,
  [SMALL_STATE(61)] = 1197,
  [SMALL_STATE(62)] = 1210,
  [SMALL_STATE(63)] = 1223,
  [SMALL_STATE(64)] = 1230,
  [SMALL_STATE(65)] = 1237,
  [SMALL_STATE(66)] = 1244,
  [SMALL_STATE(67)] = 1251,
  [SMALL_STATE(68)] = 1258,
  [SMALL_STATE(69)] = 1265,
  [SMALL_STATE(70)] = 1272,
  [SMALL_STATE(71)] = 1279,
  [SMALL_STATE(72)] = 1286,
  [SMALL_STATE(73)] = 1293,
  [SMALL_STATE(74)] = 1300,
  [SMALL_STATE(75)] = 1307,
  [SMALL_STATE(76)] = 1314,
  [SMALL_STATE(77)] = 1321,
  [SMALL_STATE(78)] = 1328,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_turtle_doc, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_collection_repeat1, 2), SHIFT_REPEAT(36),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2), SHIFT_REPEAT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2), SHIFT_REPEAT(2),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_collection_repeat1, 2), SHIFT_REPEAT(2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_collection_repeat1, 2), SHIFT_REPEAT(12),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2), SHIFT_REPEAT(12),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_collection_repeat1, 2), SHIFT_REPEAT(15),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2), SHIFT_REPEAT(17),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2), SHIFT_REPEAT(72),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_collection_repeat1, 2), SHIFT_REPEAT(73),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(62),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(78),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(76),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(61),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(37),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(5),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(56),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(48),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(67),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(66),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_turtle_doc, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rdf_literal, 2, .production_id = 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rdf_literal, 2, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rdf_literal, 3, .production_id = 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rdf_literal, 3, .production_id = 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rdf_literal, 1, .production_id = 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rdf_literal, 1, .production_id = 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefixed_name, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefixed_name, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefixed_name, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefixed_name, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_node_property_list, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_node_property_list, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_node_label, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_node_label, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_id, 4),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_id, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparql_base, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparql_base, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparql_prefix, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparql_prefix, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triples, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_list, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_list, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_list_repeat1, 2),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_list_repeat1, 2), SHIFT_REPEAT(9),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2), SHIFT_REPEAT(33),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_list, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_list, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [285] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triples, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
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
