LLVM_BIN_PATH = {{mlir_install_dir}}/bin

LLVM_CONFIG := $(LLVM_BIN_PATH)/llvm-config
TBLGEN := $(LLVM_BIN_PATH)/mlir-tblgen
OPT := $(LLVM_BIN_PATH)/mlir-opt

# Compiler flags
CXX := clang++
CXXFLAGS := -g -fPIC `$(LLVM_CONFIG) --cxxflags`

# LLVM/MLIR libraries
MLIR_INCLUDE = {{mlir_install_dir}}/include

INCLUDES := -I $(MLIR_INCLUDE)

# Dialect library sources
DIALECT_SOURCES := c_api.cpp {{dialect_name | pascal_case}}.cpp {{dialect_name | pascal_case}}Ops.cpp {{dialect_name | pascal_case}}Types.cpp
DIALECT_OBJECTS := $(DIALECT_SOURCES:.cpp=.o)

# Generated files
GENERATED := {{dialect_name | pascal_case}}.hpp.inc {{dialect_name | pascal_case}}.cpp.inc {{dialect_name | pascal_case}}Ops.hpp.inc {{dialect_name | pascal_case}}Ops.cpp.inc {{dialect_name | pascal_case}}Types.hpp.inc {{dialect_name | pascal_case}}Types.cpp.inc

.PHONY: all clean

all: lib{{dialect_name}}_dialect.a lib{{dialect_name}}_dialect.so

# TableGen rules
{{dialect_name | pascal_case}}.hpp.inc: {{dialect_name | pascal_case}}.td
	$(TBLGEN) --gen-dialect-decls $(INCLUDES) $< -o $@

{{dialect_name | pascal_case}}.cpp.inc: {{dialect_name | pascal_case}}.td
	$(TBLGEN) --gen-dialect-defs $(INCLUDES) $< -o $@

{{dialect_name | pascal_case}}Ops.hpp.inc: {{dialect_name | pascal_case}}Ops.td
	$(TBLGEN) --gen-op-decls $(INCLUDES) $< -o $@

{{dialect_name | pascal_case}}Ops.cpp.inc: {{dialect_name | pascal_case}}Ops.td
	$(TBLGEN) --gen-op-defs $(INCLUDES) $< -o $@

{{dialect_name | pascal_case}}Types.hpp.inc: {{dialect_name | pascal_case}}Types.td
	$(TBLGEN) --gen-typedef-decls $(INCLUDES) $< -o $@

{{dialect_name | pascal_case}}Types.cpp.inc: {{dialect_name | pascal_case}}Types.td
	$(TBLGEN) --gen-typedef-defs $(INCLUDES) $< -o $@

# Object file rules
%.o: %.cpp $(GENERATED)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

lib{{dialect_name}}_dialect.a: $(DIALECT_OBJECTS)
	ar rcs $@ $^

PLUGIN_OBJECTS := $(DIALECT_OBJECTS) Plugin.o

lib{{dialect_name}}_dialect.so: $(PLUGIN_OBJECTS)
	$(CXX) -shared $^ -o $@

.PHONY: test
test: lib{{dialect_name}}_dialect.so
	@echo "Running {{dialect_name}} dialect tests..."
	lit tests

clean:
	rm -f *.o *.inc *.a *.so

