#include "main.h"
/**
 * alloc_grid - pointer to a 2d array
 * @width: width of array
 * @height: height of array
 * Return: a pointer to a 2 dimensional array of integers
 * NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a = malloc(height * sizeof(int *));

	if (width < 1 || height < 1)
		return (NULL);
	if (a == NULL)
	{
		free(a);
		return(NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if(a[i] == NULL)
		{
			for(i--; i >= 0; i--)
				free(a[i]);
			free(a);
			return (NULL);
		}

	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
