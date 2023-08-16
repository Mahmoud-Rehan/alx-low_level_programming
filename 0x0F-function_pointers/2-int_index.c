#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: The array of ints.
 * @size: The size of the array.
 * @cmp: Pointer to the function.
 * Return: -1 or i.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, n;

	if (size <= 0)
	{
		return (-1);
	}

	if (array == NULL || cmp == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		n = cmp(array[i]);
		if (n != 0)
		{
			return (i);
		}
	}
	return (-1);
}
