#include <stdio.h>

void pass_this_function(void)
{
    printf("Executing %s\n", __func__);
}

void calls_function_pointer(void (*function_pointer)(void))
{
    if (function_pointer)
        function_pointer();
}

int main(void)
{
    printf("\tPass function directly:\n");
    calls_function_pointer(pass_this_function);

    printf("\n\tPass function using variable:\n");
    void (*variable)(void) = pass_this_function;
    calls_function_pointer(variable);

    return 0;
}
