#ifndef {{uppercase_dialect_name}}_DIALECT_TD
#define {{uppercase_dialect_name}}_DIALECT_TD

include "mlir/IR/OpBase.td"

def {{pascal_case_dialect_name}}Dialect : Dialect {
  let name = "{{dialect_name}}";
  let summary = "Dialect summary here";
  let cppNamespace = "::mlir::{{dialect_name}}";

  let useDefaultTypePrinterParser = 1;

  let extraClassDeclaration = [{
    void registerTypes();
  }];
}

class {{pascal_case_dialect_name}}DialectOp<string mnemonic, list<Trait> traits = []> :
  Op<TraitDialect, mnemonic, traits>;

#endif // {{uppercase_dialect_name}}_DIALECT_TD

