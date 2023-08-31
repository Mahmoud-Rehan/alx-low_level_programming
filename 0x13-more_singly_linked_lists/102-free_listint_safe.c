#include "lists.h"

/**
 * free_listint_safe - Frees list.
 * @h: Pointer to list.
 * Return: List count.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp = (*h);
	size_t count = 0;

	if ((*h) == NULL || h == NULL)
		return (0);

	while (*h != NULL)
	{
		if (((*h) - (*h)->next) > 0)
		{
			(*h) = (*h)->next;
			free(temp);
			temp = (*h);
			count++;
		}
		else
		{
			free(*h);
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
