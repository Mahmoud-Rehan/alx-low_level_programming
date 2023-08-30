#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index.
 * @head: Pointer to list.
 * @index: Position.
 * Return: 1 or -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = (*head);
	listint_t *ptr;
	unsigned int i = 0;

	if ((*head) == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);

		temp = temp->next;
		i++;
	}

	ptr = temp->next;
	temp->next = ptr->next;
	free(ptr);
	return (1);
}
