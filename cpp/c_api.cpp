#include "c_api.h"
#include "{{pascal_case_dialect_name}}.hpp"
#include "{{pascal_case_dialect_name}}Ops.hpp"
#include "{{pascal_case_dialect_name}}Types.hpp"
#include <mlir/CAPI/IR.h>
#include <mlir/CAPI/Pass.h>
#include <mlir/IR/Builders.h>

using namespace mlir;
using namespace mlir::{{dialect_name}};

extern "C" {

void {{dialect_name}}RegisterDialect(MlirContext context) {
  unwrap(context)->loadDialect<{{dialect_name | pascal_case}}Dialect>();
}

} // end extern "C"
