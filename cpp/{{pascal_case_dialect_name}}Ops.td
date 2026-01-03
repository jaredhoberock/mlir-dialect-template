#ifndef {{ dialect_name | shouty_snake_case }}_OPS_TD
#define {{ dialect_name | shouty_snake_case }}_OPS_TD

include "mlir/IR/OpAsmInterface.td"
include "mlir/IR/OpBase.td"
include "{{pascal_case_dialect_name}}.td"
include "{{pascal_case_dialect_name}}Types.td"

#endif // {{ dialect_name | shouty_snake_case }}_OPS_TD
