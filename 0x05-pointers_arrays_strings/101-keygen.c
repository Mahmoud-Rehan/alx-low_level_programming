#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - Generates random valid passwords.
 * Return: 0 Always
 */

int main(void)
{
	int password[100];
	int i, total, n;

	total = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 78;
		total += (password[i] + '0');
		putchar(password[i] + '0');
		if ((2772 - total) - '0' < 78)
		{
			n = 2772 - total - '0';
			total += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}

