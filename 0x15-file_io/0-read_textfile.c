#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t n;
	ssize_t bytes;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	n = read(fd, buffer, letters);
	bytes = write(STDOUT_FILENO, buffer, n);

	close(fd);
	return (bytes);
}
