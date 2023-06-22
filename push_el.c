#include "monty.h"

/**
 * push - This function pushes an element
 * @el: An element to be pushed
 *
 * Description: Adds an element on the top
 * Return: Nothing
 */

void push(int el)
{
	stack_t *new_node, *top;

	new_node = malloc(sizeof(stack_t));
	top = NULL;

	if (new_node == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		return;
	}
	new_node->n = el;
	new_node->prev = NULL;
	new_node->next = top;
	top = new_node;
}
