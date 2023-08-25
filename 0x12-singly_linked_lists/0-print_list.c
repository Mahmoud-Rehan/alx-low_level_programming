#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	int counter = 0;
	
	while (h != 0)
	{
		counter++;
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (counter);
}
