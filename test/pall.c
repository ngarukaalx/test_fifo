#include "monty.h"

/**
 * pall - fuction name
 * @stack: pointer to a pinter
 * @line_number: parameter
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void)line_number;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
