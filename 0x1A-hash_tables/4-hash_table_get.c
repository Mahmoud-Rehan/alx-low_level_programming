#include "hash_tables.h"


/**
 * hash_table_get - Retrieves a Value from a hash table.
 * @ht: The hash table.
 * @key: The key element.
 * Return: The value associated with the key.
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new;
	unsigned long int idx;

	if (ht == NULL || key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}

	idx = key_index((const unsigned char *)key, ht->size);

	if (idx >= ht->size)
	{
		return (NULL);
	}

	new = ht->array[idx];

	while (new != NULL && strcmp(new->key, key) != 0)
	{
		new = new->next;
	}

	if (!new)
	{
		return (NULL);
	}

	return (new->value);
}
