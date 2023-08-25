#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a  list.
 * @h: Pointer to the list.
 * Return: Number of elements.
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != 0)
	{
		counter++;
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (counter);
}
