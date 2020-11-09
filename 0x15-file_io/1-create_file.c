#include "holberton.h"

/**
 * create_file - create and fill a file
 * @filename: <=
 * @text_content: <=
 *
 * Return: on succces 1, otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, va, l = 0;

	if (filename == NULL)
		return (1);

	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (*(text_content + l))
		l++;
	va = write(fd, text_content, l);
	if (va != l)
		return (-1);

	close(fd);
	return (1);
}
