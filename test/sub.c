#include "monty.h"

/**
 * sub - subtracts the top element of the stack from the second top
 * element of the stack.
 * @stack: parameter
 * @line_number: parameter
 */

void sub(stack_t **stack, unsigned int line_number)
{
	if (*stack != NULL && (*stack)->next != NULL)
	{
		stack_t *temp = *stack;
		(*stack)->next->n = ((*stack)->next->n - (*stack)->n);
		(*stack) = (*stack)->next;
		(*stack)->prev = NULL;
		free(temp);
	}
	else
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
