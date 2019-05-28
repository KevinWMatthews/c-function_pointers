#include <stdio.h>

int function(char *string)
{
    if (!string)
    {
        printf("%s: Function passed a NULL string\n", __func__);
        return -1;
    }

    printf("%s: Function passed argument '%s'\n", __func__, string);
    return 0;
}

int main(void)
{
    int (*function_pointer)(char *) = function;

    char *string = "Hello, world!";
    int retval = function_pointer(string);
    printf("%s: Function returned value '%d'\n", __func__, retval);

    return 0;
}
