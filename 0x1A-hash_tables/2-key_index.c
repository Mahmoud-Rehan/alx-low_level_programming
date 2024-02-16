#include "hash_tables.h"

/**
 * key_index - Generate the key to give the index.
 * @key: The generated key.
 * @size: The size of the hash table.
 * Return: The index of key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
