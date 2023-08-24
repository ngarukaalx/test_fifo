#include "monty.h"

/**
 * _push - fuction name
 * @str_value: parameter
 * @numberline: parameter
 */

void _push(const char *str_value, int numberline)
{
	const char *ptr = str_value;

	if (*ptr == '-')
	{
		ptr++;
	}
	else if (*ptr < '0' || *ptr > '9')
	{
		fprintf(stderr, "L%u: usage: push integer\n", numberline);
		exit(EXIT_FAILURE);
	}
	if (str_value == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", numberline);
		exit(EXIT_FAILURE);
	}
	while (*ptr != '\0')
	{
		if (*ptr < '0' || *ptr > '9')
		{
			fprintf(stderr, "L%u: usage: push integer\n", numberline);
			exit(EXIT_FAILURE);
		}
		ptr++;
	}


}

/**
 * push - fuction name
 * @stack: param
 * @str_value: parameter
 * @numberline: parameter
 */

void push(stack_t **stack, const char *str_value, int numberline)
{
	int value;

	const char *ptr = str_value;

	stack_t *newnode = malloc(sizeof(stack_t));

	if (newnode == NULL)
	{
		write(2, "Error: malloc failed\n", 21);
		exit(EXIT_FAILURE);
	}
	_push(ptr, numberline);

	value = atoi(str_value);

	newnode->n = value;
	newnode->prev = NULL;
	newnode->next = *stack;
	if (*stack != NULL)
	{
		(*stack)->prev = newnode;
	}
	*stack = newnode;
}
