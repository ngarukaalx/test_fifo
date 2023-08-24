#include "monty.h"

/**
 * add - adds the top two elements of the stack The result is stored in the
 * second top element of the stack, and the top element is removed
 * @stack: parameter
 * @line_number: parameter
 */

void add(stack_t **stack, unsigned int line_number)
{
	if (*stack != NULL && (*stack)->next != NULL)
	{
		stack_t *temp = *stack;
		(*stack)->next->n = ((*stack)->n + (*stack)->next->n);
		(*stack) = (*stack)->next;
		(*stack)->prev = NULL;
		free(temp);
	}
	else
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
