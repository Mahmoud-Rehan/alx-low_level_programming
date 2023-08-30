#include "lists.h"

/**
 * free_listint - Frees a list.
 * @head: Pointer to the list.
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
