#include "main.h"
/**
 * _puts - prints a string to standard output
 * @str:pointer to start of string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
