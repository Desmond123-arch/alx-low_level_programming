#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - prints a string in reverse
 * @s: pointer to the first element in the string
 */
void print_rev(char *s)
{
	int len = _strlen(s) - 1;

	while (len >= 0)
	{
		_putchar(*(len + s));
		len--;
	}
	_putchar('\n');
}
