import os
import lit.formats

config.name = "{{pascal_case_dialect_name}} Dialect Tests"
config.test_format = lit.formats.ShTest(True)
config.suffixes = ['.mlir']
config.test_source_root = os.path.dirname(__file__)

plugin_path = os.path.join(os.path.dirname(__file__), '..', 'lib{{dialect_name}}_dialect.so')

config.substitutions.append(('mlir-opt', f'mlir-opt --load-dialect-plugin={plugin_path}'))
