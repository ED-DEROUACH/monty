#include "monty.h"

/**
 * f_div - Divides the top element of the stack from the second top element.
 * @head: Stack head
 * @counter: Line number
 * Return: No return value
 */
void f_div(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	l = *head;
	if (l->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	koi = l->next->n / l->n;
	l->next->n = koi;
	*head = l->next;
	free(l);
}
