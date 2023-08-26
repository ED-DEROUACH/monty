#include "monty.h"

/**
 * f_push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_push(stack_t **head, unsigned int counter)
{
    int n = 0;
    int j;
    int len = strlen(bus.arg);
    int is_negative = (bus.arg[0] == '-') ? 1 : 0;
    int valid_argument = 1;

    if (!bus.arg || len == 0)
    {
        fprintf(stderr, "L%d: usage: push integer\n", counter);
        fclose(bus.file);
        free(bus.content);
        exit(EXIT_FAILURE);
    }

    for (j = is_negative; j < len; j++)
    {
        if (!isdigit(bus.arg[j]))
        {
            valid_argument = 0;
            break;
        }
        n = n * 10 + (bus.arg[j] - '0');
    }

    if (!valid_argument)
    {
        fprintf(stderr, "L%d: usage: push integer\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    n = (is_negative) ? -n : n;
    addnode(head, n);
}
