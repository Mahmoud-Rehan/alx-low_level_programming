#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Count the elements the a linked list.
 * @h: Pointer to the linked list.
 * Return: The number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != 0)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
