#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n:  function parameter
 * @l: last digit
 * Return: value of last digit
*/
int print_last_digit(int n)
{
	int l; 

	if (n > 0)
		n = -n;
	if (n == 0)
	{
		return 0;
	}
	l = n % 10;
	_putchar(l + '0');
	return l;
	
}
