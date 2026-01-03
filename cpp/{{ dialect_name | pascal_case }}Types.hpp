#pragma once

#include "mlir/IR/BuiltinTypes.h"

#define GET_TYPEDEF_CLASSES
#include "{{ dialect_name | pascal_case }}Types.hpp.inc"
