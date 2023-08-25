#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node.
 * @head: Pointer to list_t.
 * @str: String.
 * Return: The address of head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	ptr = (list_t *) malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = length;
	ptr->next = (*head);
	(*head) = ptr;

	return (*head);
}
