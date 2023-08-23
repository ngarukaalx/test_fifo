#include "monty.h"

/**
 * main - main fuction
 * @argc: arguments
 * @argv: stores arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	FILE *file;

	unsigned int numline = 0;

	char line[MAX_LENGTH];

	char *opcode, *str_value;

	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: %s file\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(line, MAX_LENGTH, file) != NULL)
	{
		numline++;
		opcode = strtok(line, " \t\n$");
		if (opcode != NULL && strcmp(opcode, "push") == 0)
		{
			str_value = strtok(NULL, " \t\n$");
			push(&stack, str_value, numline);
		}
		else if (opcode != NULL)
		{
			execute(&stack, opcode, numline);
		}
	}
	_free(stack);
	fclose(file);
	return (0);
}
