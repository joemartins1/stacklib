#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

Stack   new_stack(void)
{
    return (NULL);
}

Bool    is_empty_stack(Stack st)
{
    if (st == NULL)
        return true;
    return (false);
}

Stack   push_stack(Stack st, int value)
{
    StackElement    *element;

    element = malloc(sizeof(*element));
    if (element == NULL)
        return (NULL);
    
    element->value = value;
    element->next = st;

    return (element);
}

Stack   clear_stack(Stack st)
{
    StackElement    *element;
    
    if(is_empty_stack(st))
        return (new_stack());
    
    element = st->next;
    free(st);

    return (clear_stack(element));
}

void    print_stack(Stack st)
{
    if (is_empty_stack(st))
    {
        printf("Stack is empty, nothing to print\n");
        return;
    }

    while (is_empty_stack(st) == false)
    {
        printf("%d\n", st->value);
        st = st->next;
    }
}

Stack   delete_element_stack(Stack st)
{
    StackElement    *element;
    
    if (is_empty_stack(st))
        return (new_stack());
    
    element = st->next;
    free(st);
    return (element);
}

int     top_stack(Stack st)
{
    if (is_empty_stack(st))
        return (- 1);

    return (st->value);
}

void    print_top_stack(Stack st)
{
    if (is_empty_stack(st))
        return;

    printf("%d\n", st->value);

}

int     stack_len(Stack st)
{
    int i;

    i = 0;
    if (is_empty_stack(st))
        return (0);
    
     while (is_empty_stack(st) == false)
    {
        st = st->next;
        i++;
    }
    return (i);
}