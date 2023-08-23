#include "monty.h"

/**
 * execute - execute instructions
 * @stack: pointer to stack
 * @opcode: parameter
 * @numline: parameter
 */

void execute(stack_t **stack, char *opcode, unsigned int numline)
{
	unsigned int i;

	instruction_t instructions[] = {
		{"pall", pall},
		{"pint", pint},
	};

	for (i = 0; i < sizeof(instructions) / sizeof(instructions[0]); i++)
	{
		if (strcmp(opcode, instructions[i].opcode) == 0)
		{
			instructions[i].f(stack, numline);
			return;
		}
	}
	fprintf(stderr, "L%u : unknown instruction %s\n", numline, opcode);
	_free(*stack);
	exit(EXIT_FAILURE);
}
