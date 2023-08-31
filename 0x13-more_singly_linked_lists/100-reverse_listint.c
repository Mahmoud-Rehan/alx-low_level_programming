#include "lists.h"

/**
 * reverse_listint - Reverse list.
 * @head: Pointer to list.
 * Return: Reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = (*head);
	listint_t *next = (*head);

	while (next != NULL)
	{
		next = next->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	(*head) = prev;
	return (*head);
}
