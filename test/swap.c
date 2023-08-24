#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @stack: parameter
 * @line_number: parameter
 */

void swap(stack_t **stack, unsigned int line_number)
{
	if (*stack != NULL && (*stack)->next != NULL)
	{
		stack_t *temp = *stack;
		(*stack) = (*stack)->next;
		temp->prev = (*stack);
		temp->next = (*stack)->next;
		(*stack)->prev = NULL;
		(*stack)->next = temp;
	}
	else
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
