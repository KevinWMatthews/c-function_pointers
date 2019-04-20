#include <stdio.h>

void calls_function_pointer(void (*function_pointer)(void))
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

    void (*variable)(void) = pass_this_function;
    calls_function_pointer(variable);

    return 0;
}
