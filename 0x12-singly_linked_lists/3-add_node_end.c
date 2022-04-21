#inlclude "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - calc length of string
 * @s: string to check
 * Return: length
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
/**
 * add_node_end - adds new node at the end of the list_t
 * @head: head of link list
 * @str: string to add
 *
 * Return: address of the new element or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	int length = _strlen(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = length;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
