#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 115
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym_pn_prefix = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_GRAPH = 4,
  sym_comment = 5,
  anon_sym_DOT = 6,
  anon_sym_ATprefix = 7,
  anon_sym_ATbase = 8,
  aux_sym_sparql_base_token1 = 9,
  aux_sym_sparql_prefix_token1 = 10,
  anon_sym_SEMI = 11,
  anon_sym_COMMA = 12,
  anon_sym_a = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_LT = 18,
  aux_sym_iri_reference_token1 = 19,
  anon_sym_GT = 20,
  sym_integer = 21,
  sym_decimal = 22,
  sym_double = 23,
  anon_sym_DQUOTE = 24,
  aux_sym__string_literal_quote_token1 = 25,
  aux_sym__string_literal_quote_token2 = 26,
  anon_sym_SQUOTE = 27,
  aux_sym__string_literal_single_quote_token1 = 28,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 29,
  anon_sym_SQUOTE_SQUOTE = 30,
  aux_sym__string_literal_long_single_quote_token1 = 31,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 32,
  anon_sym_DQUOTE_DQUOTE = 33,
  aux_sym__string_literal_long_quote_token1 = 34,
  anon_sym_CARET_CARET = 35,
  anon_sym_true = 36,
  anon_sym_false = 37,
  anon_sym_COLON = 38,
  anon_sym__COLON = 39,
  aux_sym_blank_node_label_token1 = 40,
  sym_lang_tag = 41,
  sym_echar = 42,
  sym_anon = 43,
  sym_pn_local = 44,
  sym_document = 45,
  sym_graph = 46,
  sym__label = 47,
  sym_triple = 48,
  sym_directive = 49,
  sym_prefix_id = 50,
  sym_base = 51,
  sym_sparql_base = 52,
  sym_sparql_prefix = 53,
  sym__triples = 54,
  sym_property_list = 55,
  sym_property = 56,
  sym_object_list = 57,
  sym_predicate = 58,
  sym_subject = 59,
  sym__object = 60,
  sym__literal = 61,
  sym_blank_node_property_list = 62,
  sym_collection = 63,
  sym_object_collection = 64,
  sym__numeric_literal = 65,
  sym_string = 66,
  sym_iri_reference = 67,
  sym__string_literal_quote = 68,
  sym__string_literal_single_quote = 69,
  sym__string_literal_long_single_quote = 70,
  sym__string_literal_long_quote = 71,
  sym_rdf_literal = 72,
  sym_boolean_literal = 73,
  sym__iri = 74,
  sym_prefixed_name = 75,
  sym__blank_node = 76,
  sym_namespace = 77,
  sym_blank_node_label = 78,
  aux_sym_document_repeat1 = 79,
  aux_sym_graph_repeat1 = 80,
  aux_sym_property_list_repeat1 = 81,
  aux_sym_object_list_repeat1 = 82,
  aux_sym_object_collection_repeat1 = 83,
  aux_sym__string_literal_quote_repeat1 = 84,
  aux_sym__string_literal_single_quote_repeat1 = 85,
  aux_sym__string_literal_long_single_quote_repeat1 = 86,
  aux_sym__string_literal_long_quote_repeat1 = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_pn_prefix] = "pn_prefix",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_GRAPH] = "GRAPH",
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
  [sym_document] = "document",
  [sym_graph] = "graph",
  [sym__label] = "_label",
  [sym_triple] = "triple",
  [sym_directive] = "directive",
  [sym_prefix_id] = "prefix_id",
  [sym_base] = "base",
  [sym_sparql_base] = "sparql_base",
  [sym_sparql_prefix] = "sparql_prefix",
  [sym__triples] = "_triples",
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
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_graph_repeat1] = "graph_repeat1",
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
  [sym_pn_prefix] = sym_pn_prefix,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_GRAPH] = anon_sym_GRAPH,
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
  [sym_document] = sym_document,
  [sym_graph] = sym_graph,
  [sym__label] = sym__label,
  [sym_triple] = sym_triple,
  [sym_directive] = sym_directive,
  [sym_prefix_id] = sym_prefix_id,
  [sym_base] = sym_base,
  [sym_sparql_base] = sym_sparql_base,
  [sym_sparql_prefix] = sym_sparql_prefix,
  [sym__triples] = sym__triples,
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
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_graph_repeat1] = aux_sym_graph_repeat1,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GRAPH] = {
    .visible = true,
    .named = false,
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
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_graph] = {
    .visible = true,
    .named = true,
  },
  [sym__label] = {
    .visible = false,
    .named = true,
  },
  [sym_triple] = {
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
  [sym__triples] = {
    .visible = false,
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
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_graph_repeat1] = {
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

enum ts_field_identifiers {
  field_datatype = 1,
  field_label = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_datatype] = "datatype",
  [field_label] = "label",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 0},
  [1] =
    {field_label, 0},
  [2] =
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 33,
  [55] = 34,
  [56] = 56,
  [57] = 32,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 58,
  [62] = 35,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 33,
  [70] = 70,
  [71] = 35,
  [72] = 72,
  [73] = 34,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 109,
  [112] = 112,
  [113] = 109,
  [114] = 114,
};

static TSCharacterRange aux_sym_blank_node_label_token1_character_set_1[] = {
  {'0', '9'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2ff}, {0x370, 0x37d},
  {0x37f, 0x1fff}, {0x200c, 0x200d}, {0x2070, 0x218f}, {0x2c00, 0x2fef}, {0x3001, 0xd7ff}, {0xf900, 0xfdcf}, {0xfdf0, 0xfffd}, {0x10000, 0xeffff},
};

