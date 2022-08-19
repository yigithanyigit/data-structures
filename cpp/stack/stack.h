#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node_s node_t;

struct node_s
{
    void *data;
    node_t *next;
};

typedef struct stack_s
{
    node_t *head;
} stack_t;

stack_t *init_stack()
{
    stack_t *stack = NULL;
    stack = malloc(sizeof(stack_t));
    if (stack != NULL)
    {
        stack->head = NULL;
    }
    return stack;
}

void free_stack(stack_t *stack)
{
    free(stack);
}

int stack_push(stack_t *stack, void *data)
{
    int returnValue = 0;

    node_t *new_node;
    new_node = malloc(sizeof(node_t));
    if (new_node != NULL)
    {
        returnValue = 1;

        new_node->data = data;
        new_node->next = stack->head;
        stack->head = new_node;

        // TO DO : After push, look is pushed or not
    }

    return returnValue;
}

void *stack_pop(stack_t *stack)
{
    void *data;

    if (stack->head != NULL)
    {
        node_t *temp_node = stack->head;
        data = temp_node->data;
        stack->head = temp_node->next;
        free(temp_node);
    }

    return data;
}

void *stack_top(stack_t *stack)
{
    return stack->head->data;
}

int is_stack_empty(stack_t *stack)
{
    if (stack->head == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void pop_to_empty(stack_t *stack)
{
    
    while (stack->head != NULL)
    {
        stack_pop(stack);
    }
    
}
