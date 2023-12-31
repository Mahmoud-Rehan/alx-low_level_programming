#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The fle name.
 * @text_content: The string.
 * Return: 1 or -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t w;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, i);

	if (fd == -1 || w == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
