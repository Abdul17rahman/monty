#include "monty.h"

/**
 * free_stack - Free a node of a list.
 * @head: pointer to a list
 *
 * Description: Uses a loop to traverse through a list
 * Return: Nothing
 */

void free_stack(stack_t *head)
{
	stack_t *current;

	if (head == NULL)
	{
		return;
	}
	current = head;

	while (current->next != NULL)
	{
		current = current->next;
		free(current->prev);
	}
	current->prev = NULL;
	free(current);
}
