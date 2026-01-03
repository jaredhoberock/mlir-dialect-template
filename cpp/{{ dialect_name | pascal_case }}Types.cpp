#include "{{dialect_name | pascal_case}}.hpp"
#include "{{dialect_name | pascal_case}}Types.hpp"
#include <llvm/ADT/TypeSwitch.h>
#include <mlir/IR/Builders.h>
#include <mlir/IR/DialectImplementation.h>

using namespace mlir;
using namespace mlir::{{ dialect_name }};

#define GET_TYPEDEF_CLASSES
#include "{{dialect_name | pascal_case}}Types.cpp.inc"

void {{ dialect_name | pascal_case }}Dialect::registerTypes() {
  addTypes<
#define GET_TYPEDEF_LIST
#include "{{dialect_name | pascal_case}}Types.cpp.inc"
  >();
}
