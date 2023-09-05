#include "main.h"
#include "stdio.h"

char *allocate(char *filename);
void close_file(int file);
void check_args(int args);

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, r;
	char *buffer;

	check_args(argc);

	buffer = allocate(argv[2]);

	file_from = open(argv[1], O_RDONLY);
	r = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		write(file_to, buffer, r);
		if (file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buffer);
	close_file(file_from);
	close_file(file_to);

	return (0);
}

/**
 * check_args - check arguments.
 * @args: arguments.
 */

void check_args(int args)
{
	if (args != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * allocate - allocate memory.
 * @filename: The file.
 * Return: dest.
 */

char *allocate(char *filename)
{
	char *dest;

	dest = malloc(sizeof(char) * 1024);

	if (dest == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (dest);
}

/**
 * close_file - Closes file descriptors.
 * @file: The file descriptor to be closed.
 */

void close_file(int file)
{
	int i;

	i = close(file);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
