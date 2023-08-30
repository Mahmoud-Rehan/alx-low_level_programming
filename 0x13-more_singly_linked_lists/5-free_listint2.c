#include "lists.h"

/**
 * free_listint2 - Frees a list.
 * @head: Pointer to the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = (*head);

	while (temp != NULL)
	{
		(*head) = (*head)->next;
		free(temp);
		temp = (*head);
	}

	(*head) = NULL;
}
