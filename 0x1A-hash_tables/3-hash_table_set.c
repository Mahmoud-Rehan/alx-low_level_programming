#include "hash_tables.h"


/**
 * hash_table_set - Insert an element into a hash table.
 * @ht: The Hash table.
 * @key: The key element.
 * @value: The value element.
 * Return: The updated hash table.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *str;
	unsigned long int index;
	unsigned long int n;

	if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
	{
		return (0);
	}
	str = strdup(value);
	if (str  == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	for (n = index; ht->array[n] != NULL; n++)
	{
		if (strcmp(ht->array[n]->key, key) == 0)
		{
			free(ht->array[n]->value);
			ht->array[n]->value = str;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(str);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = str;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
