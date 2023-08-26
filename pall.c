#include "monty.h"

/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_pall(stack_t **head, unsigned int counter)
{
    stack_t *h = *head;
    (void) counter;

    while (h)
    {
        printf("%d\n", h->n);
        h = h->next;
    }
}
