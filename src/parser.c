#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 132
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 3
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 10

enum {
  anon_sym_SEMI = 1,
  anon_sym_EQ = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  anon_sym_BSLASH = 6,
  anon_sym_DOT = 7,
  sym_identity_function = 8,
  anon_sym_COLON = 9,
  sym_one_sample_delay_operator = 10,
  anon_sym_PLUS = 11,
  anon_sym_DASH = 12,
  anon_sym_STAR = 13,
  anon_sym_SLASH = 14,
  anon_sym_PERCENT = 15,
  anon_sym_CARET = 16,
  anon_sym_PIPE = 17,
  anon_sym_AMP = 18,
  anon_sym_xor = 19,
  anon_sym_LT_LT = 20,
  anon_sym_GT_GT = 21,
  anon_sym_LT = 22,
  anon_sym_LT_EQ = 23,
  anon_sym_GT = 24,
  anon_sym_GT_EQ = 25,
  anon_sym_EQ_EQ = 26,
  anon_sym_BANG_EQ = 27,
  anon_sym_AT = 28,
  sym_integer = 29,
  sym_exponent = 30,
  sym__digit = 31,
  anon_sym_import_LPAREN = 32,
  anon_sym_declare = 33,
  anon_sym_singleprecision = 34,
  anon_sym_doubleprecision = 35,
  anon_sym_quadprecision = 36,
  anon_sym_fixedpointprecision = 37,
  anon_sym_TILDE = 38,
  anon_sym_LT_COLON = 39,
  anon_sym_COLON_GT = 40,
  anon_sym_DQUOTE = 41,
  aux_sym_string_token1 = 42,
  sym_escape_sequence = 43,
  sym_identifier = 44,
  sym_comment = 45,
  sym_source_file = 46,
  sym__statement = 47,
  sym_definition = 48,
  sym_simple_definition = 49,
  sym_function_definition = 50,
  sym_lambda_abstraction = 51,
  sym_expression = 52,
  sym_binary_operation = 53,
  sym_core = 54,
  sym_infix = 55,
  sym_prefix = 56,
  sym_partial = 57,
  sym_one_sample_delay = 58,
  sym_binary_operator = 59,
  sym_object = 60,
  sym_primitive = 61,
  sym_float = 62,
  sym_file_import = 63,
  sym_metadata_declaration = 64,
  sym_global_metadata = 65,
  sym_function_metadata = 66,
  sym_binary_composition = 67,
  sym_sequential_composition = 68,
  sym_split_composition = 69,
  sym_merge_composition = 70,
  sym_string = 71,
  aux_sym_source_file_repeat1 = 72,
  aux_sym_function_definition_repeat1 = 73,
  aux_sym_one_sample_delay_repeat1 = 74,
  aux_sym_split_composition_repeat1 = 75,
  aux_sym_string_repeat1 = 76,
  alias_sym_function_name = 77,
  alias_sym_metadata_key = 78,
  alias_sym_parameter = 79,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_DOT] = ".",
  [sym_identity_function] = "identity_function",
  [anon_sym_COLON] = ":",
  [sym_one_sample_delay_operator] = "one_sample_delay_operator",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_CARET] = "^",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_xor] = "xor",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AT] = "@",
  [sym_integer] = "integer",
  [sym_exponent] = "exponent",
  [sym__digit] = "_digit",
  [anon_sym_import_LPAREN] = "import(",
  [anon_sym_declare] = "declare",
  [anon_sym_singleprecision] = "singleprecision",
  [anon_sym_doubleprecision] = "doubleprecision",
  [anon_sym_quadprecision] = "quadprecision",
  [anon_sym_fixedpointprecision] = "fixedpointprecision",
  [anon_sym_TILDE] = "~",
  [anon_sym_LT_COLON] = "<:",
  [anon_sym_COLON_GT] = ":>",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_definition] = "definition",
  [sym_simple_definition] = "simple_definition",
  [sym_function_definition] = "function_definition",
  [sym_lambda_abstraction] = "lambda_abstraction",
  [sym_expression] = "expression",
  [sym_binary_operation] = "binary_operation",
  [sym_core] = "core",
  [sym_infix] = "infix",
  [sym_prefix] = "prefix",
  [sym_partial] = "partial",
  [sym_one_sample_delay] = "one_sample_delay",
  [sym_binary_operator] = "binary_operator",
  [sym_object] = "object",
  [sym_primitive] = "primitive",
  [sym_float] = "float",
  [sym_file_import] = "file_import",
  [sym_metadata_declaration] = "metadata_declaration",
  [sym_global_metadata] = "global_metadata",
  [sym_function_metadata] = "function_metadata",
  [sym_binary_composition] = "binary_composition",
  [sym_sequential_composition] = "sequential_composition",
  [sym_split_composition] = "split_composition",
  [sym_merge_composition] = "merge_composition",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_one_sample_delay_repeat1] = "one_sample_delay_repeat1",
  [aux_sym_split_composition_repeat1] = "split_composition_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym_function_name] = "function_name",
  [alias_sym_metadata_key] = "metadata_key",
  [alias_sym_parameter] = "parameter",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_identity_function] = sym_identity_function,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_one_sample_delay_operator] = sym_one_sample_delay_operator,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AT] = anon_sym_AT,
  [sym_integer] = sym_integer,
  [sym_exponent] = sym_exponent,
  [sym__digit] = sym__digit,
  [anon_sym_import_LPAREN] = anon_sym_import_LPAREN,
  [anon_sym_declare] = anon_sym_declare,
  [anon_sym_singleprecision] = anon_sym_singleprecision,
  [anon_sym_doubleprecision] = anon_sym_doubleprecision,
  [anon_sym_quadprecision] = anon_sym_quadprecision,
  [anon_sym_fixedpointprecision] = anon_sym_fixedpointprecision,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LT_COLON] = anon_sym_LT_COLON,
  [anon_sym_COLON_GT] = anon_sym_COLON_GT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_definition] = sym_definition,
  [sym_simple_definition] = sym_simple_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_lambda_abstraction] = sym_lambda_abstraction,
  [sym_expression] = sym_expression,
  [sym_binary_operation] = sym_binary_operation,
  [sym_core] = sym_core,
  [sym_infix] = sym_infix,
  [sym_prefix] = sym_prefix,
  [sym_partial] = sym_partial,
  [sym_one_sample_delay] = sym_one_sample_delay,
  [sym_binary_operator] = sym_binary_operator,
  [sym_object] = sym_object,
  [sym_primitive] = sym_primitive,
  [sym_float] = sym_float,
  [sym_file_import] = sym_file_import,
  [sym_metadata_declaration] = sym_metadata_declaration,
  [sym_global_metadata] = sym_global_metadata,
  [sym_function_metadata] = sym_function_metadata,
  [sym_binary_composition] = sym_binary_composition,
  [sym_sequential_composition] = sym_sequential_composition,
  [sym_split_composition] = sym_split_composition,
  [sym_merge_composition] = sym_merge_composition,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_one_sample_delay_repeat1] = aux_sym_one_sample_delay_repeat1,
  [aux_sym_split_composition_repeat1] = aux_sym_split_composition_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_metadata_key] = alias_sym_metadata_key,
  [alias_sym_parameter] = alias_sym_parameter,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_identity_function] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_one_sample_delay_operator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_exponent] = {
    .visible = true,
    .named = true,
  },
  [sym__digit] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_import_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_singleprecision] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_doubleprecision] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quadprecision] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixedpointprecision] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_lambda_abstraction] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_core] = {
    .visible = true,
    .named = true,
  },
  [sym_infix] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_partial] = {
    .visible = true,
    .named = true,
  },
  [sym_one_sample_delay] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_file_import] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_global_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_function_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_composition] = {
    .visible = true,
    .named = true,
  },
  [sym_sequential_composition] = {
    .visible = true,
    .named = true,
  },
  [sym_split_composition] = {
    .visible = true,
    .named = true,
  },
  [sym_merge_composition] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_one_sample_delay_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_split_composition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_metadata_key] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_parameter] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_left = 1,
  field_name = 2,
  field_right = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_name] = "name",
  [field_right] = "right",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 2},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 2},
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_value, 2},
  [2] =
    {field_left, 0},
    {field_right, 2},
  [4] =
    {field_name, 0},
    {field_value, 4},
  [6] =
    {field_name, 0},
    {field_value, 5},
  [8] =
    {field_name, 0},
    {field_value, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_metadata_key,
  },
  [3] = {
    [1] = alias_sym_function_name,
    [2] = alias_sym_metadata_key,
  },
  [6] = {
    [1] = alias_sym_parameter,
  },
  [7] = {
    [2] = alias_sym_parameter,
  },
  [8] = {
    [2] = alias_sym_parameter,
  },
  [9] = {
    [2] = alias_sym_parameter,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(96);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(142);
      if (lookahead == '%') ADVANCE(114);
      if (lookahead == '&') ADVANCE(117);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(99);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == ';') ADVANCE(97);
      if (lookahead == '<') ADVANCE(121);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == '>') ADVANCE(124);
      if (lookahead == '@') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == '^') ADVANCE(115);
      if (lookahead == '_') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'q') ADVANCE(82);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 'x') ADVANCE(56);
      if (lookahead == '|') ADVANCE(116);
      if (lookahead == '~') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(143);
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead == 'u') ADVANCE(85);
      if (lookahead == 'x') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(149);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '%') ADVANCE(114);
      if (lookahead == '&') ADVANCE(117);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == ';') ADVANCE(97);
      if (lookahead == '<') ADVANCE(121);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(124);
      if (lookahead == '@') ADVANCE(128);
      if (lookahead == '^') ADVANCE(115);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'x') ADVANCE(56);
      if (lookahead == '|') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '%') ADVANCE(114);
      if (lookahead == '&') ADVANCE(117);
      if (lookahead == '(') ADVANCE(99);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '<') ADVANCE(122);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(124);
      if (lookahead == '@') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == '^') ADVANCE(115);
      if (lookahead == '_') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'x') ADVANCE(56);
      if (lookahead == '|') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '%') ADVANCE(114);
      if (lookahead == '&') ADVANCE(117);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == '<') ADVANCE(122);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(124);
      if (lookahead == '@') ADVANCE(128);
      if (lookahead == '^') ADVANCE(115);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'x') ADVANCE(56);
      if (lookahead == '|') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(142);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(163);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(132);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(165);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(127);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(141);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 65:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 84:
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 85:
      if (lookahead == '{') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 86:
      if (lookahead == '}') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 87:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 93:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(163);
      END_STATE();
    case 94:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(165);
      if (lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 95:
      if (eof) ADVANCE(96);
      if (lookahead == '(') ADVANCE(99);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == 'd') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(95)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(163);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identity_function);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(141);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_one_sample_delay_operator);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(125);
      if (lookahead == '>') ADVANCE(120);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_exponent);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__digit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_import_LPAREN);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(163);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_singleprecision);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_doubleprecision);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_quadprecision);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_fixedpointprecision);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(143);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(146);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(163);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(163);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(163);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(163);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(163);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(163);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(163);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(163);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(163);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(163);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(163);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(163);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(94);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 95},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 95},
  [29] = {.lex_state = 95},
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
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 95},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 95},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 95},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 95},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 95},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 95},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 95},
  [118] = {.lex_state = 95},
  [119] = {.lex_state = 95},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 95},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 95},
  [124] = {.lex_state = 95},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 95},
  [127] = {.lex_state = 95},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 95},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_identity_function] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_one_sample_delay_operator] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_exponent] = ACTIONS(1),
    [sym__digit] = ACTIONS(1),
    [anon_sym_import_LPAREN] = ACTIONS(1),
    [anon_sym_declare] = ACTIONS(1),
    [anon_sym_singleprecision] = ACTIONS(1),
    [anon_sym_doubleprecision] = ACTIONS(1),
    [anon_sym_quadprecision] = ACTIONS(1),
    [anon_sym_fixedpointprecision] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [anon_sym_COLON_GT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(105),
    [sym__statement] = STATE(29),
    [sym_definition] = STATE(101),
    [sym_simple_definition] = STATE(89),
    [sym_function_definition] = STATE(89),
    [sym_file_import] = STATE(101),
    [sym_metadata_declaration] = STATE(101),
    [sym_global_metadata] = STATE(96),
    [sym_function_metadata] = STATE(96),
    [aux_sym_source_file_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_import_LPAREN] = ACTIONS(5),
    [anon_sym_declare] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [2] = {
    [sym_lambda_abstraction] = STATE(131),
    [sym_expression] = STATE(58),
    [sym_binary_operation] = STATE(46),
    [sym_core] = STATE(45),
    [sym_infix] = STATE(45),
    [sym_prefix] = STATE(45),
    [sym_partial] = STATE(45),
    [sym_one_sample_delay] = STATE(46),
    [sym_binary_operator] = STATE(93),
    [sym_object] = STATE(17),
    [sym_primitive] = STATE(21),
    [sym_float] = STATE(23),
    [sym_binary_composition] = STATE(46),
    [sym_sequential_composition] = STATE(56),
    [sym_split_composition] = STATE(56),
    [sym_merge_composition] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_integer] = ACTIONS(27),
    [sym_exponent] = ACTIONS(27),
    [sym__digit] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(31),
  },
  [3] = {
    [sym_expression] = STATE(47),
    [sym_binary_operation] = STATE(46),
    [sym_core] = STATE(45),
    [sym_infix] = STATE(45),
    [sym_prefix] = STATE(45),
    [sym_partial] = STATE(45),
    [sym_one_sample_delay] = STATE(46),
    [sym_binary_operator] = STATE(93),
    [sym_object] = STATE(17),
    [sym_primitive] = STATE(21),
    [sym_float] = STATE(23),
    [sym_binary_composition] = STATE(46),
    [sym_sequential_composition] = STATE(56),
    [sym_split_composition] = STATE(56),
    [sym_merge_composition] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_integer] = ACTIONS(27),
    [sym_exponent] = ACTIONS(27),
    [sym__digit] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(31),
  },
  [4] = {
    [sym_expression] = STATE(48),
    [sym_binary_operation] = STATE(46),
    [sym_core] = STATE(45),
    [sym_infix] = STATE(45),
    [sym_prefix] = STATE(45),
    [sym_partial] = STATE(45),
    [sym_one_sample_delay] = STATE(46),
    [sym_binary_operator] = STATE(93),
    [sym_object] = STATE(17),
    [sym_primitive] = STATE(21),
    [sym_float] = STATE(23),
    [sym_binary_composition] = STATE(46),
    [sym_sequential_composition] = STATE(56),
    [sym_split_composition] = STATE(56),
    [sym_merge_composition] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_integer] = ACTIONS(27),
    [sym_exponent] = ACTIONS(27),
    [sym__digit] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(31),
  },
  [5] = {
    [sym_expression] = STATE(42),
    [sym_binary_operation] = STATE(46),
    [sym_core] = STATE(45),
    [sym_infix] = STATE(45),
    [sym_prefix] = STATE(45),
    [sym_partial] = STATE(45),
    [sym_one_sample_delay] = STATE(46),
    [sym_binary_operator] = STATE(93),
    [sym_object] = STATE(17),
    [sym_primitive] = STATE(21),
    [sym_float] = STATE(23),
    [sym_binary_composition] = STATE(46),
    [sym_sequential_composition] = STATE(56),
    [sym_split_composition] = STATE(56),
    [sym_merge_composition] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_integer] = ACTIONS(27),
    [sym_exponent] = ACTIONS(27),
    [sym__digit] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(31),
  },
  [6] = {
    [sym_expression] = STATE(51),
    [sym_binary_operation] = STATE(46),
    [sym_core] = STATE(45),
    [sym_infix] = STATE(45),
    [sym_prefix] = STATE(45),
    [sym_partial] = STATE(45),
    [sym_one_sample_delay] = STATE(46),
    [sym_binary_operator] = STATE(93),
    [sym_object] = STATE(17),
    [sym_primitive] = STATE(21),
    [sym_float] = STATE(23),
    [sym_binary_composition] = STATE(46),
    [sym_sequential_composition] = STATE(56),
    [sym_split_composition] = STATE(56),
    [sym_merge_composition] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_integer] = ACTIONS(27),
    [sym_exponent] = ACTIONS(27),
    [sym__digit] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(31),
  },
  [7] = {
    [sym_expression] = STATE(52),
    [sym_binary_operation] = STATE(46),
    [sym_core] = STATE(45),
    [sym_infix] = STATE(45),
    [sym_prefix] = STATE(45),
    [sym_partial] = STATE(45),
    [sym_one_sample_delay] = STATE(46),
    [sym_binary_operator] = STATE(93),
    [sym_object] = STATE(17),
    [sym_primitive] = STATE(21),
    [sym_float] = STATE(23),
    [sym_binary_composition] = STATE(46),
    [sym_sequential_composition] = STATE(56),
    [sym_split_composition] = STATE(56),
    [sym_merge_composition] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_integer] = ACTIONS(27),
    [sym_exponent] = ACTIONS(27),
    [sym__digit] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(31),
  },
  [8] = {
    [sym_expression] = STATE(61),
    [sym_binary_operation] = STATE(46),
    [sym_core] = STATE(45),
    [sym_infix] = STATE(45),
    [sym_prefix] = STATE(45),
    [sym_partial] = STATE(45),
    [sym_one_sample_delay] = STATE(46),
    [sym_binary_operator] = STATE(93),
    [sym_object] = STATE(17),
    [sym_primitive] = STATE(21),
    [sym_float] = STATE(23),
    [sym_binary_composition] = STATE(46),
    [sym_sequential_composition] = STATE(56),
    [sym_split_composition] = STATE(56),
    [sym_merge_composition] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_integer] = ACTIONS(27),
    [sym_exponent] = ACTIONS(27),
    [sym__digit] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(31),
  },
  [9] = {
    [sym_expression] = STATE(39),
    [sym_binary_operation] = STATE(46),
    [sym_core] = STATE(45),
    [sym_infix] = STATE(45),
    [sym_prefix] = STATE(45),
    [sym_partial] = STATE(45),
    [sym_one_sample_delay] = STATE(46),
    [sym_binary_operator] = STATE(93),
    [sym_object] = STATE(17),
    [sym_primitive] = STATE(21),
    [sym_float] = STATE(23),
    [sym_binary_composition] = STATE(46),
    [sym_sequential_composition] = STATE(56),
    [sym_split_composition] = STATE(56),
    [sym_merge_composition] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_integer] = ACTIONS(27),
    [sym_exponent] = ACTIONS(27),
    [sym__digit] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(31),
  },
  [10] = {
    [sym_expression] = STATE(38),
    [sym_binary_operation] = STATE(46),
    [sym_core] = STATE(45),
    [sym_infix] = STATE(45),
    [sym_prefix] = STATE(45),
    [sym_partial] = STATE(45),
    [sym_one_sample_delay] = STATE(46),
    [sym_binary_operator] = STATE(93),
    [sym_object] = STATE(17),
    [sym_primitive] = STATE(21),
    [sym_float] = STATE(23),
    [sym_binary_composition] = STATE(46),
    [sym_sequential_composition] = STATE(56),
    [sym_split_composition] = STATE(56),
    [sym_merge_composition] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_integer] = ACTIONS(27),
    [sym_exponent] = ACTIONS(27),
    [sym__digit] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(31),
  },
  [11] = {
    [sym_expression] = STATE(59),
    [sym_binary_operation] = STATE(46),
    [sym_core] = STATE(45),
    [sym_infix] = STATE(45),
    [sym_prefix] = STATE(45),
    [sym_partial] = STATE(45),
    [sym_one_sample_delay] = STATE(46),
    [sym_binary_operator] = STATE(93),
    [sym_object] = STATE(17),
    [sym_primitive] = STATE(21),
    [sym_float] = STATE(23),
    [sym_binary_composition] = STATE(46),
    [sym_sequential_composition] = STATE(56),
    [sym_split_composition] = STATE(56),
    [sym_merge_composition] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_integer] = ACTIONS(27),
    [sym_exponent] = ACTIONS(27),
    [sym__digit] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(31),
  },
  [12] = {
    [sym_expression] = STATE(40),
    [sym_binary_operation] = STATE(46),
    [sym_core] = STATE(45),
    [sym_infix] = STATE(45),
    [sym_prefix] = STATE(45),
    [sym_partial] = STATE(45),
    [sym_one_sample_delay] = STATE(46),
    [sym_binary_operator] = STATE(93),
    [sym_object] = STATE(17),
    [sym_primitive] = STATE(21),
    [sym_float] = STATE(23),
    [sym_binary_composition] = STATE(46),
    [sym_sequential_composition] = STATE(56),
    [sym_split_composition] = STATE(56),
    [sym_merge_composition] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_integer] = ACTIONS(27),
    [sym_exponent] = ACTIONS(27),
    [sym__digit] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(31),
  },
  [13] = {
    [sym_expression] = STATE(44),
    [sym_binary_operation] = STATE(46),
    [sym_core] = STATE(45),
    [sym_infix] = STATE(45),
    [sym_prefix] = STATE(45),
    [sym_partial] = STATE(45),
    [sym_one_sample_delay] = STATE(46),
    [sym_binary_operator] = STATE(93),
    [sym_object] = STATE(17),
    [sym_primitive] = STATE(21),
    [sym_float] = STATE(23),
    [sym_binary_composition] = STATE(46),
    [sym_sequential_composition] = STATE(56),
    [sym_split_composition] = STATE(56),
    [sym_merge_composition] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_integer] = ACTIONS(27),
    [sym_exponent] = ACTIONS(27),
    [sym__digit] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(31),
  },
  [14] = {
    [sym_expression] = STATE(54),
    [sym_binary_operation] = STATE(46),
    [sym_core] = STATE(45),
    [sym_infix] = STATE(45),
    [sym_prefix] = STATE(45),
    [sym_partial] = STATE(45),
    [sym_one_sample_delay] = STATE(46),
    [sym_binary_operator] = STATE(93),
    [sym_object] = STATE(17),
    [sym_primitive] = STATE(21),
    [sym_float] = STATE(23),
    [sym_binary_composition] = STATE(46),
    [sym_sequential_composition] = STATE(56),
    [sym_split_composition] = STATE(56),
    [sym_merge_composition] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_integer] = ACTIONS(27),
    [sym_exponent] = ACTIONS(27),
    [sym__digit] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(37), 1,
      sym_exponent,
    ACTIONS(39), 1,
      sym__digit,
    ACTIONS(35), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 22,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_one_sample_delay_operator,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [36] = 4,
    ACTIONS(45), 1,
      sym_exponent,
    ACTIONS(47), 1,
      sym__digit,
    ACTIONS(43), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 22,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_one_sample_delay_operator,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [72] = 7,
    ACTIONS(51), 1,
      anon_sym_COLON,
    ACTIONS(53), 1,
      sym_one_sample_delay_operator,
    STATE(34), 1,
      sym_binary_operator,
    STATE(36), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(23), 16,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [114] = 3,
    ACTIONS(59), 1,
      sym_exponent,
    ACTIONS(57), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 22,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_one_sample_delay_operator,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [147] = 3,
    ACTIONS(37), 1,
      sym_exponent,
    ACTIONS(35), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 22,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_one_sample_delay_operator,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [180] = 3,
    ACTIONS(45), 1,
      sym_exponent,
    ACTIONS(43), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 22,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_one_sample_delay_operator,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [213] = 2,
    ACTIONS(63), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 22,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_one_sample_delay_operator,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [243] = 2,
    ACTIONS(57), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 22,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_one_sample_delay_operator,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [273] = 2,
    ACTIONS(67), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 22,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_one_sample_delay_operator,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [303] = 2,
    ACTIONS(43), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 22,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_one_sample_delay_operator,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [333] = 2,
    ACTIONS(71), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 22,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_one_sample_delay_operator,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [363] = 3,
    STATE(49), 1,
      sym_binary_operator,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 16,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [389] = 3,
    STATE(53), 1,
      sym_binary_operator,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 16,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [415] = 9,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      anon_sym_import_LPAREN,
    ACTIONS(78), 1,
      anon_sym_declare,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(84), 1,
      sym_comment,
    STATE(28), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(89), 2,
      sym_simple_definition,
      sym_function_definition,
    STATE(96), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(101), 3,
      sym_definition,
      sym_file_import,
      sym_metadata_declaration,
  [448] = 9,
    ACTIONS(5), 1,
      anon_sym_import_LPAREN,
    ACTIONS(7), 1,
      anon_sym_declare,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      sym_comment,
    STATE(28), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(89), 2,
      sym_simple_definition,
      sym_function_definition,
    STATE(96), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(101), 3,
      sym_definition,
      sym_file_import,
      sym_metadata_declaration,
  [481] = 2,
    ACTIONS(93), 4,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym__digit,
    ACTIONS(91), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      sym_integer,
      sym_exponent,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [499] = 7,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      sym__digit,
    STATE(21), 1,
      sym_primitive,
    STATE(23), 1,
      sym_float,
    STATE(106), 1,
      sym_object,
    ACTIONS(27), 2,
      sym_integer,
      sym_exponent,
    ACTIONS(95), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [523] = 7,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      sym__digit,
    STATE(21), 1,
      sym_primitive,
    STATE(23), 1,
      sym_float,
    STATE(107), 1,
      sym_object,
    ACTIONS(27), 2,
      sym_integer,
      sym_exponent,
    ACTIONS(95), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [547] = 7,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      sym__digit,
    STATE(21), 1,
      sym_primitive,
    STATE(23), 1,
      sym_float,
    STATE(102), 1,
      sym_object,
    ACTIONS(27), 2,
      sym_integer,
      sym_exponent,
    ACTIONS(95), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [571] = 7,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      sym__digit,
    STATE(21), 1,
      sym_primitive,
    STATE(23), 1,
      sym_float,
    STATE(57), 1,
      sym_object,
    ACTIONS(27), 2,
      sym_integer,
      sym_exponent,
    ACTIONS(95), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [595] = 7,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      sym__digit,
    STATE(21), 1,
      sym_primitive,
    STATE(23), 1,
      sym_float,
    STATE(77), 1,
      sym_object,
    ACTIONS(27), 2,
      sym_integer,
      sym_exponent,
    ACTIONS(95), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [619] = 4,
    ACTIONS(99), 1,
      anon_sym_COLON,
    ACTIONS(101), 1,
      sym_one_sample_delay_operator,
    STATE(37), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(97), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [636] = 4,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(107), 1,
      sym_one_sample_delay_operator,
    STATE(37), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(103), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [653] = 6,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_COLON,
    ACTIONS(116), 1,
      anon_sym_LT_COLON,
    ACTIONS(118), 1,
      anon_sym_COLON_GT,
    STATE(68), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(110), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [673] = 3,
    ACTIONS(114), 1,
      anon_sym_COLON,
    STATE(68), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(120), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [687] = 6,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_COLON,
    ACTIONS(116), 1,
      anon_sym_LT_COLON,
    ACTIONS(118), 1,
      anon_sym_COLON_GT,
    STATE(68), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(122), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [707] = 4,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_COLON,
    STATE(41), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(110), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [723] = 6,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_COLON,
    ACTIONS(116), 1,
      anon_sym_LT_COLON,
    ACTIONS(118), 1,
      anon_sym_COLON_GT,
    STATE(68), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(129), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [743] = 4,
    ACTIONS(133), 1,
      anon_sym_COLON,
    ACTIONS(135), 1,
      anon_sym_COLON_GT,
    STATE(41), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(131), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
  [759] = 6,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_COLON,
    ACTIONS(116), 1,
      anon_sym_LT_COLON,
    ACTIONS(118), 1,
      anon_sym_COLON_GT,
    STATE(68), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(137), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [779] = 2,
    ACTIONS(141), 1,
      anon_sym_COLON,
    ACTIONS(139), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [790] = 2,
    ACTIONS(51), 1,
      anon_sym_COLON,
    ACTIONS(49), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [801] = 6,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_COLON,
    ACTIONS(116), 1,
      anon_sym_LT_COLON,
    ACTIONS(118), 1,
      anon_sym_COLON_GT,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_split_composition_repeat1,
  [820] = 6,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_COLON,
    ACTIONS(116), 1,
      anon_sym_LT_COLON,
    ACTIONS(118), 1,
      anon_sym_COLON_GT,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_split_composition_repeat1,
  [839] = 2,
    ACTIONS(149), 1,
      anon_sym_COLON,
    ACTIONS(147), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [850] = 2,
    ACTIONS(153), 1,
      anon_sym_COLON,
    ACTIONS(151), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [861] = 6,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_COLON,
    ACTIONS(116), 1,
      anon_sym_LT_COLON,
    ACTIONS(118), 1,
      anon_sym_COLON_GT,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_split_composition_repeat1,
  [880] = 6,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_COLON,
    ACTIONS(116), 1,
      anon_sym_LT_COLON,
    ACTIONS(118), 1,
      anon_sym_COLON_GT,
    ACTIONS(157), 1,
      anon_sym_SEMI,
    STATE(68), 1,
      aux_sym_split_composition_repeat1,
  [899] = 2,
    ACTIONS(161), 1,
      anon_sym_COLON,
    ACTIONS(159), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [910] = 6,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_COLON,
    ACTIONS(116), 1,
      anon_sym_LT_COLON,
    ACTIONS(118), 1,
      anon_sym_COLON_GT,
    ACTIONS(163), 1,
      anon_sym_SEMI,
    STATE(68), 1,
      aux_sym_split_composition_repeat1,
  [929] = 2,
    ACTIONS(167), 1,
      anon_sym_COLON,
    ACTIONS(165), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [940] = 2,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(169), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [951] = 2,
    ACTIONS(175), 1,
      anon_sym_COLON,
    ACTIONS(173), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [962] = 6,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_COLON,
    ACTIONS(116), 1,
      anon_sym_LT_COLON,
    ACTIONS(118), 1,
      anon_sym_COLON_GT,
    ACTIONS(177), 1,
      anon_sym_SEMI,
    STATE(68), 1,
      aux_sym_split_composition_repeat1,
  [981] = 6,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_COLON,
    ACTIONS(116), 1,
      anon_sym_LT_COLON,
    ACTIONS(118), 1,
      anon_sym_COLON_GT,
    ACTIONS(179), 1,
      anon_sym_SEMI,
    STATE(68), 1,
      aux_sym_split_composition_repeat1,
  [1000] = 2,
    ACTIONS(183), 2,
      anon_sym_declare,
      sym_identifier,
    ACTIONS(181), 3,
      ts_builtin_sym_end,
      anon_sym_import_LPAREN,
      sym_comment,
  [1010] = 5,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_COLON,
    ACTIONS(116), 1,
      anon_sym_LT_COLON,
    ACTIONS(118), 1,
      anon_sym_COLON_GT,
    STATE(43), 1,
      aux_sym_split_composition_repeat1,
  [1026] = 4,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      aux_sym_string_token1,
    ACTIONS(190), 1,
      sym_escape_sequence,
    STATE(62), 1,
      aux_sym_string_repeat1,
  [1039] = 4,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      aux_sym_string_token1,
    ACTIONS(197), 1,
      sym_escape_sequence,
    STATE(64), 1,
      aux_sym_string_repeat1,
  [1052] = 4,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      aux_sym_string_token1,
    ACTIONS(203), 1,
      sym_escape_sequence,
    STATE(62), 1,
      aux_sym_string_repeat1,
  [1065] = 3,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_function_definition_repeat1,
  [1075] = 3,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_function_definition_repeat1,
  [1085] = 3,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_function_definition_repeat1,
  [1095] = 3,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      anon_sym_COLON_GT,
    STATE(41), 1,
      aux_sym_split_composition_repeat1,
  [1105] = 3,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_function_definition_repeat1,
  [1115] = 3,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(120), 1,
      sym_string,
  [1125] = 3,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(219), 1,
      sym_exponent,
    ACTIONS(221), 1,
      sym__digit,
  [1135] = 3,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_DOT,
    ACTIONS(225), 1,
      sym__digit,
  [1145] = 3,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_function_definition_repeat1,
  [1155] = 3,
    ACTIONS(33), 1,
      anon_sym_COLON,
    ACTIONS(232), 1,
      sym_exponent,
    ACTIONS(234), 1,
      sym__digit,
  [1165] = 2,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      sym_string,
  [1172] = 2,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      sym_string,
  [1179] = 2,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
  [1186] = 2,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(242), 1,
      sym__digit,
  [1193] = 1,
    ACTIONS(244), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1198] = 1,
    ACTIONS(246), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1203] = 2,
    ACTIONS(223), 1,
      anon_sym_DOT,
    ACTIONS(225), 1,
      sym__digit,
  [1210] = 2,
    ACTIONS(248), 1,
      anon_sym_EQ,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
  [1217] = 2,
    ACTIONS(33), 1,
      anon_sym_COLON,
    ACTIONS(232), 1,
      sym_exponent,
  [1224] = 2,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    ACTIONS(254), 1,
      sym_identifier,
  [1231] = 2,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    ACTIONS(258), 1,
      sym_identifier,
  [1238] = 2,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(219), 1,
      sym_exponent,
  [1245] = 2,
    ACTIONS(55), 1,
      anon_sym_COLON,
    ACTIONS(260), 1,
      sym_exponent,
  [1252] = 1,
    ACTIONS(262), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1257] = 1,
    ACTIONS(264), 1,
      anon_sym_SEMI,
  [1261] = 1,
    ACTIONS(266), 1,
      anon_sym_SEMI,
  [1265] = 1,
    ACTIONS(268), 1,
      anon_sym_DOT,
  [1269] = 1,
    ACTIONS(270), 1,
      sym_identifier,
  [1273] = 1,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
  [1277] = 1,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
  [1281] = 1,
    ACTIONS(276), 1,
      anon_sym_DOT,
  [1285] = 1,
    ACTIONS(278), 1,
      anon_sym_SEMI,
  [1289] = 1,
    ACTIONS(280), 1,
      anon_sym_COLON,
  [1293] = 1,
    ACTIONS(282), 1,
      anon_sym_EQ,
  [1297] = 1,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
  [1301] = 1,
    ACTIONS(286), 1,
      anon_sym_DOT,
  [1305] = 1,
    ACTIONS(288), 1,
      anon_sym_SEMI,
  [1309] = 1,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
  [1313] = 1,
    ACTIONS(39), 1,
      sym__digit,
  [1317] = 1,
    ACTIONS(292), 1,
      anon_sym_DOT,
  [1321] = 1,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
  [1325] = 1,
    ACTIONS(296), 1,
      anon_sym_COMMA,
  [1329] = 1,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
  [1333] = 1,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
  [1337] = 1,
    ACTIONS(302), 1,
      anon_sym_EQ,
  [1341] = 1,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
  [1345] = 1,
    ACTIONS(306), 1,
      anon_sym_SEMI,
  [1349] = 1,
    ACTIONS(308), 1,
      anon_sym_EQ,
  [1353] = 1,
    ACTIONS(310), 1,
      sym_identifier,
  [1357] = 1,
    ACTIONS(312), 1,
      anon_sym_SEMI,
  [1361] = 1,
    ACTIONS(314), 1,
      anon_sym_SEMI,
  [1365] = 1,
    ACTIONS(316), 1,
      anon_sym_SEMI,
  [1369] = 1,
    ACTIONS(65), 1,
      anon_sym_COLON,
  [1373] = 1,
    ACTIONS(61), 1,
      anon_sym_COLON,
  [1377] = 1,
    ACTIONS(318), 1,
      anon_sym_COLON,
  [1381] = 1,
    ACTIONS(320), 1,
      anon_sym_SEMI,
  [1385] = 1,
    ACTIONS(41), 1,
      anon_sym_COLON,
  [1389] = 1,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
  [1393] = 1,
    ACTIONS(324), 1,
      sym__digit,
  [1397] = 1,
    ACTIONS(55), 1,
      anon_sym_COLON,
  [1401] = 1,
    ACTIONS(326), 1,
      anon_sym_DOT,
  [1405] = 1,
    ACTIONS(69), 1,
      anon_sym_COLON,
  [1409] = 1,
    ACTIONS(328), 1,
      sym__digit,
  [1413] = 1,
    ACTIONS(330), 1,
      anon_sym_DOT,
  [1417] = 1,
    ACTIONS(234), 1,
      sym__digit,
  [1421] = 1,
    ACTIONS(332), 1,
      anon_sym_DOT,
  [1425] = 1,
    ACTIONS(334), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 36,
  [SMALL_STATE(17)] = 72,
  [SMALL_STATE(18)] = 114,
  [SMALL_STATE(19)] = 147,
  [SMALL_STATE(20)] = 180,
  [SMALL_STATE(21)] = 213,
  [SMALL_STATE(22)] = 243,
  [SMALL_STATE(23)] = 273,
  [SMALL_STATE(24)] = 303,
  [SMALL_STATE(25)] = 333,
  [SMALL_STATE(26)] = 363,
  [SMALL_STATE(27)] = 389,
  [SMALL_STATE(28)] = 415,
  [SMALL_STATE(29)] = 448,
  [SMALL_STATE(30)] = 481,
  [SMALL_STATE(31)] = 499,
  [SMALL_STATE(32)] = 523,
  [SMALL_STATE(33)] = 547,
  [SMALL_STATE(34)] = 571,
  [SMALL_STATE(35)] = 595,
  [SMALL_STATE(36)] = 619,
  [SMALL_STATE(37)] = 636,
  [SMALL_STATE(38)] = 653,
  [SMALL_STATE(39)] = 673,
  [SMALL_STATE(40)] = 687,
  [SMALL_STATE(41)] = 707,
  [SMALL_STATE(42)] = 723,
  [SMALL_STATE(43)] = 743,
  [SMALL_STATE(44)] = 759,
  [SMALL_STATE(45)] = 779,
  [SMALL_STATE(46)] = 790,
  [SMALL_STATE(47)] = 801,
  [SMALL_STATE(48)] = 820,
  [SMALL_STATE(49)] = 839,
  [SMALL_STATE(50)] = 850,
  [SMALL_STATE(51)] = 861,
  [SMALL_STATE(52)] = 880,
  [SMALL_STATE(53)] = 899,
  [SMALL_STATE(54)] = 910,
  [SMALL_STATE(55)] = 929,
  [SMALL_STATE(56)] = 940,
  [SMALL_STATE(57)] = 951,
  [SMALL_STATE(58)] = 962,
  [SMALL_STATE(59)] = 981,
  [SMALL_STATE(60)] = 1000,
  [SMALL_STATE(61)] = 1010,
  [SMALL_STATE(62)] = 1026,
  [SMALL_STATE(63)] = 1039,
  [SMALL_STATE(64)] = 1052,
  [SMALL_STATE(65)] = 1065,
  [SMALL_STATE(66)] = 1075,
  [SMALL_STATE(67)] = 1085,
  [SMALL_STATE(68)] = 1095,
  [SMALL_STATE(69)] = 1105,
  [SMALL_STATE(70)] = 1115,
  [SMALL_STATE(71)] = 1125,
  [SMALL_STATE(72)] = 1135,
  [SMALL_STATE(73)] = 1145,
  [SMALL_STATE(74)] = 1155,
  [SMALL_STATE(75)] = 1165,
  [SMALL_STATE(76)] = 1172,
  [SMALL_STATE(77)] = 1179,
  [SMALL_STATE(78)] = 1186,
  [SMALL_STATE(79)] = 1193,
  [SMALL_STATE(80)] = 1198,
  [SMALL_STATE(81)] = 1203,
  [SMALL_STATE(82)] = 1210,
  [SMALL_STATE(83)] = 1217,
  [SMALL_STATE(84)] = 1224,
  [SMALL_STATE(85)] = 1231,
  [SMALL_STATE(86)] = 1238,
  [SMALL_STATE(87)] = 1245,
  [SMALL_STATE(88)] = 1252,
  [SMALL_STATE(89)] = 1257,
  [SMALL_STATE(90)] = 1261,
  [SMALL_STATE(91)] = 1265,
  [SMALL_STATE(92)] = 1269,
  [SMALL_STATE(93)] = 1273,
  [SMALL_STATE(94)] = 1277,
  [SMALL_STATE(95)] = 1281,
  [SMALL_STATE(96)] = 1285,
  [SMALL_STATE(97)] = 1289,
  [SMALL_STATE(98)] = 1293,
  [SMALL_STATE(99)] = 1297,
  [SMALL_STATE(100)] = 1301,
  [SMALL_STATE(101)] = 1305,
  [SMALL_STATE(102)] = 1309,
  [SMALL_STATE(103)] = 1313,
  [SMALL_STATE(104)] = 1317,
  [SMALL_STATE(105)] = 1321,
  [SMALL_STATE(106)] = 1325,
  [SMALL_STATE(107)] = 1329,
  [SMALL_STATE(108)] = 1333,
  [SMALL_STATE(109)] = 1337,
  [SMALL_STATE(110)] = 1341,
  [SMALL_STATE(111)] = 1345,
  [SMALL_STATE(112)] = 1349,
  [SMALL_STATE(113)] = 1353,
  [SMALL_STATE(114)] = 1357,
  [SMALL_STATE(115)] = 1361,
  [SMALL_STATE(116)] = 1365,
  [SMALL_STATE(117)] = 1369,
  [SMALL_STATE(118)] = 1373,
  [SMALL_STATE(119)] = 1377,
  [SMALL_STATE(120)] = 1381,
  [SMALL_STATE(121)] = 1385,
  [SMALL_STATE(122)] = 1389,
  [SMALL_STATE(123)] = 1393,
  [SMALL_STATE(124)] = 1397,
  [SMALL_STATE(125)] = 1401,
  [SMALL_STATE(126)] = 1405,
  [SMALL_STATE(127)] = 1409,
  [SMALL_STATE(128)] = 1413,
  [SMALL_STATE(129)] = 1417,
  [SMALL_STATE(130)] = 1421,
  [SMALL_STATE(131)] = 1425,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 5),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 5),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(113),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2), SHIFT_REPEAT(37),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_split_composition_repeat1, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_composition, 3, .production_id = 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_composition, 3),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_split_composition_repeat1, 2), SHIFT_REPEAT(10),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_split_composition_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_composition, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_composition, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split_composition, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_composition, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 7),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 7),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 6),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 6),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 8),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 5),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 7),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_composition, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_composition, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_definition, 3, .production_id = 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(62),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(62),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(92),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 6),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_metadata, 4, .production_id = 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_declaration, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [294] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_abstraction, 7),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_abstraction, 8, .production_id = 9),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_abstraction, 9, .production_id = 9),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_faust(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
