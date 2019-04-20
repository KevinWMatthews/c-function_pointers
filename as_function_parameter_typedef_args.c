#include <stdio.h>

typedef int (*FUNCTION_POINTER)(char);

void calls_function_pointer(FUNCTION_POINTER function_pointer)
{
    if (function_pointer)
    {
        int ret = function_pointer('c');
        if (ret != 0)
            fprintf(stderr, "Function pointer returned nonzero\n");
    }
}

int pass_this_function(char character)
{
    printf("Executing %s: '%c'\n", __func__, character);
    return 0;
}

int main(void)
{
    calls_function_pointer(pass_this_function);
    return 0;
}
