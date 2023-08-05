#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check if there are digit.
 * @str: array.
 * Return: 0 or 1.
 */

int check_num(char *str)
{
	int count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - adds positive numbers..
 * @argc: Count arguments.
 * @argv: Arguments.
 * Return: 0 Always.
 */

int main(int argc, char *argv[])
{
	int counter = 1;
	int n;
	int sum = 0;

	while (counter < argc)
	{
		if (check_num(argv[counter]))
		{
			n = atoi(argv[counter]);
			sum = sum + n;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		counter++;
	}
	printf("%d\n", sum);
	return (0);
}
