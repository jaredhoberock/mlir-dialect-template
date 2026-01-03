#include "{{pascal_case_dialect_name}}.hpp"
#include "{{pascal_case_dialect_name}}Ops.hpp"
#include "{{pascal_case_dialect_name}}Types.hpp"

#include "{{pascal_case_dialect_name}}.cpp.inc"

namespace mlir::{{ dialect_name }} {

void {{ dialect_name | pascal_case }}Dialect::initialize() {
  addOperations<
#define GET_OP_LIST
#include "{{pascal_case_dialect_name}}Ops.cpp.inc"
  >();

  registerTypes();
}

}
