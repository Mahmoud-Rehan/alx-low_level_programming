#include "main.h"

int pal(char *s, int i, int length);
int length(char *s);

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: the string.
 * Return: 1 or 0.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (pal(s, 0, length(s)));
}

/**
 * length - returns the length of a string
 * @s: the string.
 * Return: the length of the string.
 */

int length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + length(s + 1));
}

/**
 * pal - checks for palindrome.
 * @s: the string.
 * @i: integer.
 * @length: the length of the string.
 * Return: 1 or 0.
 */

int pal(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
	{
		return (0);
	}
	if (i >= length)
	{
		return (1);
	}
	return (pal(s, i + 1, length - 1));
}

