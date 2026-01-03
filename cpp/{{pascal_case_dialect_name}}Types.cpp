#include "{{pascal_case_dialect_name}}.hpp"
#include "{{pascal_case_dialect_name}}Types.hpp"
#include <llvm/ADT/TypeSwitch.h>
#include <mlir/IR/Builders.h>
#include <mlir/IR/DialectImplementation.h>

using namespace mlir;
using namespace mlir::{{ dialect_name }};

#define GET_TYPEDEF_CLASSES
#include "{{pascal_case_dialect_name}}Types.cpp.inc"

void {{ dialect_name | pascal_case }}Dialect::registerTypes() {
  addTypes<
#define GET_TYPEDEF_LIST
#include "{{pascal_case_dialect_name}}Types.cpp.inc"
  >();
}
