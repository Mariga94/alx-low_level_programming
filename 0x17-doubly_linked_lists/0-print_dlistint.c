#include "lists.h"
/**
 * print_dlistint - prints all the elements of a linked list
 * @h: pointer reference to the head node
 * Return: prints all the elements, else return 0;
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
