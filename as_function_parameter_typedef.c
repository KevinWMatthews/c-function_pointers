#include <stdio.h>

typedef int (*FUNCTION_POINTER)(char *);

int pass_this_function(char *string)
{
    if (!string)
    {
        printf("%s: Function passed a NULL string\n", __func__);
        return -1;
    }

    printf("%s: Function passed argument '%s'\n", __func__, string);
    return 0;
}

void calls_function_pointer(FUNCTION_POINTER function_pointer)
{
    char *string = "Hello, World!";

    if (function_pointer)
    {
        int retval = function_pointer(string);
        printf("%s: Function returned value '%d'\n", __func__, retval);
    }
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
