#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: pointer
 * @line_number: linenumber
 */

void pop(stack_t **stack, unsigned int line_number)
{
	if (*stack != NULL)
	{
		stack_t *temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
	else
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
}
