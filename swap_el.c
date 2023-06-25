#include "monty.h"

/**
 * swap - Swaps the top elements
 * @stack: Stack of elements
 * @line_number: line of the file
 *
 * Description: swap
 * Return: Nothing
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int tmp;

	temp = *stack;
	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%i: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = temp->n;
	temp->n = temp->next->n;
	temp->next->n = tmp;
}
