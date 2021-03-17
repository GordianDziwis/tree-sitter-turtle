#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  sym_pn_prefix = 1,
  sym_comment = 2,
  anon_sym_DOT = 3,
  anon_sym_ATprefix = 4,
  anon_sym_ATbase = 5,
  aux_sym_sparql_base_token1 = 6,
  aux_sym_sparql_prefix_token1 = 7,
  anon_sym_SEMI = 8,
  anon_sym_COMMA = 9,
  anon_sym_a = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_LT = 15,
  aux_sym_iri_reference_token1 = 16,
  anon_sym_GT = 17,
  sym_integer = 18,
  sym_decimal = 19,
  sym_double = 20,
  anon_sym_DQUOTE = 21,
  aux_sym__string_literal_quote_token1 = 22,
  aux_sym__string_literal_quote_token2 = 23,
  anon_sym_SQUOTE = 24,
  aux_sym__string_literal_single_quote_token1 = 25,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 26,
  anon_sym_SQUOTE_SQUOTE = 27,
  aux_sym__string_literal_long_single_quote_token1 = 28,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 29,
  anon_sym_DQUOTE_DQUOTE = 30,
  aux_sym__string_literal_long_quote_token1 = 31,
  anon_sym_CARET_CARET = 32,
  anon_sym_true = 33,
  anon_sym_false = 34,
  anon_sym_COLON = 35,
  anon_sym__COLON = 36,
  aux_sym_blank_node_label_token1 = 37,
  sym_lang_tag = 38,
  sym_echar = 39,
  sym_anon = 40,
  sym_pn_local = 41,
  sym_turtle_doc = 42,
  sym_statement = 43,
  sym_directive = 44,
  sym_prefix_id = 45,
  sym_base = 46,
  sym_sparql_base = 47,
  sym_sparql_prefix = 48,
  sym_triples = 49,
  sym_property_list = 50,
  sym_property = 51,
  sym_object_list = 52,
  sym_predicate = 53,
  sym_subject = 54,
  sym__object = 55,
  sym__literal = 56,
  sym_blank_node_property_list = 57,
  sym_collection = 58,
  sym_object_collection = 59,
  sym__numeric_literal = 60,
  sym_string = 61,
  sym_iri_reference = 62,
  sym__string_literal_quote = 63,
  sym__string_literal_single_quote = 64,
  sym__string_literal_long_single_quote = 65,
  sym__string_literal_long_quote = 66,
  sym_rdf_literal = 67,
  sym_boolean_literal = 68,
  sym__iri = 69,
  sym_prefixed_name = 70,
  sym__blank_node = 71,
  sym_namespace = 72,
  sym_blank_node_label = 73,
  aux_sym_turtle_doc_repeat1 = 74,
  aux_sym_property_list_repeat1 = 75,
  aux_sym_object_list_repeat1 = 76,
  aux_sym_object_collection_repeat1 = 77,
  aux_sym__string_literal_quote_repeat1 = 78,
  aux_sym__string_literal_single_quote_repeat1 = 79,
  aux_sym__string_literal_long_single_quote_repeat1 = 80,
  aux_sym__string_literal_long_quote_repeat1 = 81,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_pn_prefix] = "pn_prefix",
  [sym_comment] = "comment",
  [anon_sym_DOT] = ".",
  [anon_sym_ATprefix] = "@prefix",
  [anon_sym_ATbase] = "@base",
  [aux_sym_sparql_base_token1] = "BASE",
  [aux_sym_sparql_prefix_token1] = "PREFIX",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [anon_sym_a] = "a",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LT] = "<",
  [aux_sym_iri_reference_token1] = "iri_reference_token1",
  [anon_sym_GT] = ">",
  [sym_integer] = "integer",
  [sym_decimal] = "decimal",
  [sym_double] = "double",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_literal_quote_token1] = "_string_literal_quote_token1",
  [aux_sym__string_literal_quote_token2] = "_string_literal_quote_token2",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__string_literal_single_quote_token1] = "_string_literal_single_quote_token1",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [anon_sym_SQUOTE_SQUOTE] = "''",
  [aux_sym__string_literal_long_single_quote_token1] = "_string_literal_long_single_quote_token1",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [anon_sym_DQUOTE_DQUOTE] = "\"\"",
  [aux_sym__string_literal_long_quote_token1] = "_string_literal_long_quote_token1",
  [anon_sym_CARET_CARET] = "^^",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_COLON] = ":",
  [anon_sym__COLON] = "_:",
  [aux_sym_blank_node_label_token1] = "blank_node_label_token1",
  [sym_lang_tag] = "lang_tag",
  [sym_echar] = "echar",
  [sym_anon] = "anon",
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
  [sym_property] = "property",
  [sym_object_list] = "object_list",
  [sym_predicate] = "predicate",
  [sym_subject] = "subject",
  [sym__object] = "_object",
  [sym__literal] = "_literal",
  [sym_blank_node_property_list] = "blank_node_property_list",
  [sym_collection] = "collection",
  [sym_object_collection] = "object_collection",
  [sym__numeric_literal] = "_numeric_literal",
  [sym_string] = "string",
  [sym_iri_reference] = "iri_reference",
  [sym__string_literal_quote] = "_string_literal_quote",
  [sym__string_literal_single_quote] = "_string_literal_single_quote",
  [sym__string_literal_long_single_quote] = "_string_literal_long_single_quote",
  [sym__string_literal_long_quote] = "_string_literal_long_quote",
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
  [aux_sym_object_collection_repeat1] = "object_collection_repeat1",
  [aux_sym__string_literal_quote_repeat1] = "_string_literal_quote_repeat1",
  [aux_sym__string_literal_single_quote_repeat1] = "_string_literal_single_quote_repeat1",
  [aux_sym__string_literal_long_single_quote_repeat1] = "_string_literal_long_single_quote_repeat1",
  [aux_sym__string_literal_long_quote_repeat1] = "_string_literal_long_quote_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_pn_prefix] = sym_pn_prefix,
  [sym_comment] = sym_comment,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_ATprefix] = anon_sym_ATprefix,
  [anon_sym_ATbase] = anon_sym_ATbase,
  [aux_sym_sparql_base_token1] = aux_sym_sparql_base_token1,
  [aux_sym_sparql_prefix_token1] = aux_sym_sparql_prefix_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_a] = anon_sym_a,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_iri_reference_token1] = aux_sym_iri_reference_token1,
  [anon_sym_GT] = anon_sym_GT,
  [sym_integer] = sym_integer,
  [sym_decimal] = sym_decimal,
  [sym_double] = sym_double,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_literal_quote_token1] = aux_sym__string_literal_quote_token1,
  [aux_sym__string_literal_quote_token2] = aux_sym__string_literal_quote_token2,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__string_literal_single_quote_token1] = aux_sym__string_literal_single_quote_token1,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [anon_sym_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE,
  [aux_sym__string_literal_long_single_quote_token1] = aux_sym__string_literal_long_single_quote_token1,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE,
  [aux_sym__string_literal_long_quote_token1] = aux_sym__string_literal_long_quote_token1,
  [anon_sym_CARET_CARET] = anon_sym_CARET_CARET,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym__COLON] = anon_sym__COLON,
  [aux_sym_blank_node_label_token1] = aux_sym_blank_node_label_token1,
  [sym_lang_tag] = sym_lang_tag,
  [sym_echar] = sym_echar,
  [sym_anon] = sym_anon,
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
  [sym_property] = sym_property,
  [sym_object_list] = sym_object_list,
  [sym_predicate] = sym_predicate,
  [sym_subject] = sym_subject,
  [sym__object] = sym__object,
  [sym__literal] = sym__literal,
  [sym_blank_node_property_list] = sym_blank_node_property_list,
  [sym_collection] = sym_collection,
  [sym_object_collection] = sym_object_collection,
  [sym__numeric_literal] = sym__numeric_literal,
  [sym_string] = sym_string,
  [sym_iri_reference] = sym_iri_reference,
  [sym__string_literal_quote] = sym__string_literal_quote,
  [sym__string_literal_single_quote] = sym__string_literal_single_quote,
  [sym__string_literal_long_single_quote] = sym__string_literal_long_single_quote,
  [sym__string_literal_long_quote] = sym__string_literal_long_quote,
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
  [aux_sym_object_collection_repeat1] = aux_sym_object_collection_repeat1,
  [aux_sym__string_literal_quote_repeat1] = aux_sym__string_literal_quote_repeat1,
  [aux_sym__string_literal_single_quote_repeat1] = aux_sym__string_literal_single_quote_repeat1,
  [aux_sym__string_literal_long_single_quote_repeat1] = aux_sym__string_literal_long_single_quote_repeat1,
  [aux_sym__string_literal_long_quote_repeat1] = aux_sym__string_literal_long_quote_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_pn_prefix] = {
    .visible = true,
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
  [aux_sym_sparql_base_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sparql_prefix_token1] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_iri_reference_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_literal_quote_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_literal_quote_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_literal_single_quote_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_literal_long_single_quote_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_literal_long_quote_token1] = {
    .visible = false,
    .named = false,
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
  [sym_echar] = {
    .visible = true,
    .named = true,
  },
  [sym_anon] = {
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
  [sym_property] = {
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
  [sym_object_collection] = {
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
  [sym_iri_reference] = {
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
  [aux_sym_object_collection_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_literal_quote_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_literal_single_quote_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_literal_long_single_quote_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_literal_long_quote_repeat1] = {
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

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
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

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_pn_local_character_set_1(int32_t c) {
  return (c < 'a'
    ? (c < 'A'
      ? (c < ':'
        ? c == '-'
        : c <= ':')
      : (c <= 'D' || (c < '_'
        ? (c >= 'F' && c <= 'Z')
        : c <= '_')))
    : (c <= 'd' || (c < 768
      ? (c < 183
        ? (c >= 'f' && c <= 'z')
        : c <= 183)
      : (c <= 879 || (c >= 8255 && c <= 8256)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(65);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '>') ADVANCE(90);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == '^') ADVANCE(25);
      if (lookahead == '_') ADVANCE(22);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(109);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == '\'') ADVANCE(102);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '_') ADVANCE(128);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(102);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == '^') ADVANCE(25);
      if (lookahead == '_') ADVANCE(22);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(102);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == '^') ADVANCE(25);
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(102);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '.') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == '^') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '%') ADVANCE(45);
      if (sym_pn_local_character_set_1(lookahead)) ADVANCE(130);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 18:
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(129);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(130);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(105);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(116);
      END_STATE();
    case 23:
      if (lookahead == 'U') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(49);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 24:
      if (lookahead == 'U') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 25:
      if (lookahead == '^') ADVANCE(113);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(26);
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 34:
      if (lookahead == 'x') ADVANCE(78);
      END_STATE();
    case 35:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead == ']') ADVANCE(122);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 40:
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '/') ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(130);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 59:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 61:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(123);
      if (lookahead == '.') ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(118);
      if (lookahead == '.') ADVANCE(62);
      END_STATE();
    case 63:
      if (eof) ADVANCE(65);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == '^') ADVANCE(25);
      if (lookahead == '_') ADVANCE(22);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 64:
      if (eof) ADVANCE(65);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(102);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == '_') ADVANCE(22);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'U') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_ATprefix);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_ATbase);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead == ']') ADVANCE(122);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == '\\') ADVANCE(66);
      if ((0 <= lookahead && lookahead <= '\t') ||
          (11 <= lookahead && lookahead <= ' ') ||
          lookahead == '"' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(110);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(2);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__string_literal_quote_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__string_literal_quote_token1);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__string_literal_quote_token2);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(106);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(20);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__string_literal_single_quote_token1);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__string_literal_single_quote_token1);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      if (lookahead == '\'') ADVANCE(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__string_literal_long_single_quote_token1);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__string_literal_long_single_quote_token1);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(107);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      if (lookahead == '"') ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__string_literal_long_quote_token1);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__string_literal_long_quote_token1);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(130);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(40);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym__COLON);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym__COLON);
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(130);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(40);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_blank_node_label_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(118);
      if (lookahead == '.') ADVANCE(62);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_lang_tag);
      if (lookahead == '-') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_lang_tag);
      if (lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_echar);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_anon);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(123);
      if (lookahead == '.') ADVANCE(61);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(130);
      if (lookahead == '\\') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(45);
      if (sym_pn_local_character_set_1(lookahead)) ADVANCE(130);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(45);
      if (sym_pn_local_character_set_1(lookahead)) ADVANCE(130);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(130);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(130);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(40);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(129);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(40);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(130);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(40);
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
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 't') ADVANCE(3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(4);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_sparql_base_token1);
      END_STATE();
    case 17:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 19:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_sparql_prefix_token1);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 64},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 64},
  [20] = {.lex_state = 64},
  [21] = {.lex_state = 64},
  [22] = {.lex_state = 64},
  [23] = {.lex_state = 64},
  [24] = {.lex_state = 64},
  [25] = {.lex_state = 64},
  [26] = {.lex_state = 64},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 12},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 87},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 12},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 12},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_pn_prefix] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_ATprefix] = ACTIONS(1),
    [anon_sym_ATbase] = ACTIONS(1),
    [aux_sym_sparql_base_token1] = ACTIONS(1),
    [aux_sym_sparql_prefix_token1] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_a] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_decimal] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__string_literal_quote_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_CARET_CARET] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym__COLON] = ACTIONS(1),
    [sym_echar] = ACTIONS(1),
    [sym_anon] = ACTIONS(1),
  },
  [1] = {
    [sym_turtle_doc] = STATE(92),
    [sym_statement] = STATE(8),
    [sym_directive] = STATE(36),
    [sym_prefix_id] = STATE(37),
    [sym_base] = STATE(37),
    [sym_sparql_base] = STATE(37),
    [sym_sparql_prefix] = STATE(37),
    [sym_triples] = STATE(88),
    [sym_subject] = STATE(42),
    [sym_blank_node_property_list] = STATE(38),
    [sym_collection] = STATE(72),
    [sym_iri_reference] = STATE(72),
    [sym__iri] = STATE(72),
    [sym_prefixed_name] = STATE(72),
    [sym__blank_node] = STATE(72),
    [sym_namespace] = STATE(54),
    [sym_blank_node_label] = STATE(72),
    [aux_sym_turtle_doc_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_pn_prefix] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_ATprefix] = ACTIONS(9),
    [anon_sym_ATbase] = ACTIONS(11),
    [aux_sym_sparql_base_token1] = ACTIONS(13),
    [aux_sym_sparql_prefix_token1] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym__COLON] = ACTIONS(25),
    [sym_anon] = ACTIONS(27),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym__COLON,
    ACTIONS(29), 1,
      sym_pn_prefix,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_COLON,
    STATE(27), 1,
      sym_string,
    STATE(29), 1,
      sym_namespace,
    STATE(86), 1,
      sym_object_collection,
    ACTIONS(33), 2,
      sym_integer,
      sym_decimal,
    ACTIONS(35), 2,
      sym_double,
      sym_anon,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 4,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
    STATE(4), 13,
      sym__object,
      sym__literal,
      sym_blank_node_property_list,
      sym_collection,
      sym__numeric_literal,
      sym_iri_reference,
      sym_rdf_literal,
      sym_boolean_literal,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
      aux_sym_object_collection_repeat1,
  [79] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      sym_pn_prefix,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    ACTIONS(60), 1,
      anon_sym_LT,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(78), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(84), 1,
      anon_sym_COLON,
    ACTIONS(87), 1,
      anon_sym__COLON,
    STATE(27), 1,
      sym_string,
    STATE(29), 1,
      sym_namespace,
    ACTIONS(63), 2,
      sym_integer,
      sym_decimal,
    ACTIONS(66), 2,
      sym_double,
      sym_anon,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 4,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
    STATE(3), 13,
      sym__object,
      sym__literal,
      sym_blank_node_property_list,
      sym_collection,
      sym__numeric_literal,
      sym_iri_reference,
      sym_rdf_literal,
      sym_boolean_literal,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
      aux_sym_object_collection_repeat1,
  [155] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym__COLON,
    ACTIONS(29), 1,
      sym_pn_prefix,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_string,
    STATE(29), 1,
      sym_namespace,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(92), 2,
      sym_integer,
      sym_decimal,
    ACTIONS(94), 2,
      sym_double,
      sym_anon,
    STATE(17), 4,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
    STATE(3), 13,
      sym__object,
      sym__literal,
      sym_blank_node_property_list,
      sym_collection,
      sym__numeric_literal,
      sym_iri_reference,
      sym_rdf_literal,
      sym_boolean_literal,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
      aux_sym_object_collection_repeat1,
  [231] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym__COLON,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(96), 1,
      sym_pn_prefix,
    ACTIONS(102), 1,
      anon_sym_COLON,
    STATE(52), 1,
      sym_string,
    STATE(65), 1,
      sym_namespace,
    STATE(77), 1,
      sym_object_list,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(98), 2,
      sym_integer,
      sym_decimal,
    ACTIONS(100), 2,
      sym_double,
      sym_anon,
    STATE(17), 4,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
    STATE(60), 12,
      sym__object,
      sym__literal,
      sym_blank_node_property_list,
      sym_collection,
      sym__numeric_literal,
      sym_iri_reference,
      sym_rdf_literal,
      sym_boolean_literal,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
  [306] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym__COLON,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(96), 1,
      sym_pn_prefix,
    ACTIONS(102), 1,
      anon_sym_COLON,
    STATE(52), 1,
      sym_string,
    STATE(65), 1,
      sym_namespace,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(104), 2,
      sym_integer,
      sym_decimal,
    ACTIONS(106), 2,
      sym_double,
      sym_anon,
    STATE(17), 4,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
    STATE(70), 12,
      sym__object,
      sym__literal,
      sym_blank_node_property_list,
      sym_collection,
      sym__numeric_literal,
      sym_iri_reference,
      sym_rdf_literal,
      sym_boolean_literal,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
  [378] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 1,
      sym_pn_prefix,
    ACTIONS(113), 1,
      anon_sym_ATprefix,
    ACTIONS(116), 1,
      anon_sym_ATbase,
    ACTIONS(119), 1,
      aux_sym_sparql_base_token1,
    ACTIONS(122), 1,
      aux_sym_sparql_prefix_token1,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_LT,
    ACTIONS(134), 1,
      anon_sym_COLON,
    ACTIONS(137), 1,
      anon_sym__COLON,
    ACTIONS(140), 1,
      sym_anon,
    STATE(36), 1,
      sym_directive,
    STATE(38), 1,
      sym_blank_node_property_list,
    STATE(42), 1,
      sym_subject,
    STATE(54), 1,
      sym_namespace,
    STATE(88), 1,
      sym_triples,
    STATE(7), 2,
      sym_statement,
      aux_sym_turtle_doc_repeat1,
    STATE(37), 4,
      sym_prefix_id,
      sym_base,
      sym_sparql_base,
      sym_sparql_prefix,
    STATE(72), 6,
      sym_collection,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
  [451] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_pn_prefix,
    ACTIONS(9), 1,
      anon_sym_ATprefix,
    ACTIONS(11), 1,
      anon_sym_ATbase,
    ACTIONS(13), 1,
      aux_sym_sparql_base_token1,
    ACTIONS(15), 1,
      aux_sym_sparql_prefix_token1,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(25), 1,
      anon_sym__COLON,
    ACTIONS(27), 1,
      sym_anon,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_directive,
    STATE(38), 1,
      sym_blank_node_property_list,
    STATE(42), 1,
      sym_subject,
    STATE(54), 1,
      sym_namespace,
    STATE(88), 1,
      sym_triples,
    STATE(7), 2,
      sym_statement,
      aux_sym_turtle_doc_repeat1,
    STATE(37), 4,
      sym_prefix_id,
      sym_base,
      sym_sparql_base,
      sym_sparql_prefix,
    STATE(72), 6,
      sym_collection,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
  [524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 12,
      anon_sym_DOT,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_a,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(145), 15,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(151), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_CARET_CARET,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
  [590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(155), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_CARET_CARET,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
  [621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(159), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_CARET_CARET,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
  [652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(163), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_CARET_CARET,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
  [683] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(167), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_CARET_CARET,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
  [714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(171), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_CARET_CARET,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
  [745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(175), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_CARET_CARET,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
  [776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(179), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_CARET_CARET,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
  [807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(183), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_CARET_CARET,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
  [838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 10,
      anon_sym_DOT,
      anon_sym_a,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(187), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 10,
      anon_sym_DOT,
      anon_sym_a,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(191), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 10,
      anon_sym_DOT,
      anon_sym_a,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(195), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 10,
      anon_sym_DOT,
      anon_sym_a,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(199), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 10,
      anon_sym_DOT,
      anon_sym_a,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(203), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(207), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(211), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(215), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1075] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_CARET_CARET,
    ACTIONS(223), 1,
      sym_lang_tag,
    ACTIONS(217), 8,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(219), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_anon,
    ACTIONS(225), 12,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      sym_double,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_pn_prefix,
      sym_pn_local,
  [1132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym_pn_local,
    ACTIONS(231), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_anon,
    ACTIONS(229), 11,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      sym_double,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_pn_prefix,
  [1160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_anon,
    ACTIONS(235), 12,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      sym_double,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_pn_prefix,
      sym_pn_local,
  [1186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 8,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(241), 8,
      anon_sym_LPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1210] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym_pn_prefix,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(245), 1,
      anon_sym_a,
    STATE(5), 1,
      sym_predicate,
    STATE(29), 1,
      sym_namespace,
    STATE(76), 1,
      sym_property,
    ACTIONS(243), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
    STATE(31), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
  [1245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 4,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(247), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 4,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(251), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 4,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(255), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 4,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(259), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 4,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(263), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1345] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym_pn_prefix,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(245), 1,
      anon_sym_a,
    ACTIONS(267), 1,
      anon_sym_DOT,
    STATE(5), 1,
      sym_predicate,
    STATE(29), 1,
      sym_namespace,
    STATE(73), 1,
      sym_property,
    STATE(96), 1,
      sym_property_list,
    STATE(31), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
  [1381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 4,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(269), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 4,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(273), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1421] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym_pn_prefix,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(245), 1,
      anon_sym_a,
    STATE(5), 1,
      sym_predicate,
    STATE(29), 1,
      sym_namespace,
    STATE(73), 1,
      sym_property,
    STATE(87), 1,
      sym_property_list,
    STATE(31), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
  [1454] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym_pn_prefix,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(245), 1,
      anon_sym_a,
    STATE(5), 1,
      sym_predicate,
    STATE(29), 1,
      sym_namespace,
    STATE(73), 1,
      sym_property,
    STATE(96), 1,
      sym_property_list,
    STATE(31), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
  [1487] = 5,
    ACTIONS(277), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(49), 1,
      aux_sym__string_literal_long_quote_repeat1,
    ACTIONS(279), 2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(281), 3,
      aux_sym__string_literal_quote_token2,
      aux_sym__string_literal_long_quote_token1,
      sym_echar,
  [1506] = 5,
    ACTIONS(277), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(48), 1,
      aux_sym__string_literal_long_single_quote_repeat1,
    ACTIONS(287), 2,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(285), 3,
      aux_sym__string_literal_quote_token2,
      aux_sym__string_literal_long_single_quote_token1,
      sym_echar,
  [1525] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(102), 1,
      anon_sym_COLON,
    ACTIONS(291), 1,
      sym_pn_prefix,
    STATE(65), 1,
      sym_namespace,
    STATE(24), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
  [1546] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(293), 1,
      sym_pn_prefix,
    STATE(29), 1,
      sym_namespace,
    STATE(24), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
  [1567] = 5,
    ACTIONS(277), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(43), 1,
      aux_sym__string_literal_long_quote_repeat1,
    ACTIONS(279), 2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(295), 3,
      aux_sym__string_literal_quote_token2,
      aux_sym__string_literal_long_quote_token1,
      sym_echar,
  [1586] = 5,
    ACTIONS(277), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(50), 1,
      aux_sym__string_literal_long_single_quote_repeat1,
    ACTIONS(287), 2,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(299), 3,
      aux_sym__string_literal_quote_token2,
      aux_sym__string_literal_long_single_quote_token1,
      sym_echar,
  [1605] = 5,
    ACTIONS(277), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(49), 1,
      aux_sym__string_literal_long_quote_repeat1,
    ACTIONS(303), 2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(306), 3,
      aux_sym__string_literal_quote_token2,
      aux_sym__string_literal_long_quote_token1,
      sym_echar,
  [1624] = 5,
    ACTIONS(277), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(50), 1,
      aux_sym__string_literal_long_single_quote_repeat1,
    ACTIONS(314), 2,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(311), 3,
      aux_sym__string_literal_quote_token2,
      aux_sym__string_literal_long_single_quote_token1,
      sym_echar,
  [1643] = 2,
    ACTIONS(277), 1,
      sym_comment,
    ACTIONS(309), 6,
      anon_sym_DQUOTE,
      aux_sym__string_literal_quote_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE,
      aux_sym__string_literal_long_quote_token1,
      sym_echar,
  [1655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_lang_tag,
    ACTIONS(319), 1,
      anon_sym_CARET_CARET,
    ACTIONS(219), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1671] = 2,
    ACTIONS(277), 1,
      sym_comment,
    ACTIONS(317), 6,
      aux_sym__string_literal_quote_token2,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
      aux_sym__string_literal_long_single_quote_token1,
      sym_echar,
  [1683] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LT,
    ACTIONS(233), 1,
      sym_pn_local,
    ACTIONS(229), 3,
      anon_sym_a,
      anon_sym_COLON,
      sym_pn_prefix,
  [1698] = 4,
    ACTIONS(277), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym__string_literal_quote_repeat1,
    ACTIONS(323), 3,
      aux_sym__string_literal_quote_token1,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [1713] = 4,
    ACTIONS(277), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      aux_sym__string_literal_quote_repeat1,
    ACTIONS(327), 3,
      aux_sym__string_literal_quote_token1,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [1728] = 4,
    ACTIONS(277), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      aux_sym__string_literal_single_quote_repeat1,
    ACTIONS(329), 3,
      aux_sym__string_literal_quote_token2,
      aux_sym__string_literal_single_quote_token1,
      sym_echar,
  [1743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LT,
    ACTIONS(235), 4,
      anon_sym_a,
      anon_sym_COLON,
      sym_pn_prefix,
      sym_pn_local,
  [1756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LT,
    ACTIONS(225), 4,
      anon_sym_a,
      anon_sym_COLON,
      sym_pn_prefix,
      sym_pn_local,
  [1769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_object_list_repeat1,
    ACTIONS(333), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [1784] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_object_list_repeat1,
    ACTIONS(337), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [1799] = 4,
    ACTIONS(277), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      aux_sym__string_literal_single_quote_repeat1,
    ACTIONS(342), 3,
      aux_sym__string_literal_quote_token2,
      aux_sym__string_literal_single_quote_token1,
      sym_echar,
  [1814] = 4,
    ACTIONS(277), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym__string_literal_quote_repeat1,
    ACTIONS(349), 3,
      aux_sym__string_literal_quote_token1,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [1829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_pn_local,
  [1840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym_pn_local,
    ACTIONS(231), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_object_list_repeat1,
    ACTIONS(354), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [1868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_pn_local,
  [1879] = 4,
    ACTIONS(277), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_SQUOTE,
    STATE(57), 1,
      aux_sym__string_literal_single_quote_repeat1,
    ACTIONS(356), 3,
      aux_sym__string_literal_quote_token2,
      aux_sym__string_literal_single_quote_token1,
      sym_echar,
  [1894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_SEMI,
    STATE(69), 1,
      aux_sym_property_list_repeat1,
    ACTIONS(360), 2,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_SEMI,
    STATE(69), 1,
      aux_sym_property_list_repeat1,
    ACTIONS(365), 2,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_a,
      sym_pn_prefix,
    ACTIONS(371), 2,
      anon_sym_LT,
      anon_sym_COLON,
  [1944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      aux_sym_property_list_repeat1,
    ACTIONS(373), 2,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1958] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(375), 1,
      sym_pn_prefix,
    STATE(83), 1,
      sym_namespace,
  [1971] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(375), 1,
      sym_pn_prefix,
    STATE(82), 1,
      sym_namespace,
  [1984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [1993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [2002] = 2,
    ACTIONS(277), 1,
      sym_comment,
    ACTIONS(379), 3,
      aux_sym__string_literal_quote_token2,
      aux_sym__string_literal_long_quote_token1,
      sym_echar,
  [2011] = 2,
    ACTIONS(277), 1,
      sym_comment,
    ACTIONS(381), 3,
      aux_sym__string_literal_quote_token2,
      aux_sym__string_literal_long_single_quote_token1,
      sym_echar,
  [2020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT,
    STATE(91), 1,
      sym_iri_reference,
  [2030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT,
    STATE(40), 1,
      sym_iri_reference,
  [2040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT,
    STATE(34), 1,
      sym_iri_reference,
  [2050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT,
    STATE(94), 1,
      sym_iri_reference,
  [2060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      aux_sym_blank_node_label_token1,
  [2067] = 2,
    ACTIONS(277), 1,
      sym_comment,
    ACTIONS(385), 1,
      aux_sym_iri_reference_token1,
  [2074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
  [2081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_RBRACK,
  [2088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_DOT,
  [2095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_COLON,
  [2102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_GT,
  [2109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_DOT,
  [2116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
  [2123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_COLON,
  [2130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_DOT,
  [2137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_COLON,
  [2144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_DOT,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
  [SMALL_STATE(4)] = 155,
  [SMALL_STATE(5)] = 231,
  [SMALL_STATE(6)] = 306,
  [SMALL_STATE(7)] = 378,
  [SMALL_STATE(8)] = 451,
  [SMALL_STATE(9)] = 524,
  [SMALL_STATE(10)] = 559,
  [SMALL_STATE(11)] = 590,
  [SMALL_STATE(12)] = 621,
  [SMALL_STATE(13)] = 652,
  [SMALL_STATE(14)] = 683,
  [SMALL_STATE(15)] = 714,
  [SMALL_STATE(16)] = 745,
  [SMALL_STATE(17)] = 776,
  [SMALL_STATE(18)] = 807,
  [SMALL_STATE(19)] = 838,
  [SMALL_STATE(20)] = 868,
  [SMALL_STATE(21)] = 898,
  [SMALL_STATE(22)] = 928,
  [SMALL_STATE(23)] = 958,
  [SMALL_STATE(24)] = 988,
  [SMALL_STATE(25)] = 1017,
  [SMALL_STATE(26)] = 1046,
  [SMALL_STATE(27)] = 1075,
  [SMALL_STATE(28)] = 1106,
  [SMALL_STATE(29)] = 1132,
  [SMALL_STATE(30)] = 1160,
  [SMALL_STATE(31)] = 1186,
  [SMALL_STATE(32)] = 1210,
  [SMALL_STATE(33)] = 1245,
  [SMALL_STATE(34)] = 1265,
  [SMALL_STATE(35)] = 1285,
  [SMALL_STATE(36)] = 1305,
  [SMALL_STATE(37)] = 1325,
  [SMALL_STATE(38)] = 1345,
  [SMALL_STATE(39)] = 1381,
  [SMALL_STATE(40)] = 1401,
  [SMALL_STATE(41)] = 1421,
  [SMALL_STATE(42)] = 1454,
  [SMALL_STATE(43)] = 1487,
  [SMALL_STATE(44)] = 1506,
  [SMALL_STATE(45)] = 1525,
  [SMALL_STATE(46)] = 1546,
  [SMALL_STATE(47)] = 1567,
  [SMALL_STATE(48)] = 1586,
  [SMALL_STATE(49)] = 1605,
  [SMALL_STATE(50)] = 1624,
  [SMALL_STATE(51)] = 1643,
  [SMALL_STATE(52)] = 1655,
  [SMALL_STATE(53)] = 1671,
  [SMALL_STATE(54)] = 1683,
  [SMALL_STATE(55)] = 1698,
  [SMALL_STATE(56)] = 1713,
  [SMALL_STATE(57)] = 1728,
  [SMALL_STATE(58)] = 1743,
  [SMALL_STATE(59)] = 1756,
  [SMALL_STATE(60)] = 1769,
  [SMALL_STATE(61)] = 1784,
  [SMALL_STATE(62)] = 1799,
  [SMALL_STATE(63)] = 1814,
  [SMALL_STATE(64)] = 1829,
  [SMALL_STATE(65)] = 1840,
  [SMALL_STATE(66)] = 1853,
  [SMALL_STATE(67)] = 1868,
  [SMALL_STATE(68)] = 1879,
  [SMALL_STATE(69)] = 1894,
  [SMALL_STATE(70)] = 1908,
  [SMALL_STATE(71)] = 1918,
  [SMALL_STATE(72)] = 1932,
  [SMALL_STATE(73)] = 1944,
  [SMALL_STATE(74)] = 1958,
  [SMALL_STATE(75)] = 1971,
  [SMALL_STATE(76)] = 1984,
  [SMALL_STATE(77)] = 1993,
  [SMALL_STATE(78)] = 2002,
  [SMALL_STATE(79)] = 2011,
  [SMALL_STATE(80)] = 2020,
  [SMALL_STATE(81)] = 2030,
  [SMALL_STATE(82)] = 2040,
  [SMALL_STATE(83)] = 2050,
  [SMALL_STATE(84)] = 2060,
  [SMALL_STATE(85)] = 2067,
  [SMALL_STATE(86)] = 2074,
  [SMALL_STATE(87)] = 2081,
  [SMALL_STATE(88)] = 2088,
  [SMALL_STATE(89)] = 2095,
  [SMALL_STATE(90)] = 2102,
  [SMALL_STATE(91)] = 2109,
  [SMALL_STATE(92)] = 2116,
  [SMALL_STATE(93)] = 2123,
  [SMALL_STATE(94)] = 2130,
  [SMALL_STATE(95)] = 2137,
  [SMALL_STATE(96)] = 2144,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_turtle_doc, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(93),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(41),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(85),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(3),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(3),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(56),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(68),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(44),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(47),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(25),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(28),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(84),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_collection, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(89),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(74),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(80),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(81),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(75),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(41),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(85),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(59),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(84),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(72),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_turtle_doc, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_reference, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri_reference, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_long_quote, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_long_quote, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_long_single_quote, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_long_single_quote, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_single_quote, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_single_quote, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_quote, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_quote, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_long_single_quote, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_long_single_quote, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_single_quote, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_single_quote, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_quote, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_quote, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_long_quote, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_long_quote, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefixed_name, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefixed_name, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_node_label, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_node_label, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_node_property_list, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_node_property_list, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rdf_literal, 3, .production_id = 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rdf_literal, 3, .production_id = 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rdf_literal, 2, .production_id = 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rdf_literal, 2, .production_id = 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rdf_literal, 1, .production_id = 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rdf_literal, 1, .production_id = 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefixed_name, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefixed_name, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparql_prefix, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparql_prefix, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_id, 4),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_id, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triples, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparql_base, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparql_base, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_long_quote_repeat1, 2), SHIFT_REPEAT(78),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_long_quote_repeat1, 2), SHIFT_REPEAT(49),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_long_quote_repeat1, 2),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_long_single_quote_repeat1, 2), SHIFT_REPEAT(50),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_long_single_quote_repeat1, 2), SHIFT_REPEAT(79),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_long_single_quote_repeat1, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_list, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_list_repeat1, 2),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_list_repeat1, 2), SHIFT_REPEAT(6),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_single_quote_repeat1, 2), SHIFT_REPEAT(62),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_single_quote_repeat1, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_quote_repeat1, 2),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_quote_repeat1, 2), SHIFT_REPEAT(63),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_list, 2),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2), SHIFT_REPEAT(32),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_list, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_list, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [399] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triples, 2),
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
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_pn_prefix,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
