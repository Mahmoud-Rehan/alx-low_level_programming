#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Sums all the integers of the list.
 * @head: Doubly linked list.
 * Return: The sum of integers.
 */

int sum_dlistint(dlistint_t *head)
{
	int n = 0;

	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
