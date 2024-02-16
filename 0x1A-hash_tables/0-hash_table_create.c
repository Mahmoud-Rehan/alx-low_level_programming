#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table.
 * @size: The size of the hash table.
 *
 * Return: The new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned int n;

	ht = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		return (NULL);
	}

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (ht->array == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < size; n++)
	{
		ht->array[n] = NULL;
	}

	return (ht);
}
