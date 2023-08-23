#include "monty.h"

/**
 * _free - fuction name
 * @stack: parameter
 */

void _free(stack_t *stack)
{
	while (stack != NULL)
	{
		stack_t *temp = stack;

		stack = stack->next;
		free(temp);
	}

}
