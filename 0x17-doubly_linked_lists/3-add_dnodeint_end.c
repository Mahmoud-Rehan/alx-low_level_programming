#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds node at the end.
 * @head: Doubly linked list.
 * @n: integer value.
 * Return: The updated linked list.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	tmp = *head;

	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	new->prev = tmp;

	return (new);
}
