#include "Dialect.hpp"
#include "Ops.hpp"
#include "Types.hpp"

#include "Dialect.cpp.inc"

namespace mlir::{{ dialect_name }} {

void {{ dialect_name | pascal_case }}Dialect::initialize() {
  addOperations<
#define GET_OP_LIST
#include "Ops.cpp.inc"
  >();

  registerTypes();
}

}
