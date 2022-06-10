#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t
 * @head: head node
 * @index: index of node
 *
 * Return: node else null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
