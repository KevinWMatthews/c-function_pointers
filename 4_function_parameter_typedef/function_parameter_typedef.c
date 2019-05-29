#include <stdio.h>

typedef void (*FUNCTION_POINTER)(void);

void pass_this_function(void)
{
    printf("Executing %s\n", __func__);
}

void calls_function_pointer(FUNCTION_POINTER function_pointer)
{
    if (function_pointer)
        function_pointer();
}

int main(void)
{
    printf("\tPass function directly:\n");
    calls_function_pointer(pass_this_function);

    printf("\n\tPass function using variable:\n");
    FUNCTION_POINTER variable = pass_this_function;
    calls_function_pointer(variable);

    return 0;
}
