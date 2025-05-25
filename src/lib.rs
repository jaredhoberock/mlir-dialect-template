use melior::Context;
use mlir_sys::MlirContext;

unsafe extern "C" {
    fn {{ dialect_name }}RegisterDialect(ctx: MlirContext);
}

pub fn register(context: &Context) {
    unsafe { {{ dialect_name }}RegisterDialect(context.to_raw()) }
}
