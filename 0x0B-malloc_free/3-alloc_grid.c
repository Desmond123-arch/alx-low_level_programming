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
	int **a = malloc(width * sizeof(int *));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		a[i] = malloc(height * sizeof(int));
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
