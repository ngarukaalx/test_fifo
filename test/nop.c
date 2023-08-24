#include "monty.h"

/**
 * nop - doesn’t do anything
 * @stack: parameter
 * @line_number: parameter
 */

void nop(stack_t **stack, unsigned int line_number)
{
	(void)*stack;
	(void)line_number;

	/*does nothing*/
}