static TSCharacterRange aux_sym_blank_node_label_token1_character_set_2[] = {
  {'-', '.'}, {'0', '9'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xb7, 0xb7}, {0xc0, 0xd6}, {0xd8, 0xf6},
  {0xf8, 0x37d}, {0x37f, 0x1fff}, {0x200c, 0x200d}, {0x203f, 0x2040}, {0x2070, 0x218f}, {0x2c00, 0x2fef}, {0x3001, 0xd7ff}, {0xf900, 0xfdcf},
  {0xfdf0, 0xfffd}, {0x10000, 0xeffff},
};

static TSCharacterRange sym_pn_prefix_character_set_1[] = {
  {'A', 'Z'}, {'a', 'z'}, {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2ff}, {0x370, 0x37d}, {0x37f, 0x1fff}, {0x200c, 0x200d},
  {0x2070, 0x218f}, {0x2c00, 0x2fef}, {0x3001, 0xd7ff}, {0xf900, 0xfdcf}, {0xfdf0, 0xfffd}, {0x10000, 0xeffff},
};

static TSCharacterRange sym_pn_local_character_set_1[] = {
  {'%', '%'}, {'0', ':'}, {'A', 'Z'}, {'\\', '\\'}, {'_', '_'}, {'a', 'z'}, {0xc0, 0xd6}, {0xd8, 0xf6},
  {0xf8, 0x2ff}, {0x370, 0x37d}, {0x37f, 0x1fff}, {0x200c, 0x200d}, {0x2070, 0x218f}, {0x2c00, 0x2fef}, {0x3001, 0xd7ff}, {0xf900, 0xfdcf},
  {0xfdf0, 0xfffd}, {0x10000, 0xeffff},
};

