#pragma once

#include <mlir-c/IR.h>
#include <mlir-c/Pass.h>
#include <mlir-c/Support.h>

#ifdef __cplusplus
extern "C" {
#endif

void {{dialect_name}}RegisterDialect(MlirContext ctx);

#ifdef __cplusplus
}
#endif

