#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: target hash table
 * @key: key
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char copy_v;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}

	copy_v = strndup(value);
	if (copy_v == NULL)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strncmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy_v;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(copy_v);
		return (0);
	}
	new->key = strndup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = copy_v;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
