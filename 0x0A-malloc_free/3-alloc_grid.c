#include <stdlib.h>

/**
 * alloc_grid - creates 2 dimensional grid of integers.
 * @width: grid width.
 * @height: grid height.
 * Return: int, pointer to grid.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	i = j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	while (i < height)
	{
		*(grid + i) = malloc(width * sizeof(int));
		if (*(grid + i) == NULL)
		{
			i--;
			while (i >= 0)
			{
				free(*(grid + i));
				i--;
			}
			free(grid);
			return (NULL);
		}
		i++;
	}
	while (i < height)
	{
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);

}
