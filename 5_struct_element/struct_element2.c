#include <stdio.h>

typedef struct STRUCTURE
{
    // The name of the struct element is within the parentheses
    int (*function_pointer)(char *);
} STRUCTURE;

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
    STRUCTURE structure = {
        .function_pointer = function,
    };

    char *string = "Hello, World!";
    int retval = structure.function_pointer(string);
    printf("%s: Function returned value '%d'\n", __func__, retval);

    return 0;
}
