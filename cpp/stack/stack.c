#include <time.h>
#include "stack.h"

int main()
{
    srand(time(NULL));

    stack_t *stack = init_stack();

    int x;

    printf("%d \n", is_stack_empty(stack));
    for (size_t i = 0; i < 10; i++)
    {
        int r = rand();
        printf("%d ", r);
        stack_push(stack, (void *)&r);
    }
    printf("\n");
    printf("%d \n", is_stack_empty(stack));
    pop_to_empty(stack);
    printf("%d \n", is_stack_empty(stack));

    return 0;
}