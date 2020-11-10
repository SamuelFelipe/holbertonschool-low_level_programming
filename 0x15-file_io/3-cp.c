#include "holberton.h"

/**
 * _write - write in the target file
 * @fds: fd source
 * @fdt: fd target
 *
 * Return: 1 (succes)
 */

int _write(int fds, int fdt)
{
	int cs, ct;
	char buf[1024];

	while (1)
	{
		cs = read(fds, buf, 1024);
		ct = write(fdt, buf, cs);
		if (ct < 1024 || cs == -1 || ct == -1)
			break;
	}
	if (cs == -1 || ct == -1)
		return (-1);
	return (1);
}

/**
 * main - copies the content of a file to another file
 * @argc: arguments counter
 * @argv: arguments lists
 *
 * Return: always 0 (sucess)
 */

int main(int argc, char **argv)
{
	int fds, fdt, cs, ct;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fds = open(argv[1], O_RDWR);
	if (fds == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdt = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fdt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	ct = _write(fds, fdt);
	if (ct == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	cs = close(fds);
	ct = close(fdt);
	if (cs == -1 || ct == -1)
	{
		if (cs == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fds);
		if (ct == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdt);
		exit(100);
	}

	return (0);
}
