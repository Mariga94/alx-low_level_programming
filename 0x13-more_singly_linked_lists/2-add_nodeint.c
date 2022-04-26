#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - functions that adds a new node at the beginning
 * @head: head of node
 * @n: index of node
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);

}
