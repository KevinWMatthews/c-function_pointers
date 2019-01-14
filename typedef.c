#include <stdio.h>

typedef void (*FUNCTION_POINTER)(void);

void function(void)
{
    printf("Executing %s\n", __func__);
}

int main(void)
{
    FUNCTION_POINTER function_pointer = function;
    function_pointer();

    return 0;
}
