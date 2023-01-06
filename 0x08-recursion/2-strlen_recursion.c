#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to first character in string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (len);
	return (_strlen_recursion(s + 1) + 1);
	len++;
}
