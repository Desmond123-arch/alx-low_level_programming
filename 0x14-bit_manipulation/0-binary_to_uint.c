#include "main.h"
#include "ctype.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number or 0 if if there is more than one char
 * or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int len = strlen(b);
	unsigned int num = 0;
	int i  = 0;

	if (b == NULL)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		num <<= 1;
		num += b[i] - '0';
		i++;
	}
	return (num);

}
