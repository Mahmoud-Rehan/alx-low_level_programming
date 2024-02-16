#include "hash_tables.h"


/**
 * hash_table_print - Prints the keys and values of a hash table.
 * @ht: The hash table.
 */


void hash_table_print(const hash_table_t *ht)
{
	unsigned int long n;
	int flag = 0;
	hash_node_t *new;

	if (ht == NULL)
	{
		return (NULL);
	}

	printf("{");

	for (n = 0; n < ht->size; n++)
	{
		if (ht->array[n] != NULL)
		{
			if (flag)
			{
				printf(", ");
			}

			new = ht->array[n];

			while (new != NULL)
			{
				printf("'%s': '%s'", new->key, new->value);
				new = new->next;

				if (new != NULL)
				{
					print(", ");
				}
			}

			flag = 1;
		}
	}

	printf("}\n");
}
