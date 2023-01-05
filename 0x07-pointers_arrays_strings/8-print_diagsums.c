#include "main.h"
#include "stdio.h"
/**
 * print_diagsums- prints the sum of two diagonals of a square matrix
 * @a: pointer to array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int dia1 = 0, dia2 = 0;
	int i = 0, j = 0, k = size - 1;
	int actual_size = size * size;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < actual_size; j++)
		{
			dia1 += a[j];
			j += size;
		}
		while (k < (actual_size - 1))
		{
			dia2 += a[k];
			k += size - 1;
		}
		break;
	}
	printf("%d, %d\n", dia1, dia2);
}
