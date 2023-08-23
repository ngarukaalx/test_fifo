#include "monty.h"
/**
 * pint -  prints the value at the top of the stack
 * @stack: pointer to head
 * @numberline: line in montyfile
 */

void pint(stack_t **stack, unsigned int numberline)
{

	if (*stack != NULL)
	{
		printf("%d\n", (*stack)->n);
		return;
	}
	else
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", numberline);
		exit(EXIT_FAILURE);
	}
}
