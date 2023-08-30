#include "lists.h"

/**
 * pop_listint - Deletes the head node of a list.
 * @head: Pointer to list.
 * Return: The data in the list.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = (*head);
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	(*head) = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}
