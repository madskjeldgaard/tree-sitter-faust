#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 167
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 3
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 12

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
  sym_recursive_composition = 68,
  sym_sequential_composition = 69,
  sym_split_composition = 70,
  sym_merge_composition = 71,
  sym_parallel_composition = 72,
  sym_string = 73,
  aux_sym_source_file_repeat1 = 74,
  aux_sym_function_definition_repeat1 = 75,
  aux_sym_one_sample_delay_repeat1 = 76,
  aux_sym_split_composition_repeat1 = 77,
  aux_sym_string_repeat1 = 78,
  alias_sym_function_name = 79,
  alias_sym_metadata_key = 80,
  alias_sym_parameter = 81,
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
  [sym_recursive_composition] = "recursive_composition",
  [sym_sequential_composition] = "sequential_composition",
  [sym_split_composition] = "split_composition",
  [sym_merge_composition] = "merge_composition",
  [sym_parallel_composition] = "parallel_composition",
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
  [sym_recursive_composition] = sym_recursive_composition,
  [sym_sequential_composition] = sym_sequential_composition,
  [sym_split_composition] = sym_split_composition,
  [sym_merge_composition] = sym_merge_composition,
  [sym_parallel_composition] = sym_parallel_composition,
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
  [sym_recursive_composition] = {
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
  [sym_parallel_composition] = {
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
  [7] = {.index = 6, .length = 3},
  [8] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
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
    {field_left, 0},
    {field_right, 2},
    {field_right, 3},
  [9] =
    {field_left, 0},
    {field_left, 1},
    {field_right, 3},
  [12] =
    {field_name, 0},
    {field_value, 5},
  [14] =
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
  [9] = {
    [2] = alias_sym_parameter,
  },
  [10] = {
    [2] = alias_sym_parameter,
  },
  [11] = {
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
      if (eof) ADVANCE(98);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '%') ADVANCE(117);
      if (lookahead == '&') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(114);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '/') ADVANCE(116);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '<') ADVANCE(124);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead == '@') ADVANCE(131);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '^') ADVANCE(118);
      if (lookahead == '_') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == 'q') ADVANCE(84);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(58);
      if (lookahead == '|') ADVANCE(119);
      if (lookahead == '~') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(146);
      if (lookahead == '\r') ADVANCE(150);
      if (lookahead == 'u') ADVANCE(87);
      if (lookahead == 'x') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(152);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(117);
      if (lookahead == '&') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(114);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '<') ADVANCE(124);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead == '@') ADVANCE(131);
      if (lookahead == '^') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'x') ADVANCE(58);
      if (lookahead == '|') ADVANCE(119);
      if (lookahead == '~') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(117);
      if (lookahead == '&') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(114);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '<') ADVANCE(124);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead == '@') ADVANCE(131);
      if (lookahead == '^') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'x') ADVANCE(58);
      if (lookahead == '|') ADVANCE(119);
      if (lookahead == '~') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(117);
      if (lookahead == '&') ADVANCE(120);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == '*') ADVANCE(114);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == '<') ADVANCE(125);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead == '@') ADVANCE(131);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '^') ADVANCE(118);
      if (lookahead == '_') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'x') ADVANCE(58);
      if (lookahead == '|') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(117);
      if (lookahead == '&') ADVANCE(120);
      if (lookahead == '*') ADVANCE(114);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == '<') ADVANCE(125);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead == '@') ADVANCE(131);
      if (lookahead == '^') ADVANCE(118);
      if (lookahead == 'x') ADVANCE(58);
      if (lookahead == '|') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == 'r') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(166);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == '~') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(135);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(168);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(143);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(130);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(129);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(49);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(50);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 65:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 69:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 84:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 86:
      if (lookahead == 'x') ADVANCE(30);
      END_STATE();
    case 87:
      if (lookahead == '{') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 88:
      if (lookahead == '}') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 89:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 95:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(166);
      END_STATE();
    case 96:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(168);
      if (lookahead == '\r') ADVANCE(169);
      END_STATE();
    case 97:
      if (eof) ADVANCE(98);
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(153);
      if (lookahead == '~') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(97)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(166);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identity_function);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(144);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_one_sample_delay_operator);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(168);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == '<') ADVANCE(122);
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(122);
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(128);
      if (lookahead == '>') ADVANCE(123);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_exponent);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__digit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_import_LPAREN);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(166);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_singleprecision);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_doubleprecision);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_quadprecision);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_fixedpointprecision);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(146);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(149);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(151);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(166);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(166);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(166);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(166);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(166);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(166);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(166);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(166);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(166);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(166);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(166);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(166);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(96);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 97},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 97},
  [47] = {.lex_state = 97},
  [48] = {.lex_state = 9},
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
  [60] = {.lex_state = 97},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 97},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 97},
  [69] = {.lex_state = 97},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 97},
  [82] = {.lex_state = 97},
  [83] = {.lex_state = 97},
  [84] = {.lex_state = 97},
  [85] = {.lex_state = 97},
  [86] = {.lex_state = 97},
  [87] = {.lex_state = 97},
  [88] = {.lex_state = 97},
  [89] = {.lex_state = 97},
  [90] = {.lex_state = 97},
  [91] = {.lex_state = 97},
  [92] = {.lex_state = 97},
  [93] = {.lex_state = 97},
  [94] = {.lex_state = 97},
  [95] = {.lex_state = 97},
  [96] = {.lex_state = 97},
  [97] = {.lex_state = 97},
  [98] = {.lex_state = 97},
  [99] = {.lex_state = 97},
  [100] = {.lex_state = 97},
  [101] = {.lex_state = 97},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 97},
  [110] = {.lex_state = 97},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 97},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 97},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 97},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 97},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 97},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 97},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 97},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 97},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 97},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 97},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 97},
  [158] = {.lex_state = 97},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 0},
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
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(162),
    [sym__statement] = STATE(46),
    [sym_definition] = STATE(161),
    [sym_simple_definition] = STATE(154),
    [sym_function_definition] = STATE(154),
    [sym_file_import] = STATE(161),
    [sym_metadata_declaration] = STATE(161),
    [sym_global_metadata] = STATE(153),
    [sym_function_metadata] = STATE(153),
    [aux_sym_source_file_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_import_LPAREN] = ACTIONS(5),
    [anon_sym_declare] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [2] = {
    [sym_lambda_abstraction] = STATE(127),
    [sym_expression] = STATE(82),
    [sym_binary_operation] = STATE(86),
    [sym_core] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_one_sample_delay] = STATE(86),
    [sym_binary_operator] = STATE(134),
    [sym_object] = STATE(25),
    [sym_primitive] = STATE(38),
    [sym_float] = STATE(40),
    [sym_binary_composition] = STATE(86),
    [sym_recursive_composition] = STATE(89),
    [sym_sequential_composition] = STATE(89),
    [sym_split_composition] = STATE(89),
    [sym_merge_composition] = STATE(89),
    [sym_parallel_composition] = STATE(89),
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
  },
  [3] = {
    [sym_expression] = STATE(66),
    [sym_binary_operation] = STATE(79),
    [sym_core] = STATE(73),
    [sym_infix] = STATE(73),
    [sym_prefix] = STATE(73),
    [sym_partial] = STATE(73),
    [sym_one_sample_delay] = STATE(79),
    [sym_binary_operator] = STATE(166),
    [sym_object] = STATE(19),
    [sym_primitive] = STATE(33),
    [sym_float] = STATE(31),
    [sym_binary_composition] = STATE(79),
    [sym_recursive_composition] = STATE(71),
    [sym_sequential_composition] = STATE(71),
    [sym_split_composition] = STATE(71),
    [sym_merge_composition] = STATE(71),
    [sym_parallel_composition] = STATE(71),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [sym_identity_function] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
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
    [sym_integer] = ACTIONS(39),
    [sym_exponent] = ACTIONS(39),
    [sym__digit] = ACTIONS(41),
  },
  [4] = {
    [sym_expression] = STATE(64),
    [sym_binary_operation] = STATE(79),
    [sym_core] = STATE(73),
    [sym_infix] = STATE(73),
    [sym_prefix] = STATE(73),
    [sym_partial] = STATE(73),
    [sym_one_sample_delay] = STATE(79),
    [sym_binary_operator] = STATE(166),
    [sym_object] = STATE(19),
    [sym_primitive] = STATE(33),
    [sym_float] = STATE(31),
    [sym_binary_composition] = STATE(79),
    [sym_recursive_composition] = STATE(71),
    [sym_sequential_composition] = STATE(71),
    [sym_split_composition] = STATE(71),
    [sym_merge_composition] = STATE(71),
    [sym_parallel_composition] = STATE(71),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [sym_identity_function] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
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
    [sym_integer] = ACTIONS(39),
    [sym_exponent] = ACTIONS(39),
    [sym__digit] = ACTIONS(41),
  },
  [5] = {
    [sym_expression] = STATE(81),
    [sym_binary_operation] = STATE(86),
    [sym_core] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_one_sample_delay] = STATE(86),
    [sym_binary_operator] = STATE(134),
    [sym_object] = STATE(25),
    [sym_primitive] = STATE(38),
    [sym_float] = STATE(40),
    [sym_binary_composition] = STATE(86),
    [sym_recursive_composition] = STATE(89),
    [sym_sequential_composition] = STATE(89),
    [sym_split_composition] = STATE(89),
    [sym_merge_composition] = STATE(89),
    [sym_parallel_composition] = STATE(89),
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
  },
  [6] = {
    [sym_expression] = STATE(85),
    [sym_binary_operation] = STATE(86),
    [sym_core] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_one_sample_delay] = STATE(86),
    [sym_binary_operator] = STATE(134),
    [sym_object] = STATE(25),
    [sym_primitive] = STATE(38),
    [sym_float] = STATE(40),
    [sym_binary_composition] = STATE(86),
    [sym_recursive_composition] = STATE(89),
    [sym_sequential_composition] = STATE(89),
    [sym_split_composition] = STATE(89),
    [sym_merge_composition] = STATE(89),
    [sym_parallel_composition] = STATE(89),
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
  },
  [7] = {
    [sym_expression] = STATE(58),
    [sym_binary_operation] = STATE(79),
    [sym_core] = STATE(73),
    [sym_infix] = STATE(73),
    [sym_prefix] = STATE(73),
    [sym_partial] = STATE(73),
    [sym_one_sample_delay] = STATE(79),
    [sym_binary_operator] = STATE(166),
    [sym_object] = STATE(19),
    [sym_primitive] = STATE(33),
    [sym_float] = STATE(31),
    [sym_binary_composition] = STATE(79),
    [sym_recursive_composition] = STATE(71),
    [sym_sequential_composition] = STATE(71),
    [sym_split_composition] = STATE(71),
    [sym_merge_composition] = STATE(71),
    [sym_parallel_composition] = STATE(71),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [sym_identity_function] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
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
    [sym_integer] = ACTIONS(39),
    [sym_exponent] = ACTIONS(39),
    [sym__digit] = ACTIONS(41),
  },
  [8] = {
    [sym_expression] = STATE(90),
    [sym_binary_operation] = STATE(86),
    [sym_core] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_one_sample_delay] = STATE(86),
    [sym_binary_operator] = STATE(134),
    [sym_object] = STATE(25),
    [sym_primitive] = STATE(38),
    [sym_float] = STATE(40),
    [sym_binary_composition] = STATE(86),
    [sym_recursive_composition] = STATE(89),
    [sym_sequential_composition] = STATE(89),
    [sym_split_composition] = STATE(89),
    [sym_merge_composition] = STATE(89),
    [sym_parallel_composition] = STATE(89),
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
  },
  [9] = {
    [sym_expression] = STATE(87),
    [sym_binary_operation] = STATE(86),
    [sym_core] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_one_sample_delay] = STATE(86),
    [sym_binary_operator] = STATE(134),
    [sym_object] = STATE(25),
    [sym_primitive] = STATE(38),
    [sym_float] = STATE(40),
    [sym_binary_composition] = STATE(86),
    [sym_recursive_composition] = STATE(89),
    [sym_sequential_composition] = STATE(89),
    [sym_split_composition] = STATE(89),
    [sym_merge_composition] = STATE(89),
    [sym_parallel_composition] = STATE(89),
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
  },
  [10] = {
    [sym_expression] = STATE(95),
    [sym_binary_operation] = STATE(86),
    [sym_core] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_one_sample_delay] = STATE(86),
    [sym_binary_operator] = STATE(134),
    [sym_object] = STATE(25),
    [sym_primitive] = STATE(38),
    [sym_float] = STATE(40),
    [sym_binary_composition] = STATE(86),
    [sym_recursive_composition] = STATE(89),
    [sym_sequential_composition] = STATE(89),
    [sym_split_composition] = STATE(89),
    [sym_merge_composition] = STATE(89),
    [sym_parallel_composition] = STATE(89),
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
  },
  [11] = {
    [sym_expression] = STATE(101),
    [sym_binary_operation] = STATE(86),
    [sym_core] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_one_sample_delay] = STATE(86),
    [sym_binary_operator] = STATE(134),
    [sym_object] = STATE(39),
    [sym_primitive] = STATE(38),
    [sym_float] = STATE(40),
    [sym_binary_composition] = STATE(86),
    [sym_recursive_composition] = STATE(89),
    [sym_sequential_composition] = STATE(89),
    [sym_split_composition] = STATE(89),
    [sym_merge_composition] = STATE(89),
    [sym_parallel_composition] = STATE(89),
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
  },
  [12] = {
    [sym_expression] = STATE(93),
    [sym_binary_operation] = STATE(86),
    [sym_core] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_one_sample_delay] = STATE(86),
    [sym_binary_operator] = STATE(134),
    [sym_object] = STATE(25),
    [sym_primitive] = STATE(38),
    [sym_float] = STATE(40),
    [sym_binary_composition] = STATE(86),
    [sym_recursive_composition] = STATE(89),
    [sym_sequential_composition] = STATE(89),
    [sym_split_composition] = STATE(89),
    [sym_merge_composition] = STATE(89),
    [sym_parallel_composition] = STATE(89),
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
  },
  [13] = {
    [sym_expression] = STATE(63),
    [sym_binary_operation] = STATE(79),
    [sym_core] = STATE(73),
    [sym_infix] = STATE(73),
    [sym_prefix] = STATE(73),
    [sym_partial] = STATE(73),
    [sym_one_sample_delay] = STATE(79),
    [sym_binary_operator] = STATE(166),
    [sym_object] = STATE(19),
    [sym_primitive] = STATE(33),
    [sym_float] = STATE(31),
    [sym_binary_composition] = STATE(79),
    [sym_recursive_composition] = STATE(71),
    [sym_sequential_composition] = STATE(71),
    [sym_split_composition] = STATE(71),
    [sym_merge_composition] = STATE(71),
    [sym_parallel_composition] = STATE(71),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [sym_identity_function] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
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
    [sym_integer] = ACTIONS(39),
    [sym_exponent] = ACTIONS(39),
    [sym__digit] = ACTIONS(41),
  },
  [14] = {
    [sym_expression] = STATE(91),
    [sym_binary_operation] = STATE(86),
    [sym_core] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_one_sample_delay] = STATE(86),
    [sym_binary_operator] = STATE(134),
    [sym_object] = STATE(25),
    [sym_primitive] = STATE(38),
    [sym_float] = STATE(40),
    [sym_binary_composition] = STATE(86),
    [sym_recursive_composition] = STATE(89),
    [sym_sequential_composition] = STATE(89),
    [sym_split_composition] = STATE(89),
    [sym_merge_composition] = STATE(89),
    [sym_parallel_composition] = STATE(89),
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
  },
  [15] = {
    [sym_expression] = STATE(98),
    [sym_binary_operation] = STATE(86),
    [sym_core] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_one_sample_delay] = STATE(86),
    [sym_binary_operator] = STATE(134),
    [sym_object] = STATE(25),
    [sym_primitive] = STATE(38),
    [sym_float] = STATE(40),
    [sym_binary_composition] = STATE(86),
    [sym_recursive_composition] = STATE(89),
    [sym_sequential_composition] = STATE(89),
    [sym_split_composition] = STATE(89),
    [sym_merge_composition] = STATE(89),
    [sym_parallel_composition] = STATE(89),
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
  },
  [16] = {
    [sym_expression] = STATE(69),
    [sym_binary_operation] = STATE(86),
    [sym_core] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_one_sample_delay] = STATE(86),
    [sym_binary_operator] = STATE(134),
    [sym_object] = STATE(25),
    [sym_primitive] = STATE(38),
    [sym_float] = STATE(40),
    [sym_binary_composition] = STATE(86),
    [sym_recursive_composition] = STATE(89),
    [sym_sequential_composition] = STATE(89),
    [sym_split_composition] = STATE(89),
    [sym_merge_composition] = STATE(89),
    [sym_parallel_composition] = STATE(89),
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
  },
  [17] = {
    [sym_expression] = STATE(68),
    [sym_binary_operation] = STATE(86),
    [sym_core] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_one_sample_delay] = STATE(86),
    [sym_binary_operator] = STATE(134),
    [sym_object] = STATE(25),
    [sym_primitive] = STATE(38),
    [sym_float] = STATE(40),
    [sym_binary_composition] = STATE(86),
    [sym_recursive_composition] = STATE(89),
    [sym_sequential_composition] = STATE(89),
    [sym_split_composition] = STATE(89),
    [sym_merge_composition] = STATE(89),
    [sym_parallel_composition] = STATE(89),
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
  },
  [18] = {
    [sym_expression] = STATE(100),
    [sym_binary_operation] = STATE(86),
    [sym_core] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_one_sample_delay] = STATE(86),
    [sym_binary_operator] = STATE(134),
    [sym_object] = STATE(39),
    [sym_primitive] = STATE(38),
    [sym_float] = STATE(40),
    [sym_binary_composition] = STATE(86),
    [sym_recursive_composition] = STATE(89),
    [sym_sequential_composition] = STATE(89),
    [sym_split_composition] = STATE(89),
    [sym_merge_composition] = STATE(89),
    [sym_parallel_composition] = STATE(89),
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
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(45), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      sym_one_sample_delay_operator,
    STATE(49), 1,
      sym_binary_operator,
    STATE(55), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
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
  [43] = 4,
    ACTIONS(53), 1,
      sym_exponent,
    ACTIONS(55), 1,
      sym__digit,
    ACTIONS(51), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 23,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [80] = 4,
    ACTIONS(61), 1,
      sym_exponent,
    ACTIONS(63), 1,
      sym__digit,
    ACTIONS(59), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 23,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [117] = 3,
    ACTIONS(69), 1,
      sym_exponent,
    ACTIONS(67), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 23,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [151] = 4,
    ACTIONS(71), 1,
      sym_exponent,
    ACTIONS(73), 1,
      sym__digit,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [187] = 4,
    ACTIONS(75), 1,
      sym_exponent,
    ACTIONS(77), 1,
      sym__digit,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [223] = 6,
    ACTIONS(79), 1,
      sym_one_sample_delay_operator,
    STATE(52), 1,
      sym_binary_operator,
    STATE(60), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
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
  [263] = 3,
    ACTIONS(53), 1,
      sym_exponent,
    ACTIONS(51), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 23,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [297] = 3,
    ACTIONS(61), 1,
      sym_exponent,
    ACTIONS(59), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 23,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [331] = 2,
    ACTIONS(67), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 23,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [362] = 3,
    ACTIONS(81), 1,
      sym_exponent,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [395] = 3,
    ACTIONS(71), 1,
      sym_exponent,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [428] = 2,
    ACTIONS(85), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 23,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [459] = 2,
    ACTIONS(89), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 23,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [490] = 2,
    ACTIONS(93), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 23,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [521] = 2,
    ACTIONS(59), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 23,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [552] = 3,
    ACTIONS(75), 1,
      sym_exponent,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [585] = 2,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [615] = 2,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [645] = 2,
    ACTIONS(93), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [675] = 6,
    ACTIONS(79), 1,
      sym_one_sample_delay_operator,
    STATE(52), 1,
      sym_binary_operator,
    STATE(60), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
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
  [713] = 2,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [743] = 2,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [773] = 3,
    STATE(77), 1,
      sym_binary_operator,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 16,
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
  [799] = 3,
    STATE(97), 1,
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
  [825] = 3,
    STATE(74), 1,
      sym_binary_operator,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 16,
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
  [851] = 3,
    STATE(92), 1,
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
  [877] = 9,
    ACTIONS(5), 1,
      anon_sym_import_LPAREN,
    ACTIONS(7), 1,
      anon_sym_declare,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      sym_comment,
    STATE(47), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(153), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(154), 2,
      sym_simple_definition,
      sym_function_definition,
    STATE(161), 3,
      sym_definition,
      sym_file_import,
      sym_metadata_declaration,
  [910] = 9,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      anon_sym_import_LPAREN,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(114), 1,
      sym_comment,
    STATE(47), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(153), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(154), 2,
      sym_simple_definition,
      sym_function_definition,
    STATE(161), 3,
      sym_definition,
      sym_file_import,
      sym_metadata_declaration,
  [943] = 2,
    ACTIONS(119), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym__digit,
    ACTIONS(117), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      sym_integer,
      sym_exponent,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [961] = 7,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym__digit,
    STATE(31), 1,
      sym_float,
    STATE(33), 1,
      sym_primitive,
    STATE(67), 1,
      sym_object,
    ACTIONS(39), 2,
      sym_integer,
      sym_exponent,
    ACTIONS(121), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [985] = 7,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      sym__digit,
    STATE(38), 1,
      sym_primitive,
    STATE(40), 1,
      sym_float,
    STATE(128), 1,
      sym_object,
    ACTIONS(27), 2,
      sym_integer,
      sym_exponent,
    ACTIONS(123), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1009] = 7,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      sym__digit,
    STATE(38), 1,
      sym_primitive,
    STATE(40), 1,
      sym_float,
    STATE(120), 1,
      sym_object,
    ACTIONS(27), 2,
      sym_integer,
      sym_exponent,
    ACTIONS(123), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1033] = 7,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      sym__digit,
    STATE(38), 1,
      sym_primitive,
    STATE(40), 1,
      sym_float,
    STATE(94), 1,
      sym_object,
    ACTIONS(27), 2,
      sym_integer,
      sym_exponent,
    ACTIONS(123), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1057] = 7,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      sym__digit,
    STATE(38), 1,
      sym_primitive,
    STATE(40), 1,
      sym_float,
    STATE(122), 1,
      sym_object,
    ACTIONS(27), 2,
      sym_integer,
      sym_exponent,
    ACTIONS(123), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1081] = 4,
    ACTIONS(127), 1,
      anon_sym_COLON,
    ACTIONS(129), 1,
      sym_one_sample_delay_operator,
    STATE(54), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(125), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1099] = 4,
    ACTIONS(134), 1,
      anon_sym_COLON,
    ACTIONS(136), 1,
      sym_one_sample_delay_operator,
    STATE(54), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(132), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1117] = 7,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      sym__digit,
    STATE(38), 1,
      sym_primitive,
    STATE(40), 1,
      sym_float,
    STATE(159), 1,
      sym_object,
    ACTIONS(27), 2,
      sym_integer,
      sym_exponent,
    ACTIONS(123), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1141] = 4,
    ACTIONS(140), 1,
      anon_sym_COLON,
    ACTIONS(142), 1,
      anon_sym_COLON_GT,
    STATE(61), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(138), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1158] = 4,
    ACTIONS(146), 1,
      anon_sym_COLON,
    ACTIONS(148), 1,
      anon_sym_LT_COLON,
    STATE(65), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(144), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [1175] = 4,
    ACTIONS(142), 1,
      anon_sym_COLON_GT,
    ACTIONS(152), 1,
      anon_sym_COLON,
    STATE(61), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(150), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1192] = 3,
    ACTIONS(154), 1,
      sym_one_sample_delay_operator,
    STATE(62), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(132), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1207] = 4,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_COLON,
    STATE(61), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(156), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1224] = 3,
    ACTIONS(163), 1,
      sym_one_sample_delay_operator,
    STATE(62), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(125), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1239] = 5,
    ACTIONS(146), 1,
      anon_sym_COLON,
    ACTIONS(148), 1,
      anon_sym_LT_COLON,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(166), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [1258] = 4,
    ACTIONS(146), 1,
      anon_sym_COLON,
    ACTIONS(148), 1,
      anon_sym_LT_COLON,
    STATE(65), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(170), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [1275] = 4,
    ACTIONS(152), 1,
      anon_sym_COLON,
    ACTIONS(172), 1,
      anon_sym_COLON_GT,
    STATE(61), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(150), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1292] = 6,
    ACTIONS(146), 1,
      anon_sym_COLON,
    ACTIONS(148), 1,
      anon_sym_LT_COLON,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_TILDE,
    STATE(65), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(156), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COLON_GT,
  [1313] = 2,
    ACTIONS(178), 1,
      anon_sym_COLON,
    ACTIONS(176), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1325] = 4,
    ACTIONS(148), 1,
      anon_sym_LT_COLON,
    ACTIONS(180), 1,
      anon_sym_COLON,
    STATE(59), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(170), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
  [1341] = 5,
    ACTIONS(148), 1,
      anon_sym_LT_COLON,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_COLON,
    STATE(59), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(166), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
  [1359] = 5,
    ACTIONS(142), 1,
      anon_sym_COLON_GT,
    ACTIONS(152), 1,
      anon_sym_COLON,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(150), 3,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1377] = 2,
    ACTIONS(186), 1,
      anon_sym_COLON,
    ACTIONS(184), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1389] = 5,
    ACTIONS(142), 1,
      anon_sym_COLON_GT,
    ACTIONS(152), 1,
      anon_sym_COLON,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(150), 3,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1407] = 2,
    ACTIONS(192), 1,
      anon_sym_COLON,
    ACTIONS(190), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1419] = 2,
    ACTIONS(196), 1,
      anon_sym_COLON,
    ACTIONS(194), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1431] = 2,
    ACTIONS(119), 1,
      anon_sym_COLON,
    ACTIONS(117), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1443] = 2,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(198), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1455] = 2,
    ACTIONS(204), 1,
      anon_sym_COLON,
    ACTIONS(202), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1467] = 2,
    ACTIONS(208), 1,
      anon_sym_COLON,
    ACTIONS(206), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1479] = 2,
    ACTIONS(45), 1,
      anon_sym_COLON,
    ACTIONS(43), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1491] = 2,
    ACTIONS(212), 1,
      anon_sym_COLON,
    ACTIONS(210), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1503] = 4,
    ACTIONS(148), 1,
      anon_sym_LT_COLON,
    ACTIONS(180), 1,
      anon_sym_COLON,
    STATE(59), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(144), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
  [1519] = 6,
    ACTIONS(148), 1,
      anon_sym_LT_COLON,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_COLON,
    ACTIONS(214), 1,
      anon_sym_SEMI,
    ACTIONS(216), 1,
      anon_sym_TILDE,
    STATE(59), 1,
      aux_sym_split_composition_repeat1,
  [1538] = 1,
    ACTIONS(190), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1547] = 1,
    ACTIONS(210), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1556] = 6,
    ACTIONS(148), 1,
      anon_sym_LT_COLON,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_COLON,
    ACTIONS(216), 1,
      anon_sym_TILDE,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_split_composition_repeat1,
  [1575] = 1,
    ACTIONS(43), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1584] = 6,
    ACTIONS(148), 1,
      anon_sym_LT_COLON,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_COLON,
    ACTIONS(216), 1,
      anon_sym_TILDE,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_split_composition_repeat1,
  [1603] = 1,
    ACTIONS(206), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1612] = 1,
    ACTIONS(184), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1621] = 6,
    ACTIONS(148), 1,
      anon_sym_LT_COLON,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_COLON,
    ACTIONS(216), 1,
      anon_sym_TILDE,
    ACTIONS(222), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      aux_sym_split_composition_repeat1,
  [1640] = 6,
    ACTIONS(148), 1,
      anon_sym_LT_COLON,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_COLON,
    ACTIONS(216), 1,
      anon_sym_TILDE,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      aux_sym_split_composition_repeat1,
  [1659] = 1,
    ACTIONS(202), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1668] = 6,
    ACTIONS(148), 1,
      anon_sym_LT_COLON,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_COLON,
    ACTIONS(216), 1,
      anon_sym_TILDE,
    ACTIONS(226), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      aux_sym_split_composition_repeat1,
  [1687] = 1,
    ACTIONS(176), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1696] = 6,
    ACTIONS(148), 1,
      anon_sym_LT_COLON,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_COLON,
    ACTIONS(216), 1,
      anon_sym_TILDE,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_split_composition_repeat1,
  [1715] = 1,
    ACTIONS(198), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1724] = 1,
    ACTIONS(194), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1733] = 5,
    ACTIONS(148), 1,
      anon_sym_LT_COLON,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_COLON,
    ACTIONS(216), 1,
      anon_sym_TILDE,
    STATE(57), 1,
      aux_sym_split_composition_repeat1,
  [1749] = 2,
    ACTIONS(232), 2,
      anon_sym_declare,
      sym_identifier,
    ACTIONS(230), 3,
      ts_builtin_sym_end,
      anon_sym_import_LPAREN,
      sym_comment,
  [1759] = 5,
    ACTIONS(148), 1,
      anon_sym_LT_COLON,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_COLON,
    ACTIONS(216), 1,
      anon_sym_TILDE,
    STATE(72), 1,
      aux_sym_split_composition_repeat1,
  [1775] = 5,
    ACTIONS(148), 1,
      anon_sym_LT_COLON,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_COLON,
    ACTIONS(216), 1,
      anon_sym_TILDE,
    STATE(70), 1,
      aux_sym_split_composition_repeat1,
  [1791] = 4,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_token1,
    ACTIONS(239), 1,
      sym_escape_sequence,
    STATE(102), 1,
      aux_sym_string_repeat1,
  [1804] = 4,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      aux_sym_string_token1,
    ACTIONS(246), 1,
      sym_escape_sequence,
    STATE(104), 1,
      aux_sym_string_repeat1,
  [1817] = 4,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      aux_sym_string_token1,
    ACTIONS(252), 1,
      sym_escape_sequence,
    STATE(102), 1,
      aux_sym_string_repeat1,
  [1830] = 3,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_function_definition_repeat1,
  [1840] = 3,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_function_definition_repeat1,
  [1850] = 3,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_function_definition_repeat1,
  [1860] = 3,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      aux_sym_function_definition_repeat1,
  [1870] = 3,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      sym__digit,
  [1880] = 3,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      sym__digit,
  [1890] = 3,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_function_definition_repeat1,
  [1900] = 3,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym_identifier,
    STATE(140), 1,
      sym_string,
  [1910] = 2,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      sym__digit,
  [1917] = 1,
    ACTIONS(281), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1922] = 2,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    ACTIONS(285), 1,
      anon_sym_COLON,
  [1929] = 2,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    STATE(147), 1,
      sym_string,
  [1936] = 2,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    STATE(132), 1,
      sym_string,
  [1943] = 1,
    ACTIONS(287), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1948] = 2,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    ACTIONS(291), 1,
      sym_identifier,
  [1955] = 2,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
  [1962] = 2,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      sym__digit,
  [1969] = 2,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
  [1976] = 2,
    ACTIONS(285), 1,
      anon_sym_COLON,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
  [1983] = 2,
    ACTIONS(303), 1,
      anon_sym_EQ,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
  [1990] = 1,
    ACTIONS(307), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1995] = 2,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    ACTIONS(311), 1,
      sym_identifier,
  [2002] = 1,
    ACTIONS(313), 1,
      anon_sym_SEMI,
  [2006] = 1,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
  [2010] = 1,
    ACTIONS(317), 1,
      sym_identifier,
  [2014] = 1,
    ACTIONS(319), 1,
      anon_sym_DOT,
  [2018] = 1,
    ACTIONS(73), 1,
      sym__digit,
  [2022] = 1,
    ACTIONS(321), 1,
      anon_sym_SEMI,
  [2026] = 1,
    ACTIONS(323), 1,
      anon_sym_EQ,
  [2030] = 1,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
  [2034] = 1,
    ACTIONS(327), 1,
      anon_sym_COLON,
  [2038] = 1,
    ACTIONS(329), 1,
      anon_sym_DOT,
  [2042] = 1,
    ACTIONS(331), 1,
      anon_sym_DOT,
  [2046] = 1,
    ACTIONS(333), 1,
      sym__digit,
  [2050] = 1,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
  [2054] = 1,
    ACTIONS(337), 1,
      anon_sym_SEMI,
  [2058] = 1,
    ACTIONS(285), 1,
      anon_sym_COLON,
  [2062] = 1,
    ACTIONS(339), 1,
      anon_sym_SEMI,
  [2066] = 1,
    ACTIONS(341), 1,
      anon_sym_EQ,
  [2070] = 1,
    ACTIONS(343), 1,
      anon_sym_SEMI,
  [2074] = 1,
    ACTIONS(345), 1,
      anon_sym_SEMI,
  [2078] = 1,
    ACTIONS(347), 1,
      anon_sym_EQ,
  [2082] = 1,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
  [2086] = 1,
    ACTIONS(351), 1,
      anon_sym_SEMI,
  [2090] = 1,
    ACTIONS(353), 1,
      sym__digit,
  [2094] = 1,
    ACTIONS(355), 1,
      anon_sym_DOT,
  [2098] = 1,
    ACTIONS(55), 1,
      sym__digit,
  [2102] = 1,
    ACTIONS(357), 1,
      anon_sym_DOT,
  [2106] = 1,
    ACTIONS(359), 1,
      anon_sym_SEMI,
  [2110] = 1,
    ACTIONS(361), 1,
      anon_sym_SEMI,
  [2114] = 1,
    ACTIONS(363), 1,
      anon_sym_DOT,
  [2118] = 1,
    ACTIONS(365), 1,
      anon_sym_DOT,
  [2122] = 1,
    ACTIONS(367), 1,
      anon_sym_COLON,
  [2126] = 1,
    ACTIONS(369), 1,
      anon_sym_COLON,
  [2130] = 1,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
  [2134] = 1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
  [2138] = 1,
    ACTIONS(375), 1,
      anon_sym_SEMI,
  [2142] = 1,
    ACTIONS(377), 1,
      ts_builtin_sym_end,
  [2146] = 1,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
  [2150] = 1,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
  [2154] = 1,
    ACTIONS(383), 1,
      sym_identifier,
  [2158] = 1,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 43,
  [SMALL_STATE(21)] = 80,
  [SMALL_STATE(22)] = 117,
  [SMALL_STATE(23)] = 151,
  [SMALL_STATE(24)] = 187,
  [SMALL_STATE(25)] = 223,
  [SMALL_STATE(26)] = 263,
  [SMALL_STATE(27)] = 297,
  [SMALL_STATE(28)] = 331,
  [SMALL_STATE(29)] = 362,
  [SMALL_STATE(30)] = 395,
  [SMALL_STATE(31)] = 428,
  [SMALL_STATE(32)] = 459,
  [SMALL_STATE(33)] = 490,
  [SMALL_STATE(34)] = 521,
  [SMALL_STATE(35)] = 552,
  [SMALL_STATE(36)] = 585,
  [SMALL_STATE(37)] = 615,
  [SMALL_STATE(38)] = 645,
  [SMALL_STATE(39)] = 675,
  [SMALL_STATE(40)] = 713,
  [SMALL_STATE(41)] = 743,
  [SMALL_STATE(42)] = 773,
  [SMALL_STATE(43)] = 799,
  [SMALL_STATE(44)] = 825,
  [SMALL_STATE(45)] = 851,
  [SMALL_STATE(46)] = 877,
  [SMALL_STATE(47)] = 910,
  [SMALL_STATE(48)] = 943,
  [SMALL_STATE(49)] = 961,
  [SMALL_STATE(50)] = 985,
  [SMALL_STATE(51)] = 1009,
  [SMALL_STATE(52)] = 1033,
  [SMALL_STATE(53)] = 1057,
  [SMALL_STATE(54)] = 1081,
  [SMALL_STATE(55)] = 1099,
  [SMALL_STATE(56)] = 1117,
  [SMALL_STATE(57)] = 1141,
  [SMALL_STATE(58)] = 1158,
  [SMALL_STATE(59)] = 1175,
  [SMALL_STATE(60)] = 1192,
  [SMALL_STATE(61)] = 1207,
  [SMALL_STATE(62)] = 1224,
  [SMALL_STATE(63)] = 1239,
  [SMALL_STATE(64)] = 1258,
  [SMALL_STATE(65)] = 1275,
  [SMALL_STATE(66)] = 1292,
  [SMALL_STATE(67)] = 1313,
  [SMALL_STATE(68)] = 1325,
  [SMALL_STATE(69)] = 1341,
  [SMALL_STATE(70)] = 1359,
  [SMALL_STATE(71)] = 1377,
  [SMALL_STATE(72)] = 1389,
  [SMALL_STATE(73)] = 1407,
  [SMALL_STATE(74)] = 1419,
  [SMALL_STATE(75)] = 1431,
  [SMALL_STATE(76)] = 1443,
  [SMALL_STATE(77)] = 1455,
  [SMALL_STATE(78)] = 1467,
  [SMALL_STATE(79)] = 1479,
  [SMALL_STATE(80)] = 1491,
  [SMALL_STATE(81)] = 1503,
  [SMALL_STATE(82)] = 1519,
  [SMALL_STATE(83)] = 1538,
  [SMALL_STATE(84)] = 1547,
  [SMALL_STATE(85)] = 1556,
  [SMALL_STATE(86)] = 1575,
  [SMALL_STATE(87)] = 1584,
  [SMALL_STATE(88)] = 1603,
  [SMALL_STATE(89)] = 1612,
  [SMALL_STATE(90)] = 1621,
  [SMALL_STATE(91)] = 1640,
  [SMALL_STATE(92)] = 1659,
  [SMALL_STATE(93)] = 1668,
  [SMALL_STATE(94)] = 1687,
  [SMALL_STATE(95)] = 1696,
  [SMALL_STATE(96)] = 1715,
  [SMALL_STATE(97)] = 1724,
  [SMALL_STATE(98)] = 1733,
  [SMALL_STATE(99)] = 1749,
  [SMALL_STATE(100)] = 1759,
  [SMALL_STATE(101)] = 1775,
  [SMALL_STATE(102)] = 1791,
  [SMALL_STATE(103)] = 1804,
  [SMALL_STATE(104)] = 1817,
  [SMALL_STATE(105)] = 1830,
  [SMALL_STATE(106)] = 1840,
  [SMALL_STATE(107)] = 1850,
  [SMALL_STATE(108)] = 1860,
  [SMALL_STATE(109)] = 1870,
  [SMALL_STATE(110)] = 1880,
  [SMALL_STATE(111)] = 1890,
  [SMALL_STATE(112)] = 1900,
  [SMALL_STATE(113)] = 1910,
  [SMALL_STATE(114)] = 1917,
  [SMALL_STATE(115)] = 1922,
  [SMALL_STATE(116)] = 1929,
  [SMALL_STATE(117)] = 1936,
  [SMALL_STATE(118)] = 1943,
  [SMALL_STATE(119)] = 1948,
  [SMALL_STATE(120)] = 1955,
  [SMALL_STATE(121)] = 1962,
  [SMALL_STATE(122)] = 1969,
  [SMALL_STATE(123)] = 1976,
  [SMALL_STATE(124)] = 1983,
  [SMALL_STATE(125)] = 1990,
  [SMALL_STATE(126)] = 1995,
  [SMALL_STATE(127)] = 2002,
  [SMALL_STATE(128)] = 2006,
  [SMALL_STATE(129)] = 2010,
  [SMALL_STATE(130)] = 2014,
  [SMALL_STATE(131)] = 2018,
  [SMALL_STATE(132)] = 2022,
  [SMALL_STATE(133)] = 2026,
  [SMALL_STATE(134)] = 2030,
  [SMALL_STATE(135)] = 2034,
  [SMALL_STATE(136)] = 2038,
  [SMALL_STATE(137)] = 2042,
  [SMALL_STATE(138)] = 2046,
  [SMALL_STATE(139)] = 2050,
  [SMALL_STATE(140)] = 2054,
  [SMALL_STATE(141)] = 2058,
  [SMALL_STATE(142)] = 2062,
  [SMALL_STATE(143)] = 2066,
  [SMALL_STATE(144)] = 2070,
  [SMALL_STATE(145)] = 2074,
  [SMALL_STATE(146)] = 2078,
  [SMALL_STATE(147)] = 2082,
  [SMALL_STATE(148)] = 2086,
  [SMALL_STATE(149)] = 2090,
  [SMALL_STATE(150)] = 2094,
  [SMALL_STATE(151)] = 2098,
  [SMALL_STATE(152)] = 2102,
  [SMALL_STATE(153)] = 2106,
  [SMALL_STATE(154)] = 2110,
  [SMALL_STATE(155)] = 2114,
  [SMALL_STATE(156)] = 2118,
  [SMALL_STATE(157)] = 2122,
  [SMALL_STATE(158)] = 2126,
  [SMALL_STATE(159)] = 2130,
  [SMALL_STATE(160)] = 2134,
  [SMALL_STATE(161)] = 2138,
  [SMALL_STATE(162)] = 2142,
  [SMALL_STATE(163)] = 2146,
  [SMALL_STATE(164)] = 2150,
  [SMALL_STATE(165)] = 2154,
  [SMALL_STATE(166)] = 2158,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 4),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 5),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 5),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(116),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(165),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(124),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2), SHIFT_REPEAT(54),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_composition, 4, .production_id = 7),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split_composition, 4, .production_id = 7),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_composition, 4, .production_id = 8),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel_composition, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel_composition, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_split_composition_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_split_composition_repeat1, 2), SHIFT_REPEAT(3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_split_composition_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2), SHIFT_REPEAT(62),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_composition, 3, .production_id = 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_composition, 3, .production_id = 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_composition, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_composition, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 7),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 7),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 6),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 6),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 5),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 5),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 4),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel_composition, 4),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel_composition, 4),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_definition, 3, .production_id = 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 9),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 5),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 10),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(102),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(102),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(129),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 6),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_metadata, 4, .production_id = 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_abstraction, 9, .production_id = 11),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_abstraction, 8, .production_id = 11),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_abstraction, 7),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_declaration, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [377] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
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
