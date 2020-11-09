#include "holberton.h"

/**
 * read_textfile - print the first n bytes of a file
 * @filename: <=
 * @letters: number of leters to print
 *
 * Return: on succes number of bytes printed otherwise 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, re;
	long int r = 0;
	char *buf = NULL;

	/* validate the function parameters*/
	if (!filename || letters == 0)
		return (0);
	/* open the file and confirm*/
	fd = open(filename, 0);
	if (fd == -1)
		return (0);
	/**
	 * allocate the necessary memory validate the
	 * allocation and finish it with null
	 */
	buf = malloc(letters * sizeof(char) + 1);
	if (buf == NULL)
		return (0);
	*(buf + letters) = '\0';
	/* read the file and return if it fails*/
	re = read(fd, buf, letters);
	if (re == -1)
	{
		free(buf);
		return (0);
	}
	/* write in POSIX standar output*/
	r = write(STDOUT_FILENO, buf, re);
	/* return 0 if the read result and the write result are not the same*/
	if (r != re)
	{
		free(buf);
		return (0);
	}
	/* succes output*/
	free(buf);
	close(fd);
	return (r);
}
