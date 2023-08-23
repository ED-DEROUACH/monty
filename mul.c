#include "monty.h"

/**
 * f_mul - Multiplies the top two elements of the stack.
 * @head: Stack head
 * @counter: Line number
 * Return: No return value
 */
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *l;
	int len = 0, koi;

	l = *head;
	for (; l != NULL; l = l->next)
	{
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	l = *head;
	koi = l->next->n * l->n;
	l->next->n = koi;
	*head = l->next;
	free(l);
}
