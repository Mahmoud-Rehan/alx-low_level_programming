#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of a list.
 * @head: Pointer to the list.
 * @n: The integer value.
 * Return: new or NULL.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = (*head);
	listint_t *new;

	new = (listint_t *) malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = new;
		return (*head);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	return (new);
}
