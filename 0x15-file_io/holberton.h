#ifndef HOLBERTON_H
#define HOLBERTON_H

/*****************************************************************************/

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/*****************************************************************************/

/* prints a character. */
int _putchar(char);

/* reads a text file and prints it to the POSIX standard output. */
ssize_t read_textfile(const char *, size_t);

/* create and fill a file. */
int create_file(const char *filename, char *text_content);

/*****************************************************************************/


#endif
