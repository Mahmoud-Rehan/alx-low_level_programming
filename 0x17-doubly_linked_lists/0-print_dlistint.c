#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/*
 *
 * print_dlistint - Print elements of the list.
 * @h: The list.
 * Return: Number of elements.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}
