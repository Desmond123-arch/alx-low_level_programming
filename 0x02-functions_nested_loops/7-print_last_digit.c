#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n:  function parameter
 * Return: value of last digit
*/
int print_last_digit(int n)
{
	if (n > 0)
		n = -n;
	if (n == 0)
	{
		return 0;
	}
	return (n % 10);
}
