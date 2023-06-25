#include "monty.h"

/**
 * pint - This function prints the last element
 * @stack: Stack of elements
 * @line_number: line of the file
 *
 * Description: Prints
 * Return: Nothing
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	else
		printf("%d\n", (*stack)->n);
}
