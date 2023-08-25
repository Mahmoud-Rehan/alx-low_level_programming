#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints the elements of a list.
 * @h: Pointer to the list.
 * Return: Number of elements.
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%lu] %s\n", (unsigned long)h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		counter++;
	}
	return (counter);
}
