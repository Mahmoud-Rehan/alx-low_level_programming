#include "main.h"

/**
 * print_last_digit - Prints the last digit.
 *
 * @n: The checked integer.
 *
 * Return: n
int print_last_digit(int n)
{
	n = n % 10;
	_putchar(n);
	return (n);
}
