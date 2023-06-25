#include "monty.h"

/**
 * multi - multiply the top elements
 * @stack: Stack of elements
 * @line_number: line of the file
 *
 * Description: swap
 * Return: Nothing
 */

void multi(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	temp = *stack;
	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%i: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp->next->n *= temp->n;
	*stack = temp->next;
	free(temp);
}
