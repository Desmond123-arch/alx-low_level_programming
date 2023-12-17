#include "main.h"
/**
 * _islower -  checks for lowercase character
 *  @c:function parameter
 *
 * Return: 1(success).
 * On error, 0 is returned
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
