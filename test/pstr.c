#include "monty.h"

/**
 * pstr - multiplies the second top element of the stack
 * with the top element of the stack
 * @stack: pointer to top
 * @line_number: linenumber
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void)line_number;

	while (current != NULL)
	{
		if (current->n >= 1 && current->n <= 127)
		{
			printf("%c", current->n);
		}
		else
		{
			putchar(10);
			return;
		}
		current = current->next;
	}
	putchar(10);

}
