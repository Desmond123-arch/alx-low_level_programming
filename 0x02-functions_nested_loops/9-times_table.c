#include "main.h"
/**
 * times_table - prints the 9 times table
 *
*/
void times_table(void)
{
	int i = 0;
	int  j = 0;
	int temp;
	int product;

	while (i < 10)
	{
		while (j < 10)
		{
			product = i * j;
			temp = product;

			if (product > 9)
			{
				temp = product / 10;
				_putchar(temp + '0');
				temp = product % 10;
				_putchar(temp + '0');


			}
			else
			{

				_putchar(product + '0');
				_putchar(' ');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		j = 0;
		i++;
		_putchar('\n');
	}
}


