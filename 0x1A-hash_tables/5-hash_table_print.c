#include "hash_tables.h"


/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int f = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node)
		{
			if (f == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			f = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
