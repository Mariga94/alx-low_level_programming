#include "lists.h"
/**
 * sum_dlistint_t - sum all the data of n
 * @head: pointer reference
 *
 * Return: sum of list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
