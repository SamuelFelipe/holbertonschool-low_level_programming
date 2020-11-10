#include "holberton.h"

/**
 * append_text_to_file - append text to a file
 * @filename: <=
 * @text_content: <=
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, v, l = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (*(text_content + l))
		l++;
	v = write(fd, text_content, l);
	if (v == -1)
		return (-1);
	close(fd);
	return (1);
}
