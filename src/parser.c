#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 163
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 78
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
  sym_sequential_composition = 68,
  sym_split_composition = 69,
  sym_merge_composition = 70,
  sym_parallel_composition = 71,
  sym_string = 72,
  aux_sym_source_file_repeat1 = 73,
  aux_sym_function_definition_repeat1 = 74,
  aux_sym_one_sample_delay_repeat1 = 75,
  aux_sym_split_composition_repeat1 = 76,
  aux_sym_string_repeat1 = 77,
  alias_sym_function_name = 78,
  alias_sym_metadata_key = 79,
  alias_sym_parameter = 80,
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
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 97},
  [45] = {.lex_state = 97},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 97},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 97},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 97},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 97},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 97},
  [79] = {.lex_state = 97},
  [80] = {.lex_state = 97},
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
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 97},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 97},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 97},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 97},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 97},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 97},
  [120] = {.lex_state = 97},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 97},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 97},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 97},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 97},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 97},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 97},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 97},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 97},
  [154] = {.lex_state = 97},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 0},
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
    [sym_source_file] = STATE(158),
    [sym__statement] = STATE(44),
    [sym_definition] = STATE(157),
    [sym_simple_definition] = STATE(150),
    [sym_function_definition] = STATE(150),
    [sym_file_import] = STATE(157),
    [sym_metadata_declaration] = STATE(157),
    [sym_global_metadata] = STATE(149),
    [sym_function_metadata] = STATE(149),
    [aux_sym_source_file_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_import_LPAREN] = ACTIONS(5),
    [anon_sym_declare] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [2] = {
    [sym_lambda_abstraction] = STATE(133),
    [sym_expression] = STATE(81),
    [sym_binary_operation] = STATE(78),
    [sym_core] = STATE(89),
    [sym_infix] = STATE(89),
    [sym_prefix] = STATE(89),
    [sym_partial] = STATE(89),
    [sym_one_sample_delay] = STATE(78),
    [sym_binary_operator] = STATE(123),
    [sym_object] = STATE(21),
    [sym_primitive] = STATE(35),
    [sym_float] = STATE(37),
    [sym_binary_composition] = STATE(78),
    [sym_sequential_composition] = STATE(85),
    [sym_split_composition] = STATE(85),
    [sym_merge_composition] = STATE(85),
    [sym_parallel_composition] = STATE(85),
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
    [sym_expression] = STATE(59),
    [sym_binary_operation] = STATE(77),
    [sym_core] = STATE(71),
    [sym_infix] = STATE(71),
    [sym_prefix] = STATE(71),
    [sym_partial] = STATE(71),
    [sym_one_sample_delay] = STATE(77),
    [sym_binary_operator] = STATE(162),
    [sym_object] = STATE(19),
    [sym_primitive] = STATE(29),
    [sym_float] = STATE(33),
    [sym_binary_composition] = STATE(77),
    [sym_sequential_composition] = STATE(76),
    [sym_split_composition] = STATE(76),
    [sym_merge_composition] = STATE(76),
    [sym_parallel_composition] = STATE(76),
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
    [sym_expression] = STATE(95),
    [sym_binary_operation] = STATE(78),
    [sym_core] = STATE(89),
    [sym_infix] = STATE(89),
    [sym_prefix] = STATE(89),
    [sym_partial] = STATE(89),
    [sym_one_sample_delay] = STATE(78),
    [sym_binary_operator] = STATE(123),
    [sym_object] = STATE(39),
    [sym_primitive] = STATE(35),
    [sym_float] = STATE(37),
    [sym_binary_composition] = STATE(78),
    [sym_sequential_composition] = STATE(85),
    [sym_split_composition] = STATE(85),
    [sym_merge_composition] = STATE(85),
    [sym_parallel_composition] = STATE(85),
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
  [5] = {
    [sym_expression] = STATE(97),
    [sym_binary_operation] = STATE(78),
    [sym_core] = STATE(89),
    [sym_infix] = STATE(89),
    [sym_prefix] = STATE(89),
    [sym_partial] = STATE(89),
    [sym_one_sample_delay] = STATE(78),
    [sym_binary_operator] = STATE(123),
    [sym_object] = STATE(39),
    [sym_primitive] = STATE(35),
    [sym_float] = STATE(37),
    [sym_binary_composition] = STATE(78),
    [sym_sequential_composition] = STATE(85),
    [sym_split_composition] = STATE(85),
    [sym_merge_composition] = STATE(85),
    [sym_parallel_composition] = STATE(85),
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
    [sym_expression] = STATE(83),
    [sym_binary_operation] = STATE(78),
    [sym_core] = STATE(89),
    [sym_infix] = STATE(89),
    [sym_prefix] = STATE(89),
    [sym_partial] = STATE(89),
    [sym_one_sample_delay] = STATE(78),
    [sym_binary_operator] = STATE(123),
    [sym_object] = STATE(21),
    [sym_primitive] = STATE(35),
    [sym_float] = STATE(37),
    [sym_binary_composition] = STATE(78),
    [sym_sequential_composition] = STATE(85),
    [sym_split_composition] = STATE(85),
    [sym_merge_composition] = STATE(85),
    [sym_parallel_composition] = STATE(85),
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
    [sym_expression] = STATE(63),
    [sym_binary_operation] = STATE(77),
    [sym_core] = STATE(71),
    [sym_infix] = STATE(71),
    [sym_prefix] = STATE(71),
    [sym_partial] = STATE(71),
    [sym_one_sample_delay] = STATE(77),
    [sym_binary_operator] = STATE(162),
    [sym_object] = STATE(19),
    [sym_primitive] = STATE(29),
    [sym_float] = STATE(33),
    [sym_binary_composition] = STATE(77),
    [sym_sequential_composition] = STATE(76),
    [sym_split_composition] = STATE(76),
    [sym_merge_composition] = STATE(76),
    [sym_parallel_composition] = STATE(76),
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
    [sym_expression] = STATE(79),
    [sym_binary_operation] = STATE(78),
    [sym_core] = STATE(89),
    [sym_infix] = STATE(89),
    [sym_prefix] = STATE(89),
    [sym_partial] = STATE(89),
    [sym_one_sample_delay] = STATE(78),
    [sym_binary_operator] = STATE(123),
    [sym_object] = STATE(21),
    [sym_primitive] = STATE(35),
    [sym_float] = STATE(37),
    [sym_binary_composition] = STATE(78),
    [sym_sequential_composition] = STATE(85),
    [sym_split_composition] = STATE(85),
    [sym_merge_composition] = STATE(85),
    [sym_parallel_composition] = STATE(85),
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
    [sym_expression] = STATE(80),
    [sym_binary_operation] = STATE(78),
    [sym_core] = STATE(89),
    [sym_infix] = STATE(89),
    [sym_prefix] = STATE(89),
    [sym_partial] = STATE(89),
    [sym_one_sample_delay] = STATE(78),
    [sym_binary_operator] = STATE(123),
    [sym_object] = STATE(21),
    [sym_primitive] = STATE(35),
    [sym_float] = STATE(37),
    [sym_binary_composition] = STATE(78),
    [sym_sequential_composition] = STATE(85),
    [sym_split_composition] = STATE(85),
    [sym_merge_composition] = STATE(85),
    [sym_parallel_composition] = STATE(85),
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
    [sym_expression] = STATE(84),
    [sym_binary_operation] = STATE(78),
    [sym_core] = STATE(89),
    [sym_infix] = STATE(89),
    [sym_prefix] = STATE(89),
    [sym_partial] = STATE(89),
    [sym_one_sample_delay] = STATE(78),
    [sym_binary_operator] = STATE(123),
    [sym_object] = STATE(21),
    [sym_primitive] = STATE(35),
    [sym_float] = STATE(37),
    [sym_binary_composition] = STATE(78),
    [sym_sequential_composition] = STATE(85),
    [sym_split_composition] = STATE(85),
    [sym_merge_composition] = STATE(85),
    [sym_parallel_composition] = STATE(85),
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
    [sym_expression] = STATE(92),
    [sym_binary_operation] = STATE(78),
    [sym_core] = STATE(89),
    [sym_infix] = STATE(89),
    [sym_prefix] = STATE(89),
    [sym_partial] = STATE(89),
    [sym_one_sample_delay] = STATE(78),
    [sym_binary_operator] = STATE(123),
    [sym_object] = STATE(21),
    [sym_primitive] = STATE(35),
    [sym_float] = STATE(37),
    [sym_binary_composition] = STATE(78),
    [sym_sequential_composition] = STATE(85),
    [sym_split_composition] = STATE(85),
    [sym_merge_composition] = STATE(85),
    [sym_parallel_composition] = STATE(85),
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
    [sym_expression] = STATE(94),
    [sym_binary_operation] = STATE(78),
    [sym_core] = STATE(89),
    [sym_infix] = STATE(89),
    [sym_prefix] = STATE(89),
    [sym_partial] = STATE(89),
    [sym_one_sample_delay] = STATE(78),
    [sym_binary_operator] = STATE(123),
    [sym_object] = STATE(21),
    [sym_primitive] = STATE(35),
    [sym_float] = STATE(37),
    [sym_binary_composition] = STATE(78),
    [sym_sequential_composition] = STATE(85),
    [sym_split_composition] = STATE(85),
    [sym_merge_composition] = STATE(85),
    [sym_parallel_composition] = STATE(85),
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
    [sym_expression] = STATE(100),
    [sym_binary_operation] = STATE(78),
    [sym_core] = STATE(89),
    [sym_infix] = STATE(89),
    [sym_prefix] = STATE(89),
    [sym_partial] = STATE(89),
    [sym_one_sample_delay] = STATE(78),
    [sym_binary_operator] = STATE(123),
    [sym_object] = STATE(21),
    [sym_primitive] = STATE(35),
    [sym_float] = STATE(37),
    [sym_binary_composition] = STATE(78),
    [sym_sequential_composition] = STATE(85),
    [sym_split_composition] = STATE(85),
    [sym_merge_composition] = STATE(85),
    [sym_parallel_composition] = STATE(85),
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
  [14] = {
    [sym_expression] = STATE(67),
    [sym_binary_operation] = STATE(78),
    [sym_core] = STATE(89),
    [sym_infix] = STATE(89),
    [sym_prefix] = STATE(89),
    [sym_partial] = STATE(89),
    [sym_one_sample_delay] = STATE(78),
    [sym_binary_operator] = STATE(123),
    [sym_object] = STATE(21),
    [sym_primitive] = STATE(35),
    [sym_float] = STATE(37),
    [sym_binary_composition] = STATE(78),
    [sym_sequential_composition] = STATE(85),
    [sym_split_composition] = STATE(85),
    [sym_merge_composition] = STATE(85),
    [sym_parallel_composition] = STATE(85),
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
    [sym_expression] = STATE(58),
    [sym_binary_operation] = STATE(77),
    [sym_core] = STATE(71),
    [sym_infix] = STATE(71),
    [sym_prefix] = STATE(71),
    [sym_partial] = STATE(71),
    [sym_one_sample_delay] = STATE(77),
    [sym_binary_operator] = STATE(162),
    [sym_object] = STATE(19),
    [sym_primitive] = STATE(29),
    [sym_float] = STATE(33),
    [sym_binary_composition] = STATE(77),
    [sym_sequential_composition] = STATE(76),
    [sym_split_composition] = STATE(76),
    [sym_merge_composition] = STATE(76),
    [sym_parallel_composition] = STATE(76),
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
  [16] = {
    [sym_expression] = STATE(74),
    [sym_binary_operation] = STATE(78),
    [sym_core] = STATE(89),
    [sym_infix] = STATE(89),
    [sym_prefix] = STATE(89),
    [sym_partial] = STATE(89),
    [sym_one_sample_delay] = STATE(78),
    [sym_binary_operator] = STATE(123),
    [sym_object] = STATE(21),
    [sym_primitive] = STATE(35),
    [sym_float] = STATE(37),
    [sym_binary_composition] = STATE(78),
    [sym_sequential_composition] = STATE(85),
    [sym_split_composition] = STATE(85),
    [sym_merge_composition] = STATE(85),
    [sym_parallel_composition] = STATE(85),
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
  [0] = 4,
    ACTIONS(47), 1,
      sym_exponent,
    ACTIONS(49), 1,
      sym__digit,
    ACTIONS(45), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 22,
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
    ACTIONS(55), 1,
      sym_exponent,
    ACTIONS(57), 1,
      sym__digit,
    ACTIONS(53), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 22,
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
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(63), 1,
      sym_one_sample_delay_operator,
    STATE(49), 1,
      sym_binary_operator,
    STATE(53), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 5,
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
    ACTIONS(55), 1,
      sym_exponent,
    ACTIONS(53), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 22,
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
  [147] = 6,
    ACTIONS(65), 1,
      sym_one_sample_delay_operator,
    STATE(52), 1,
      sym_binary_operator,
    STATE(57), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
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
  [186] = 3,
    ACTIONS(47), 1,
      sym_exponent,
    ACTIONS(45), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 22,
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
  [219] = 4,
    ACTIONS(67), 1,
      sym_exponent,
    ACTIONS(69), 1,
      sym__digit,
    ACTIONS(45), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 22,
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
      anon_sym_LT_COLON,
  [254] = 3,
    ACTIONS(75), 1,
      sym_exponent,
    ACTIONS(73), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 22,
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
  [287] = 4,
    ACTIONS(77), 1,
      sym_exponent,
    ACTIONS(79), 1,
      sym__digit,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 22,
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
      anon_sym_LT_COLON,
  [322] = 3,
    ACTIONS(81), 1,
      sym_exponent,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 22,
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
      anon_sym_LT_COLON,
  [354] = 3,
    ACTIONS(67), 1,
      sym_exponent,
    ACTIONS(45), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 22,
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
      anon_sym_LT_COLON,
  [386] = 3,
    ACTIONS(77), 1,
      sym_exponent,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 22,
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
      anon_sym_LT_COLON,
  [418] = 2,
    ACTIONS(85), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 22,
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
  [448] = 2,
    ACTIONS(89), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 22,
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
  [478] = 2,
    ACTIONS(73), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 22,
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
  [508] = 2,
    ACTIONS(53), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 22,
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
  [538] = 2,
    ACTIONS(93), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 22,
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
  [568] = 2,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 22,
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
      anon_sym_LT_COLON,
  [597] = 2,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 22,
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
      anon_sym_LT_COLON,
  [626] = 2,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 22,
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
      anon_sym_LT_COLON,
  [655] = 2,
    ACTIONS(93), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 22,
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
      anon_sym_LT_COLON,
  [684] = 2,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 22,
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
      anon_sym_LT_COLON,
  [713] = 6,
    ACTIONS(65), 1,
      sym_one_sample_delay_operator,
    STATE(52), 1,
      sym_binary_operator,
    STATE(57), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 3,
      anon_sym_COMMA,
      anon_sym_COLON,
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
  [750] = 3,
    STATE(72), 1,
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
  [776] = 3,
    STATE(86), 1,
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
  [802] = 3,
    STATE(93), 1,
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
  [828] = 3,
    STATE(69), 1,
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
  [854] = 9,
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
    STATE(45), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(149), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(150), 2,
      sym_simple_definition,
      sym_function_definition,
    STATE(157), 3,
      sym_definition,
      sym_file_import,
      sym_metadata_declaration,
  [887] = 9,
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
    STATE(45), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(149), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(150), 2,
      sym_simple_definition,
      sym_function_definition,
    STATE(157), 3,
      sym_definition,
      sym_file_import,
      sym_metadata_declaration,
  [920] = 2,
    ACTIONS(119), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym__digit,
    ACTIONS(117), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      sym_integer,
      sym_exponent,
      anon_sym_LT_COLON,
  [937] = 7,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      sym__digit,
    STATE(35), 1,
      sym_primitive,
    STATE(37), 1,
      sym_float,
    STATE(155), 1,
      sym_object,
    ACTIONS(27), 2,
      sym_integer,
      sym_exponent,
    ACTIONS(121), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [961] = 7,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      sym__digit,
    STATE(35), 1,
      sym_primitive,
    STATE(37), 1,
      sym_float,
    STATE(121), 1,
      sym_object,
    ACTIONS(27), 2,
      sym_integer,
      sym_exponent,
    ACTIONS(121), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [985] = 7,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym__digit,
    STATE(29), 1,
      sym_primitive,
    STATE(33), 1,
      sym_float,
    STATE(65), 1,
      sym_object,
    ACTIONS(39), 2,
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
    STATE(35), 1,
      sym_primitive,
    STATE(37), 1,
      sym_float,
    STATE(124), 1,
      sym_object,
    ACTIONS(27), 2,
      sym_integer,
      sym_exponent,
    ACTIONS(121), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1033] = 7,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      sym__digit,
    STATE(35), 1,
      sym_primitive,
    STATE(37), 1,
      sym_float,
    STATE(118), 1,
      sym_object,
    ACTIONS(27), 2,
      sym_integer,
      sym_exponent,
    ACTIONS(121), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1057] = 7,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      sym__digit,
    STATE(35), 1,
      sym_primitive,
    STATE(37), 1,
      sym_float,
    STATE(90), 1,
      sym_object,
    ACTIONS(27), 2,
      sym_integer,
      sym_exponent,
    ACTIONS(121), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1081] = 4,
    ACTIONS(127), 1,
      anon_sym_COLON,
    ACTIONS(129), 1,
      sym_one_sample_delay_operator,
    STATE(54), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(125), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1098] = 4,
    ACTIONS(133), 1,
      anon_sym_COLON,
    ACTIONS(135), 1,
      sym_one_sample_delay_operator,
    STATE(54), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(131), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1115] = 3,
    ACTIONS(138), 1,
      sym_one_sample_delay_operator,
    STATE(55), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(131), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LT_COLON,
  [1129] = 4,
    ACTIONS(143), 1,
      anon_sym_COLON,
    ACTIONS(145), 1,
      anon_sym_COLON_GT,
    STATE(62), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(141), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
  [1145] = 3,
    ACTIONS(147), 1,
      sym_one_sample_delay_operator,
    STATE(55), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(125), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LT_COLON,
  [1159] = 4,
    ACTIONS(151), 1,
      anon_sym_COLON,
    ACTIONS(153), 1,
      anon_sym_LT_COLON,
    STATE(61), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(149), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_GT,
  [1175] = 5,
    ACTIONS(151), 1,
      anon_sym_COLON,
    ACTIONS(153), 1,
      anon_sym_LT_COLON,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(155), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COLON_GT,
  [1193] = 4,
    ACTIONS(145), 1,
      anon_sym_COLON_GT,
    ACTIONS(161), 1,
      anon_sym_COLON,
    STATE(62), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(159), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
  [1209] = 4,
    ACTIONS(143), 1,
      anon_sym_COLON,
    ACTIONS(163), 1,
      anon_sym_COLON_GT,
    STATE(62), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(141), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
  [1225] = 4,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(168), 1,
      anon_sym_COLON,
    STATE(62), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(155), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1241] = 4,
    ACTIONS(151), 1,
      anon_sym_COLON,
    ACTIONS(153), 1,
      anon_sym_LT_COLON,
    STATE(61), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(170), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_GT,
  [1257] = 2,
    ACTIONS(174), 1,
      anon_sym_COLON,
    ACTIONS(172), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1268] = 2,
    ACTIONS(178), 1,
      anon_sym_COLON,
    ACTIONS(176), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1279] = 5,
    ACTIONS(143), 1,
      anon_sym_COLON,
    ACTIONS(145), 1,
      anon_sym_COLON_GT,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(141), 2,
      anon_sym_COMMA,
      anon_sym_LT_COLON,
  [1296] = 4,
    ACTIONS(153), 1,
      anon_sym_LT_COLON,
    ACTIONS(182), 1,
      anon_sym_COLON,
    STATE(56), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(149), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1311] = 5,
    ACTIONS(143), 1,
      anon_sym_COLON,
    ACTIONS(145), 1,
      anon_sym_COLON_GT,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(141), 2,
      anon_sym_COMMA,
      anon_sym_LT_COLON,
  [1328] = 2,
    ACTIONS(188), 1,
      anon_sym_COLON,
    ACTIONS(186), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1339] = 2,
    ACTIONS(192), 1,
      anon_sym_COLON,
    ACTIONS(190), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1350] = 2,
    ACTIONS(196), 1,
      anon_sym_COLON,
    ACTIONS(194), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1361] = 2,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(198), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1372] = 2,
    ACTIONS(119), 1,
      anon_sym_COLON,
    ACTIONS(117), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1383] = 4,
    ACTIONS(153), 1,
      anon_sym_LT_COLON,
    ACTIONS(182), 1,
      anon_sym_COLON,
    STATE(56), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(170), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1398] = 2,
    ACTIONS(204), 1,
      anon_sym_COLON,
    ACTIONS(202), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1409] = 2,
    ACTIONS(208), 1,
      anon_sym_COLON,
    ACTIONS(206), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1420] = 2,
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(59), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1431] = 1,
    ACTIONS(59), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LT_COLON,
  [1439] = 5,
    ACTIONS(153), 1,
      anon_sym_LT_COLON,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_COLON,
    ACTIONS(210), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      aux_sym_split_composition_repeat1,
  [1455] = 5,
    ACTIONS(153), 1,
      anon_sym_LT_COLON,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_COLON,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_split_composition_repeat1,
  [1471] = 5,
    ACTIONS(153), 1,
      anon_sym_LT_COLON,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_COLON,
    ACTIONS(214), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      aux_sym_split_composition_repeat1,
  [1487] = 1,
    ACTIONS(172), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LT_COLON,
  [1495] = 5,
    ACTIONS(153), 1,
      anon_sym_LT_COLON,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_COLON,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_split_composition_repeat1,
  [1511] = 5,
    ACTIONS(153), 1,
      anon_sym_LT_COLON,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_COLON,
    ACTIONS(218), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      aux_sym_split_composition_repeat1,
  [1527] = 1,
    ACTIONS(206), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LT_COLON,
  [1535] = 1,
    ACTIONS(186), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LT_COLON,
  [1543] = 1,
    ACTIONS(202), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LT_COLON,
  [1551] = 2,
    ACTIONS(222), 2,
      anon_sym_declare,
      sym_identifier,
    ACTIONS(220), 3,
      ts_builtin_sym_end,
      anon_sym_import_LPAREN,
      sym_comment,
  [1561] = 1,
    ACTIONS(194), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LT_COLON,
  [1569] = 1,
    ACTIONS(176), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LT_COLON,
  [1577] = 1,
    ACTIONS(190), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LT_COLON,
  [1585] = 5,
    ACTIONS(153), 1,
      anon_sym_LT_COLON,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_COLON,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_split_composition_repeat1,
  [1601] = 1,
    ACTIONS(198), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LT_COLON,
  [1609] = 5,
    ACTIONS(153), 1,
      anon_sym_LT_COLON,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_COLON,
    ACTIONS(226), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      aux_sym_split_composition_repeat1,
  [1625] = 4,
    ACTIONS(153), 1,
      anon_sym_LT_COLON,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_COLON,
    STATE(66), 1,
      aux_sym_split_composition_repeat1,
  [1638] = 4,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      aux_sym_string_token1,
    ACTIONS(232), 1,
      sym_escape_sequence,
    STATE(99), 1,
      aux_sym_string_repeat1,
  [1651] = 4,
    ACTIONS(153), 1,
      anon_sym_LT_COLON,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_COLON,
    STATE(68), 1,
      aux_sym_split_composition_repeat1,
  [1664] = 4,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_token1,
    ACTIONS(239), 1,
      sym_escape_sequence,
    STATE(98), 1,
      aux_sym_string_repeat1,
  [1677] = 4,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      aux_sym_string_token1,
    ACTIONS(246), 1,
      sym_escape_sequence,
    STATE(98), 1,
      aux_sym_string_repeat1,
  [1690] = 4,
    ACTIONS(153), 1,
      anon_sym_LT_COLON,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_COLON,
    STATE(60), 1,
      aux_sym_split_composition_repeat1,
  [1703] = 3,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_function_definition_repeat1,
  [1713] = 3,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_function_definition_repeat1,
  [1723] = 3,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_function_definition_repeat1,
  [1733] = 3,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_function_definition_repeat1,
  [1743] = 3,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(263), 1,
      sym__digit,
  [1753] = 3,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_function_definition_repeat1,
  [1763] = 3,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      sym__digit,
  [1773] = 3,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      sym_identifier,
    STATE(138), 1,
      sym_string,
  [1783] = 2,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    STATE(130), 1,
      sym_string,
  [1790] = 2,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(277), 1,
      sym_identifier,
  [1797] = 1,
    ACTIONS(279), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1802] = 1,
    ACTIONS(281), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1807] = 2,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    STATE(144), 1,
      sym_string,
  [1814] = 2,
    ACTIONS(283), 1,
      anon_sym_EQ,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
  [1821] = 2,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    ACTIONS(289), 1,
      anon_sym_COLON,
  [1828] = 1,
    ACTIONS(291), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1833] = 2,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    ACTIONS(295), 1,
      sym_identifier,
  [1840] = 2,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
  [1847] = 2,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      sym__digit,
  [1854] = 2,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(263), 1,
      sym__digit,
  [1861] = 2,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
  [1868] = 2,
    ACTIONS(289), 1,
      anon_sym_COLON,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
  [1875] = 1,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
  [1879] = 1,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
  [1883] = 1,
    ACTIONS(311), 1,
      anon_sym_DOT,
  [1887] = 1,
    ACTIONS(313), 1,
      anon_sym_EQ,
  [1891] = 1,
    ACTIONS(315), 1,
      sym_identifier,
  [1895] = 1,
    ACTIONS(317), 1,
      anon_sym_DOT,
  [1899] = 1,
    ACTIONS(69), 1,
      sym__digit,
  [1903] = 1,
    ACTIONS(319), 1,
      anon_sym_SEMI,
  [1907] = 1,
    ACTIONS(321), 1,
      anon_sym_EQ,
  [1911] = 1,
    ACTIONS(323), 1,
      anon_sym_COLON,
  [1915] = 1,
    ACTIONS(325), 1,
      anon_sym_SEMI,
  [1919] = 1,
    ACTIONS(327), 1,
      anon_sym_DOT,
  [1923] = 1,
    ACTIONS(329), 1,
      anon_sym_EQ,
  [1927] = 1,
    ACTIONS(331), 1,
      sym__digit,
  [1931] = 1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
  [1935] = 1,
    ACTIONS(335), 1,
      anon_sym_SEMI,
  [1939] = 1,
    ACTIONS(337), 1,
      anon_sym_SEMI,
  [1943] = 1,
    ACTIONS(339), 1,
      anon_sym_SEMI,
  [1947] = 1,
    ACTIONS(341), 1,
      anon_sym_SEMI,
  [1951] = 1,
    ACTIONS(289), 1,
      anon_sym_COLON,
  [1955] = 1,
    ACTIONS(343), 1,
      anon_sym_SEMI,
  [1959] = 1,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
  [1963] = 1,
    ACTIONS(347), 1,
      sym__digit,
  [1967] = 1,
    ACTIONS(349), 1,
      anon_sym_DOT,
  [1971] = 1,
    ACTIONS(49), 1,
      sym__digit,
  [1975] = 1,
    ACTIONS(351), 1,
      anon_sym_DOT,
  [1979] = 1,
    ACTIONS(353), 1,
      anon_sym_SEMI,
  [1983] = 1,
    ACTIONS(355), 1,
      anon_sym_SEMI,
  [1987] = 1,
    ACTIONS(357), 1,
      anon_sym_DOT,
  [1991] = 1,
    ACTIONS(359), 1,
      anon_sym_DOT,
  [1995] = 1,
    ACTIONS(361), 1,
      anon_sym_COLON,
  [1999] = 1,
    ACTIONS(363), 1,
      anon_sym_COLON,
  [2003] = 1,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
  [2007] = 1,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
  [2011] = 1,
    ACTIONS(369), 1,
      anon_sym_SEMI,
  [2015] = 1,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
  [2019] = 1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
  [2023] = 1,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
  [2027] = 1,
    ACTIONS(377), 1,
      sym_identifier,
  [2031] = 1,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 36,
  [SMALL_STATE(19)] = 72,
  [SMALL_STATE(20)] = 114,
  [SMALL_STATE(21)] = 147,
  [SMALL_STATE(22)] = 186,
  [SMALL_STATE(23)] = 219,
  [SMALL_STATE(24)] = 254,
  [SMALL_STATE(25)] = 287,
  [SMALL_STATE(26)] = 322,
  [SMALL_STATE(27)] = 354,
  [SMALL_STATE(28)] = 386,
  [SMALL_STATE(29)] = 418,
  [SMALL_STATE(30)] = 448,
  [SMALL_STATE(31)] = 478,
  [SMALL_STATE(32)] = 508,
  [SMALL_STATE(33)] = 538,
  [SMALL_STATE(34)] = 568,
  [SMALL_STATE(35)] = 597,
  [SMALL_STATE(36)] = 626,
  [SMALL_STATE(37)] = 655,
  [SMALL_STATE(38)] = 684,
  [SMALL_STATE(39)] = 713,
  [SMALL_STATE(40)] = 750,
  [SMALL_STATE(41)] = 776,
  [SMALL_STATE(42)] = 802,
  [SMALL_STATE(43)] = 828,
  [SMALL_STATE(44)] = 854,
  [SMALL_STATE(45)] = 887,
  [SMALL_STATE(46)] = 920,
  [SMALL_STATE(47)] = 937,
  [SMALL_STATE(48)] = 961,
  [SMALL_STATE(49)] = 985,
  [SMALL_STATE(50)] = 1009,
  [SMALL_STATE(51)] = 1033,
  [SMALL_STATE(52)] = 1057,
  [SMALL_STATE(53)] = 1081,
  [SMALL_STATE(54)] = 1098,
  [SMALL_STATE(55)] = 1115,
  [SMALL_STATE(56)] = 1129,
  [SMALL_STATE(57)] = 1145,
  [SMALL_STATE(58)] = 1159,
  [SMALL_STATE(59)] = 1175,
  [SMALL_STATE(60)] = 1193,
  [SMALL_STATE(61)] = 1209,
  [SMALL_STATE(62)] = 1225,
  [SMALL_STATE(63)] = 1241,
  [SMALL_STATE(64)] = 1257,
  [SMALL_STATE(65)] = 1268,
  [SMALL_STATE(66)] = 1279,
  [SMALL_STATE(67)] = 1296,
  [SMALL_STATE(68)] = 1311,
  [SMALL_STATE(69)] = 1328,
  [SMALL_STATE(70)] = 1339,
  [SMALL_STATE(71)] = 1350,
  [SMALL_STATE(72)] = 1361,
  [SMALL_STATE(73)] = 1372,
  [SMALL_STATE(74)] = 1383,
  [SMALL_STATE(75)] = 1398,
  [SMALL_STATE(76)] = 1409,
  [SMALL_STATE(77)] = 1420,
  [SMALL_STATE(78)] = 1431,
  [SMALL_STATE(79)] = 1439,
  [SMALL_STATE(80)] = 1455,
  [SMALL_STATE(81)] = 1471,
  [SMALL_STATE(82)] = 1487,
  [SMALL_STATE(83)] = 1495,
  [SMALL_STATE(84)] = 1511,
  [SMALL_STATE(85)] = 1527,
  [SMALL_STATE(86)] = 1535,
  [SMALL_STATE(87)] = 1543,
  [SMALL_STATE(88)] = 1551,
  [SMALL_STATE(89)] = 1561,
  [SMALL_STATE(90)] = 1569,
  [SMALL_STATE(91)] = 1577,
  [SMALL_STATE(92)] = 1585,
  [SMALL_STATE(93)] = 1601,
  [SMALL_STATE(94)] = 1609,
  [SMALL_STATE(95)] = 1625,
  [SMALL_STATE(96)] = 1638,
  [SMALL_STATE(97)] = 1651,
  [SMALL_STATE(98)] = 1664,
  [SMALL_STATE(99)] = 1677,
  [SMALL_STATE(100)] = 1690,
  [SMALL_STATE(101)] = 1703,
  [SMALL_STATE(102)] = 1713,
  [SMALL_STATE(103)] = 1723,
  [SMALL_STATE(104)] = 1733,
  [SMALL_STATE(105)] = 1743,
  [SMALL_STATE(106)] = 1753,
  [SMALL_STATE(107)] = 1763,
  [SMALL_STATE(108)] = 1773,
  [SMALL_STATE(109)] = 1783,
  [SMALL_STATE(110)] = 1790,
  [SMALL_STATE(111)] = 1797,
  [SMALL_STATE(112)] = 1802,
  [SMALL_STATE(113)] = 1807,
  [SMALL_STATE(114)] = 1814,
  [SMALL_STATE(115)] = 1821,
  [SMALL_STATE(116)] = 1828,
  [SMALL_STATE(117)] = 1833,
  [SMALL_STATE(118)] = 1840,
  [SMALL_STATE(119)] = 1847,
  [SMALL_STATE(120)] = 1854,
  [SMALL_STATE(121)] = 1861,
  [SMALL_STATE(122)] = 1868,
  [SMALL_STATE(123)] = 1875,
  [SMALL_STATE(124)] = 1879,
  [SMALL_STATE(125)] = 1883,
  [SMALL_STATE(126)] = 1887,
  [SMALL_STATE(127)] = 1891,
  [SMALL_STATE(128)] = 1895,
  [SMALL_STATE(129)] = 1899,
  [SMALL_STATE(130)] = 1903,
  [SMALL_STATE(131)] = 1907,
  [SMALL_STATE(132)] = 1911,
  [SMALL_STATE(133)] = 1915,
  [SMALL_STATE(134)] = 1919,
  [SMALL_STATE(135)] = 1923,
  [SMALL_STATE(136)] = 1927,
  [SMALL_STATE(137)] = 1931,
  [SMALL_STATE(138)] = 1935,
  [SMALL_STATE(139)] = 1939,
  [SMALL_STATE(140)] = 1943,
  [SMALL_STATE(141)] = 1947,
  [SMALL_STATE(142)] = 1951,
  [SMALL_STATE(143)] = 1955,
  [SMALL_STATE(144)] = 1959,
  [SMALL_STATE(145)] = 1963,
  [SMALL_STATE(146)] = 1967,
  [SMALL_STATE(147)] = 1971,
  [SMALL_STATE(148)] = 1975,
  [SMALL_STATE(149)] = 1979,
  [SMALL_STATE(150)] = 1983,
  [SMALL_STATE(151)] = 1987,
  [SMALL_STATE(152)] = 1991,
  [SMALL_STATE(153)] = 1995,
  [SMALL_STATE(154)] = 1999,
  [SMALL_STATE(155)] = 2003,
  [SMALL_STATE(156)] = 2007,
  [SMALL_STATE(157)] = 2011,
  [SMALL_STATE(158)] = 2015,
  [SMALL_STATE(159)] = 2019,
  [SMALL_STATE(160)] = 2023,
  [SMALL_STATE(161)] = 2027,
  [SMALL_STATE(162)] = 2031,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 4),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 5),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 5),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(113),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(114),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2), SHIFT_REPEAT(54),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2), SHIFT_REPEAT(55),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel_composition, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel_composition, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_composition, 3, .production_id = 4),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_split_composition_repeat1, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_composition, 4, .production_id = 7),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split_composition, 4, .production_id = 7),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_split_composition_repeat1, 2), SHIFT_REPEAT(3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_split_composition_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_composition, 4, .production_id = 8),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel_composition, 4),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel_composition, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 7),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 7),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 6),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 6),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 5),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 5),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 4),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_composition, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_composition, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 9),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_definition, 3, .production_id = 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 5),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 10),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(98),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(98),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(127),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 6),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_metadata, 4, .production_id = 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_abstraction, 9, .production_id = 11),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_abstraction, 8, .production_id = 11),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_abstraction, 7),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_declaration, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [371] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
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
