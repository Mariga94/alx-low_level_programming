#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 *
 * Return: print key/value in the order they appear else,
 * print nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	
	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while(node != NULL)
			{
				printf("'%s': '%s'",node->key, node->value);
				node = node->next;
				if (node != NULL)
					print(", ");
			}
		}
	}
}