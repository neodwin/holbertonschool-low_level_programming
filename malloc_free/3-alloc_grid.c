#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: j
 * @height: x
 * Return: pointer of the first element, NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **i;
	int j = 0;
	int x = 0;
	int y = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	i = malloc(sizeof(int *) * height);
	if (i == NULL)
	{
		free(i);
		return (NULL);
	}
	while (x < height)
	{
		i[x] = malloc(sizeof(int) * width);
		if (i[x] == NULL)
		{
			while (y <= x)
			{
				free(i[y]);
				y++;
			}
			free(i);
			return (NULL);
		}
		while (j < width)
		{
			i[x][j] = 0;
			j++;
		}
		x++;
	}
	return (i);
}
