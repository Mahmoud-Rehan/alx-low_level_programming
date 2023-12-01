#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: Hash table size.
 * Return: Pointer to the created hash table or NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i = 0;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}

	return (table);
}
