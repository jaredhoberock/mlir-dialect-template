#ifndef {{ dialect_name | shouty_snake_case }}_DIALECT_TD
#define {{ dialect_name | shouty_snake_case }}_DIALECT_TD

include "mlir/IR/OpBase.td"

def {{ dialect_name | pascal_case }}Dialect : Dialect {
  let name = "{{ dialect_name }}";
  let summary = "{{ dialect_name | title_case }} dialect.";
  let cppNamespace = "::mlir::{{ dialect_name }}";

  let extraClassDeclaration = [{
    void registerTypes();
  }];
}

class {{ dialect_name | pascal_case }}DialectOp<string mnemonic, list<Trait> traits = []> :
  Op<{{ dialect_name | pascal_case }}Dialect, mnemonic, traits>;

#endif // {{ dialect_name | shouty_snake_case }}_DIALECT_TD
