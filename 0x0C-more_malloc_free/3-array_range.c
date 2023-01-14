#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: mininum number  and start of numbers in array
 * @max: maximum number in array
 * Return: pointer to created array
 * On error return NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, j;

	if (min > max)
		return (NULL);
	arr = malloc((max - min) * sizeof(int) + 1);
	if (arr == NULL)
		return (NULL);
	for (j = 0, i = min; i < (max - min + 1); i++, j++)
	{
		arr[j] = i;
	}
	return (arr);
}

