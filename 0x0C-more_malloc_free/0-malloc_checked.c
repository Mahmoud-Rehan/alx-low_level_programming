#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The size of memory.
 * Return: The address of memory.
 */

void *malloc_checked(unsigned int b)
{
	return (malloc(b));
}
