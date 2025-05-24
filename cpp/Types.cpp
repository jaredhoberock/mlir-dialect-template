#include "Dialect.hpp"
#include "Types.hpp"
#include <llvm/ADT/TypeSwitch.h>
#include <mlir/IR/Builders.h>
#include <mlir/IR/DialectImplementation.h>

using namespace mlir;
using namespace mlir::{{ dialect_name }};

#define GET_TYPEDEF_CLASSES
#include "Types.cpp.inc"

void {{ dialect_name | pascal_case }}Dialect::registerTypes() {
  addTypes<
#define GET_TYPEDEF_LIST
#include "Types.cpp.inc"
  >();
}
