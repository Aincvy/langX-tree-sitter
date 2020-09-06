module.exports = grammar({
  name: 'langX',

  word: $ => $.IDENTIFIER,

  rules: {

    source_file: $ => repeat($.statement),
    statement: $ => choice (
      $.declar_stmt,
      $.con_ctl_stmt,
      $.simple_stmt
    ),

    declar_stmt: $ => choice(
      $.func_declar_stmt,
      $.var_declar_stmt,
      $.class_declar_stmt
    ),

    func_declar_stmt: $ => choice(
      seq($.NOT_OP, $.id_expr, $.FUNC_OP, '{', $.expr_list, '}') ,
      seq($.id_expr, $.FUNC_OP, '{', $.expr_list, '}'),
      seq($.OPERATOR_X__, $.FUNC_OP, '{', $.expr_list, '}')
    ) ,

    _element_var_declar_stmt: $ => choice(
      $.id_expr,                                    // single var
      seq($.id_expr, '[', $.int_expr, ']' ),       // array
      seq($.id_expr, '[', $.call_statement, ']' )  // array, size by call stmt
    ),
    var_declar_stmt: $ => choice(
      seq($._element_var_declar_stmt, ';'),
      seq($._element_var_declar_stmt, ',' , $.var_declar_stmt )
    ) ,
    class_declar_stmt: $ => 'class'  ,



    con_ctl_stmt: $ => 'xx' ,


    // simple stmt
    simple_stmt: $ => choice(
      $.call_statement
    ) ,

    call_statement: $ => choice(
      seq($.id_expr, '(' , ')')
    ),


    // expr list
    expr_list: $ => choice(
        $.call_statement
    ),

    // common statement ..
    id_expr: $ => $.IDENTIFIER ,
    int_expr: $ => $.XINTEGER,
    number_expr: $ => choice ( $.TDOUBLE, $.XINTEGER ),
    IDENTIFIER: $ => /[$_a-zA-Z][$_a-zA-Z0-9]*/ ,
    TSTRING: $ => /\"(\\.|[^\\"\n])*\"/ ,
    XINTEGER: $ => /0|([1-9][0-9]*)/ ,
    TDOUBLE: $ => /(0|[1-9][0-9]*)\.[0-9]+/ ,
    OPERATOR_X__: $ => /operator([\+\-\*\/\.\=]|<<|>>|\+\+|\-\-|\[\])/,

    // keywords
    FUNC_OP: $ => '=>' ,

    // mathematical symbols
    NOT_OP: $ => '~' ,


  }
});
