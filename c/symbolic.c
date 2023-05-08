#include <stdio.h>
#include <julia.h>
JULIA_DEFINE_FAST_TLS

int main (void)
{
    /* required: setup the Julia context */
    jl_init();

    /* run Julia commands */
    jl_eval_string("print(sqrt(2.0))");

    /* strongly recommended: notify Julia that the
         program is about to terminate. this allows
         Julia time to cleanup pending write requests
         and run all finalizers
    */
    jl_atexit_hook(0);
    
    printf("Hello");
    return 0;
}
