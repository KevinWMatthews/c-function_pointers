#include <stdio.h>

void accepts_function_pointer(void (*function_pointer)(void))
{
    if (function_pointer)
        function_pointer();
}

void function(void)
{
    printf("Executing %s\n", __func__);
}

int main(void)
{
    accepts_function_pointer(function);

    void (*variable)(void) = function;
    accepts_function_pointer(variable);

    return 0;
}
