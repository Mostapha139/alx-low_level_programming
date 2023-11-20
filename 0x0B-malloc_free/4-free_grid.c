#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 *
 * @grid: matrix pointer
 * @height: rows
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int x = 0;

	for (; x < height; x++)
	{
		free(*(grid + x));
	}
	free(grid);
}
