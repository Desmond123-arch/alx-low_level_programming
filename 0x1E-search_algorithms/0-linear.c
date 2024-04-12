#include "search_algos.h"
/**
 * linear_search -  searches for a value in an array of integer
 * using the Linear search algorithm
 * @array: pointer to first item in array
 * @size: size of the array to search
 * @value: value of n to search
 * Return: Pointer to first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
