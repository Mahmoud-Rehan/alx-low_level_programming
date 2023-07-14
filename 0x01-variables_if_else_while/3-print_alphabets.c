#include <stdio.h>
/**
 * main - Print all alphabet in lowercase and uppercase.
 *
 * Return: Always 0 (Success)
int main(void)
{
	char c = 'a';
	char a = 'C';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
