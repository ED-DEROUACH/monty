#include "monty.h"

/**
 * f_pint - Prints the top element of the stack.
 * @head: Stack head
 * @counter: Linenumber
 * Return: No return value
 */
void f_pint(stack_t **head, unsigned int counter)
{
	stack_t *h = *head;

	for (; h != NULL; h = h->next)
	{
		if (h == NULL)
		{
			fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
		printf("%d\n", h->n);
		break;
	}
}
