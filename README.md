# mlir-dialect-template

A `cargo-generate` template for starting a new MLIR dialect project.  
It creates:

- A C++ MLIR dialect (ops, types, plugin)
- A C API for the dialect
- A Rust crate that builds and links the dialect automatically

## Usage

Create a new dialect project:

```bash
cargo generate \
  --git https://github.com/jaredhoberock/mlir-dialect-template \
  --define dialect_name=<name> \
  --define mlir_install_dir=/path/to/mlir/install
```

Build and test:

```bash
cargo build
cargo test
```

Your dialect sources are in `<name>/cpp/` and the Rust bindings are in `<name>/src/`.
Define ops in `<name>/cpp/Ops.td` and rebuild.
