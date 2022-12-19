#include "main.h"
/**
 * _strlen - checks the length of a string
 * @s: pointer to first value of a string
 * Return: length of string
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')

	{
		_putchar(*s);
		s++;
		len++;
	}
	return (len);
}
