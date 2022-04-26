#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements
 * @h: head of list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}


