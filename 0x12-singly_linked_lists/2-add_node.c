#include "lists.h"
int _strlen(const char *s);
/**
 * add_node - adds a new node at the beginning of a list
 * @head: Beginning of a list
 * @str: string to add
 * Return: address of new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int length = _strlen(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = length;
	new->next = *head;
	*head = new;
	return (new);
}
/**
 * _strlen - calculates the length of the string
 * @s: string
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
