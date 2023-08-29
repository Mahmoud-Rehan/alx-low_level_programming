#include "lists.h"

/**
 * listint_len - Count the number of elements in a list.
 * @h: Pointer to the linked list.
 * Return: Count or 0.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
