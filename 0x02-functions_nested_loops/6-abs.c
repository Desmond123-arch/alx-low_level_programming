#include "main.h"
/**
 * _abs - prints absolute value of a number
 * @n: function parameter
 * Return: 0(success)
*/
int _abs(int n)
{
	if (n < 0)
		n = -n;
	if (n == 0)
	{
		putchar('0');
		return (0);
	}

	while (n != 0)
	{	
		n %= 10;
		_putchar(n + '0');
		n /= 10;

	}
	_putchar('\n');
	return (0);
}

