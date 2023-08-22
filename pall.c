#include "monty.h"

/**
 * f_pall - Prints all elements of the stack
 * @head: Stack head
 * @counter: Unused parameter
 * Return: No return value
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *hrad;
	if (h == NULL)
		return;

	do {
		printf("%d\n", h->n);
		h = h->next;
	} while (h != NULL);
}
