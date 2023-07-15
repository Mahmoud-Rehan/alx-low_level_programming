#include <stdio.h>

/**
 * main - Print combination of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		putchar(44);
		putchar(32);
	}
	return (0);
}
