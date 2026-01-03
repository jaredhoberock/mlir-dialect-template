#include "{{pascal_case_dialect_name}}.hpp"
#include <mlir/Tools/Plugins/DialectPlugin.h>

static void registerPlugin(mlir::DialectRegistry* registry) {
  registry->insert<mlir::{{ dialect_name }}::{{ dialect_name | pascal_case }}Dialect>();
}

extern "C" ::mlir::DialectPluginLibraryInfo LLVM_ATTRIBUTE_WEAK
mlirGetDialectPluginInfo() {
  return {
    MLIR_PLUGIN_API_VERSION,
    "{{ dialect_name | pascal_case }}DialectPlugin", 
    "v0.1", 
    registerPlugin
  };
}
