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
	FILE *file;
	char line[256];

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");

	while (fgets(line, sizeof(line), file))
	{
		printf("%s", line);
	}
	fclose(file);

	return (0);
}
