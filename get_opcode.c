#include "monty.h"

/**
 * execute_opcode - gets the opcode
 * @input: opcode
 * @x: line number
 * @stack: pointer to the stack
 *
 * Description: This function selects handles the line input
 * Return: Nothin
 */
void execute_opcode(char *input, unsigned int x, stack_t **stack)
{
	instruction_t op_instr[] = {
		{"push", push},
		{"pall", pall}
	};
	int i;

	i = 0;
	while (op_instr[i].opcode)
	{
		if (strcmp(input, op_instr[i].opcode) == 0)
		{
			op_instr[i].f(stack, x);
			break;
		}
		i++;
	}
}
