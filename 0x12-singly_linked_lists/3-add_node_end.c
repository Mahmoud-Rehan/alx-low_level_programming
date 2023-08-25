#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node.
 * @head: Pointer to list_t.
 * @str: String.
 * Return: The address of list_t.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int length = 0;
	list_t *ptr;
	list_t *temp = (*head);

	while (str[length] != '\0')
	{
		length++;
	}

	ptr = (list_t *) malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = length;
	ptr->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = ptr;
		return (NULL);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = ptr;

	return (ptr);
}
