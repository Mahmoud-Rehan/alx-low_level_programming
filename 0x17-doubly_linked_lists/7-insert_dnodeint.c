#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at index.
 * @h: Doubly linked list.
 * @idx: index of element.
 * @n: Integer number.
 * Return: The Updated list.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *tmp;
	unsigned int num;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		tmp = *h;
		num = 1;

		if (tmp != NULL)
			while (tmp->prev != NULL)
				tmp = tmp->prev;
		while (tmp != NULL)
		{
			if (num == idx)
			{
				if (tmp->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = tmp->next;
						new->prev = tmp;
						tmp->next->prev = new;
						tmp->next = new;
					}
				}
				break;
			}
			tmp = tmp->next;
			num++;
		}
	}
	return (new);
}
