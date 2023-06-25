#include "monty.h"

/**
 * mod - divides and gets the rem of the top elements
 * @stack: Stack of elements
 * @line_number: line of the file
 *
 * Description: modulo
 * Return: Nothing
 */

void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	temp = *stack;
	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%i: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp->next->n %= temp->n;
	*stack = temp->next;
	free(temp);
}
