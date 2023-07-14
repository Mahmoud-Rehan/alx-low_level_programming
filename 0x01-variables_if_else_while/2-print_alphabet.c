#include <stdio.h>

/**
 * main - print all alphabets in lowecase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a = 'a';

	while (a != ('z' + 1))
	{
		putchar(a);
		a++;
	}
	return (0);
}
