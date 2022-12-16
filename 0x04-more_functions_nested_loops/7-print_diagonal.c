#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 *
 * @n: number of diagonals to be printed
*/

void print_diagonal(int n)
{
	int i;
	int temp;

	for (i = 0; i < n; i++)
	{
		temp = i;

		while (temp)
		{
			_putchar(' ');
			temp--;
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}


