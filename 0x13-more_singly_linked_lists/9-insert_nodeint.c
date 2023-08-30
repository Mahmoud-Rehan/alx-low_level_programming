#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node.
 * @head: Pointer to list.
 * @idx: Position.
 * @n: The intger data.
 * Return: node or NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = (*head);
	listint_t *new;
	unsigned int i = 0;

	new = (listint_t *) malloc(sizeof(listint_t *));

	if (new == NULL || (*head) == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = (*head);
		(*head) = new;
		return (new);
	}

	while (temp != NULL && i < idx)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
		{
			temp = temp->next;
		}
		i++;
	}

	return (NULL);
}
