#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array
 * @n: The lengthof the array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
