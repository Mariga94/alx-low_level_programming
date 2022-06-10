#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t
 * @h: header pointer reference to dlistint_t
 *
 * Return: length of dlistint_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
