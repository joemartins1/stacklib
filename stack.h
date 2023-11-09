#ifndef STACK_H
#define STACK_H

typedef enum
{
    false,
    true
}Bool;

typedef struct  StackElement
{
    unsigned int    value;
    struct          StackElement *next;
}StackElement, *Stack;

Stack   new_stack(void);
Bool    is_empty_stack(Stack st);
void    print_stack(Stack st);
Stack   push_stack(Stack st, int value);
Stack   clear_stack(Stack st);
Stack   delete_element_stack(Stack st);
int     top_stack(Stack st);
void    print_top_stack(Stack st);
int     stack_len(Stack st);

#endif