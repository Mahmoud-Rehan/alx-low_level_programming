#include "3-calc.h"
#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Check the code.
 * @argc: Arguments count.
 * @argv: Arguments array.
 * Return: 0 Always.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int n1, n2;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	s = argv[2];

	if (get_op_func(s) == NULL || s[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*s == '/' && n2 == 0) || (*s == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(s)(n1, n2));
	return (0);
}
