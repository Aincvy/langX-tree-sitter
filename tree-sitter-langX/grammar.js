module.exports = grammar({
  name: 'langX',

  word: $ => $.id_expr,

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

    func_declar_stmt: $ => 'func' ,
    var_declar_stmt: $ => choice(
      seq($.id_expr, ';') ,
    ) ,
    class_declar_stmt: $ => 'class'  ,


    // var_declar_stmt types


    con_ctl_stmt: $ => 'xx' ,
    simple_stmt: $ => 'aa' ,


    // common statement ..
    id_expr: $ => $.IDENTIFIER ,
    IDENTIFIER: $ => /[$_a-zA-Z][$_a-zA-Z0-9]*/ ,
    TSTRING: $ => /\"(\\.|[^\\"\n])*\"/ ,
    XINTEGER: $ => /0|([1-9][0-9]*)/ ,
    TDOUBLE: $ => /(0|[1-9][0-9]*)\.[0-9]+/


  }
});
