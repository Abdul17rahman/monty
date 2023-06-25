#include "monty.h"

/**
 * handle_opcode - Handles line input
 * @line: full line
 * @x: line number
 *
 * Description: This function selects handles the line input
 * Return: Nothin
 */

int global_val;
void handle_opcode(char line[], unsigned int x, stack_t **top)
{
	char *del, *token, *input[5];
	unsigned int num_tokens = 0;

	del = " \n\t";
	token = strtok(line, del);
	while (token != NULL)
	{
		input[num_tokens] = token;
		num_tokens++;
		token = strtok(NULL, del);
	}
	if (strcmp(input[0], "push") == 0)
	{
		global_val = atoi(input[1]);
	}
	execute_opcode(input[0], x, top);
}
