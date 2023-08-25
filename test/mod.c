#include "monty.h"

/**
 * mod - computes the rest of the division of the second top element
 * of the stack by the top element of the stack.
 * @stack: pointer to top
 * @line_number: linenumber
 */

void mod(stack_t **stack, unsigned int line_number)
{
	if (*stack != NULL && (*stack)->next != NULL)
	{
		if ((*stack)->n == 0)
		{
			fprintf(stderr, "L%u: division by zero\n", line_number);
			exit(EXIT_FAILURE);
		}
		else
		{
			stack_t *temp = *stack;
			(*stack)->next->n = ((*stack)->n % (*stack)->next->n);
			(*stack) = (*stack)->next;
			(*stack)->prev = NULL;
			free(temp);
		}
	}
	else
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
