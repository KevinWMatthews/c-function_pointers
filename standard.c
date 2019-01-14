#include <stdio.h>

void function(void)
{
    printf("Executing %s\n", __func__);
}

int main(void)
{
    void (*function_pointer)(void) = function;
    function_pointer();

    return 0;
}
