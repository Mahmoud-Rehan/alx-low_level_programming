#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Gets nth element of a list.
 * @head: Doubly linked list.
 * @index: index of element.
 * Return: Element of a linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int n;

	n = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	tmp = head;

	while (tmp != NULL)
	{
		if (n == index)
		{
			break;
		}
		n++;
		tmp = tmp->next;
	}
	return (tmp);
}
