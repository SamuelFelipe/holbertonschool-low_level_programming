#include "holberton.h"

/**
 * alloc_grid - creates and initialize an matrix
 * @width: <=
 * @height: <=
 *
 * Return: NULL for error or input value invalid,
 * owtherwise pointer to the matrix
 */

int **alloc_grid(int width, int height)
{
	int i, j, **r;

	r = malloc(height * sizeof(int));
	for (i = 0; i < height; i++)
		*(r + i) = malloc(width * sizeof(int));
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			r[i][j] = 0;
	return (r);
}
