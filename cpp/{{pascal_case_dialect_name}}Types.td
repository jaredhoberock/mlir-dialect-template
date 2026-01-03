#ifndef {{ dialect_name | shouty_snake_case }}_TYPES_TD
#define {{ dialect_name | shouty_snake_case }}_TYPES_TD

include "mlir/IR/AttrTypeBase.td"
include "{{pascal_case_dialect_name}}.td"

#endif // {{ dialect_name | shouty_snake_case }}_TYPES_TD
