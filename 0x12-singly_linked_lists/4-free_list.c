#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees list_t
 * @head: the beginning of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
