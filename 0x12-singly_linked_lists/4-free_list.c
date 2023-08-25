#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t.
 * @head: Pointer to the list.
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	while (head != 0)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
