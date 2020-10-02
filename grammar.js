module.exports = grammar({
  name: 'langX',

  word: $ => $._IDENTIFIER,
  conflicts: $ => [
    [$.common_object_expr, $.common_result_of_call_expr] ,
    [$.common_number_expr, $.common_result_of_call_expr] ,
    [$.common_number_expr, $.common_object_expr],
    [$.common_types_expr, $.common_number_expr],
    [$.common_types_expr, $.string_plus_stmt],
    [$.string_plus_stmt_value, $.common_result_of_call_expr],
    [$.string_plus_stmt_value, $.common_expr],
    [$.common_others_values_expr, $.multiple_id_expr]

  ],
  extras: $ => [
    /\s*/,     // 空格制表换行
    /\/\/[^\n\r]+?(?:\*\)|[\n\r])/,           //   //开头的 行注释
    /\/\*(\s|.)*?\*\//,     //   /* 块注释 */
  ],

  rules: {

    source_file: $ => repeat($.statement),
    statement: $ => choice (
      $.out_declar_stmt,
      $._con_ctl_stmt,
      $.simple_stmt,
      $.try_stmt,
      ';'                            // 将一个不属于任何项的分号视为一个单独的语句
    ),

    out_declar_stmt: $ => choice(
      $.func_declar_stmt,
      $.class_declar_stmt,
      $.namespace_declar_stmt
    ),

    // function
    func_declar_stmt: $ => choice(
      seq($.func_name_types, $.KEY_FUNCTION, $.code_block) ,
      seq($.func_name_types, $.KEY_FUNCTION, $.func_param_list, $.code_block) ,
    ) ,

    func_name_types: $ => choice(
      $.id_expr,
      seq($.BIT_NOT, $.id_expr),
      $.OPERATOR_X__
    ),
    func_param_list: $ => seq('(' , optional($.multiple_id_expr), ')' ),

    lambda_stmt: $ => choice(
      seq(
        '(',
        optional($.multiple_id_expr),
        ')',
        $.KEY_FUNCTION,
        $.code_block
      ),
      seq(
        $.multiple_id_expr,
        $.KEY_FUNCTION,
        $.code_block
      )
    ),

    call_statement: $ => prec(2, choice(
      // common_values_expr '(' args_list ')'
      seq(
        $.common_values_expr,
        $.args_list_with_parentheses
      ),

      // call_statement ‘.’ id_expr '(' args_list ')'
      seq(
        $.call_statement,
        '.',
        $.id_expr,
        $.args_list_with_parentheses
      )
    )),

    args_list_with_parentheses: $ => seq(
      '(',
      optional($.args_list),
      ')'
    ),
    args_list: $ => choice(
      $.common_expr,
      seq($.args_list, $.OP_COMMA, $.common_expr)
    ),


    // class
    class_declar_stmt: $ => seq(
      optional($.class_name_prefix),
      $.id_expr,
      optional($.class_name_suffix),
      '{', repeat($.class_body) , '}'
    ),

    class_name_prefix: $ => $.KEY_AUTO,
    class_name_suffix: $ => seq($.KEY_EXTEND, $.multiple_id_expr),

    class_body: $ => choice(
      seq($.var_declar_stmt, ';'),
      seq($.single_assign_stmt, ';'),
      $.func_declar_stmt
    ),

    class_member_stmt: $ => seq(
      $.common_object_expr,
      '.',
      $.id_expr
    ),
    this_stmt: $ => $.KEY_THIS,
    static_member_stmt: $ => seq(
      $.id_expr,
      $.OP_SCOPE,
      $.id_expr
    ),

    _con_ctl_stmt: $ => choice(
      $.selection_stmt,
      $.loop_stmt
    ) ,

    // logic_stmt start !!!
    logic_stmt: $ => prec.left(choice(
      $.type_judge_stmt,
      $.bool_param_expr,
      $.not_bool_param_expr,
      $.compare_expr,
      seq($.logic_stmt, $._symbol_logic_connection, $.logic_stmt),
    )),
    type_judge_stmt: $ => seq($.common_object_expr, $.KEY_IS, $.id_expr),
    bool_param_expr: $ => choice(
      $.bool_expr,
      $.assign_stmt_value_eq
    ),
    not_bool_param_expr: $ => seq($.OP_NOT, $.bool_param_expr),

    compare_expr: $ => choice(
      $.number_compare_expr,
      $.object_compare_expr
    ),
    number_compare_expr: $ => seq($.common_number_expr, $._symbol_compare, $.common_number_expr),
    object_compare_expr: $ => prec(15, choice(
        seq($.common_object_expr, $._symbol_equals_not, $.common_types_expr),
        // seq($.common_object_expr, $._symbol_equals_not, $.string_expr)
      )
    ),
    _symbol_compare: $ => choice(
      $.OP_GT,
      $.OP_LT,
      $.OP_GE,
      $.OP_LE,
      $.OP_NE,
      $.OP_EQ
    ),
    _symbol_equals_not: $ => choice(
      $.OP_NE,
      $.OP_EQ
    ),
    _symbol_logic_connection: $ => choice(
      $.OP_AND,
      $.OP_OR
    ),

    // logic_stmt end !!!

    // selection_stmt start !!!
    selection_stmt: $ => choice(
      $.switch_stmt,
      $.if_stmt
    ),
    if_stmt: $ => seq(
      $.single_if_stmt,
      optional($.else_stmt)
    ),
    single_if_stmt: $ => seq(
      $.KEY_IF,
      '(',
      $.logic_stmt,
      ')',
      $.code_block
    ),
    else_stmt: $ => seq(
      repeat($.else_if_stmt),
      $.single_else_stmt
    ),
    else_if_stmt: $ => seq(
      $.KEY_ELSE,
      $.single_if_stmt
    ),
    single_else_stmt: $ => seq(
      $.KEY_ELSE,
      $.code_block
    ),
    switch_stmt: $ => seq(
      $.KEY_SWITCH,
      '(',
      $.common_number_expr,
      ')',
      '{',
      repeat1($._case_types_stmt),
      '}'
    ),
    _case_types_stmt: $ => choice(
      $.case_stmt,
      $.default_stmt
    ),
    case_stmt: $ => seq(
      $.KEY_CASE,
      $.int_expr,
      ':',
      repeat($.block_item)
    ),
    default_stmt: $ => seq(
      $.KEY_DEFAULT,
      ':',
      repeat($.block_item)
    ),

    // selection_stmt  end !!!

    // loop_stmt start !!!
    loop_stmt: $ => choice(
      $.while_stmt,
      $.for_stmt
    ),

    while_stmt: $ => seq(
      $.KEY_WHILE,
      '(',
      $.logic_stmt,
      ')',
      $.code_block
    ),
    for_stmt: $ => seq(
      $.KEY_FOR,
      '(',
      repeat($.for_1_stmt),
      ';',
      $.logic_stmt,
      ';',
      repeat($.for_3_stmt),
      ')',
      $.code_block
    ),
    for_1_stmt: $ => choice(
      // $.var_declar_stmt,
      // $.self_inc_dec_stmt,
      $.assign_stmt
    ),
    for_3_stmt: $ => choice(
      $.self_inc_dec_stmt,
      $.assign_stmt
    ),

    // loop_stmt end !!!

    // simple stmt
    simple_stmt: $ => seq($._simple_stmt_types, ';') ,
    _simple_stmt_types: $ => choice(
      $.require_stmt,
      $.var_declar_stmt,
      $.self_inc_dec_stmt,
      $.call_statement,
      $.interrupt_stmt,
      $.restrict_stmt,
      $.assign_stmt,
      $.delete_expr,
      $.new_expr,
    ),

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
        optional($.var_prefix),
        $._elements_var_declar_stmt
      )
      // todo 声明赋值一起
    ),

    var_prefix: $ => choice(
      $.KEY_CONST,
      $.KEY_LOCAL
    ),
    _elements_var_declar_stmt: $ => choice(
      $._element_var_declar_stmt,
      seq($._elements_var_declar_stmt, ',' , $._element_var_declar_stmt)
    ),
    _element_var_declar_stmt: $ => choice(
      $.id_expr,                                    // single var
      $._array_var_declar_stmt
    ),
    _array_var_declar_stmt: $ => prec(1,
      seq($.id_expr, '[', $.common_number_expr, ']' ),       // array
    ),


    self_inc_dec_stmt: $ => prec(46, choice(
      seq($.self_inc_dec_operators, $.common_values_expr),
      seq($.common_values_expr, $.self_inc_dec_operators),
    )),
    self_inc_dec_operators: $ => choice(
      $.OP_INC,
      $.OP_DEC
    ),

    interrupt_stmt: $ => choice(
      $.KEY_BREAK,
      $.KEY_CONTINUE,
      // $.KEY_RETURN,
      seq($.KEY_RETURN, optional($.common_expr))
    ),
    restrict_stmt: $ => $.KEY_RESTRICT,

    // assign_stmt  start   赋值语句
    assign_stmt: $ => prec(8, choice(
      $.single_assign_stmt,
      $.number_change_assign_stmt
    )),
    single_assign_stmt: $ => prec.right(seq(
      $.common_assignable_expr,
      $.OP_ASSIGN,
      $.single_assign_stmt_value
    )),
    single_assign_stmt_value: $ => choice(
      $.common_expr,
      $.single_assign_stmt
    ),

    assign_stmt_value_eq: $ => choice(
      $.number_expr,
      $.common_values_expr,
      $.common_result_of_call_expr
    ),

    number_change_assign_stmt: $ => seq(
      $.common_assignable_expr,
      $.symbol_change_assign,
      $.common_number_expr
    ),
    symbol_change_assign: $ => choice(
      $.OP_ADD_EQ,
      $.OP_SUB_EQ,
      $.OP_MUL_EQ,
      $.OP_DIV_EQ,
      $.OP_MOD_EQ
    ),

    // assign_stmt  end   赋值语句

    // arithmetic_stmt  start   运算语句
    arithmetic_stmt: $ => choice(
      $._arithmetic_stmt_types,
      $.bit_arithmetic_stmt
    ),
    _arithmetic_stmt_types: $ => prec.left(choice(
      $._arithmetic_add_sub_stmt,
      $._arithmetic_mul_div_stmt,
    )),
    _arithmetic_add_sub_stmt: $ => prec.left(20, choice(
        seq( $.common_number_expr, $.OP_ADD, $.common_number_expr ),
        seq( $.common_number_expr, $.OP_SUB, $.common_number_expr ),
      )
    ),
    _arithmetic_mul_div_stmt: $ => prec.left(25, choice(
        seq( $.common_number_expr, $.OP_MUL, $.common_number_expr ),
        seq( $.common_number_expr, $.OP_DIV, $.common_number_expr ),
        seq( $.common_number_expr, $.OP_MOD, $.common_number_expr ),
      )
    ),
    bit_arithmetic_stmt: $ => prec.left(seq(
      $.common_number_expr,
      $.symbol_bit_opr,
      $.common_number_expr
    )),
    // bit_arithmetic_stmt_shift: $ => prec.left
    symbol_bit_opr: $ => choice(
      $.BIT_AND,
      $.BIT_XOR,
      $.BIT_OR,
      $.BIT_NOT,
      $.BIT_LEFT_SHIFT,
      $.BIT_RIGHT_SHIFT,
    ),

    // 带有小括号的表达式，  (a), (a + b)  a + (b + c )
    number_parentheses_stmt: $ => prec(46, seq(
      '(',
      $.common_number_expr,
      ')'
    )),

    // arithmetic_stmt  end   运算语句


    delete_expr: $ => seq($.KEY_DELETE, $.multiple_id_expr),
    new_expr: $ => seq(
      $.KEY_NEW,
      $.id_expr,
      $.args_list_with_parentheses
    ),

    // expr list or block | inner stmts.
    code_block: $ => seq(
        '{',
        repeat($.block_item),
        '}'
    ),

    block_item: $ => choice(
      $.try_stmt,
      $.simple_stmt,
      $._con_ctl_stmt
    ),

    // try stmt.
    try_stmt: $ => seq(
      $.KEY_TRY,
      $.code_block,
      optional($.catch_stmt),
    ),
    catch_stmt: $ => seq(
      $.KEY_CATCH,
      '(',
      $.id_expr,
      ')',
      $.code_block
    ),

    // namespace stmt.
    namespace_declar_stmt: $ => seq(
      $.KEY_SET,
      $.KEY_PUBLIC,
      '=',
      $.namespace_name_stmt,
      ';'
    ),
    namespace_ref_stmt: $ => seq(
      $.KEY_REF ,
      $.namespace_name_stmt,
      ';'
    ),

    // other stmt.
    multiple_id_expr: $ => choice(
      $.id_expr,
      seq($.multiple_id_expr, ',' , $.id_expr)
    ),

    // 命名空间的名字，  a | com.abc.zzz
    namespace_name_stmt: $ => choice(
      $.id_expr,
      seq($.namespace_name_stmt, $.OP_DOT, $.id_expr)
    ),

    // "a " + "b" + c  这种形式
    string_plus_stmt: $ => prec.left(20, choice(
      seq($.string_expr, $.OP_ADD, $.string_plus_stmt_value),
      seq($.string_plus_stmt_value, $.OP_ADD, $.string_expr),
    )),
    string_plus_stmt_value: $ => choice(
      $.common_object_expr,
      $.common_types_expr,
      $.string_plus_stmt,
      $.self_inc_dec_stmt,
      $.number_parentheses_stmt
    ),

    // common statement ..
    id_expr: $ => $._IDENTIFIER ,
    int_expr: $ => $._TINTEGER,
    positive_number_expr: $ => choice ( $._TDOUBLE, $._TINTEGER ),
    number_expr: $ => choice( $.positive_number_expr, $.uminus_expr ),
    string_expr: $ => $._TSTRING,
    null_expr: $ => $._KEY_NULL,
    bool_expr: $ => choice($.KEY_TRUE, $.KEY_FALSE),

    array_ele_stmt: $ => seq(
      $.common_object_expr,
      '[' ,
      $.common_number_expr,
      ']'
    ),

    uminus_expr: $ => prec(45, seq(
        '-',
        $.uminus_expr_values
    )),
    uminus_expr_values: $ => prec(45, choice(
      $.positive_number_expr,
      $.common_others_values_expr,
      $.call_statement,
      $.number_parentheses_stmt
    )),

    // 常规类型值的表达式，  数字，字符串， null, 匿名函数 bool
    common_types_expr: $ => choice(
      $.number_expr,
      $.string_expr,
      $.null_expr,
      $.lambda_stmt,
      $.bool_expr
    ),

    // 不包含 this 关键词的常规可用作赋值左值的对象
    common_others_values_expr: $ => choice(
      $.id_expr,
      $.array_ele_stmt,
      $.class_member_stmt,
      $.static_member_stmt

    ),
    common_values_expr: $ => choice(
      $.common_others_values_expr,
      $.this_stmt,
      $.new_expr
    ),

    // 调用或者计算之后可以得到一个结果的表达式
    common_result_of_call_expr: $ => choice(
      $.self_inc_dec_stmt,
      $.call_statement,
      $.arithmetic_stmt,
      $.number_parentheses_stmt,
    ),

    // 常规表达式 |  可以获取到一个结果的 表达式
    common_expr: $ => choice(
      $.common_types_expr,
      $.common_values_expr,
      $.common_result_of_call_expr,
      $.string_plus_stmt,
    ),

    // 可用作赋值语句左项的表达式
    common_assignable_expr: $ => choice(
      $.common_others_values_expr
    ),

    // 可以获取到一个数字的表达式 （或者说是 结果可能是一个数字的表达式）
    common_number_expr: $ => prec(1, choice(
      $.number_expr,
      $.common_values_expr,
      $.common_result_of_call_expr
    )),

    // 可以获取到一个对象的表达式
    common_object_expr: $ => prec(1,choice(
      $.common_values_expr,
      $.call_statement
    )),

    // 可以获取到一个字符串的表达式
    common_string_expr: $ => choice(
      $.string_expr,
      $.common_object_expr
    ),

    // terminate symbols
    _IDENTIFIER: $ => /[$_a-zA-Z][$_a-zA-Z0-9]*/ ,
    _TSTRING: $ => /\"(\\.|[^\\"\n])*\"/ ,
    _TINTEGER: $ => /0|([1-9][0-9]*)/ ,
    _TDOUBLE: $ => /(0|[1-9][0-9]*)\.[0-9]+/ ,
    OPERATOR_X__: $ => /operator([\+\-\*\/\.=]|<<|>>|\+\+|\-\-|\[\])/,

    // keywords
    KEY_FUNCTION: $ => '=>' ,
    KEY_DELETE: $ => 'delete',
    KEY_NEW: $ => 'new',
    KEY_THIS: $ => 'this',
    KEY_EXTEND: $ => 'extends',
    KEY_AUTO: $ => 'auto',
    _KEY_NULL: $ => 'null',

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
    OP_ADD: $ => prec.left(20,'+') ,
    OP_SUB: $ => prec.left(20,'-') ,
    OP_MUL: $ => prec.left(25,'*') ,
    OP_DIV: $ => prec.left(25,'/') ,
    OP_MOD: $ => prec.left(25,'%') ,
    OP_ASSIGN: $ => prec.right('='),
    OP_ADD_EQ: $ => '+=',
    OP_SUB_EQ: $ => '-=',
    OP_MUL_EQ: $ => '*=',
    OP_DIV_EQ: $ => '/=',
    OP_MOD_EQ: $ => '%=',
    OP_INC: $ => '++',
    OP_DEC: $ => '--',

    // bit operator
    BIT_AND: $ => prec.left(15,'&'),
    BIT_OR: $ => prec.left(13,'|'),
    BIT_XOR: $ => prec.left(14,'^'),
    BIT_NOT: $ => prec.left(30,'~') ,
    BIT_LEFT_SHIFT: $ => prec.left(19,'<<') ,
    BIT_RIGHT_SHIFT: $ => prec.left(19,'>>') ,

    // logic symbols
    OP_AND: $ => '&&',
    OP_OR: $ => '||',
    OP_NOT: $ => '!',
    OP_GT: $ => '>',
    OP_LT: $ => '<',
    OP_GE: $ => '>=',
    OP_LE: $ => '<=',
    OP_EQ: $ => '==',
    OP_NE: $ => '!=',

    // Other
    OP_DOT: $ => '.',
    OP_SCOPE: $ => '::',
    OP_COMMA: $ => prec.left(','),

  }
});
