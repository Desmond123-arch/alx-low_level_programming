#include  "main.h"
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
	unsigned int  num = 0;
	unsigned int len = strlen(b);

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
		num = (num << 1) | (b[i] - '0');
	}
	return (num);
}
