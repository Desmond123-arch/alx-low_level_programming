#include "search_algos.h"
/**
 * binary_search - searches an array using binary search
 * @array: pointer to first item
 * @size: size of the array
 * @value: value to search for
 * Return: index of value, -1 on error
 */
int binary_search(int *array, size_t size, int value)
{

	int low = 0;
	int high = size - 1;
	int mid;
	int i;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i + 1 <= high)
				printf(", ");
		}
		printf("\n");
		mid = (low + high) / 2;
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
			return (mid);
	}
	return (-1);
}
