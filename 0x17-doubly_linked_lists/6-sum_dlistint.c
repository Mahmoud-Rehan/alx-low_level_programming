#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

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
