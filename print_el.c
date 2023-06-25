#include "monty.h"

/**
 * pall - This function prints the elements
 * @stack: Stack of elements
 * @line_number: line of the file
 *
 * Description: Prints
 * Return: Nothing
 */

void pall(stack_t **stack, unsigned int line_number)
{
	unsigned int el = 0;
	stack_t *temp;
	(void)line_number;

	temp = (*stack);

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		el++;
	}
}
