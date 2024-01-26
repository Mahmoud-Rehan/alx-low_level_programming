#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * free_dlistint - Free list.
 * @head: Doubly linked list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (head->next != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(tmp);
}
