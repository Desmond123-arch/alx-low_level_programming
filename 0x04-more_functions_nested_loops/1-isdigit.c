#include "main.h"
/**
 * _isdigit - checks range of digits
 *
 * @c: function parameter
 *
 * Return: 1 (success) 0(otherwise)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
