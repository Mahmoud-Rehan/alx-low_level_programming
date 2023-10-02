#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n;
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
	write(STDOUT_FILENO, buffer, n);

	free(buffer);
	close(fd);
	return (n);
}
