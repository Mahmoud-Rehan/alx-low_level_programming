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

	(*head) = (*head)->next;

	n = temp->n;

	free(temp);

	return (n);
}
