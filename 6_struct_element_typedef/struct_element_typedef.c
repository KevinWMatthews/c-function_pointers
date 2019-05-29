#include <stdio.h>

typedef void (*FUNCTION_POINTER)(void);

typedef struct STRUCTURE
{
    FUNCTION_POINTER function_pointer;
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
