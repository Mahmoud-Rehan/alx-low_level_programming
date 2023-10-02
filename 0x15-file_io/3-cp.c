#include "main.h"

/**
 * main - Copies the content of a file to another file.
 * @argc: Arguments count.
 * @argv: Array of strings.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int fd1, fd2;
	ssize_t w;
	ssize_t t;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_fd1 file_fd2\n");
		exit(97);
	}

	buffer = allocate_buff(argv[2]);
	fd1 = open(argv[1], O_RDONLY);
	t = read(fd1, buffer, 512);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fd1 == -1 || t == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(fd2, buffer, t);
		if (fd2 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		t = read(fd1, buffer, 512);
		fd2 = open(argv[2], O_WRONLY | O_APPEND);

	} while (t > 0);

	free(buffer);
	_close(fd1);
	_close(fd2);
	return (0);
}

/**
 * allocate_buff - Allocates memory.
 * @name: The name of the file.
 * Return: Pointer to the buffer.
 */

char *allocate_buff(char *name)
{
	char *buff;

	buff = malloc(sizeof(char) * 512);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
		exit(99);
	}

	return (buff);
}

/**
 * _close - Closes a file.
 * @file: The file.
 */

void _close(int file)
{
	int i;

	i = close(file);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
