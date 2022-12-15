#include "main.h"
/**
 * times_table - prints the 9 times table
 *
*/
void times_table(void)
{
	int i = 0;
	int  j = 0;
	int temp, product;

	while (i < 10)
	{
		while (j < 10)
		{
			product = i * j;
			temp = product;
			if (product > 9)
			{
				_putchar(',');
				_putchar(' ');
				temp = product / 10;
				_putchar(temp + '0');
				temp = product % 10;
				_putchar(temp + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(product + '0');
			}
			j++;
		}
		j = 0;
		i++;
		_putchar('\n');
	}
}


