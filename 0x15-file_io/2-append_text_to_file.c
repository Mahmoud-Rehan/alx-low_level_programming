#include "main.h"

/**
 * append_text_to_file - Appends text.
 * @filename: The file.
 * @text_content: The text.
 * Return: -1 or 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;

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
	write(fd, text_content, i);

	if (fd == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
