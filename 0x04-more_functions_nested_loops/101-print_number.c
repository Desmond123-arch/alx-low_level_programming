#include "main.h"
#include <stdio.h>
/**
 * print_number - prints number
 * @n: function parameter to store value
 *
*/

void print_number(int n)
{
	int counter = -1;
	int power = 1;
	unsigned  temp;

	if (n < 0)
	{
		_putchar ('-');
		n = -n;
	}
	temp = n;
	if (n > 0)
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
			temp = n / power;
			_putchar(temp + '0');
			n = n - (temp * power);
			counter--;
			power /= 10;
		}
	}

	else if (n == 0)
		_putchar('0');
}
