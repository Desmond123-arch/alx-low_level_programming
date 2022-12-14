#include "main.h"
/**
 * _abs - prints absolute value of a number
 * @n: function parameter
 *
 * Return: 0(success)
*/
int _abs(int n)
{
	if (n < 0)
	{
		n = -(n);
		_putchar(n);
	}
	else
		_putchar(n);
	return (0);
}

