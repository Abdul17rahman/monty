#include "monty.h"

/**
 * main - test
 * @argc: argument count
 * @argv: arguments
 *
 * Description: tests our code
 * for stack, queues, LIFO, FIFO
 *
 * Return: 0 for success or exit
 */

int main(int argc, char *argv[])
{
	stack_t *top = NULL;
	FILE *file;
	char line[256];
	unsigned int num = 1;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(line, sizeof(line), file))
	{
		handle_opcode(line, num, &top);
		num++;
	}
	fclose(file);
	free_stack(top);

	return (0);
}
