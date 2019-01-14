#include <stdio.h>

typedef void (*FUNCTION_POINTER)(void);

typedef struct STRUCTURE
{
    void (*function_pointer)(void);     // The name of the variable is within the parenthesis
    FUNCTION_POINTER function_pointer_typedef;
} STRUCTURE;

void function(void)
{
    printf("Executing %s\n", __func__);
}

int main(void)
{
    STRUCTURE structure = {
        .function_pointer = function,
        .function_pointer_typedef = function,
    };
    structure.function_pointer();
    structure.function_pointer_typedef();

    return 0;
}
