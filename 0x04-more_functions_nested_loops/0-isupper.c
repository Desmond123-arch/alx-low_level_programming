#include "main.h"
/**
 * _isupper - checks if function is uppercase
 *
 * @c: function parameter
 * Return: 1(success) 0(otherwise)
 */
int _isupper(int c)
{
	if (c >= 65 && c < 97)
	{
		return (1);
	}
	return (0);
}
