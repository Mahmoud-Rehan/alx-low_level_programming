#include "hash_tables.h"


/**
 * shash_table_create - Creates a sorted hash table.
 * @size: Size of the hash table.
 * Return: The newly created hash table.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sorted_table;
	unsigned long int n;

	sorted_table = malloc(sizeof(shash_table_t));

	if (sorted_table == NULL)
	{
		return (NULL);
	}

	sorted_table->size = size;
	sorted_table->shead = NULL;
	sorted_table->stail = NULL;
	sorted_table->array = malloc(sizeof(shash_node_t) * size);

	if (sorted_table->array == NULL)
	{
		free(sorted_table);
		return (NULL);
	}

	for (n = 0; n < size; n++)
	{
		sorted_table->array[n] = NULL;
	}

	return (sorted_table);
}


/**
 * shash_node_create - Creates a node for the sorted hash table.
 * @key: The key of the data.
 * @value: The value of the data.
 * Return: The new node or NULL.
 */

shash_node_t *shash_node_create(const char *key, const char *value)
{
	shash_node_t *sorted_node;

	sorted_node = malloc(sizeof(shash_node_t));

	if (sorted_node == NULL)
	{
		return (NULL);
	}

	sorted_node->key = strdup(key);

	if (sorted_node->key == NULL)
	{
		free(sorted_node);
		return (NULL);
	}

	sorted_node->value = strdup(value);

	if (sorted_node->value == NULL)
	{
		free(sorted_node->key);
		free(sorted_node);
		return (NULL);
	}

	sorted_node->next = NULL;
	sorted_node->snext = NULL;
	sorted_node->sprev = NULL;

	return (sorted_node);
}


/**
 * add_node - Add a node to the sorted hash table.
 * @shash_table: The sorted hash table.
 * @node: The node to be added to the sht.
 */

void add_node(shash_table_t *shash_table, shash_node_t *node)
{
	shash_node_t *temp;

	if (shash_table->shead == NULL && shash_table->stail == NULL)
	{
		shash_table->shead = node;
		shash_table->stail = node;
		return;
	}

	temp = shash_table->shead;

	while (temp != NULL)
	{
		if (strcmp(node->key, temp->key) < 0)
		{
			node->snext = temp;
			node->sprev = temp->sprev;
			temp->sprev = node;

			if (node->sprev != NULL)
			{
				node->sprev->snext = node;
			}
			else
			{
				shash_table->shead = node;
			}
			return;
		}
		temp = temp->snext;
	}

	node->sprev = shash_table->stail;
	shash_table->stail->snext = node;
	shash_table->stail = node;
}


/**
 * shash_table_set - Add an element to the sorted hash table.
 * @ht: The hash table.
 * @key: The key of the data.
 * @value: The value of the data.
 * Return: 1 (Success) or 0.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	char *new_str;
	shash_node_t *shash_node, *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
	{
		return (0);
	}

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_str = strdup(value);

			if (new_str == NULL)
			{
				return (0);
			}
			free(temp->value);
			temp->value = new_str;
			return (1);
		}
		temp = temp->next;
	}

	shash_node = shash_node_create(key, value);

	if (shash_node == NULL)
	{
		return (0);
	}
	shash_node->next = ht->array[idx];
	ht->array[idx] = shash_node;
	add_node(ht, shash_node);
	return (1);
}


/**
 * shash_table_get - Gets a value of the given key.
 * @ht: The sorted hash table.
 * @key: The key of the value.
 * Return: The value or NULL.
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}

	return (NULL);
}


/**
 * shash_table_print - Prints the sorted hash table.
 * @ht: The sorted hash table to be printed.
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	char f = 0;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}

	printf("{");
	temp = ht->shead;

	while (temp != NULL)
	{
		if (f == 1)
		{
			printf(", ");
		}
		printf("'%s': '%s'", temp->key, temp->value);
		f = 1;
		temp = temp->snext;
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - Print a sorted hash table in revers order.
 * @ht: The sorted hash table to printed.
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	char f = 0;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}

	printf("{");
	temp = ht->stail;

	while (temp != NULL)
	{
		if (f == 1)
		{
			printf(", ");
		}
		printf("'%s': '%s'", temp->key, temp->value);
		f = 1;
		temp = temp->sprev;
	}
	printf("}\n");
}


/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: the hash table.
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int n;
	shash_node_t *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
	{
		return;
	}
	for (n = 0; n < ht->size; n++)
	{
		while (ht->array[n] != NULL)
		{
			temp = ht->array[n]->next;
			free(ht->array[n]->key);
			free(ht->array[n]->value);
			free(ht->array[n]);
			ht->array[n] = temp;
		}
	}

	free(ht->array);
	ht->array = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	ht->size = 0;
	free(ht);
}
