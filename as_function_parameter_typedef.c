#include <stdio.h>

typedef void (*FUNCTION_POINTER)(void);

void calls_function_pointer(FUNCTION_POINTER function_pointer)
{
    if (function_pointer)
        function_pointer();
}

void pass_this_function(void)
{
    printf("Executing %s\n", __func__);
}

int main(void)
{
    calls_function_pointer(pass_this_function);

    FUNCTION_POINTER variable = pass_this_function;
    calls_function_pointer(variable);

    return 0;
}
