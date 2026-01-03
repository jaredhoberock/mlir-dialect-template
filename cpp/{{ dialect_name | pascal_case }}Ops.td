#ifndef {{ dialect_name | shouty_snake_case }}_OPS_TD
#define {{ dialect_name | shouty_snake_case }}_OPS_TD

include "mlir/IR/OpAsmInterface.td"
include "mlir/IR/OpBase.td"
include "{{ dialect_name | pascal_case }}.td"
include "{{ dialect_name | pascal_case }}Types.td"

#endif // {{ dialect_name | shouty_snake_case }}_OPS_TD
