#include "monty.h"

/**
 * rotl - The top element of the stack becomes the last one, and the second top
 * element of the stack becomes the first one
 * @stack: pointer to top
 * @line_number: linenumber
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		stack_t *temp = *stack;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = *stack;
		(*stack)->prev = temp;
		*stack = (*stack)->next;
		(*stack)->prev = NULL;
		temp->next->next = NULL;
	}

}
