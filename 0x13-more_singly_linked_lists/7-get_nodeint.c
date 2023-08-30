#include "lists.h"

/**
 * get_nodeint_at_index - Get node.
 * @head: Pointer to the list.
 * @index: Position.
 * Return: temp.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (NULL);

	return (temp);
}
