#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 88
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  sym_pname_ns = 1,
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
  anon_sym__COLON = 35,
  aux_sym_blank_node_label_token1 = 36,
  sym_lang_tag = 37,
  sym_echar = 38,
  sym_anon = 39,
  sym_pn_local = 40,
  sym_turtle_doc = 41,
  sym_statement = 42,
  sym_directive = 43,
  sym_prefix_id = 44,
  sym_base = 45,
  sym_sparql_base = 46,
  sym_sparql_prefix = 47,
  sym_triples = 48,
  sym_property_list = 49,
  sym_property = 50,
  sym_object_list = 51,
  sym_predicate = 52,
  sym_subject = 53,
  sym__object = 54,
  sym__literal = 55,
  sym_blank_node_property_list = 56,
  sym_collection = 57,
  sym_object_collection = 58,
  sym__numeric_literal = 59,
  sym_string = 60,
  sym_iri_reference = 61,
  sym__string_literal_quote = 62,
  sym__string_literal_single_quote = 63,
  sym__string_literal_long_single_quote = 64,
  sym__string_literal_long_quote = 65,
  sym_rdf_literal = 66,
  sym_boolean_literal = 67,
  sym__iri = 68,
  sym_prefixed_name = 69,
  sym__blank_node = 70,
  sym__pname_ln = 71,
  sym_blank_node_label = 72,
  aux_sym_turtle_doc_repeat1 = 73,
  aux_sym_property_list_repeat1 = 74,
  aux_sym_object_list_repeat1 = 75,
  aux_sym_object_collection_repeat1 = 76,
  aux_sym__string_literal_quote_repeat1 = 77,
  aux_sym__string_literal_single_quote_repeat1 = 78,
  aux_sym__string_literal_long_single_quote_repeat1 = 79,
  aux_sym__string_literal_long_quote_repeat1 = 80,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_pname_ns] = "pname_ns",
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
  [sym__pname_ln] = "_pname_ln",
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

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_pname_ns] = sym_pname_ns,
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
  [sym__pname_ln] = sym__pname_ln,
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
  [sym_pname_ns] = {
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
  [sym__pname_ln] = {
    .visible = false,
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

static const char * const ts_field_names[] = {
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

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_pname_ns_character_set_1(int32_t c) {
  return (c < 8204
    ? (c < 216
      ? (c < 'c'
        ? (c >= 'A' && c <= 'Z')
        : (c <= 'z' || (c >= 192 && c <= 214)))
      : (c <= 246 || (c < 880
        ? (c >= 248 && c <= 767)
        : (c <= 893 || (c >= 895 && c <= 8191)))))
    : (c <= 8205 || (c < 63744
      ? (c < 11264
        ? (c >= 8304 && c <= 8591)
        : (c <= 12271 || (c >= 12289 && c <= 55295)))
      : (c <= 64975 || (c < 65536
        ? (c >= 65008 && c <= 65533)
        : c <= 983039)))));
}

static inline bool sym_pname_ns_character_set_2(int32_t c) {
  return (c < 248
    ? (c < 'a'
      ? (c < 'A'
        ? (c < '0'
          ? c == '-'
          : c <= '9')
        : (c <= 'D' || (c < '_'
          ? (c >= 'F' && c <= 'Z')
          : c <= '_')))
      : (c <= 'd' || (c < 192
        ? (c < 183
          ? (c >= 'f' && c <= 'z')
          : c <= 183)
        : (c <= 214 || (c >= 216 && c <= 246)))))
    : (c <= 893 || (c < 11264
      ? (c < 8255
        ? (c < 8204
          ? (c >= 895 && c <= 8191)
          : c <= 8205)
        : (c <= 8256 || (c >= 8304 && c <= 8591)))
      : (c <= 12271 || (c < 65008
        ? (c < 63744
          ? (c >= 12289 && c <= 55295)
          : c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_pname_ns_character_set_3(int32_t c) {
  return (c < 248
    ? (c < 'a'
      ? (c < 'A'
        ? (c < '0'
          ? c == '-'
          : c <= '9')
        : (c <= 'E' || (c < '_'
          ? (c >= 'G' && c <= 'Z')
          : c <= '_')))
      : (c <= 'e' || (c < 192
        ? (c < 183
          ? (c >= 'g' && c <= 'z')
          : c <= 183)
        : (c <= 214 || (c >= 216 && c <= 246)))))
    : (c <= 893 || (c < 11264
      ? (c < 8255
        ? (c < 8204
          ? (c >= 895 && c <= 8191)
          : c <= 8205)
        : (c <= 8256 || (c >= 8304 && c <= 8591)))
      : (c <= 12271 || (c < 65008
        ? (c < 63744
          ? (c >= 12289 && c <= 55295)
          : c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_pname_ns_character_set_4(int32_t c) {
  return (c < 248
    ? (c < 'a'
      ? (c < 'A'
        ? (c < '0'
          ? c == '-'
          : c <= '9')
        : (c <= 'H' || (c < '_'
          ? (c >= 'J' && c <= 'Z')
          : c <= '_')))
      : (c <= 'h' || (c < 192
        ? (c < 183
          ? (c >= 'j' && c <= 'z')
          : c <= 183)
        : (c <= 214 || (c >= 216 && c <= 246)))))
    : (c <= 893 || (c < 11264
      ? (c < 8255
        ? (c < 8204
          ? (c >= 895 && c <= 8191)
          : c <= 8205)
        : (c <= 8256 || (c >= 8304 && c <= 8591)))
      : (c <= 12271 || (c < 65008
        ? (c < 63744
          ? (c >= 12289 && c <= 55295)
          : c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_pname_ns_character_set_5(int32_t c) {
  return (c < 248
    ? (c < 'a'
      ? (c < 'A'
        ? (c < '0'
          ? c == '-'
          : c <= '9')
        : (c <= 'Q' || (c < '_'
          ? (c >= 'S' && c <= 'Z')
          : c <= '_')))
      : (c <= 'q' || (c < 192
        ? (c < 183
          ? (c >= 's' && c <= 'z')
          : c <= 183)
        : (c <= 214 || (c >= 216 && c <= 246)))))
    : (c <= 893 || (c < 11264
      ? (c < 8255
        ? (c < 8204
          ? (c >= 895 && c <= 8191)
          : c <= 8205)
        : (c <= 8256 || (c >= 8304 && c <= 8591)))
      : (c <= 12271 || (c < 65008
        ? (c < 63744
          ? (c >= 12289 && c <= 55295)
          : c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_pname_ns_character_set_6(int32_t c) {
  return (c < 248
    ? (c < 'a'
      ? (c < 'A'
        ? (c < '0'
          ? c == '-'
          : c <= '9')
        : (c <= 'R' || (c < '_'
          ? (c >= 'T' && c <= 'Z')
          : c <= '_')))
      : (c <= 'r' || (c < 192
        ? (c < 183
          ? (c >= 't' && c <= 'z')
          : c <= 183)
        : (c <= 214 || (c >= 216 && c <= 246)))))
    : (c <= 893 || (c < 11264
      ? (c < 8255
        ? (c < 8204
          ? (c >= 895 && c <= 8191)
          : c <= 8205)
        : (c <= 8256 || (c >= 8304 && c <= 8591)))
      : (c <= 12271 || (c < 65008
        ? (c < 63744
          ? (c >= 12289 && c <= 55295)
          : c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_pname_ns_character_set_7(int32_t c) {
  return (c < 248
    ? (c < 'a'
      ? (c < 'A'
        ? (c < '0'
          ? c == '-'
          : c <= '9')
        : (c <= 'W' || (c < '_'
          ? (c >= 'Y' && c <= 'Z')
          : c <= '_')))
      : (c <= 'w' || (c < 192
        ? (c < 183
          ? (c >= 'y' && c <= 'z')
          : c <= 183)
        : (c <= 214 || (c >= 216 && c <= 246)))))
    : (c <= 893 || (c < 11264
      ? (c < 8255
        ? (c < 8204
          ? (c >= 895 && c <= 8191)
          : c <= 8205)
        : (c <= 8256 || (c >= 8304 && c <= 8591)))
      : (c <= 12271 || (c < 65008
        ? (c < 63744
          ? (c >= 12289 && c <= 55295)
          : c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_pname_ns_character_set_8(int32_t c) {
  return (c < 895
    ? (c < 'b'
      ? (c < 'B'
        ? (c < '0'
          ? c == '-'
          : c <= '9')
        : (c <= 'Z' || c == '_'))
      : (c <= 'z' || (c < 216
        ? (c < 192
          ? c == 183
          : c <= 214)
        : (c <= 246 || (c >= 248 && c <= 893)))))
    : (c <= 8191 || (c < 12289
      ? (c < 8304
        ? (c < 8255
          ? (c >= 8204 && c <= 8205)
          : c <= 8256)
        : (c <= 8591 || (c >= 11264 && c <= 12271)))
      : (c <= 55295 || (c < 65008
        ? (c >= 63744 && c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_pname_ns_character_set_9(int32_t c) {
  return (c < 248
    ? (c < 'a'
      ? (c < 'A'
        ? (c < '0'
          ? c == '-'
          : c <= '9')
        : (c <= 'Z' || c == '_'))
      : (c <= 'd' || (c < 192
        ? (c < 183
          ? (c >= 'f' && c <= 'z')
          : c <= 183)
        : (c <= 214 || (c >= 216 && c <= 246)))))
    : (c <= 893 || (c < 11264
      ? (c < 8255
        ? (c < 8204
          ? (c >= 895 && c <= 8191)
          : c <= 8205)
        : (c <= 8256 || (c >= 8304 && c <= 8591)))
      : (c <= 12271 || (c < 65008
        ? (c < 63744
          ? (c >= 12289 && c <= 55295)
          : c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_pname_ns_character_set_10(int32_t c) {
  return (c < 248
    ? (c < 'a'
      ? (c < 'A'
        ? (c < '0'
          ? c == '-'
          : c <= '9')
        : (c <= 'Z' || c == '_'))
      : (c <= 'k' || (c < 192
        ? (c < 183
          ? (c >= 'm' && c <= 'z')
          : c <= 183)
        : (c <= 214 || (c >= 216 && c <= 246)))))
    : (c <= 893 || (c < 11264
      ? (c < 8255
        ? (c < 8204
          ? (c >= 895 && c <= 8191)
          : c <= 8205)
        : (c <= 8256 || (c >= 8304 && c <= 8591)))
      : (c <= 12271 || (c < 65008
        ? (c < 63744
          ? (c >= 12289 && c <= 55295)
          : c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_pname_ns_character_set_11(int32_t c) {
  return (c < 248
    ? (c < 'a'
      ? (c < 'A'
        ? (c < '0'
          ? c == '-'
          : c <= '9')
        : (c <= 'Z' || c == '_'))
      : (c <= 'q' || (c < 192
        ? (c < 183
          ? (c >= 's' && c <= 'z')
          : c <= 183)
        : (c <= 214 || (c >= 216 && c <= 246)))))
    : (c <= 893 || (c < 11264
      ? (c < 8255
        ? (c < 8204
          ? (c >= 895 && c <= 8191)
          : c <= 8205)
        : (c <= 8256 || (c >= 8304 && c <= 8591)))
      : (c <= 12271 || (c < 65008
        ? (c < 63744
          ? (c >= 12289 && c <= 55295)
          : c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_pname_ns_character_set_12(int32_t c) {
  return (c < 248
    ? (c < 'a'
      ? (c < 'A'
        ? (c < '0'
          ? c == '-'
          : c <= '9')
        : (c <= 'Z' || c == '_'))
      : (c <= 'r' || (c < 192
        ? (c < 183
          ? (c >= 't' && c <= 'z')
          : c <= 183)
        : (c <= 214 || (c >= 216 && c <= 246)))))
    : (c <= 893 || (c < 11264
      ? (c < 8255
        ? (c < 8204
          ? (c >= 895 && c <= 8191)
          : c <= 8205)
        : (c <= 8256 || (c >= 8304 && c <= 8591)))
      : (c <= 12271 || (c < 65008
        ? (c < 63744
          ? (c >= 12289 && c <= 55295)
          : c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_pname_ns_character_set_13(int32_t c) {
  return (c < 248
    ? (c < 'a'
      ? (c < 'A'
        ? (c < '0'
          ? c == '-'
          : c <= '9')
        : (c <= 'Z' || c == '_'))
      : (c <= 't' || (c < 192
        ? (c < 183
          ? (c >= 'v' && c <= 'z')
          : c <= 183)
        : (c <= 214 || (c >= 216 && c <= 246)))))
    : (c <= 893 || (c < 11264
      ? (c < 8255
        ? (c < 8204
          ? (c >= 895 && c <= 8191)
          : c <= 8205)
        : (c <= 8256 || (c >= 8304 && c <= 8591)))
      : (c <= 12271 || (c < 65008
        ? (c < 63744
          ? (c >= 12289 && c <= 55295)
          : c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_pname_ns_character_set_14(int32_t c) {
  return (c < 895
    ? (c < 'b'
      ? (c < 'A'
        ? (c < '0'
          ? c == '-'
          : c <= '9')
        : (c <= 'Z' || c == '_'))
      : (c <= 'z' || (c < 216
        ? (c < 192
          ? c == 183
          : c <= 214)
        : (c <= 246 || (c >= 248 && c <= 893)))))
    : (c <= 8191 || (c < 12289
      ? (c < 8304
        ? (c < 8255
          ? (c >= 8204 && c <= 8205)
          : c <= 8256)
        : (c <= 8591 || (c >= 11264 && c <= 12271)))
      : (c <= 55295 || (c < 65008
        ? (c >= 63744 && c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool aux_sym_blank_node_label_token1_character_set_1(int32_t c) {
  return (c < 895
    ? (c < 192
      ? (c < '_'
        ? (c < 'A'
          ? (c >= '0' && c <= '9')
          : c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'z')))
      : (c <= 214 || (c < 248
        ? (c >= 216 && c <= 246)
        : (c <= 767 || (c >= 880 && c <= 893)))))
    : (c <= 8191 || (c < 12289
      ? (c < 8304
        ? (c >= 8204 && c <= 8205)
        : (c <= 8591 || (c >= 11264 && c <= 12271)))
      : (c <= 55295 || (c < 65008
        ? (c >= 63744 && c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_pn_local_character_set_1(int32_t c) {
  return (c < 8204
    ? (c < 216
      ? (c < 'a'
        ? (c >= 'A' && c <= 'Z')
        : (c <= 'z' || (c >= 192 && c <= 214)))
      : (c <= 246 || (c < 880
        ? (c >= 248 && c <= 767)
        : (c <= 893 || (c >= 895 && c <= 8191)))))
    : (c <= 8205 || (c < 63744
      ? (c < 11264
        ? (c >= 8304 && c <= 8591)
        : (c <= 12271 || (c >= 12289 && c <= 55295)))
      : (c <= 64975 || (c < 65536
        ? (c >= 65008 && c <= 65533)
        : c <= 983039)))));
}

static inline bool sym_pn_local_character_set_2(int32_t c) {
  return (c < 8204
    ? (c < 216
      ? (c < 'b'
        ? (c >= 'A' && c <= 'Z')
        : (c <= 'z' || (c >= 192 && c <= 214)))
      : (c <= 246 || (c < 880
        ? (c >= 248 && c <= 767)
        : (c <= 893 || (c >= 895 && c <= 8191)))))
    : (c <= 8205 || (c < 63744
      ? (c < 11264
        ? (c >= 8304 && c <= 8591)
        : (c <= 12271 || (c >= 12289 && c <= 55295)))
      : (c <= 64975 || (c < 65536
        ? (c >= 65008 && c <= 65533)
        : c <= 983039)))));
}

static inline bool sym_pn_local_character_set_3(int32_t c) {
  return (c < 248
    ? (c < 'a'
      ? (c < 'A'
        ? (c < ':'
          ? c == '-'
          : c <= ':')
        : (c <= 'D' || (c < '_'
          ? (c >= 'F' && c <= 'Z')
          : c <= '_')))
      : (c <= 'd' || (c < 192
        ? (c < 183
          ? (c >= 'f' && c <= 'z')
          : c <= 183)
        : (c <= 214 || (c >= 216 && c <= 246)))))
    : (c <= 893 || (c < 11264
      ? (c < 8255
        ? (c < 8204
          ? (c >= 895 && c <= 8191)
          : c <= 8205)
        : (c <= 8256 || (c >= 8304 && c <= 8591)))
      : (c <= 12271 || (c < 65008
        ? (c < 63744
          ? (c >= 12289 && c <= 55295)
          : c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_pn_local_character_set_4(int32_t c) {
  return (c < 895
    ? (c < 'a'
      ? (c < 'A'
        ? (c < '0'
          ? c == '-'
          : c <= '9')
        : (c <= 'Z' || c == '_'))
      : (c <= 'z' || (c < 216
        ? (c < 192
          ? c == 183
          : c <= 214)
        : (c <= 246 || (c >= 248 && c <= 893)))))
    : (c <= 8191 || (c < 12289
      ? (c < 8304
        ? (c < 8255
          ? (c >= 8204 && c <= 8205)
          : c <= 8256)
        : (c <= 8591 || (c >= 11264 && c <= 12271)))
      : (c <= 55295 || (c < 65008
        ? (c >= 63744 && c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_pn_local_character_set_5(int32_t c) {
  return (c < 895
    ? (c < 'a'
      ? (c < 'A'
        ? (c < '0'
          ? c == '-'
          : c <= ':')
        : (c <= 'Z' || c == '_'))
      : (c <= 'z' || (c < 216
        ? (c < 192
          ? c == 183
          : c <= 214)
        : (c <= 246 || (c >= 248 && c <= 893)))))
    : (c <= 8191 || (c < 12289
      ? (c < 8304
        ? (c < 8255
          ? (c >= 8204 && c <= 8205)
          : c <= 8256)
        : (c <= 8591 || (c >= 11264 && c <= 12271)))
      : (c <= 55295 || (c < 65008
        ? (c >= 63744 && c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_pn_local_character_set_6(int32_t c) {
  return (c < 895
    ? (c < 183
      ? (c < '_'
        ? (c < 'A'
          ? c == ':'
          : c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'z')))
      : (c <= 183 || (c < 216
        ? (c >= 192 && c <= 214)
        : (c <= 246 || (c >= 248 && c <= 893)))))
    : (c <= 8191 || (c < 12289
      ? (c < 8304
        ? (c < 8255
          ? (c >= 8204 && c <= 8205)
          : c <= 8256)
        : (c <= 8591 || (c >= 11264 && c <= 12271)))
      : (c <= 55295 || (c < 65008
        ? (c >= 63744 && c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_pn_local_character_set_7(int32_t c) {
  return (c < 895
    ? (c < 'a'
      ? (c < 'A'
        ? (c < ':'
          ? c == '-'
          : c <= ':')
        : (c <= 'Z' || c == '_'))
      : (c <= 'z' || (c < 216
        ? (c < 192
          ? c == 183
          : c <= 214)
        : (c <= 246 || (c >= 248 && c <= 893)))))
    : (c <= 8191 || (c < 12289
      ? (c < 8304
        ? (c < 8255
          ? (c >= 8204 && c <= 8205)
          : c <= 8256)
        : (c <= 8591 || (c >= 11264 && c <= 12271)))
      : (c <= 55295 || (c < 65008
        ? (c >= 63744 && c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(79);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(66);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(63);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == '^') ADVANCE(23);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(73);
      if (lookahead == 't') ADVANCE(70);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(19);
      if (sym_pname_ns_character_set_1(lookahead)) ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(126);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '#') ADVANCE(114);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(19);
      if (sym_pn_local_character_set_1(lookahead)) ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == '^') ADVANCE(23);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(73);
      if (lookahead == 't') ADVANCE(70);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(19);
      if (sym_pn_local_character_set_1(lookahead)) ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == '^') ADVANCE(23);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(73);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(19);
      if (sym_pn_local_character_set_1(lookahead)) ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(73);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(19);
      if (sym_pn_local_character_set_1(lookahead)) ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(43);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == ']') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(155);
      if (sym_pn_local_character_set_2(lookahead)) ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == '^') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(98);
      if (sym_pn_local_character_set_2(lookahead)) ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == 'a') ADVANCE(98);
      if (sym_pn_local_character_set_2(lookahead)) ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(89);
      if (aux_sym_blank_node_label_token1_character_set_1(lookahead)) ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(43);
      if (sym_pn_local_character_set_3(lookahead)) ADVANCE(156);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 16:
      if (lookahead == '%') ADVANCE(43);
      if (sym_pn_local_character_set_4(lookahead)) ADVANCE(155);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == '%') ADVANCE(43);
      if (sym_pn_local_character_set_5(lookahead)) ADVANCE(156);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(122);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(136);
      END_STATE();
    case 21:
      if (lookahead == 'U') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(47);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(141);
      END_STATE();
    case 22:
      if (lookahead == 'U') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 23:
      if (lookahead == '^') ADVANCE(130);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(24);
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'x') ADVANCE(92);
      END_STATE();
    case 33:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead == ']') ADVANCE(142);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 38:
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '/') ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(156);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 59:
      if (sym_pname_ns_character_set_2(lookahead)) ADVANCE(75);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 60:
      if (sym_pname_ns_character_set_2(lookahead)) ADVANCE(75);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 61:
      if (sym_pname_ns_character_set_3(lookahead)) ADVANCE(75);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 62:
      if (sym_pname_ns_character_set_4(lookahead)) ADVANCE(75);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 63:
      if (sym_pname_ns_character_set_5(lookahead)) ADVANCE(75);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 64:
      if (sym_pname_ns_character_set_6(lookahead)) ADVANCE(75);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(60);
      END_STATE();
    case 65:
      if (sym_pname_ns_character_set_7(lookahead)) ADVANCE(75);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(95);
      END_STATE();
    case 66:
      if (sym_pname_ns_character_set_8(lookahead)) ADVANCE(75);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 67:
      if (sym_pname_ns_character_set_9(lookahead)) ADVANCE(75);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 68:
      if (sym_pname_ns_character_set_9(lookahead)) ADVANCE(75);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 69:
      if (sym_pname_ns_character_set_10(lookahead)) ADVANCE(75);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 70:
      if (sym_pname_ns_character_set_11(lookahead)) ADVANCE(75);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 71:
      if (sym_pname_ns_character_set_12(lookahead)) ADVANCE(75);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 72:
      if (sym_pname_ns_character_set_13(lookahead)) ADVANCE(75);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 73:
      if (sym_pname_ns_character_set_14(lookahead)) ADVANCE(75);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 74:
      if (sym_pn_local_character_set_4(lookahead)) ADVANCE(75);
      if (lookahead == '.') ADVANCE(74);
      END_STATE();
    case 75:
      if (sym_pn_local_character_set_4(lookahead)) ADVANCE(75);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(135);
      END_STATE();
    case 76:
      if (sym_pn_local_character_set_4(lookahead)) ADVANCE(138);
      if (lookahead == '.') ADVANCE(76);
      END_STATE();
    case 77:
      if (eof) ADVANCE(79);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(66);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(63);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == '^') ADVANCE(23);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(73);
      if (lookahead == 't') ADVANCE(70);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(19);
      if (sym_pname_ns_character_set_1(lookahead)) ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 78:
      if (eof) ADVANCE(79);
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(66);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(63);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(73);
      if (lookahead == 't') ADVANCE(70);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(19);
      if (sym_pname_ns_character_set_1(lookahead)) ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(78)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'U') ADVANCE(88);
      if (lookahead == 'u') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_ATprefix);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_ATbase);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_sparql_base_token1);
      if (sym_pn_local_character_set_4(lookahead)) ADVANCE(75);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(135);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_sparql_prefix_token1);
      if (sym_pn_local_character_set_4(lookahead)) ADVANCE(75);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(135);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_a);
      if (sym_pn_local_character_set_4(lookahead)) ADVANCE(75);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(135);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead == ']') ADVANCE(142);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(127);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(2);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__string_literal_quote_token1);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__string_literal_quote_token1);
      if (lookahead == '#') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(114);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__string_literal_quote_token2);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(123);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(18);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__string_literal_single_quote_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__string_literal_single_quote_token1);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(120);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      if (lookahead == '\'') ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__string_literal_long_single_quote_token1);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__string_literal_long_single_quote_token1);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      if (lookahead == '"') ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__string_literal_long_quote_token1);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__string_literal_long_quote_token1);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '%') ADVANCE(43);
      if (sym_pn_local_character_set_4(lookahead)) ADVANCE(155);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(38);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_pn_local_character_set_4(lookahead)) ADVANCE(75);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(135);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '%') ADVANCE(43);
      if (sym_pn_local_character_set_4(lookahead)) ADVANCE(155);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(38);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_pn_local_character_set_4(lookahead)) ADVANCE(75);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_pname_ns);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym__COLON);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym__COLON);
      if (lookahead == '%') ADVANCE(43);
      if (sym_pn_local_character_set_5(lookahead)) ADVANCE(156);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(38);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_blank_node_label_token1);
      if (sym_pn_local_character_set_4(lookahead)) ADVANCE(138);
      if (lookahead == '.') ADVANCE(76);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_lang_tag);
      if (lookahead == '-') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_lang_tag);
      if (lookahead == '-') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_echar);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_anon);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(43);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '.') ADVANCE(17);
      if (sym_pn_local_character_set_6(lookahead)) ADVANCE(156);
      if (lookahead == '\\') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(43);
      if (sym_pn_local_character_set_3(lookahead)) ADVANCE(156);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(43);
      if (sym_pn_local_character_set_3(lookahead)) ADVANCE(156);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(43);
      if (sym_pn_local_character_set_7(lookahead)) ADVANCE(156);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(43);
      if (sym_pname_ns_character_set_9(lookahead)) ADVANCE(155);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(43);
      if (sym_pname_ns_character_set_9(lookahead)) ADVANCE(155);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(43);
      if (sym_pname_ns_character_set_10(lookahead)) ADVANCE(155);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(43);
      if (sym_pname_ns_character_set_11(lookahead)) ADVANCE(155);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(43);
      if (sym_pname_ns_character_set_12(lookahead)) ADVANCE(155);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(43);
      if (sym_pname_ns_character_set_13(lookahead)) ADVANCE(155);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(43);
      if (sym_pname_ns_character_set_14(lookahead)) ADVANCE(155);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(43);
      if (sym_pn_local_character_set_4(lookahead)) ADVANCE(156);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(38);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(43);
      if (sym_pn_local_character_set_4(lookahead)) ADVANCE(155);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(38);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(43);
      if (sym_pn_local_character_set_5(lookahead)) ADVANCE(156);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(38);
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
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 78},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 78},
  [20] = {.lex_state = 78},
  [21] = {.lex_state = 78},
  [22] = {.lex_state = 78},
  [23] = {.lex_state = 78},
  [24] = {.lex_state = 78},
  [25] = {.lex_state = 78},
  [26] = {.lex_state = 78},
  [27] = {.lex_state = 78},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 13},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 104},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 9},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_pname_ns] = ACTIONS(1),
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
    [anon_sym__COLON] = ACTIONS(1),
    [sym_echar] = ACTIONS(1),
    [sym_anon] = ACTIONS(1),
  },
  [1] = {
    [sym_turtle_doc] = STATE(84),
    [sym_statement] = STATE(8),
    [sym_directive] = STATE(35),
    [sym_prefix_id] = STATE(36),
    [sym_base] = STATE(36),
    [sym_sparql_base] = STATE(36),
    [sym_sparql_prefix] = STATE(36),
    [sym_triples] = STATE(78),
    [sym_subject] = STATE(41),
    [sym_blank_node_property_list] = STATE(37),
    [sym_collection] = STATE(70),
    [sym_iri_reference] = STATE(70),
    [sym__iri] = STATE(70),
    [sym_prefixed_name] = STATE(70),
    [sym__blank_node] = STATE(70),
    [sym__pname_ln] = STATE(21),
    [sym_blank_node_label] = STATE(70),
    [aux_sym_turtle_doc_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_pname_ns] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_ATprefix] = ACTIONS(9),
    [anon_sym_ATbase] = ACTIONS(11),
    [aux_sym_sparql_base_token1] = ACTIONS(13),
    [aux_sym_sparql_prefix_token1] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym__COLON] = ACTIONS(23),
    [sym_anon] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym__COLON,
    ACTIONS(27), 1,
      sym_pname_ns,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(21), 1,
      sym__pname_ln,
    STATE(28), 1,
      sym_string,
    STATE(83), 1,
      sym_object_collection,
    ACTIONS(31), 2,
      sym_integer,
      sym_decimal,
    ACTIONS(33), 2,
      sym_double,
      sym_anon,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 4,
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
  [76] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym__COLON,
    ACTIONS(27), 1,
      sym_pname_ns,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym__pname_ln,
    STATE(28), 1,
      sym_string,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(47), 2,
      sym_integer,
      sym_decimal,
    ACTIONS(49), 2,
      sym_double,
      sym_anon,
    STATE(13), 4,
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
  [149] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_pname_ns,
    ACTIONS(54), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    ACTIONS(62), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(74), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(80), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(86), 1,
      anon_sym__COLON,
    STATE(21), 1,
      sym__pname_ln,
    STATE(28), 1,
      sym_string,
    ACTIONS(65), 2,
      sym_integer,
      sym_decimal,
    ACTIONS(68), 2,
      sym_double,
      sym_anon,
    ACTIONS(83), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 4,
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
  [222] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_pname_ns,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym__COLON,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(21), 1,
      sym__pname_ln,
    STATE(50), 1,
      sym_string,
    STATE(68), 1,
      sym_object_list,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(89), 2,
      sym_integer,
      sym_decimal,
    ACTIONS(91), 2,
      sym_double,
      sym_anon,
    STATE(13), 4,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
    STATE(55), 12,
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
  [294] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_pname_ns,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym__COLON,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(21), 1,
      sym__pname_ln,
    STATE(50), 1,
      sym_string,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(93), 2,
      sym_integer,
      sym_decimal,
    ACTIONS(95), 2,
      sym_double,
      sym_anon,
    STATE(13), 4,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
    STATE(64), 12,
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
  [363] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      sym_pname_ns,
    ACTIONS(102), 1,
      anon_sym_ATprefix,
    ACTIONS(105), 1,
      anon_sym_ATbase,
    ACTIONS(108), 1,
      aux_sym_sparql_base_token1,
    ACTIONS(111), 1,
      aux_sym_sparql_prefix_token1,
    ACTIONS(114), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_LT,
    ACTIONS(123), 1,
      anon_sym__COLON,
    ACTIONS(126), 1,
      sym_anon,
    STATE(21), 1,
      sym__pname_ln,
    STATE(35), 1,
      sym_directive,
    STATE(37), 1,
      sym_blank_node_property_list,
    STATE(41), 1,
      sym_subject,
    STATE(78), 1,
      sym_triples,
    STATE(7), 2,
      sym_statement,
      aux_sym_turtle_doc_repeat1,
    STATE(36), 4,
      sym_prefix_id,
      sym_base,
      sym_sparql_base,
      sym_sparql_prefix,
    STATE(70), 6,
      sym_collection,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
  [433] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_pname_ns,
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
      anon_sym__COLON,
    ACTIONS(25), 1,
      sym_anon,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym__pname_ln,
    STATE(35), 1,
      sym_directive,
    STATE(37), 1,
      sym_blank_node_property_list,
    STATE(41), 1,
      sym_subject,
    STATE(78), 1,
      sym_triples,
    STATE(7), 2,
      sym_statement,
      aux_sym_turtle_doc_repeat1,
    STATE(36), 4,
      sym_prefix_id,
      sym_base,
      sym_sparql_base,
      sym_sparql_prefix,
    STATE(70), 6,
      sym_collection,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
  [503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 11,
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
    ACTIONS(131), 15,
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
      sym_pname_ns,
      anon_sym__COLON,
      sym_anon,
  [537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 8,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(135), 14,
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
      sym_pname_ns,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
  [567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 8,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(139), 14,
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
      sym_pname_ns,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
  [597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 8,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 14,
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
      sym_pname_ns,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
  [627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 8,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(147), 14,
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
      sym_pname_ns,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
  [657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 8,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
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
      sym_pname_ns,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
  [687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 8,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
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
      sym_pname_ns,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
  [717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 8,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
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
      sym_pname_ns,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
  [747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 8,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
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
      sym_pname_ns,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
  [777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 8,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
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
      sym_pname_ns,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
  [807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 9,
      anon_sym_DOT,
      anon_sym_a,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(171), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_pname_ns,
      anon_sym__COLON,
      sym_anon,
  [836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 9,
      anon_sym_DOT,
      anon_sym_a,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(175), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_pname_ns,
      anon_sym__COLON,
      sym_anon,
  [865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 9,
      anon_sym_DOT,
      anon_sym_a,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_pname_ns,
      anon_sym__COLON,
      sym_anon,
  [894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 9,
      anon_sym_DOT,
      anon_sym_a,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(183), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_pname_ns,
      anon_sym__COLON,
      sym_anon,
  [923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 9,
      anon_sym_DOT,
      anon_sym_a,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
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
      sym_pname_ns,
      anon_sym__COLON,
      sym_anon,
  [952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 9,
      anon_sym_DOT,
      anon_sym_a,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
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
      sym_pname_ns,
      anon_sym__COLON,
      sym_anon,
  [981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 8,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
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
      sym_pname_ns,
      anon_sym__COLON,
      sym_anon,
  [1009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 8,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
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
      sym_pname_ns,
      anon_sym__COLON,
      sym_anon,
  [1037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 8,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
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
      sym_pname_ns,
      anon_sym__COLON,
      sym_anon,
  [1065] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_CARET_CARET,
    ACTIONS(213), 1,
      sym_lang_tag,
    ACTIONS(209), 7,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_pname_ns,
      anon_sym__COLON,
      sym_anon,
  [1095] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym_pn_local,
    ACTIONS(179), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_anon,
    ACTIONS(181), 10,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      sym_double,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pname_ns,
      anon_sym__COLON,
  [1122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 7,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(217), 8,
      anon_sym_LPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_pname_ns,
      anon_sym__COLON,
      sym_anon,
  [1145] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_pname_ns,
    ACTIONS(223), 1,
      anon_sym_a,
    STATE(5), 1,
      sym_predicate,
    STATE(21), 1,
      sym__pname_ln,
    STATE(69), 1,
      sym_property,
    ACTIONS(221), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
    STATE(30), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
  [1177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 3,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
    ACTIONS(225), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      sym_pname_ns,
      anon_sym__COLON,
      sym_anon,
  [1196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 3,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
    ACTIONS(229), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      sym_pname_ns,
      anon_sym__COLON,
      sym_anon,
  [1215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 3,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
    ACTIONS(233), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      sym_pname_ns,
      anon_sym__COLON,
      sym_anon,
  [1234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 3,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
    ACTIONS(237), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      sym_pname_ns,
      anon_sym__COLON,
      sym_anon,
  [1253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 3,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
    ACTIONS(241), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      sym_pname_ns,
      anon_sym__COLON,
      sym_anon,
  [1272] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_pname_ns,
    ACTIONS(223), 1,
      anon_sym_a,
    ACTIONS(245), 1,
      anon_sym_DOT,
    STATE(5), 1,
      sym_predicate,
    STATE(21), 1,
      sym__pname_ln,
    STATE(63), 1,
      sym_property,
    STATE(82), 1,
      sym_property_list,
    STATE(30), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
  [1305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 3,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
    ACTIONS(247), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      sym_pname_ns,
      anon_sym__COLON,
      sym_anon,
  [1324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 3,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
    ACTIONS(251), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      sym_pname_ns,
      anon_sym__COLON,
      sym_anon,
  [1343] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_pname_ns,
    ACTIONS(223), 1,
      anon_sym_a,
    STATE(5), 1,
      sym_predicate,
    STATE(21), 1,
      sym__pname_ln,
    STATE(63), 1,
      sym_property,
    STATE(76), 1,
      sym_property_list,
    STATE(30), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
  [1373] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_pname_ns,
    ACTIONS(223), 1,
      anon_sym_a,
    STATE(5), 1,
      sym_predicate,
    STATE(21), 1,
      sym__pname_ln,
    STATE(63), 1,
      sym_property,
    STATE(82), 1,
      sym_property_list,
    STATE(30), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
  [1403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym_pn_local,
    ACTIONS(181), 2,
      anon_sym_a,
      sym_pname_ns,
    ACTIONS(179), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LT,
  [1421] = 6,
    ACTIONS(257), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(265), 1,
      aux_sym__string_literal_long_single_quote_token1,
    STATE(45), 1,
      aux_sym__string_literal_long_single_quote_repeat1,
    ACTIONS(259), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
    ACTIONS(261), 2,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [1442] = 6,
    ACTIONS(257), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(275), 1,
      aux_sym__string_literal_long_quote_token1,
    STATE(44), 1,
      aux_sym__string_literal_long_quote_repeat1,
    ACTIONS(267), 2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(270), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [1463] = 6,
    ACTIONS(257), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(286), 1,
      aux_sym__string_literal_long_single_quote_token1,
    STATE(45), 1,
      aux_sym__string_literal_long_single_quote_repeat1,
    ACTIONS(278), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
    ACTIONS(281), 2,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [1484] = 6,
    ACTIONS(257), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(295), 1,
      aux_sym__string_literal_long_quote_token1,
    STATE(47), 1,
      aux_sym__string_literal_long_quote_repeat1,
    ACTIONS(289), 2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(291), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [1505] = 6,
    ACTIONS(257), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(301), 1,
      aux_sym__string_literal_long_quote_token1,
    STATE(44), 1,
      aux_sym__string_literal_long_quote_repeat1,
    ACTIONS(289), 2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(297), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [1526] = 6,
    ACTIONS(257), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(307), 1,
      aux_sym__string_literal_long_single_quote_token1,
    STATE(43), 1,
      aux_sym__string_literal_long_single_quote_repeat1,
    ACTIONS(261), 2,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(303), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [1547] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_pname_ns,
    STATE(21), 1,
      sym__pname_ln,
    STATE(27), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
  [1565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_lang_tag,
    ACTIONS(309), 1,
      anon_sym_CARET_CARET,
    ACTIONS(207), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1581] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_pname_ns,
    ACTIONS(21), 1,
      anon_sym_LT,
    STATE(21), 1,
      sym__pname_ln,
    STATE(27), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
  [1599] = 3,
    ACTIONS(257), 1,
      sym_comment,
    ACTIONS(311), 1,
      aux_sym__string_literal_long_quote_token1,
    ACTIONS(273), 5,
      anon_sym_DQUOTE,
      aux_sym__string_literal_quote_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE,
      sym_echar,
  [1613] = 3,
    ACTIONS(257), 1,
      sym_comment,
    ACTIONS(313), 1,
      aux_sym__string_literal_long_single_quote_token1,
    ACTIONS(284), 5,
      aux_sym__string_literal_quote_token2,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
      sym_echar,
  [1627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_object_list_repeat1,
    ACTIONS(315), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [1642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_object_list_repeat1,
    ACTIONS(320), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [1657] = 5,
    ACTIONS(257), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
    ACTIONS(326), 1,
      aux_sym__string_literal_quote_token1,
    STATE(59), 1,
      aux_sym__string_literal_quote_repeat1,
    ACTIONS(328), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [1674] = 5,
    ACTIONS(257), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_SQUOTE,
    ACTIONS(335), 1,
      aux_sym__string_literal_single_quote_token1,
    STATE(57), 1,
      aux_sym__string_literal_single_quote_repeat1,
    ACTIONS(330), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [1691] = 5,
    ACTIONS(257), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_SQUOTE,
    ACTIONS(342), 1,
      aux_sym__string_literal_single_quote_token1,
    STATE(57), 1,
      aux_sym__string_literal_single_quote_repeat1,
    ACTIONS(338), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [1708] = 5,
    ACTIONS(257), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      aux_sym__string_literal_quote_token1,
    STATE(59), 1,
      aux_sym__string_literal_quote_repeat1,
    ACTIONS(349), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [1725] = 5,
    ACTIONS(257), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    ACTIONS(354), 1,
      aux_sym__string_literal_quote_token1,
    STATE(56), 1,
      aux_sym__string_literal_quote_repeat1,
    ACTIONS(356), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [1742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_object_list_repeat1,
    ACTIONS(358), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [1757] = 5,
    ACTIONS(257), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_SQUOTE,
    ACTIONS(364), 1,
      aux_sym__string_literal_single_quote_token1,
    STATE(58), 1,
      aux_sym__string_literal_single_quote_repeat1,
    ACTIONS(360), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [1774] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_SEMI,
    STATE(65), 1,
      aux_sym_property_list_repeat1,
    ACTIONS(366), 2,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      aux_sym_property_list_repeat1,
    ACTIONS(370), 2,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1812] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      aux_sym_property_list_repeat1,
    ACTIONS(372), 2,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1826] = 3,
    ACTIONS(257), 1,
      sym_comment,
    ACTIONS(379), 1,
      aux_sym__string_literal_long_single_quote_token1,
    ACTIONS(377), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [1837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [1846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [1855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_a,
    ACTIONS(383), 2,
      anon_sym_LT,
      sym_pname_ns,
  [1866] = 3,
    ACTIONS(257), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym__string_literal_long_quote_token1,
    ACTIONS(387), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [1877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT,
    STATE(33), 1,
      sym_iri_reference,
  [1887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT,
    STATE(38), 1,
      sym_iri_reference,
  [1897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT,
    STATE(87), 1,
      sym_iri_reference,
  [1907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT,
    STATE(85), 1,
      sym_iri_reference,
  [1917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_RBRACK,
  [1924] = 2,
    ACTIONS(257), 1,
      sym_comment,
    ACTIONS(393), 1,
      aux_sym_iri_reference_token1,
  [1931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_DOT,
  [1938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_GT,
  [1945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      aux_sym_blank_node_label_token1,
  [1952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      sym_pname_ns,
  [1959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_DOT,
  [1966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
  [1973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
  [1980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_DOT,
  [1987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym_pname_ns,
  [1994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 76,
  [SMALL_STATE(4)] = 149,
  [SMALL_STATE(5)] = 222,
  [SMALL_STATE(6)] = 294,
  [SMALL_STATE(7)] = 363,
  [SMALL_STATE(8)] = 433,
  [SMALL_STATE(9)] = 503,
  [SMALL_STATE(10)] = 537,
  [SMALL_STATE(11)] = 567,
  [SMALL_STATE(12)] = 597,
  [SMALL_STATE(13)] = 627,
  [SMALL_STATE(14)] = 657,
  [SMALL_STATE(15)] = 687,
  [SMALL_STATE(16)] = 717,
  [SMALL_STATE(17)] = 747,
  [SMALL_STATE(18)] = 777,
  [SMALL_STATE(19)] = 807,
  [SMALL_STATE(20)] = 836,
  [SMALL_STATE(21)] = 865,
  [SMALL_STATE(22)] = 894,
  [SMALL_STATE(23)] = 923,
  [SMALL_STATE(24)] = 952,
  [SMALL_STATE(25)] = 981,
  [SMALL_STATE(26)] = 1009,
  [SMALL_STATE(27)] = 1037,
  [SMALL_STATE(28)] = 1065,
  [SMALL_STATE(29)] = 1095,
  [SMALL_STATE(30)] = 1122,
  [SMALL_STATE(31)] = 1145,
  [SMALL_STATE(32)] = 1177,
  [SMALL_STATE(33)] = 1196,
  [SMALL_STATE(34)] = 1215,
  [SMALL_STATE(35)] = 1234,
  [SMALL_STATE(36)] = 1253,
  [SMALL_STATE(37)] = 1272,
  [SMALL_STATE(38)] = 1305,
  [SMALL_STATE(39)] = 1324,
  [SMALL_STATE(40)] = 1343,
  [SMALL_STATE(41)] = 1373,
  [SMALL_STATE(42)] = 1403,
  [SMALL_STATE(43)] = 1421,
  [SMALL_STATE(44)] = 1442,
  [SMALL_STATE(45)] = 1463,
  [SMALL_STATE(46)] = 1484,
  [SMALL_STATE(47)] = 1505,
  [SMALL_STATE(48)] = 1526,
  [SMALL_STATE(49)] = 1547,
  [SMALL_STATE(50)] = 1565,
  [SMALL_STATE(51)] = 1581,
  [SMALL_STATE(52)] = 1599,
  [SMALL_STATE(53)] = 1613,
  [SMALL_STATE(54)] = 1627,
  [SMALL_STATE(55)] = 1642,
  [SMALL_STATE(56)] = 1657,
  [SMALL_STATE(57)] = 1674,
  [SMALL_STATE(58)] = 1691,
  [SMALL_STATE(59)] = 1708,
  [SMALL_STATE(60)] = 1725,
  [SMALL_STATE(61)] = 1742,
  [SMALL_STATE(62)] = 1757,
  [SMALL_STATE(63)] = 1774,
  [SMALL_STATE(64)] = 1788,
  [SMALL_STATE(65)] = 1798,
  [SMALL_STATE(66)] = 1812,
  [SMALL_STATE(67)] = 1826,
  [SMALL_STATE(68)] = 1837,
  [SMALL_STATE(69)] = 1846,
  [SMALL_STATE(70)] = 1855,
  [SMALL_STATE(71)] = 1866,
  [SMALL_STATE(72)] = 1877,
  [SMALL_STATE(73)] = 1887,
  [SMALL_STATE(74)] = 1897,
  [SMALL_STATE(75)] = 1907,
  [SMALL_STATE(76)] = 1917,
  [SMALL_STATE(77)] = 1924,
  [SMALL_STATE(78)] = 1931,
  [SMALL_STATE(79)] = 1938,
  [SMALL_STATE(80)] = 1945,
  [SMALL_STATE(81)] = 1952,
  [SMALL_STATE(82)] = 1959,
  [SMALL_STATE(83)] = 1966,
  [SMALL_STATE(84)] = 1973,
  [SMALL_STATE(85)] = 1980,
  [SMALL_STATE(86)] = 1987,
  [SMALL_STATE(87)] = 1994,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_turtle_doc, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_collection, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(29),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(40),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(77),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(4),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(4),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(60),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(62),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(48),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(46),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(26),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(80),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(42),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(86),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(75),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(72),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(81),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(40),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(77),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(80),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(70),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_turtle_doc, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_reference, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri_reference, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_single_quote, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_single_quote, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_quote, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_quote, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_long_quote, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_long_quote, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_long_quote, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_long_quote, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_long_single_quote, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_long_single_quote, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_long_single_quote, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_long_single_quote, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_quote, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_quote, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_single_quote, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_single_quote, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_node_property_list, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_node_property_list, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_node_label, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_node_label, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefixed_name, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefixed_name, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pname_ln, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pname_ln, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rdf_literal, 2, .production_id = 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rdf_literal, 2, .production_id = 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rdf_literal, 3, .production_id = 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rdf_literal, 3, .production_id = 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rdf_literal, 1, .production_id = 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rdf_literal, 1, .production_id = 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparql_base, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparql_base, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_id, 4),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_id, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triples, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparql_prefix, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparql_prefix, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_long_quote_repeat1, 2), SHIFT_REPEAT(71),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_long_quote_repeat1, 2), SHIFT_REPEAT(44),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_long_quote_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_long_quote_repeat1, 2), SHIFT_REPEAT(44),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_long_single_quote_repeat1, 2), SHIFT_REPEAT(45),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_long_single_quote_repeat1, 2), SHIFT_REPEAT(67),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_long_single_quote_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_long_single_quote_repeat1, 2), SHIFT_REPEAT(45),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_literal_long_quote_repeat1, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_literal_long_single_quote_repeat1, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_list_repeat1, 2),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_list_repeat1, 2), SHIFT_REPEAT(6),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_list, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_single_quote_repeat1, 2), SHIFT_REPEAT(57),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_single_quote_repeat1, 2),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_single_quote_repeat1, 2), SHIFT_REPEAT(57),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_quote_repeat1, 2),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_quote_repeat1, 2), SHIFT_REPEAT(59),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_quote_repeat1, 2), SHIFT_REPEAT(59),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_list, 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_list, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_list, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2), SHIFT_REPEAT(31),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triples, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [407] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_turtle(void) {
  static const TSLanguage language = {
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
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_pname_ns,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
