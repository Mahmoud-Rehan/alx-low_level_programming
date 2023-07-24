#include "main.h"

/**
 * swap_int - Swaps two integers.
 * @a: pointer
 * @b: pointer
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
