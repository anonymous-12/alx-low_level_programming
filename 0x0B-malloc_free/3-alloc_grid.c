#include "main.h"
#include <stdlib.h>
/**
  * alloc_grid - creates an array of integers initialized to 0
  * @width: width of the array
  * @height: height of the array
  *
  * Return: double pointer to 2d array
  */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for ((i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (--i >= 0)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
