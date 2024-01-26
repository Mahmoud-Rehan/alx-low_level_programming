#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/*
 * dlistint_len - Count the number of elements.
 * @h: The doubly linked list.
 * Return: The number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
