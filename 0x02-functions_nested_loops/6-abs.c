#include "main.h"
/**
 * _abs - prints absolute value of a number
 * @n: function parameter
 * @i: loop  parameter
 * @counter: stores number of digits
 * @temp: temporary stores n
 * @ array : stores digit for printing
 * Return: 0(success)
*/
int _abs(int n)
{
	int counter = 0;
	int temp = n;

	if (n < 0)
		n = -n;
	else
	{
		while (temp > 0)
		{
			temp /= 10;
			counter++;
		}

		int array[counter];
		int i = 0;

		while (n > 0)
		{
			temp = n % 10; 
			array[i] = temp;
			n /= 10;
			i++;
		}
		while (i)
		{
			_putchar (array[i] + '0');
			i--;
		}	

	}
	_putchar('\n');
	return (0);
}

