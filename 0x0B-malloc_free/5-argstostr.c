#include "holberton.h"

/**
 * argstostr - concatenates all the arguments
 * @ac: argc
 * @av: argv
 *
 * Return: NULL if ac == 0 or av == NULL otherwise pointer to
 * a new array
 */

char *argstostr(int ac, char **av)
{
	int i, j, l = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, l++)
	for (j = 0; i < ac; j++, l++)
		if (av[i][j] == '\0')
			break;

	s = malloc((l + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	l = 0;
	for (i = 0; i < ac; i++, l++)
	for (j = 0; i < ac; j++, l++)
	{
		if (av[i][j] == '\0')
		{
			*(s + l) = '\n';
			break;
		}
		*(s + l) = av[i][j];
	}
	*(s + (l + 1)) = '\0';
	return (s);
}
