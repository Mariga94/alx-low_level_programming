#include "monty.h"

/**
 * monty_push - pushes an element to the stack
 *
 * Return:
 */
char monty_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;

	if (!stack)
	{

