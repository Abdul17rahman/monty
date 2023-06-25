#include "monty.h"

/**
 * pop - This function prints the last element
 * @stack: Stack of elements
 * @line_number: line of the file
 *
 * Description: Prints
 * Return: Nothing
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	temp = *stack;
	if (*stack == NULL)
	{
		fprintf(stderr, "L%i: can't pop an empty stack\n", line_number);
	}
	else
	{
		temp = temp->next;
		free(*stack);
		*stack = temp;
	}
}
