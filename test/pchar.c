#include "monty.h"

/**
 * pchar -  prints the char at the top of the stack, followed by a new line
 * @stack: pointer to top
 * @line_number: linenumber
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	if (*stack != NULL)
	{
		if ((*stack)->n >= 0 && (*stack)->n <= 127)
		{
			printf("%c\n", (*stack)->n);
			return;
		}
		else
		{
			fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

}
