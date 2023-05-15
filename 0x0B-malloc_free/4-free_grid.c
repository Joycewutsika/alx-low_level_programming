#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - prints a grid of integers
 * @grid: address of 2 dimensional grid
 * @height: height of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}

