#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * listint_len - functions that returns the number of elements
 * @h: header of node
 * Return: length of linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
