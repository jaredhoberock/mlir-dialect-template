#include "{{dialect_name | pascal_case}}.hpp"
#include "{{dialect_name | pascal_case}}Ops.hpp"
#include "{{dialect_name | pascal_case}}Types.hpp"

#include "{{dialect_name | pascal_case}}.cpp.inc"

namespace mlir::{{ dialect_name }} {

void {{ dialect_name | pascal_case }}Dialect::initialize() {
  addOperations<
#define GET_OP_LIST
#include "{{dialect_name | pascal_case}}Ops.cpp.inc"
  >();

  registerTypes();
}

}
