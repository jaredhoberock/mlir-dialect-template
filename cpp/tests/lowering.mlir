// RUN: mlir-opt --convert-to-llvm %s | FileCheck %s

// CHECK: llvm.func @foo
func.func @foo() {
  return
}
