#include "lists.h"
#include <stdio.h>

size_t loops(const listint_t *head);

/**
 * print_listint_safe - Print list.
 * @head: Pointer to list.
 * Return: Count.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	size_t i;

	count = loops(head);

	if (count == 0)
	{
		while (head != NULL)
		{
			count++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < count; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *) head, head->n);
	}

	return (count);
}

/**
 * loops - count list.
 * @head: Pointer to list.
 * Return: count.
 */

size_t loops(const listint_t *head)
{
	const listint_t *fast;
	const listint_t *slow;

	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = head->next->next;

	while (slow && fast && fast->next)
	{
		if (slow == fast)
		{
			slow = head;

			while (slow != fast)
			{
				count++;
				slow = slow->next;
				fast = fast->next;
			}
			fast = fast->next;
			while (slow != fast)
			{
				count++;
				fast = fast->next;
			}
			return (count);
		}
		else
		{
			slow = slow->next;
			fast = fast->next->next;
		}
	}
	return (0);
}
