#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: The name of the file.
 * @text_content: String.
 * Return: 1 or -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t w;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, i);

	if (fd == -1 || w == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
