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
	int i = 0;
	int j = min;

	if (min > max)
		return (NULL);
	arr = malloc((max - min) * sizeof(int) + 1);
	if (arr == NULL)
		return (NULL);
	while (i <= max - min)
		arr[i++] = j++;
	return (arr);
}

