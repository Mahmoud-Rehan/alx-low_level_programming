#include "main.h"
#include <stdio.h>

/**
 * main - print the program name.
 * @argc: The number of arguments.
 * @argv: The array of strings.
 * Return: 0 Always.
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
