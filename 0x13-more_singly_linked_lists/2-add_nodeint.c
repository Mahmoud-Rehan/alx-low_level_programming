#include "lists.h"

/**
 * add_nodeint - Adds a node at the beginning of a list.
 * @head: Pointer to the list.
 * @n: The integer value.
 * Return: head or NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *) malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
