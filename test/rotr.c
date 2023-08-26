#include "monty.h"

/**
 * rotr - rotates the stack to the bottom.The last element of the
 * stack becomes the top element of the stack
 * @stack: pointer to top
 * @line_number: linenumber
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		stack_t *temp = *stack;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->prev->next = NULL;
		temp->prev = NULL;
		temp->next = (*stack);
		(*stack)->prev = temp;
		*stack = temp;

	}

}
