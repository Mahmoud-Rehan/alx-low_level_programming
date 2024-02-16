#include "hash_tables.h"

/**
 * hash_table_delete - Deletes The entire hash table.
 * @ht: The hash table.
 */


void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *new, *temp;
	hash_table_t *hash_table = ht;
	unsigned long int n;

	for (n = 0; n < ht->size; n++)
	{
		if (ht->size[n] != NULL)
		{
			new = ht->array[n];

			while (new)
			{
				new = temp;
				new = new->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
		}
	}

	free(hash_table->array);
	free(hash_table);
}
