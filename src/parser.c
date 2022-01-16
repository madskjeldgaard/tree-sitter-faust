#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 127
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 3
#define TOKEN_COUNT 45
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
  anon_sym_COLON = 8,
  sym_one_sample_delay_operator = 9,
  anon_sym_PLUS = 10,
  anon_sym_DASH = 11,
  anon_sym_STAR = 12,
  anon_sym_SLASH = 13,
  anon_sym_PERCENT = 14,
  anon_sym_CARET = 15,
  anon_sym_PIPE = 16,
  anon_sym_AMP = 17,
  anon_sym_xor = 18,
  anon_sym_LT_LT = 19,
  anon_sym_GT_GT = 20,
  anon_sym_LT = 21,
  anon_sym_LT_EQ = 22,
  anon_sym_GT = 23,
  anon_sym_GT_EQ = 24,
  anon_sym_EQ_EQ = 25,
  anon_sym_BANG_EQ = 26,
  anon_sym_AT = 27,
  sym_integer = 28,
  sym_exponent = 29,
  sym__digit = 30,
  anon_sym_import_LPAREN = 31,
  anon_sym_declare = 32,
  anon_sym_singleprecision = 33,
  anon_sym_doubleprecision = 34,
  anon_sym_quadprecision = 35,
  anon_sym_fixedpointprecision = 36,
  anon_sym_TILDE = 37,
  anon_sym_LT_COLON = 38,
  anon_sym_COLON_GT = 39,
  anon_sym_DQUOTE = 40,
  aux_sym_string_token1 = 41,
  sym_escape_sequence = 42,
  sym_identifier = 43,
  sym_comment = 44,
  sym_source_file = 45,
  sym__statement = 46,
  sym_definition = 47,
  sym_simple_definition = 48,
  sym_function_definition = 49,
  sym_lambda_abstraction = 50,
  sym_expression = 51,
  sym_binary_operation = 52,
  sym_core = 53,
  sym_infix = 54,
  sym_prefix = 55,
  sym_partial = 56,
  sym_one_sample_delay = 57,
  sym_binary_operator = 58,
  sym_object = 59,
  sym_primitive = 60,
  sym_float = 61,
  sym_file_import = 62,
  sym_metadata_declaration = 63,
  sym_global_metadata = 64,
  sym_function_metadata = 65,
  sym_binary_composition = 66,
  sym_recursive_composition = 67,
  sym_sequential_composition = 68,
  sym_split_composition = 69,
  sym_merge_composition = 70,
  sym_string = 71,
  aux_sym_source_file_repeat1 = 72,
  aux_sym_function_definition_repeat1 = 73,
  aux_sym_one_sample_delay_repeat1 = 74,
  aux_sym_string_repeat1 = 75,
  alias_sym_function_name = 76,
  alias_sym_metadata_key = 77,
  alias_sym_parameter = 78,
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
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_one_sample_delay_repeat1] = "one_sample_delay_repeat1",
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
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_one_sample_delay_repeat1] = aux_sym_one_sample_delay_repeat1,
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
      if (eof) ADVANCE(95);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '%') ADVANCE(112);
      if (lookahead == '&') ADVANCE(115);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(99);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == '=') ADVANCE(97);
      if (lookahead == '>') ADVANCE(122);
      if (lookahead == '@') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '^') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'q') ADVANCE(81);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 'x') ADVANCE(55);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '~') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '\r') ADVANCE(145);
      if (lookahead == 'u') ADVANCE(84);
      if (lookahead == 'x') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(147);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '%') ADVANCE(112);
      if (lookahead == '&') ADVANCE(115);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == ',') ADVANCE(99);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(122);
      if (lookahead == '@') ADVANCE(126);
      if (lookahead == '^') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'x') ADVANCE(55);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '~') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '%') ADVANCE(112);
      if (lookahead == '&') ADVANCE(115);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '<') ADVANCE(120);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(122);
      if (lookahead == '@') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '^') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'x') ADVANCE(55);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '%') ADVANCE(112);
      if (lookahead == '&') ADVANCE(115);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '<') ADVANCE(120);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(122);
      if (lookahead == '@') ADVANCE(126);
      if (lookahead == '^') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'x') ADVANCE(55);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(161);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(130);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(163);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(125);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(58);
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
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(50);
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
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(71);
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
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(38);
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
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 81:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 83:
      if (lookahead == 'x') ADVANCE(27);
      END_STATE();
    case 84:
      if (lookahead == '{') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 85:
      if (lookahead == '}') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 86:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 92:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(161);
      END_STATE();
    case 93:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(163);
      if (lookahead == '\r') ADVANCE(164);
      END_STATE();
    case 94:
      if (eof) ADVANCE(95);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(94)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(161);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_one_sample_delay_operator);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == '=') ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == '=') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(123);
      if (lookahead == '>') ADVANCE(118);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_exponent);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__digit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_import_LPAREN);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(161);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_singleprecision);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_doubleprecision);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_quadprecision);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_fixedpointprecision);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(141);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(144);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(161);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(161);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(161);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(161);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(161);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(161);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(161);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(161);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(161);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(161);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(161);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(161);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(93);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 94},
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
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
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
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 94},
  [28] = {.lex_state = 94},
  [29] = {.lex_state = 0},
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
  [53] = {.lex_state = 94},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 94},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 94},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 94},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 94},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 94},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 94},
  [113] = {.lex_state = 94},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 94},
  [116] = {.lex_state = 94},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 94},
  [119] = {.lex_state = 94},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 94},
  [122] = {.lex_state = 94},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 94},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 6},
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
    [sym_source_file] = STATE(107),
    [sym__statement] = STATE(28),
    [sym_definition] = STATE(85),
    [sym_simple_definition] = STATE(104),
    [sym_function_definition] = STATE(104),
    [sym_file_import] = STATE(85),
    [sym_metadata_declaration] = STATE(85),
    [sym_global_metadata] = STATE(102),
    [sym_function_metadata] = STATE(102),
    [aux_sym_source_file_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_import_LPAREN] = ACTIONS(5),
    [anon_sym_declare] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [2] = {
    [sym_lambda_abstraction] = STATE(88),
    [sym_expression] = STATE(51),
    [sym_binary_operation] = STATE(44),
    [sym_core] = STATE(48),
    [sym_infix] = STATE(48),
    [sym_prefix] = STATE(48),
    [sym_partial] = STATE(48),
    [sym_one_sample_delay] = STATE(44),
    [sym_binary_operator] = STATE(87),
    [sym_object] = STATE(17),
    [sym_primitive] = STATE(24),
    [sym_float] = STATE(20),
    [sym_binary_composition] = STATE(44),
    [sym_recursive_composition] = STATE(45),
    [sym_sequential_composition] = STATE(45),
    [sym_split_composition] = STATE(45),
    [sym_merge_composition] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(21),
    [sym_integer] = ACTIONS(25),
    [sym_exponent] = ACTIONS(25),
    [sym__digit] = ACTIONS(27),
  },
  [3] = {
    [sym_expression] = STATE(54),
    [sym_binary_operation] = STATE(44),
    [sym_core] = STATE(48),
    [sym_infix] = STATE(48),
    [sym_prefix] = STATE(48),
    [sym_partial] = STATE(48),
    [sym_one_sample_delay] = STATE(44),
    [sym_binary_operator] = STATE(87),
    [sym_object] = STATE(14),
    [sym_primitive] = STATE(24),
    [sym_float] = STATE(20),
    [sym_binary_composition] = STATE(44),
    [sym_recursive_composition] = STATE(45),
    [sym_sequential_composition] = STATE(45),
    [sym_split_composition] = STATE(45),
    [sym_merge_composition] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(21),
    [sym_integer] = ACTIONS(25),
    [sym_exponent] = ACTIONS(25),
    [sym__digit] = ACTIONS(27),
  },
  [4] = {
    [sym_expression] = STATE(50),
    [sym_binary_operation] = STATE(44),
    [sym_core] = STATE(48),
    [sym_infix] = STATE(48),
    [sym_prefix] = STATE(48),
    [sym_partial] = STATE(48),
    [sym_one_sample_delay] = STATE(44),
    [sym_binary_operator] = STATE(87),
    [sym_object] = STATE(14),
    [sym_primitive] = STATE(24),
    [sym_float] = STATE(20),
    [sym_binary_composition] = STATE(44),
    [sym_recursive_composition] = STATE(45),
    [sym_sequential_composition] = STATE(45),
    [sym_split_composition] = STATE(45),
    [sym_merge_composition] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(21),
    [sym_integer] = ACTIONS(25),
    [sym_exponent] = ACTIONS(25),
    [sym__digit] = ACTIONS(27),
  },
  [5] = {
    [sym_expression] = STATE(56),
    [sym_binary_operation] = STATE(44),
    [sym_core] = STATE(48),
    [sym_infix] = STATE(48),
    [sym_prefix] = STATE(48),
    [sym_partial] = STATE(48),
    [sym_one_sample_delay] = STATE(44),
    [sym_binary_operator] = STATE(87),
    [sym_object] = STATE(14),
    [sym_primitive] = STATE(24),
    [sym_float] = STATE(20),
    [sym_binary_composition] = STATE(44),
    [sym_recursive_composition] = STATE(45),
    [sym_sequential_composition] = STATE(45),
    [sym_split_composition] = STATE(45),
    [sym_merge_composition] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(21),
    [sym_integer] = ACTIONS(25),
    [sym_exponent] = ACTIONS(25),
    [sym__digit] = ACTIONS(27),
  },
  [6] = {
    [sym_expression] = STATE(57),
    [sym_binary_operation] = STATE(44),
    [sym_core] = STATE(48),
    [sym_infix] = STATE(48),
    [sym_prefix] = STATE(48),
    [sym_partial] = STATE(48),
    [sym_one_sample_delay] = STATE(44),
    [sym_binary_operator] = STATE(87),
    [sym_object] = STATE(14),
    [sym_primitive] = STATE(24),
    [sym_float] = STATE(20),
    [sym_binary_composition] = STATE(44),
    [sym_recursive_composition] = STATE(45),
    [sym_sequential_composition] = STATE(45),
    [sym_split_composition] = STATE(45),
    [sym_merge_composition] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(21),
    [sym_integer] = ACTIONS(25),
    [sym_exponent] = ACTIONS(25),
    [sym__digit] = ACTIONS(27),
  },
  [7] = {
    [sym_expression] = STATE(52),
    [sym_binary_operation] = STATE(44),
    [sym_core] = STATE(48),
    [sym_infix] = STATE(48),
    [sym_prefix] = STATE(48),
    [sym_partial] = STATE(48),
    [sym_one_sample_delay] = STATE(44),
    [sym_binary_operator] = STATE(87),
    [sym_object] = STATE(14),
    [sym_primitive] = STATE(24),
    [sym_float] = STATE(20),
    [sym_binary_composition] = STATE(44),
    [sym_recursive_composition] = STATE(45),
    [sym_sequential_composition] = STATE(45),
    [sym_split_composition] = STATE(45),
    [sym_merge_composition] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(21),
    [sym_integer] = ACTIONS(25),
    [sym_exponent] = ACTIONS(25),
    [sym__digit] = ACTIONS(27),
  },
  [8] = {
    [sym_expression] = STATE(46),
    [sym_binary_operation] = STATE(44),
    [sym_core] = STATE(48),
    [sym_infix] = STATE(48),
    [sym_prefix] = STATE(48),
    [sym_partial] = STATE(48),
    [sym_one_sample_delay] = STATE(44),
    [sym_binary_operator] = STATE(87),
    [sym_object] = STATE(14),
    [sym_primitive] = STATE(24),
    [sym_float] = STATE(20),
    [sym_binary_composition] = STATE(44),
    [sym_recursive_composition] = STATE(45),
    [sym_sequential_composition] = STATE(45),
    [sym_split_composition] = STATE(45),
    [sym_merge_composition] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(21),
    [sym_integer] = ACTIONS(25),
    [sym_exponent] = ACTIONS(25),
    [sym__digit] = ACTIONS(27),
  },
  [9] = {
    [sym_expression] = STATE(43),
    [sym_binary_operation] = STATE(44),
    [sym_core] = STATE(48),
    [sym_infix] = STATE(48),
    [sym_prefix] = STATE(48),
    [sym_partial] = STATE(48),
    [sym_one_sample_delay] = STATE(44),
    [sym_binary_operator] = STATE(87),
    [sym_object] = STATE(14),
    [sym_primitive] = STATE(24),
    [sym_float] = STATE(20),
    [sym_binary_composition] = STATE(44),
    [sym_recursive_composition] = STATE(45),
    [sym_sequential_composition] = STATE(45),
    [sym_split_composition] = STATE(45),
    [sym_merge_composition] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(21),
    [sym_integer] = ACTIONS(25),
    [sym_exponent] = ACTIONS(25),
    [sym__digit] = ACTIONS(27),
  },
  [10] = {
    [sym_expression] = STATE(42),
    [sym_binary_operation] = STATE(44),
    [sym_core] = STATE(48),
    [sym_infix] = STATE(48),
    [sym_prefix] = STATE(48),
    [sym_partial] = STATE(48),
    [sym_one_sample_delay] = STATE(44),
    [sym_binary_operator] = STATE(87),
    [sym_object] = STATE(14),
    [sym_primitive] = STATE(24),
    [sym_float] = STATE(20),
    [sym_binary_composition] = STATE(44),
    [sym_recursive_composition] = STATE(45),
    [sym_sequential_composition] = STATE(45),
    [sym_split_composition] = STATE(45),
    [sym_merge_composition] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(21),
    [sym_integer] = ACTIONS(25),
    [sym_exponent] = ACTIONS(25),
    [sym__digit] = ACTIONS(27),
  },
  [11] = {
    [sym_expression] = STATE(41),
    [sym_binary_operation] = STATE(44),
    [sym_core] = STATE(48),
    [sym_infix] = STATE(48),
    [sym_prefix] = STATE(48),
    [sym_partial] = STATE(48),
    [sym_one_sample_delay] = STATE(44),
    [sym_binary_operator] = STATE(87),
    [sym_object] = STATE(14),
    [sym_primitive] = STATE(24),
    [sym_float] = STATE(20),
    [sym_binary_composition] = STATE(44),
    [sym_recursive_composition] = STATE(45),
    [sym_sequential_composition] = STATE(45),
    [sym_split_composition] = STATE(45),
    [sym_merge_composition] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(21),
    [sym_integer] = ACTIONS(25),
    [sym_exponent] = ACTIONS(25),
    [sym__digit] = ACTIONS(27),
  },
  [12] = {
    [sym_expression] = STATE(55),
    [sym_binary_operation] = STATE(44),
    [sym_core] = STATE(48),
    [sym_infix] = STATE(48),
    [sym_prefix] = STATE(48),
    [sym_partial] = STATE(48),
    [sym_one_sample_delay] = STATE(44),
    [sym_binary_operator] = STATE(87),
    [sym_object] = STATE(14),
    [sym_primitive] = STATE(24),
    [sym_float] = STATE(20),
    [sym_binary_composition] = STATE(44),
    [sym_recursive_composition] = STATE(45),
    [sym_sequential_composition] = STATE(45),
    [sym_split_composition] = STATE(45),
    [sym_merge_composition] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(21),
    [sym_integer] = ACTIONS(25),
    [sym_exponent] = ACTIONS(25),
    [sym__digit] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(33), 1,
      sym_exponent,
    ACTIONS(35), 1,
      sym__digit,
    ACTIONS(31), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 23,
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
  [37] = 8,
    ACTIONS(39), 1,
      anon_sym_COMMA,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      sym_one_sample_delay_operator,
    STATE(34), 1,
      sym_binary_operator,
    STATE(37), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(21), 16,
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
  [82] = 4,
    ACTIONS(49), 1,
      sym_exponent,
    ACTIONS(51), 1,
      sym__digit,
    ACTIONS(47), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 23,
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
  [119] = 3,
    ACTIONS(49), 1,
      sym_exponent,
    ACTIONS(47), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 23,
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
  [153] = 8,
    ACTIONS(39), 1,
      anon_sym_COMMA,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      sym_one_sample_delay_operator,
    STATE(34), 1,
      sym_binary_operator,
    STATE(37), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 4,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(21), 16,
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
  [197] = 3,
    ACTIONS(57), 1,
      sym_exponent,
    ACTIONS(55), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 23,
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
  [231] = 3,
    ACTIONS(33), 1,
      sym_exponent,
    ACTIONS(31), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 23,
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
  [265] = 2,
    ACTIONS(61), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 23,
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
  [296] = 2,
    ACTIONS(31), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 23,
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
  [327] = 2,
    ACTIONS(65), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 23,
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
  [358] = 2,
    ACTIONS(55), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 23,
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
  [389] = 2,
    ACTIONS(69), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 23,
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
  [420] = 3,
    STATE(38), 1,
      sym_binary_operator,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 16,
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
  [446] = 3,
    STATE(40), 1,
      sym_binary_operator,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 16,
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
  [472] = 9,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      anon_sym_import_LPAREN,
    ACTIONS(76), 1,
      anon_sym_declare,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(82), 1,
      sym_comment,
    STATE(27), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(102), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(104), 2,
      sym_simple_definition,
      sym_function_definition,
    STATE(85), 3,
      sym_definition,
      sym_file_import,
      sym_metadata_declaration,
  [505] = 9,
    ACTIONS(5), 1,
      anon_sym_import_LPAREN,
    ACTIONS(7), 1,
      anon_sym_declare,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      sym_comment,
    STATE(27), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(102), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(104), 2,
      sym_simple_definition,
      sym_function_definition,
    STATE(85), 3,
      sym_definition,
      sym_file_import,
      sym_metadata_declaration,
  [538] = 2,
    ACTIONS(91), 4,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym__digit,
    ACTIONS(89), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      sym_integer,
      sym_exponent,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [556] = 7,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym__digit,
    STATE(20), 1,
      sym_float,
    STATE(24), 1,
      sym_primitive,
    STATE(117), 1,
      sym_object,
    ACTIONS(25), 2,
      sym_integer,
      sym_exponent,
    ACTIONS(93), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [580] = 7,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym__digit,
    STATE(20), 1,
      sym_float,
    STATE(24), 1,
      sym_primitive,
    STATE(97), 1,
      sym_object,
    ACTIONS(25), 2,
      sym_integer,
      sym_exponent,
    ACTIONS(93), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [604] = 7,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym__digit,
    STATE(20), 1,
      sym_float,
    STATE(24), 1,
      sym_primitive,
    STATE(70), 1,
      sym_object,
    ACTIONS(25), 2,
      sym_integer,
      sym_exponent,
    ACTIONS(93), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [628] = 7,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(101), 1,
      sym__digit,
    STATE(112), 1,
      sym_float,
    STATE(113), 1,
      sym_primitive,
    STATE(115), 1,
      sym_object,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(99), 2,
      sym_integer,
      sym_exponent,
  [652] = 7,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym__digit,
    STATE(20), 1,
      sym_float,
    STATE(24), 1,
      sym_primitive,
    STATE(49), 1,
      sym_object,
    ACTIONS(25), 2,
      sym_integer,
      sym_exponent,
    ACTIONS(93), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [676] = 7,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym__digit,
    STATE(20), 1,
      sym_float,
    STATE(24), 1,
      sym_primitive,
    STATE(99), 1,
      sym_object,
    ACTIONS(25), 2,
      sym_integer,
      sym_exponent,
    ACTIONS(93), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [700] = 4,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(107), 1,
      sym_one_sample_delay_operator,
    STATE(36), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(103), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [717] = 4,
    ACTIONS(112), 1,
      anon_sym_COLON,
    ACTIONS(114), 1,
      sym_one_sample_delay_operator,
    STATE(36), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(110), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [734] = 2,
    ACTIONS(118), 1,
      anon_sym_COLON,
    ACTIONS(116), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [745] = 2,
    ACTIONS(122), 1,
      anon_sym_COLON,
    ACTIONS(120), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [756] = 2,
    ACTIONS(126), 1,
      anon_sym_COLON,
    ACTIONS(124), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [767] = 5,
    ACTIONS(130), 1,
      anon_sym_COLON,
    ACTIONS(132), 1,
      anon_sym_TILDE,
    ACTIONS(134), 1,
      anon_sym_LT_COLON,
    ACTIONS(136), 1,
      anon_sym_COLON_GT,
    ACTIONS(128), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [784] = 5,
    ACTIONS(130), 1,
      anon_sym_COLON,
    ACTIONS(132), 1,
      anon_sym_TILDE,
    ACTIONS(134), 1,
      anon_sym_LT_COLON,
    ACTIONS(136), 1,
      anon_sym_COLON_GT,
    ACTIONS(138), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [801] = 2,
    ACTIONS(142), 1,
      anon_sym_COLON,
    ACTIONS(140), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [812] = 2,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(37), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [823] = 2,
    ACTIONS(146), 1,
      anon_sym_COLON,
    ACTIONS(144), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [834] = 3,
    ACTIONS(130), 1,
      anon_sym_COLON,
    ACTIONS(132), 1,
      anon_sym_TILDE,
    ACTIONS(148), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [847] = 2,
    ACTIONS(152), 1,
      anon_sym_COLON,
    ACTIONS(150), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [858] = 2,
    ACTIONS(156), 1,
      anon_sym_COLON,
    ACTIONS(154), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [869] = 2,
    ACTIONS(160), 1,
      anon_sym_COLON,
    ACTIONS(158), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [880] = 5,
    ACTIONS(130), 1,
      anon_sym_COLON,
    ACTIONS(132), 1,
      anon_sym_TILDE,
    ACTIONS(134), 1,
      anon_sym_LT_COLON,
    ACTIONS(136), 1,
      anon_sym_COLON_GT,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
  [896] = 5,
    ACTIONS(130), 1,
      anon_sym_COLON,
    ACTIONS(132), 1,
      anon_sym_TILDE,
    ACTIONS(134), 1,
      anon_sym_LT_COLON,
    ACTIONS(136), 1,
      anon_sym_COLON_GT,
    ACTIONS(164), 1,
      anon_sym_SEMI,
  [912] = 5,
    ACTIONS(130), 1,
      anon_sym_COLON,
    ACTIONS(132), 1,
      anon_sym_TILDE,
    ACTIONS(134), 1,
      anon_sym_LT_COLON,
    ACTIONS(136), 1,
      anon_sym_COLON_GT,
    ACTIONS(166), 1,
      anon_sym_SEMI,
  [928] = 2,
    ACTIONS(170), 2,
      anon_sym_declare,
      sym_identifier,
    ACTIONS(168), 3,
      ts_builtin_sym_end,
      anon_sym_import_LPAREN,
      sym_comment,
  [938] = 5,
    ACTIONS(130), 1,
      anon_sym_COLON,
    ACTIONS(132), 1,
      anon_sym_TILDE,
    ACTIONS(134), 1,
      anon_sym_LT_COLON,
    ACTIONS(136), 1,
      anon_sym_COLON_GT,
    ACTIONS(172), 1,
      anon_sym_SEMI,
  [954] = 5,
    ACTIONS(130), 1,
      anon_sym_COLON,
    ACTIONS(132), 1,
      anon_sym_TILDE,
    ACTIONS(134), 1,
      anon_sym_LT_COLON,
    ACTIONS(136), 1,
      anon_sym_COLON_GT,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
  [970] = 5,
    ACTIONS(130), 1,
      anon_sym_COLON,
    ACTIONS(132), 1,
      anon_sym_TILDE,
    ACTIONS(134), 1,
      anon_sym_LT_COLON,
    ACTIONS(136), 1,
      anon_sym_COLON_GT,
    ACTIONS(176), 1,
      anon_sym_SEMI,
  [986] = 5,
    ACTIONS(130), 1,
      anon_sym_COLON,
    ACTIONS(132), 1,
      anon_sym_TILDE,
    ACTIONS(134), 1,
      anon_sym_LT_COLON,
    ACTIONS(136), 1,
      anon_sym_COLON_GT,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
  [1002] = 4,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      aux_sym_string_token1,
    ACTIONS(184), 1,
      sym_escape_sequence,
    STATE(60), 1,
      aux_sym_string_repeat1,
  [1015] = 4,
    ACTIONS(186), 1,
      anon_sym_DQUOTE,
    ACTIONS(188), 1,
      aux_sym_string_token1,
    ACTIONS(190), 1,
      sym_escape_sequence,
    STATE(58), 1,
      aux_sym_string_repeat1,
  [1028] = 4,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      aux_sym_string_token1,
    ACTIONS(197), 1,
      sym_escape_sequence,
    STATE(60), 1,
      aux_sym_string_repeat1,
  [1041] = 3,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_function_definition_repeat1,
  [1051] = 3,
    ACTIONS(45), 1,
      anon_sym_COLON,
    ACTIONS(204), 1,
      sym_exponent,
    ACTIONS(206), 1,
      sym__digit,
  [1061] = 3,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(210), 1,
      sym__digit,
  [1071] = 3,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_function_definition_repeat1,
  [1081] = 3,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_function_definition_repeat1,
  [1091] = 3,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    ACTIONS(221), 1,
      sym_identifier,
    STATE(92), 1,
      sym_string,
  [1101] = 3,
    ACTIONS(29), 1,
      anon_sym_COLON,
    ACTIONS(223), 1,
      sym_exponent,
    ACTIONS(225), 1,
      sym__digit,
  [1111] = 3,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_function_definition_repeat1,
  [1121] = 3,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_function_definition_repeat1,
  [1131] = 2,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
  [1138] = 2,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    ACTIONS(237), 1,
      sym_identifier,
  [1145] = 2,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(210), 1,
      sym__digit,
  [1152] = 2,
    ACTIONS(45), 1,
      anon_sym_COLON,
    ACTIONS(204), 1,
      sym_exponent,
  [1159] = 2,
    ACTIONS(239), 1,
      anon_sym_EQ,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
  [1166] = 1,
    ACTIONS(243), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1171] = 2,
    ACTIONS(245), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      sym__digit,
  [1178] = 1,
    ACTIONS(249), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1183] = 2,
    ACTIONS(29), 1,
      anon_sym_COLON,
    ACTIONS(223), 1,
      sym_exponent,
  [1190] = 2,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(253), 1,
      sym_identifier,
  [1197] = 2,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      sym_string,
  [1204] = 1,
    ACTIONS(255), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1209] = 2,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    STATE(114), 1,
      sym_string,
  [1216] = 2,
    ACTIONS(53), 1,
      anon_sym_COLON,
    ACTIONS(257), 1,
      sym_exponent,
  [1223] = 1,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
  [1227] = 1,
    ACTIONS(261), 1,
      anon_sym_SEMI,
  [1231] = 1,
    ACTIONS(263), 1,
      anon_sym_DOT,
  [1235] = 1,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
  [1239] = 1,
    ACTIONS(267), 1,
      anon_sym_SEMI,
  [1243] = 1,
    ACTIONS(269), 1,
      anon_sym_DOT,
  [1247] = 1,
    ACTIONS(271), 1,
      sym__digit,
  [1251] = 1,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
  [1255] = 1,
    ACTIONS(275), 1,
      anon_sym_SEMI,
  [1259] = 1,
    ACTIONS(277), 1,
      anon_sym_COLON,
  [1263] = 1,
    ACTIONS(279), 1,
      anon_sym_DOT,
  [1267] = 1,
    ACTIONS(281), 1,
      anon_sym_DOT,
  [1271] = 1,
    ACTIONS(283), 1,
      anon_sym_SEMI,
  [1275] = 1,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
  [1279] = 1,
    ACTIONS(287), 1,
      anon_sym_EQ,
  [1283] = 1,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
  [1287] = 1,
    ACTIONS(291), 1,
      anon_sym_EQ,
  [1291] = 1,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
  [1295] = 1,
    ACTIONS(295), 1,
      anon_sym_SEMI,
  [1299] = 1,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
  [1303] = 1,
    ACTIONS(299), 1,
      anon_sym_SEMI,
  [1307] = 1,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
  [1311] = 1,
    ACTIONS(303), 1,
      anon_sym_SEMI,
  [1315] = 1,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
  [1319] = 1,
    ACTIONS(307), 1,
      anon_sym_EQ,
  [1323] = 1,
    ACTIONS(309), 1,
      anon_sym_SEMI,
  [1327] = 1,
    ACTIONS(311), 1,
      sym_identifier,
  [1331] = 1,
    ACTIONS(313), 1,
      anon_sym_SEMI,
  [1335] = 1,
    ACTIONS(59), 1,
      anon_sym_COLON,
  [1339] = 1,
    ACTIONS(67), 1,
      anon_sym_COLON,
  [1343] = 1,
    ACTIONS(315), 1,
      anon_sym_SEMI,
  [1347] = 1,
    ACTIONS(317), 1,
      anon_sym_COLON,
  [1351] = 1,
    ACTIONS(29), 1,
      anon_sym_COLON,
  [1355] = 1,
    ACTIONS(319), 1,
      anon_sym_COMMA,
  [1359] = 1,
    ACTIONS(51), 1,
      sym__digit,
  [1363] = 1,
    ACTIONS(53), 1,
      anon_sym_COLON,
  [1367] = 1,
    ACTIONS(321), 1,
      anon_sym_DOT,
  [1371] = 1,
    ACTIONS(63), 1,
      anon_sym_COLON,
  [1375] = 1,
    ACTIONS(323), 1,
      sym__digit,
  [1379] = 1,
    ACTIONS(325), 1,
      anon_sym_DOT,
  [1383] = 1,
    ACTIONS(206), 1,
      sym__digit,
  [1387] = 1,
    ACTIONS(327), 1,
      anon_sym_DOT,
  [1391] = 1,
    ACTIONS(329), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 37,
  [SMALL_STATE(15)] = 82,
  [SMALL_STATE(16)] = 119,
  [SMALL_STATE(17)] = 153,
  [SMALL_STATE(18)] = 197,
  [SMALL_STATE(19)] = 231,
  [SMALL_STATE(20)] = 265,
  [SMALL_STATE(21)] = 296,
  [SMALL_STATE(22)] = 327,
  [SMALL_STATE(23)] = 358,
  [SMALL_STATE(24)] = 389,
  [SMALL_STATE(25)] = 420,
  [SMALL_STATE(26)] = 446,
  [SMALL_STATE(27)] = 472,
  [SMALL_STATE(28)] = 505,
  [SMALL_STATE(29)] = 538,
  [SMALL_STATE(30)] = 556,
  [SMALL_STATE(31)] = 580,
  [SMALL_STATE(32)] = 604,
  [SMALL_STATE(33)] = 628,
  [SMALL_STATE(34)] = 652,
  [SMALL_STATE(35)] = 676,
  [SMALL_STATE(36)] = 700,
  [SMALL_STATE(37)] = 717,
  [SMALL_STATE(38)] = 734,
  [SMALL_STATE(39)] = 745,
  [SMALL_STATE(40)] = 756,
  [SMALL_STATE(41)] = 767,
  [SMALL_STATE(42)] = 784,
  [SMALL_STATE(43)] = 801,
  [SMALL_STATE(44)] = 812,
  [SMALL_STATE(45)] = 823,
  [SMALL_STATE(46)] = 834,
  [SMALL_STATE(47)] = 847,
  [SMALL_STATE(48)] = 858,
  [SMALL_STATE(49)] = 869,
  [SMALL_STATE(50)] = 880,
  [SMALL_STATE(51)] = 896,
  [SMALL_STATE(52)] = 912,
  [SMALL_STATE(53)] = 928,
  [SMALL_STATE(54)] = 938,
  [SMALL_STATE(55)] = 954,
  [SMALL_STATE(56)] = 970,
  [SMALL_STATE(57)] = 986,
  [SMALL_STATE(58)] = 1002,
  [SMALL_STATE(59)] = 1015,
  [SMALL_STATE(60)] = 1028,
  [SMALL_STATE(61)] = 1041,
  [SMALL_STATE(62)] = 1051,
  [SMALL_STATE(63)] = 1061,
  [SMALL_STATE(64)] = 1071,
  [SMALL_STATE(65)] = 1081,
  [SMALL_STATE(66)] = 1091,
  [SMALL_STATE(67)] = 1101,
  [SMALL_STATE(68)] = 1111,
  [SMALL_STATE(69)] = 1121,
  [SMALL_STATE(70)] = 1131,
  [SMALL_STATE(71)] = 1138,
  [SMALL_STATE(72)] = 1145,
  [SMALL_STATE(73)] = 1152,
  [SMALL_STATE(74)] = 1159,
  [SMALL_STATE(75)] = 1166,
  [SMALL_STATE(76)] = 1171,
  [SMALL_STATE(77)] = 1178,
  [SMALL_STATE(78)] = 1183,
  [SMALL_STATE(79)] = 1190,
  [SMALL_STATE(80)] = 1197,
  [SMALL_STATE(81)] = 1204,
  [SMALL_STATE(82)] = 1209,
  [SMALL_STATE(83)] = 1216,
  [SMALL_STATE(84)] = 1223,
  [SMALL_STATE(85)] = 1227,
  [SMALL_STATE(86)] = 1231,
  [SMALL_STATE(87)] = 1235,
  [SMALL_STATE(88)] = 1239,
  [SMALL_STATE(89)] = 1243,
  [SMALL_STATE(90)] = 1247,
  [SMALL_STATE(91)] = 1251,
  [SMALL_STATE(92)] = 1255,
  [SMALL_STATE(93)] = 1259,
  [SMALL_STATE(94)] = 1263,
  [SMALL_STATE(95)] = 1267,
  [SMALL_STATE(96)] = 1271,
  [SMALL_STATE(97)] = 1275,
  [SMALL_STATE(98)] = 1279,
  [SMALL_STATE(99)] = 1283,
  [SMALL_STATE(100)] = 1287,
  [SMALL_STATE(101)] = 1291,
  [SMALL_STATE(102)] = 1295,
  [SMALL_STATE(103)] = 1299,
  [SMALL_STATE(104)] = 1303,
  [SMALL_STATE(105)] = 1307,
  [SMALL_STATE(106)] = 1311,
  [SMALL_STATE(107)] = 1315,
  [SMALL_STATE(108)] = 1319,
  [SMALL_STATE(109)] = 1323,
  [SMALL_STATE(110)] = 1327,
  [SMALL_STATE(111)] = 1331,
  [SMALL_STATE(112)] = 1335,
  [SMALL_STATE(113)] = 1339,
  [SMALL_STATE(114)] = 1343,
  [SMALL_STATE(115)] = 1347,
  [SMALL_STATE(116)] = 1351,
  [SMALL_STATE(117)] = 1355,
  [SMALL_STATE(118)] = 1359,
  [SMALL_STATE(119)] = 1363,
  [SMALL_STATE(120)] = 1367,
  [SMALL_STATE(121)] = 1371,
  [SMALL_STATE(122)] = 1375,
  [SMALL_STATE(123)] = 1379,
  [SMALL_STATE(124)] = 1383,
  [SMALL_STATE(125)] = 1387,
  [SMALL_STATE(126)] = 1391,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 4),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 4),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 5),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2), SHIFT_REPEAT(36),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 5),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 5),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 4),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 7),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 7),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_composition, 3, .production_id = 4),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_composition, 3, .production_id = 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_composition, 3, .production_id = 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_composition, 3, .production_id = 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_composition, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_composition, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_composition, 3, .production_id = 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 6),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 6),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_definition, 3, .production_id = 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 7),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 8),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(60),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(60),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(126),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 6),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_declaration, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_abstraction, 7),
  [305] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_abstraction, 8, .production_id = 9),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_abstraction, 9, .production_id = 9),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_metadata, 4, .production_id = 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
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
