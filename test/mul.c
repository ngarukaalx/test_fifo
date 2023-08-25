#include "monty.h"

/**
 * mul - multiplies the second top element of the stack
 * with the top element of the stack
 * @stack: pointer to top
 * @line_number: linenumber
 */

void mul(stack_t **stack, unsigned int line_number)
{
	if (*stack != NULL && (*stack)->next != NULL)
	{
		stack_t *temp = *stack;
		(*stack)->next->n = ((*stack)->next->n * (*stack)->n);
		(*stack) = (*stack)->next;
		(*stack)->prev = NULL;
		free(temp);
	}
	else
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
