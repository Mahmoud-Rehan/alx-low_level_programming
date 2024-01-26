#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Add new node at front.
 * @head: The doubly linked list.
 * @n: integer value.
 * Return: The updated list or NULL.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	
d	listint_t *new;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if ((*head) != NULL)
	{
		(*head)->prev = ne;
	}
	(*head) = new;

	return (new);
}}
