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
	dlistint_t *tmp;
	int n = 0;

	tmp = h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		n++;
		tmp = tmp->next;
	}

	return (n);
}
