#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints half of a string
 * @str: pointer to the first string character
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int n;

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
		n = (len - 1) / 2;

	while (n < len)
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
