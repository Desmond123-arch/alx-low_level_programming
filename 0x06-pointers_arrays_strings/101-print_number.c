#include "main.h"
#include <stdio.h>
/**
 * print_number - prints number
 * @n: function parameter to store value
 *
*/

void print_number(int n)
{
	unsigned  int j = n;

	int counter = -1;
	int power = 1;
	int temp;

	if (n < 0)
	{
		_putchar ('-');
		j = -j;
	}
	temp = n;
	if (j > 0)
	{
		while (temp > 0)
		{
			temp /= 10;
			counter++;
		}
		while (counter)
		{
			power *= 10;
			counter--;
		}
		while (power)
		{
			temp = j / power;
			_putchar(temp + '0');
			j = j - (temp * power);
			counter--;
			power /= 10;
		}
	}

	else if (j == 0)
		_putchar('0');
}
