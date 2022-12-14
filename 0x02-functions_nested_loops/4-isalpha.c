#include "main.h"
/**
 * _isalpha - checks for alphabetic letter
 *
 * @c: funtion parameter
 *
 * Return: 1 (success)
 * on error, 0 is returned
*/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