static TSCharacterRange sym_pn_local_character_set_2[] = {
  {'%', '%'}, {'-', '.'}, {'0', ':'}, {'A', 'Z'}, {'\\', '\\'}, {'_', '_'}, {'a', 'z'}, {0xb7, 0xb7},
  {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x37d}, {0x37f, 0x1fff}, {0x200c, 0x200d}, {0x203f, 0x2040}, {0x2070, 0x218f}, {0x2c00, 0x2fef},
  {0x3001, 0xd7ff}, {0xf900, 0xfdcf}, {0xfdf0, 0xfffd}, {0x10000, 0xeffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        '"', 97,
        '#', 77,
        '\'', 103,
        '(', 86,
        ')', 87,
        ',', 83,
        '.', 79,
        ':', 116,
        ';', 82,
        '<', 88,
        '>', 92,
        '@', 30,
        '[', 84,
        '\\', 25,
        ']', 85,
        '^', 28,
        '_', 24,
        '{', 66,
        '}', 67,
        '+', 21,
        '-', 21,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (set_contains(sym_pn_prefix_character_set_1, 14, lookahead)) ADVANCE(125);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(111);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 98,
        '#', 77,
        '%', 47,
        '\'', 104,
        '(', 86,
        ')', 87,
        '.', 40,
        ':', 117,
        '<', 88,
        '[', 84,
        '\\', 42,
        '_', 127,
        '+', 21,
        '-', 21,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (set_contains(sym_pn_local_character_set_1, 18, lookahead)) ADVANCE(132);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 98,
        '#', 77,
        '\'', 104,
        '(', 86,
        ')', 87,
        ',', 83,
        '.', 79,
        ':', 116,
        ';', 82,
        '<', 88,
        '@', 61,
        '[', 84,
        ']', 85,
        '^', 28,
        '_', 24,
        '}', 67,
        '+', 21,
        '-', 21,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (set_contains(sym_pn_prefix_character_set_1, 14, lookahead)) ADVANCE(125);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 98,
        '#', 77,
        '\'', 104,
        '(', 86,
        ')', 87,
        '.', 40,
        ':', 116,
        '<', 88,
        '@', 61,
        '[', 84,
        '^', 28,
        '_', 24,
        '+', 21,
        '-', 21,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (set_contains(sym_pn_prefix_character_set_1, 14, lookahead)) ADVANCE(125);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 98,
        '#', 77,
        '\'', 104,
        '(', 86,
        ')', 87,
        '.', 40,
        ':', 116,
        '<', 88,
        '[', 84,
        '_', 24,
        '+', 21,
        '-', 21,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (set_contains(sym_pn_prefix_character_set_1, 14, lookahead)) ADVANCE(125);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '#', 77,
        '%', 47,
        ',', 83,
        '.', 78,
        ';', 82,
        '\\', 42,
        ']', 85,
        '{', 66,
        '}', 67,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (set_contains(sym_pn_local_character_set_1, 18, lookahead)) ADVANCE(130);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == '<') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '{') ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(130);
      if (set_contains(sym_pn_local_character_set_1, 18, lookahead)) ADVANCE(132);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '#', 77,
        ',', 83,
        '.', 78,
        ':', 116,
        ';', 82,
        '<', 88,
        '@', 61,
        ']', 85,
        '^', 28,
        '}', 67,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (set_contains(sym_pn_prefix_character_set_1, 14, lookahead)) ADVANCE(125);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == ';') ADVANCE(82);
      if (lookahead == ']') ADVANCE(85);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '}') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == '<') ADVANCE(88);
      if (lookahead == '{') ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (set_contains(sym_pn_prefix_character_set_1, 14, lookahead)) ADVANCE(125);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (set_contains(aux_sym_blank_node_label_token1_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == '\'') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(16);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 17:
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (set_contains(sym_pn_local_character_set_2, 20, lookahead)) ADVANCE(130);
      END_STATE();
    case 18:
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(42);
      if (set_contains(sym_pn_local_character_set_2, 20, lookahead)) ADVANCE(130);
      END_STATE();
    case 19:
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(42);
      if (set_contains(sym_pn_local_character_set_2, 20, lookahead)) ADVANCE(132);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(107);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(22);
      if (set_contains(aux_sym_blank_node_label_token1_character_set_2, 18, lookahead)) ADVANCE(125);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(23);
      if (set_contains(aux_sym_blank_node_label_token1_character_set_2, 18, lookahead)) ADVANCE(120);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(118);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        'U', 59,
        'u', 51,
        '"', 123,
        '\'', 123,
        '\\', 123,
        'b', 123,
        'f', 123,
        'n', 123,
        'r', 123,
        't', 123,
      );
      END_STATE();
    case 26:
      if (lookahead == 'U') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 27:
      if (lookahead == ']') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '^') ADVANCE(115);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'x') ADVANCE(80);
      END_STATE();
    case 38:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 42:
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '/') ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(130);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 61:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 63:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        '"', 97,
        '#', 77,
        '\'', 103,
        '(', 86,
        ')', 87,
        ',', 83,
        '.', 79,
        ':', 116,
        ';', 82,
        '<', 88,
        '@', 30,
        '[', 84,
        '\\', 25,
        ']', 85,
        '^', 28,
        '_', 24,
        '{', 66,
        '}', 67,
        '+', 21,
        '-', 21,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (set_contains(sym_pn_prefix_character_set_1, 14, lookahead)) ADVANCE(125);
      END_STATE();
    case 64:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        '"', 98,
        '#', 77,
        '\'', 104,
        '(', 86,
        ')', 87,
        ',', 83,
        '.', 79,
        ':', 116,
        ';', 82,
        '<', 88,
        '@', 30,
        '[', 84,
        ']', 85,
        '_', 24,
        '{', 66,
        '}', 67,
        '+', 21,
        '-', 21,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (set_contains(sym_pn_prefix_character_set_1, 14, lookahead)) ADVANCE(125);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'U') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_ATprefix);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_ATbase);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(112);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(2);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__string_literal_quote_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__string_literal_quote_token1);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__string_literal_quote_token2);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(108);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(20);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__string_literal_single_quote_token1);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__string_literal_single_quote_token1);
      if (lookahead == '#') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      if (lookahead == '\'') ADVANCE(107);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__string_literal_long_single_quote_token1);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__string_literal_long_single_quote_token1);
      if (lookahead == '#') ADVANCE(109);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      if (lookahead == '"') ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__string_literal_long_quote_token1);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__string_literal_long_quote_token1);
      if (lookahead == '#') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(113);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(42);
      if (set_contains(sym_pn_local_character_set_2, 20, lookahead)) ADVANCE(130);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym__COLON);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym__COLON);
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(42);
      if (set_contains(sym_pn_local_character_set_2, 20, lookahead)) ADVANCE(130);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_blank_node_label_token1);
      if (lookahead == '.') ADVANCE(23);
      if (set_contains(aux_sym_blank_node_label_token1_character_set_2, 18, lookahead)) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_lang_tag);
      if (lookahead == '-') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_lang_tag);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_echar);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_anon);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (lookahead == '.') ADVANCE(22);
      if (set_contains(aux_sym_blank_node_label_token1_character_set_2, 18, lookahead)) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (set_contains(sym_pn_local_character_set_2, 20, lookahead)) ADVANCE(130);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(42);
      if (set_contains(sym_pn_local_character_set_2, 20, lookahead)) ADVANCE(130);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (set_contains(sym_pn_local_character_set_2, 20, lookahead)) ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (set_contains(sym_pn_local_character_set_2, 20, lookahead)) ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(42);
      if (set_contains(sym_pn_local_character_set_2, 20, lookahead)) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (set_contains(sym_pn_local_character_set_2, 20, lookahead)) ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(42);
      if (set_contains(sym_pn_local_character_set_2, 20, lookahead)) ADVANCE(132);
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
      ADVANCE_MAP(
        'G', 1,
        'a', 2,
        'f', 3,
        't', 4,
        'B', 5,
        'b', 5,
        'P', 6,
        'p', 6,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'R') ADVANCE(7);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'P') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'H') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_sparql_base_token1);
      END_STATE();
    case 21:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_GRAPH);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 24:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_sparql_prefix_token1);
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
  [9] = {.lex_state = 64},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 64},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 64},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 64},
  [22] = {.lex_state = 64},
  [23] = {.lex_state = 64},
  [24] = {.lex_state = 64},
  [25] = {.lex_state = 64},
  [26] = {.lex_state = 64},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 15},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 15},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 14},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 89},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_pn_prefix] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_GRAPH] = ACTIONS(1),
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
    [sym_document] = STATE(108),
    [sym_graph] = STATE(8),
    [sym__label] = STATE(107),
    [sym_triple] = STATE(8),
    [sym_directive] = STATE(8),
    [sym_prefix_id] = STATE(44),
    [sym_base] = STATE(44),
    [sym_sparql_base] = STATE(44),
    [sym_sparql_prefix] = STATE(44),
    [sym__triples] = STATE(106),
    [sym_subject] = STATE(52),
    [sym_blank_node_property_list] = STATE(50),
    [sym_collection] = STATE(86),
    [sym_iri_reference] = STATE(74),
    [sym__iri] = STATE(74),
    [sym_prefixed_name] = STATE(74),
    [sym__blank_node] = STATE(74),
    [sym_namespace] = STATE(71),
    [sym_blank_node_label] = STATE(74),
    [aux_sym_document_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_pn_prefix] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_GRAPH] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_ATprefix] = ACTIONS(13),
    [anon_sym_ATbase] = ACTIONS(15),
    [aux_sym_sparql_base_token1] = ACTIONS(17),
    [aux_sym_sparql_prefix_token1] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym__COLON] = ACTIONS(29),
    [sym_anon] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym__COLON,
    ACTIONS(33), 1,
      sym_pn_prefix,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_COLON,
    STATE(32), 1,
      sym_string,
    STATE(35), 1,
      sym_namespace,
    STATE(101), 1,
      sym_object_collection,
    ACTIONS(37), 2,
      sym_integer,
      sym_decimal,
    ACTIONS(39), 2,
      sym_double,
      sym_anon,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 4,
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
  [79] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym__COLON,
    ACTIONS(33), 1,
      sym_pn_prefix,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_COLON,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      sym_string,
    STATE(35), 1,
      sym_namespace,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(55), 2,
      sym_integer,
      sym_decimal,
    ACTIONS(57), 2,
      sym_double,
      sym_anon,
    STATE(18), 4,
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
  [155] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_pn_prefix,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
    ACTIONS(70), 1,
      anon_sym_LT,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(94), 1,
      anon_sym_COLON,
    ACTIONS(97), 1,
      anon_sym__COLON,
    STATE(32), 1,
      sym_string,
    STATE(35), 1,
      sym_namespace,
    ACTIONS(73), 2,
      sym_integer,
      sym_decimal,
    ACTIONS(76), 2,
      sym_double,
      sym_anon,
    ACTIONS(91), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 4,
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
  [231] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym__COLON,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(100), 1,
      sym_pn_prefix,
    ACTIONS(106), 1,
      anon_sym_COLON,
    STATE(57), 1,
      sym_string,
    STATE(62), 1,
      sym_namespace,
    STATE(85), 1,
      sym_object_list,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(102), 2,
      sym_integer,
      sym_decimal,
    ACTIONS(104), 2,
      sym_double,
      sym_anon,
    STATE(18), 4,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
    STATE(72), 12,
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
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym__COLON,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(100), 1,
      sym_pn_prefix,
    ACTIONS(106), 1,
      anon_sym_COLON,
    STATE(57), 1,
      sym_string,
    STATE(62), 1,
      sym_namespace,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(108), 2,
      sym_integer,
      sym_decimal,
    ACTIONS(110), 2,
      sym_double,
      sym_anon,
    STATE(18), 4,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
    STATE(77), 12,
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
  [378] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 1,
      sym_pn_prefix,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_GRAPH,
    ACTIONS(123), 1,
      anon_sym_ATprefix,
    ACTIONS(126), 1,
      anon_sym_ATbase,
    ACTIONS(129), 1,
      aux_sym_sparql_base_token1,
    ACTIONS(132), 1,
      aux_sym_sparql_prefix_token1,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_LT,
    ACTIONS(144), 1,
      anon_sym_COLON,
    ACTIONS(147), 1,
      anon_sym__COLON,
    ACTIONS(150), 1,
      sym_anon,
    STATE(50), 1,
      sym_blank_node_property_list,
    STATE(52), 1,
      sym_subject,
    STATE(71), 1,
      sym_namespace,
    STATE(86), 1,
      sym_collection,
    STATE(106), 1,
      sym__triples,
    STATE(107), 1,
      sym__label,
    STATE(7), 4,
      sym_graph,
      sym_triple,
      sym_directive,
      aux_sym_document_repeat1,
    STATE(44), 4,
      sym_prefix_id,
      sym_base,
      sym_sparql_base,
      sym_sparql_prefix,
    STATE(74), 5,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
  [461] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_pn_prefix,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_GRAPH,
    ACTIONS(13), 1,
      anon_sym_ATprefix,
    ACTIONS(15), 1,
      anon_sym_ATbase,
    ACTIONS(17), 1,
      aux_sym_sparql_base_token1,
    ACTIONS(19), 1,
      aux_sym_sparql_prefix_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym__COLON,
    ACTIONS(31), 1,
      sym_anon,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_blank_node_property_list,
    STATE(52), 1,
      sym_subject,
    STATE(71), 1,
      sym_namespace,
    STATE(86), 1,
      sym_collection,
    STATE(106), 1,
      sym__triples,
    STATE(107), 1,
      sym__label,
    STATE(7), 4,
      sym_graph,
      sym_triple,
      sym_directive,
      aux_sym_document_repeat1,
    STATE(44), 4,
      sym_prefix_id,
      sym_base,
      sym_sparql_base,
      sym_sparql_prefix,
    STATE(74), 5,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
  [544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 13,
      anon_sym_GRAPH,
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
    ACTIONS(155), 17,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(161), 15,
      anon_sym_RBRACE,
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
  [614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 10,
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
    ACTIONS(165), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(169), 15,
      anon_sym_RBRACE,
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
  [678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(173), 15,
      anon_sym_RBRACE,
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
  [710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(177), 15,
      anon_sym_RBRACE,
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
  [742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(181), 15,
      anon_sym_RBRACE,
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
  [774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(185), 15,
      anon_sym_RBRACE,
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
  [806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(189), 15,
      anon_sym_RBRACE,
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
    ACTIONS(191), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(193), 15,
      anon_sym_RBRACE,
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
  [870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 10,
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
    ACTIONS(197), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(201), 15,
      anon_sym_RBRACE,
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
  [934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 10,
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
    ACTIONS(205), 13,
      anon_sym_RBRACE,
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
  [965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 10,
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
    ACTIONS(209), 13,
      anon_sym_RBRACE,
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
  [996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 10,
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
    ACTIONS(213), 13,
      anon_sym_RBRACE,
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
  [1027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(217), 13,
      anon_sym_RBRACE,
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
  [1057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(221), 13,
      anon_sym_RBRACE,
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
  [1087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 9,
      anon_sym_DOT,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(225), 13,
      anon_sym_RBRACE,
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
  [1117] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym_pn_prefix,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      anon_sym_LT,
    ACTIONS(241), 1,
      anon_sym_COLON,
    ACTIONS(244), 1,
      anon_sym__COLON,
    ACTIONS(247), 1,
      sym_anon,
    STATE(50), 1,
      sym_blank_node_property_list,
    STATE(52), 1,
      sym_subject,
    STATE(71), 1,
      sym_namespace,
    STATE(106), 1,
      sym__triples,
    STATE(27), 2,
      sym_triple,
      aux_sym_graph_repeat1,
    STATE(86), 6,
      sym_collection,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
  [1169] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym__COLON,
    ACTIONS(250), 1,
      sym_pn_prefix,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    ACTIONS(254), 1,
      sym_anon,
    STATE(50), 1,
      sym_blank_node_property_list,
    STATE(52), 1,
      sym_subject,
    STATE(71), 1,
      sym_namespace,
    STATE(97), 1,
      sym__triples,
    STATE(30), 2,
      sym_triple,
      aux_sym_graph_repeat1,
    STATE(86), 6,
      sym_collection,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
  [1221] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym__COLON,
    ACTIONS(250), 1,
      sym_pn_prefix,
    ACTIONS(254), 1,
      sym_anon,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_blank_node_property_list,
    STATE(52), 1,
      sym_subject,
    STATE(71), 1,
      sym_namespace,
    STATE(93), 1,
      sym__triples,
    STATE(27), 2,
      sym_triple,
      aux_sym_graph_repeat1,
    STATE(86), 6,
      sym_collection,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
  [1273] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym__COLON,
    ACTIONS(250), 1,
      sym_pn_prefix,
    ACTIONS(254), 1,
      sym_anon,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_blank_node_property_list,
    STATE(52), 1,
      sym_subject,
    STATE(71), 1,
      sym_namespace,
    STATE(92), 1,
      sym__triples,
    STATE(27), 2,
      sym_triple,
      aux_sym_graph_repeat1,
    STATE(86), 6,
      sym_collection,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
  [1325] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym__COLON,
    ACTIONS(250), 1,
      sym_pn_prefix,
    ACTIONS(254), 1,
      sym_anon,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_blank_node_property_list,
    STATE(52), 1,
      sym_subject,
    STATE(71), 1,
      sym_namespace,
    STATE(98), 1,
      sym__triples,
    STATE(29), 2,
      sym_triple,
      aux_sym_graph_repeat1,
    STATE(86), 6,
      sym_collection,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
  [1377] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_CARET_CARET,
    ACTIONS(268), 1,
      sym_lang_tag,
    ACTIONS(262), 8,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(264), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_anon,
    ACTIONS(270), 12,
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
  [1434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_anon,
    ACTIONS(274), 12,
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
  [1460] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym_pn_local,
    ACTIONS(280), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_anon,
    ACTIONS(278), 11,
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
  [1488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 8,
      anon_sym_LBRACK,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(286), 8,
      anon_sym_LPAREN,
      anon_sym_LT,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 5,
      anon_sym_GRAPH,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(288), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 5,
      anon_sym_GRAPH,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(292), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 5,
      anon_sym_GRAPH,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(296), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 5,
      anon_sym_GRAPH,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(300), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 5,
      anon_sym_GRAPH,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(304), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 5,
      anon_sym_GRAPH,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(308), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 5,
      anon_sym_GRAPH,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(312), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 5,
      anon_sym_GRAPH,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(316), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 5,
      anon_sym_GRAPH,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(320), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 5,
      anon_sym_GRAPH,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(324), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 5,
      anon_sym_GRAPH,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(328), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1755] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      sym_pn_prefix,
    ACTIONS(51), 1,
      anon_sym_COLON,
    ACTIONS(334), 1,
      anon_sym_a,
    STATE(5), 1,
      sym_predicate,
    STATE(35), 1,
      sym_namespace,
    STATE(87), 1,
      sym_property,
    STATE(36), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
    ACTIONS(332), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [1791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 5,
      anon_sym_GRAPH,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      sym_pn_prefix,
    ACTIONS(336), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
  [1813] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      sym_pn_prefix,
    ACTIONS(51), 1,
      anon_sym_COLON,
    ACTIONS(334), 1,
      anon_sym_a,
    STATE(5), 1,
      sym_predicate,
    STATE(35), 1,
      sym_namespace,
    STATE(80), 1,
      sym_property,
    STATE(96), 1,
      sym_property_list,
    ACTIONS(340), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
    STATE(36), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
  [1850] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      sym_pn_prefix,
    ACTIONS(51), 1,
      anon_sym_COLON,
    ACTIONS(334), 1,
      anon_sym_a,
    STATE(5), 1,
      sym_predicate,
    STATE(35), 1,
      sym_namespace,
    STATE(80), 1,
      sym_property,
    STATE(102), 1,
      sym_property_list,
    STATE(36), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
  [1883] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      sym_pn_prefix,
    ACTIONS(51), 1,
      anon_sym_COLON,
    ACTIONS(334), 1,
      anon_sym_a,
    STATE(5), 1,
      sym_predicate,
    STATE(35), 1,
      sym_namespace,
    STATE(80), 1,
      sym_property,
    STATE(96), 1,
      sym_property_list,
    STATE(36), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
  [1916] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym__COLON,
    ACTIONS(106), 1,
      anon_sym_COLON,
    ACTIONS(342), 1,
      sym_pn_prefix,
    ACTIONS(344), 1,
      sym_anon,
    STATE(62), 1,
      sym_namespace,
    STATE(104), 5,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
  [1945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_pn_local,
  [1958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_pn_local,
  [1971] = 6,
    ACTIONS(346), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(356), 1,
      aux_sym__string_literal_long_single_quote_token1,
    STATE(56), 1,
      aux_sym__string_literal_long_single_quote_repeat1,
    ACTIONS(348), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
    ACTIONS(351), 2,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [1992] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_lang_tag,
    ACTIONS(359), 1,
      anon_sym_CARET_CARET,
    ACTIONS(264), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2009] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(106), 1,
      anon_sym_COLON,
    ACTIONS(342), 1,
      sym_pn_prefix,
    STATE(62), 1,
      sym_namespace,
    STATE(25), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
  [2030] = 6,
    ACTIONS(346), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(367), 1,
      aux_sym__string_literal_long_single_quote_token1,
    STATE(64), 1,
      aux_sym__string_literal_long_single_quote_repeat1,
    ACTIONS(361), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
    ACTIONS(363), 2,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [2051] = 6,
    ACTIONS(346), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(375), 1,
      aux_sym__string_literal_long_quote_token1,
    STATE(63), 1,
      aux_sym__string_literal_long_quote_repeat1,
    ACTIONS(369), 2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(371), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [2072] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(51), 1,
      anon_sym_COLON,
    ACTIONS(377), 1,
      sym_pn_prefix,
    STATE(35), 1,
      sym_namespace,
    STATE(25), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
  [2093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      sym_pn_local,
    ACTIONS(280), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2108] = 6,
    ACTIONS(346), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(385), 1,
      aux_sym__string_literal_long_quote_token1,
    STATE(65), 1,
      aux_sym__string_literal_long_quote_repeat1,
    ACTIONS(369), 2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(381), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [2129] = 6,
    ACTIONS(346), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(391), 1,
      aux_sym__string_literal_long_single_quote_token1,
    STATE(56), 1,
      aux_sym__string_literal_long_single_quote_repeat1,
    ACTIONS(363), 2,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(387), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [2150] = 6,
    ACTIONS(346), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(401), 1,
      aux_sym__string_literal_long_quote_token1,
    STATE(65), 1,
      aux_sym__string_literal_long_quote_repeat1,
    ACTIONS(393), 2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(396), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [2171] = 3,
    ACTIONS(346), 1,
      sym_comment,
    ACTIONS(404), 1,
      aux_sym__string_literal_long_quote_token1,
    ACTIONS(399), 5,
      anon_sym_DQUOTE,
      aux_sym__string_literal_quote_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE,
      sym_echar,
  [2185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_object_list_repeat1,
    ACTIONS(406), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [2201] = 3,
    ACTIONS(346), 1,
      sym_comment,
    ACTIONS(411), 1,
      aux_sym__string_literal_long_single_quote_token1,
    ACTIONS(354), 5,
      aux_sym__string_literal_quote_token2,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
      sym_echar,
  [2215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 2,
      anon_sym_LBRACE,
      anon_sym_LT,
    ACTIONS(270), 4,
      anon_sym_a,
      anon_sym_COLON,
      sym_pn_prefix,
      sym_pn_local,
  [2229] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_object_list_repeat1,
    ACTIONS(413), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [2245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym_pn_local,
    ACTIONS(280), 2,
      anon_sym_LBRACE,
      anon_sym_LT,
    ACTIONS(278), 3,
      anon_sym_a,
      anon_sym_COLON,
      sym_pn_prefix,
  [2261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_object_list_repeat1,
    ACTIONS(417), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [2277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_LBRACE,
      anon_sym_LT,
    ACTIONS(274), 4,
      anon_sym_a,
      anon_sym_COLON,
      sym_pn_prefix,
      sym_pn_local,
  [2291] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_LBRACE,
    ACTIONS(419), 2,
      anon_sym_a,
      sym_pn_prefix,
    ACTIONS(423), 2,
      anon_sym_LT,
      anon_sym_COLON,
  [2306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_SEMI,
    STATE(81), 1,
      aux_sym_property_list_repeat1,
    ACTIONS(425), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [2321] = 5,
    ACTIONS(346), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_DQUOTE,
    ACTIONS(431), 1,
      aux_sym__string_literal_quote_token1,
    STATE(83), 1,
      aux_sym__string_literal_quote_repeat1,
    ACTIONS(433), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [2338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2349] = 5,
    ACTIONS(346), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_SQUOTE,
    ACTIONS(439), 1,
      aux_sym__string_literal_single_quote_token1,
    STATE(82), 1,
      aux_sym__string_literal_single_quote_repeat1,
    ACTIONS(435), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [2366] = 5,
    ACTIONS(346), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_DQUOTE,
    ACTIONS(443), 1,
      aux_sym__string_literal_quote_token1,
    STATE(76), 1,
      aux_sym__string_literal_quote_repeat1,
    ACTIONS(445), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [2383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_SEMI,
    STATE(75), 1,
      aux_sym_property_list_repeat1,
    ACTIONS(447), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [2398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_SEMI,
    STATE(81), 1,
      aux_sym_property_list_repeat1,
    ACTIONS(449), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [2413] = 5,
    ACTIONS(346), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_SQUOTE,
    ACTIONS(458), 1,
      aux_sym__string_literal_single_quote_token1,
    STATE(84), 1,
      aux_sym__string_literal_single_quote_repeat1,
    ACTIONS(454), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [2430] = 5,
    ACTIONS(346), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_DQUOTE,
    ACTIONS(462), 1,
      aux_sym__string_literal_quote_token1,
    STATE(83), 1,
      aux_sym__string_literal_quote_repeat1,
    ACTIONS(465), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [2447] = 5,
    ACTIONS(346), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_SQUOTE,
    ACTIONS(473), 1,
      aux_sym__string_literal_single_quote_token1,
    STATE(84), 1,
      aux_sym__string_literal_single_quote_repeat1,
    ACTIONS(468), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [2464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [2474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 2,
      anon_sym_a,
      sym_pn_prefix,
    ACTIONS(423), 2,
      anon_sym_LT,
      anon_sym_COLON,
  [2486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [2496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(250), 1,
      sym_pn_prefix,
    STATE(100), 1,
      sym_namespace,
  [2509] = 3,
    ACTIONS(346), 1,
      sym_comment,
    ACTIONS(480), 1,
      aux_sym__string_literal_long_quote_token1,
    ACTIONS(478), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [2520] = 3,
    ACTIONS(346), 1,
      sym_comment,
    ACTIONS(484), 1,
      aux_sym__string_literal_long_single_quote_token1,
    ACTIONS(482), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [2531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(250), 1,
      sym_pn_prefix,
    STATE(99), 1,
      sym_namespace,
  [2544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_RBRACE,
    ACTIONS(488), 1,
      anon_sym_DOT,
  [2554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_DOT,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
  [2564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT,
    STATE(103), 1,
      sym_iri_reference,
  [2574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT,
    STATE(43), 1,
      sym_iri_reference,
  [2584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [2592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    ACTIONS(488), 1,
      anon_sym_DOT,
  [2602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    ACTIONS(488), 1,
      anon_sym_DOT,
  [2612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT,
    STATE(105), 1,
      sym_iri_reference,
  [2622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT,
    STATE(47), 1,
      sym_iri_reference,
  [2632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
  [2639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_RBRACK,
  [2646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_DOT,
  [2653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
  [2660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_DOT,
  [2667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_DOT,
  [2674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_LBRACE,
  [2681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      ts_builtin_sym_end,
  [2688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_COLON,
  [2695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      aux_sym_blank_node_label_token1,
  [2702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_COLON,
  [2709] = 2,
    ACTIONS(346), 1,
      sym_comment,
    ACTIONS(514), 1,
      aux_sym_iri_reference_token1,
  [2716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_COLON,
  [2723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
  [SMALL_STATE(4)] = 155,
  [SMALL_STATE(5)] = 231,
  [SMALL_STATE(6)] = 306,
  [SMALL_STATE(7)] = 378,
  [SMALL_STATE(8)] = 461,
  [SMALL_STATE(9)] = 544,
  [SMALL_STATE(10)] = 582,
  [SMALL_STATE(11)] = 614,
  [SMALL_STATE(12)] = 646,
  [SMALL_STATE(13)] = 678,
  [SMALL_STATE(14)] = 710,
  [SMALL_STATE(15)] = 742,
  [SMALL_STATE(16)] = 774,
  [SMALL_STATE(17)] = 806,
  [SMALL_STATE(18)] = 838,
  [SMALL_STATE(19)] = 870,
  [SMALL_STATE(20)] = 902,
  [SMALL_STATE(21)] = 934,
  [SMALL_STATE(22)] = 965,
  [SMALL_STATE(23)] = 996,
  [SMALL_STATE(24)] = 1027,
  [SMALL_STATE(25)] = 1057,
  [SMALL_STATE(26)] = 1087,
  [SMALL_STATE(27)] = 1117,
  [SMALL_STATE(28)] = 1169,
  [SMALL_STATE(29)] = 1221,
  [SMALL_STATE(30)] = 1273,
  [SMALL_STATE(31)] = 1325,
  [SMALL_STATE(32)] = 1377,
  [SMALL_STATE(33)] = 1408,
  [SMALL_STATE(34)] = 1434,
  [SMALL_STATE(35)] = 1460,
  [SMALL_STATE(36)] = 1488,
  [SMALL_STATE(37)] = 1512,
  [SMALL_STATE(38)] = 1535,
  [SMALL_STATE(39)] = 1557,
  [SMALL_STATE(40)] = 1579,
  [SMALL_STATE(41)] = 1601,
  [SMALL_STATE(42)] = 1623,
  [SMALL_STATE(43)] = 1645,
  [SMALL_STATE(44)] = 1667,
  [SMALL_STATE(45)] = 1689,
  [SMALL_STATE(46)] = 1711,
  [SMALL_STATE(47)] = 1733,
  [SMALL_STATE(48)] = 1755,
  [SMALL_STATE(49)] = 1791,
  [SMALL_STATE(50)] = 1813,
  [SMALL_STATE(51)] = 1850,
  [SMALL_STATE(52)] = 1883,
  [SMALL_STATE(53)] = 1916,
  [SMALL_STATE(54)] = 1945,
  [SMALL_STATE(55)] = 1958,
  [SMALL_STATE(56)] = 1971,
  [SMALL_STATE(57)] = 1992,
  [SMALL_STATE(58)] = 2009,
  [SMALL_STATE(59)] = 2030,
  [SMALL_STATE(60)] = 2051,
  [SMALL_STATE(61)] = 2072,
  [SMALL_STATE(62)] = 2093,
  [SMALL_STATE(63)] = 2108,
  [SMALL_STATE(64)] = 2129,
  [SMALL_STATE(65)] = 2150,
  [SMALL_STATE(66)] = 2171,
  [SMALL_STATE(67)] = 2185,
  [SMALL_STATE(68)] = 2201,
  [SMALL_STATE(69)] = 2215,
  [SMALL_STATE(70)] = 2229,
  [SMALL_STATE(71)] = 2245,
  [SMALL_STATE(72)] = 2261,
  [SMALL_STATE(73)] = 2277,
  [SMALL_STATE(74)] = 2291,
  [SMALL_STATE(75)] = 2306,
  [SMALL_STATE(76)] = 2321,
  [SMALL_STATE(77)] = 2338,
  [SMALL_STATE(78)] = 2349,
  [SMALL_STATE(79)] = 2366,
  [SMALL_STATE(80)] = 2383,
  [SMALL_STATE(81)] = 2398,
  [SMALL_STATE(82)] = 2413,
  [SMALL_STATE(83)] = 2430,
  [SMALL_STATE(84)] = 2447,
  [SMALL_STATE(85)] = 2464,
  [SMALL_STATE(86)] = 2474,
  [SMALL_STATE(87)] = 2486,
  [SMALL_STATE(88)] = 2496,
  [SMALL_STATE(89)] = 2509,
  [SMALL_STATE(90)] = 2520,
  [SMALL_STATE(91)] = 2531,
  [SMALL_STATE(92)] = 2544,
  [SMALL_STATE(93)] = 2554,
  [SMALL_STATE(94)] = 2564,
  [SMALL_STATE(95)] = 2574,
  [SMALL_STATE(96)] = 2584,
  [SMALL_STATE(97)] = 2592,
  [SMALL_STATE(98)] = 2602,
  [SMALL_STATE(99)] = 2612,
  [SMALL_STATE(100)] = 2622,
  [SMALL_STATE(101)] = 2632,
  [SMALL_STATE(102)] = 2639,
  [SMALL_STATE(103)] = 2646,
  [SMALL_STATE(104)] = 2653,
  [SMALL_STATE(105)] = 2660,
  [SMALL_STATE(106)] = 2667,
  [SMALL_STATE(107)] = 2674,
  [SMALL_STATE(108)] = 2681,
  [SMALL_STATE(109)] = 2688,
  [SMALL_STATE(110)] = 2695,
  [SMALL_STATE(111)] = 2702,
  [SMALL_STATE(112)] = 2709,
  [SMALL_STATE(113)] = 2716,
  [SMALL_STATE(114)] = 2723,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_collection, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2, 0, 0),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_reference, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri_reference, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_quote, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_quote, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_node_label, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_node_label, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_long_quote, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_long_quote, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_single_quote, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_single_quote, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_quote, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_quote, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_long_quote, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_long_quote, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_long_single_quote, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_long_single_quote, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_single_quote, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_single_quote, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefixed_name, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefixed_name, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_long_single_quote, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_long_single_quote, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_node_property_list, 3, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_node_property_list, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rdf_literal, 2, 0, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rdf_literal, 2, 0, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rdf_literal, 3, 0, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rdf_literal, 3, 0, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_graph_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_graph_repeat1, 2, 0, 0),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_graph_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_graph_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_graph_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_graph_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_graph_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_graph_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rdf_literal, 1, 0, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rdf_literal, 1, 0, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 2, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 1, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefixed_name, 1, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefixed_name, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 1, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triple, 2, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_triple, 2, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 2, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 2, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 3, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 3, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_id, 4, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_id, 4, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 4, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 4, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 3, 0, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 3, 0, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparql_base, 2, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparql_base, 2, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 4, 0, 2),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 4, 0, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base, 3, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base, 3, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparql_prefix, 3, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparql_prefix, 3, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 1, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 5, 0, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 5, 0, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triples, 1, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_long_single_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_long_single_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_long_single_quote_repeat1, 2, 0, 0),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_long_single_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_long_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_long_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_long_quote_repeat1, 2, 0, 0),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_long_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_literal_long_quote_repeat1, 2, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_list_repeat1, 2, 0, 0),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_list_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_literal_long_single_quote_repeat1, 2, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_list, 2, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_list, 1, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 1, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 1, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_list, 2, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_list, 1, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2, 0, 0),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_quote_repeat1, 2, 0, 0),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_single_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_single_quote_repeat1, 2, 0, 0),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_single_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triples, 2, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [506] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_turtle(void) {
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
    .keyword_capture_token = sym_pn_prefix,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
