#include "hash_tables.h"


/**
 * hash_table_set - Insert an element into the hash table.
 * @ht: Hash table.
 * @key: The key.
 * @value: The value.
 * Return: 1 on success or 0.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *new;

	if (ht == NULL || ht->size == 0 || ht->array == NULL)
		return (0);
	if (key == NULL || strlen(key) == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *) key, ht->size)l
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (node->value == NULL)
				return (0);
			return (1);
		}
		node = node->next;
	}

	new = create_hash_node(key, value);

	if (new == NULL)
	{
		return (0);
	}

	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}


/**
 * create_hash_node - Creates a hash node.
 * @key: The key.
 * @value: The value.
 * Return: Pointer to the created node.
 */

hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->key = strdup(key);

	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}

	new->value = strdup(value);

	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (NULL);
	}

	new->next = NULL;
	return (new);
}
