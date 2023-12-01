#include "hash_tables.h"


/**
 * key_index - Get the index of the key.
 * @key: The key.
 * @size: The size of a hash table.
 * Return: The index.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
