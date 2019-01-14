#include <stdio.h>

typedef void (*FUNCTION_POINTER)(void);

void accepts_function_pointer(void (*function_pointer)(void))
{
    if (function_pointer)
        function_pointer();
}

void accepts_function_pointer_typedef(FUNCTION_POINTER function_pointer)
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
    accepts_function_pointer_typedef(function);

    return 0;
}
