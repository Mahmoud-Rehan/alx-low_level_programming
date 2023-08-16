#include "function_pointers.h"

/**
 * array_iterator - Executes a function  on elements an array.
 * @array: The array of ints.
 * @size: The size of the array.
 * @action: Pointer to the function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (action == NULL || array == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
