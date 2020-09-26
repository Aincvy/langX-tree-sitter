module.exports = grammar({
  name: 'langX',

  word: $ => $.IDENTIFIER,

  rules: {

    source_file: $ => repeat($.statement),
    statement: $ => choice (
      $.out_declar_stmt,
      $.con_ctl_stmt,
      $.simple_stmt,
      $.try_stmt
    ),

    out_declar_stmt: $ => choice(
      $.func_declar_stmt,
      $.class_declar_stmt,
      $.namespace_declar_stmt
    ),

    // function
    func_declar_stmt: $ => choice(
      seq($.func_name_types, $.KEY_FUNCTION, $.func_param_list, '{', $.block, '}') ,
    ) ,

    func_name_types: $ => choice(
      $.id_expr,
      seq($.BIT_NOT, $.id_expr),
      $.OPERATOR_X__
    ),

    func_param_list: $ => choice(
      $.EMPTY,
      seq('(' , $.func_param_types, ')' ),
    ),
    func_param_types: $ => choice(
      $.EMPTY,
      $.id_expr,
      seq($.func_param_types, ',' , $.id_expr),
    ),

    lambda_stmt: $ => '',

    call_statement: $ => seq(
      $.common_object_expr,
      '(',
      $.args_list,
      ')'
    ),

    args_list: $ => '',


    // class
    class_declar_stmt: $ => seq(
      $.class_name_prefix, $.id_expr, $.class_name_suffix, '{', $.class_body , '}'
    )  ,

    class_name_prefix: $ => choice(
      $.EMPTY,
      $.KEY_AUTO
    ),

    class_name_suffix: $ => choice(
      $.EMPTY,
      seq($.KEY_EXTEND, $.multiple_id_expr)
    ),

    class_body: $ => choice(
      $.var_declar_stmt,
      $.func_declar_stmt
    ),

    class_member_stmt: $ => seq(
      $.common_object_expr,
      '.',
      $.id_expr
    ),
    this_stmt: $ => seq(
      $.KEY_THIS,
      '.',
      $.this_stmt_factor
    ),
    this_stmt_factor: $ => choice(
      $.call_statement,
      $.class_member_stmt,
      $.id_expr
    ),
    static_member_stmt: $ => seq(
      $.id_expr,
      $.OP_SCOPE,
      $.id_expr
    ),

    con_ctl_stmt: $ => 'xx' ,


    // simple stmt
    simple_stmt: $ => seq($.simple_stmt_types, ';') ,
    simple_stmt_types: $ => choice(
      $.require_stmt,
      $.var_declar_stmt,
      $.self_inc_dec_stmt,
      $.call_statement,
      $.interrupt_stmt,
      $.restrict_stmt
    ),

    _element_var_declar_stmt: $ => choice(
      $.id_expr,                                    // single var
      seq($.id_expr, '[', $.int_expr, ']' ),       // array
      seq($.id_expr, '[', $.call_statement, ']' )  // array, size by call stmt
    ),
    var_declar_stmt: $ => choice(
      seq($._element_var_declar_stmt, ';'),
      seq($._element_var_declar_stmt, ',' , $.var_declar_stmt )
    ) ,

    require_stmt: $ => seq(
      $.require_operators,
      $.string_expr
    ),
    require_operators: $ => choice(
      $.KEY_REQUIRE,
      $.KEY_REQUIRE_ONCE,
      $.KEY_INCLUDE
    ),

    var_declar_stmt: $ => choice(
      seq(
        $.var_prefix,
        $.multiple_id_expr
      )

      // todo 声明赋值一起
    ),
    var_prefix: $ => choice(
      $.EMPTY,
      $.KEY_CONST,
      $.KEY_LOCAL
    ),

    self_inc_dec_stmt: $ => choice(
      seq($.self_inc_dec_operators, $.id_expr),
      seq($.id_expr, $.self_inc_dec_operators),
      seq($.self_inc_dec_stmt, ',' , $.self_inc_dec_stmt )
    ),
    self_inc_dec_operators: $ => choice(
      $.OP_INC,
      $.OP_DEC
    ),

    interrupt_stmt: $ => choice(
      $.KEY_BREAK,
      $.KEY_CONTINUE,
      $.KEY_RETURN,
      seq($.KEY_RETURN, $.assign_stmt_value)
    ),
    restrict_stmt: $ => $.KEY_RESTRICT,

    assign_stmt: $ => '',
    assign_stmt_value: $ => '',
    single_assign_stmt: $ => '',
    class_member_assign_stmt: $ => '',
    array_ele_assign_stmt: $ => '',

    arithmetic_stmt: $ => '',

    expr_delete: $ => seq($.KEY_DELETE, $.multiple_id_expr),
    expr_new: $ => seq(
      $.KEY_NEW,
      $.id_expr,
      '(',

      ')'
    ),

    // expr list or block | inner stmts.
    block: $ => choice(
        $.EMPTY,
        seq($.block, $.block_item)
    ),

    block_item: $ => choice(
      $.try_stmt,
      $.simple_stmt
    ),


    // try stmt.
    try_stmt: $ => $.KEY_TRY,

    // namespace stmt.
    namespace_declar_stmt: $ => seq(
      $.KEY_SET,
      $.KEY_PUBLIC,
      '=',
      $.id_expr,
      ';'
    ),

    // other stmt.
    multiple_id_expr: $ => choice(
      $.id_expr,
      seq($.multiple_id_expr, ',' , $.id_expr)
    ),

    // common statement ..
    id_expr: $ => $.IDENTIFIER ,
    int_expr: $ => $.XINTEGER,
    number_expr: $ => choice ( $.TDOUBLE, $.XINTEGER ),
    string_expr: $ => $.TSTRING,
    null_expr: $ => $.KEY_NULL,

    array_ele_stmt: $ => '',

    common_types_expr: $ => choice(
      $.number_expr,
      $.string_expr,
      $.null_expr,
      $.lambda_stmt
    ),

    common_values_expr: $ => choice(
      $.id_expr,
      $.array_ele_stmt,
      $.class_member_stmt,
      $.this_stmt,
      $.static_member_stmt
    ),

    common_result_of_call_expr: $ => choice(
      $.self_inc_dec_stmt,
      $.call_statement,
      $.arithmetic_stmt
    ),

    common_expr: $ => choice(
      $.common_types_expr,
      $.common_values_expr,
      $.common_result_of_call_expr
    ),

    common_number_expr: $ => choice(
      $.number_expr,
      $.common_values_expr,
      $.common_result_of_call_expr
    ),

    common_object_expr: $ => choice(
      $.common_values_expr,
      $.call_statement
    ),

    common_string_expr: $ => choice(
      $.string_expr,
      $.common_object_expr
    ),

    // terminate symbols
    IDENTIFIER: $ => /[$_a-zA-Z][$_a-zA-Z0-9]*/ ,
    TSTRING: $ => /\"(\\.|[^\\"\n])*\"/ ,
    XINTEGER: $ => /0|([1-9][0-9]*)/ ,
    TDOUBLE: $ => /(0|[1-9][0-9]*)\.[0-9]+/ ,
    OPERATOR_X__: $ => /operator([\+\-\*\/\.=]|<<|>>|\+\+|\-\-|\[\])/,

    // 空字符串， 什么都没有
    EMPTY: $ => '',

    // keywords
    KEY_FUNCTION: $ => '=>' ,
    KEY_DELETE: $ => 'delete',
    KEY_NEW: $ => 'new',
    KEY_THIS: $ => 'this',
    KEY_EXTEND: $ => 'extend',
    KEY_AUTO: $ => 'auto',
    KEY_NULL: $ => 'null',

    KEY_TRUE: $ => 'true',
    KEY_FALSE: $ => 'false',
    KEY_IF: $ => 'if',
    KEY_ELSE: $ => 'else',
    KEY_WHILE: $ => 'while',
    KEY_FOR: $ => 'for',
    KEY_SWITCH: $ => 'switch',
    KEY_CASE: $ => 'case',
    KEY_DEFAULT: $ => 'default',
    KEY_BREAK: $ => 'break',
    KEY_RETURN: $ => 'return',
    KEY_CONTINUE: $ => 'continue',

    KEY_LOCAL: $ => 'local',
    KEY_CONST: $ => 'const',
    KEY_RESTRICT: $ => 'restrict',
    KEY_SET: $ => 'set',
    KEY_PUBLIC: $ => 'public',
    KEY_REQUIRE: $ => 'require',
    KEY_REQUIRE_ONCE: $ => 'require_once',
    KEY_INCLUDE: $ => 'include',
    KEY_REF: $ => 'ref',

    KEY_IS: $ => 'is',
    KEY_TRY: $ => 'try',
    KEY_CATCH: $ => 'catch',


    // mathematical symbols
    OP_ADD: $ => '+' ,
    OP_SUB: $ => '-' ,
    OP_MUL: $ => '*' ,
    OP_DIV: $ => '/' ,
    OP_MOD: $ => '%' ,
    OP_ADD_EQ: $ => '+=',
    OP_SUB_EQ: $ => '-=',
    OP_MUL_EQ: $ => '*=',
    OP_DIV_EQ: $ => '/=',
    OP_MOD_EQ: $ => '%=',
    OP_LEFT_SHIFT: $ => '<<' ,
    OP_RIGHT_SHIFT: $ => '>>' ,
    OP_INC: $ => '++',
    OP_DEC: $ => '--',

    // bit operator
    BIT_AND: $ => '&',
    BIT_OR: $ => '|',
    BIT_XOR: $ => '^',
    BIT_NOT: $ => '~' ,


    // logic symbols
    OP_AND: $ => '&&',
    OP_OR: $ => '||',
    OP_NOT: $ => '!',
    OP_GT: $ => '>',
    OP_LT: $ => '<',
    OP_GE: $ => '>=',
    OP_LE: $ => '<=',

    // Other
    OP_DOT: $ => '.',
    OP_SCOPE: $ => '::',

  }
});
