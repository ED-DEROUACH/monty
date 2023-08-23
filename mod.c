#include "monty.h"

/**
 * f_mod - Computes the rest of the division of the second
 * top element of the stack by the top element of the stack.
 * @head: Stack head
 * @counter: Line number
 * Return: No return value
 */
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *j;
	int len = 0, koi;

	j = *head;
	for (; j != NULL; j = j->next)
	{
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	j = *head;
	if (j->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	koi = j->next->n % j->n;
	j->next->n = koi;
	*head = j->next;
	free(j);
}
