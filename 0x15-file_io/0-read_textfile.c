#include "main.h"

/**
 * read_textfile - Reads a text file and prints it.
 * @filename: The text file.
 * @letters: The number of letters.
 * Return: Number of bytes or 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n;
	ssize_t w;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	n = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, n);

	free(buffer);
	close(fd);
	return (w);
}
