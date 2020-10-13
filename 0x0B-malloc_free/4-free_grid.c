#include "holberton.h"

/**
 * free_grid - free a matix 2D
 * @grid: matrix
 * @height: <=
 *
 * Return: none
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}
