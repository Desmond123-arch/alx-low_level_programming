#include  "main.h"
unsigned int _pow(unsigned int  num, unsigned int exp);
/**
 * binary_to_uint - converts a binary number to an int
 * @b: b is pointing to a string of 0 and 1 chars
 * Return: the converted number of 0 if
 * there is more chars in string that is not 0 or 1
 * or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int num = atoi(b);
	unsigned int len = strlen(b);
	unsigned int sum = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; i < len; i++)
	{
		if (!(b[i] >= 48 && b[i] <= 58))
		{
			return (0);
		}
		sum += (num % 10) *  _pow(2, i);
		num = num / 10;
	}
	return (sum);
}
/**
 * _pow - return a number raised to a power
 * @num: number to be raised to power
 * @exp: power to be raised to
 * Return: power of number
 */
unsigned int _pow(unsigned int  num, unsigned int exp)
{
	unsigned int product = 1;

	while (exp)
	{
		product *= num;
		exp--;
	}
	return (product);
}
