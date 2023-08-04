#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: the number of arguments.
 * @argv: the array of strings.
 * Return: 0 Always.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
