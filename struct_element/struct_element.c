#include <stdio.h>

typedef struct STRUCTURE
{
    // The name of the struct element is within the parentheses
    void (*function_pointer)(void);
} STRUCTURE;

void function(void)
{
    printf("Executing %s\n", __func__);
}

int main(void)
{
    STRUCTURE structure = {
        .function_pointer = function,
    };
    structure.function_pointer();

    return 0;
}
