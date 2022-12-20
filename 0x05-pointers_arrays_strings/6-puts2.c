#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - prints every other character of a string
 * @str: pointer to first character
 */
void puts2(char *str)
{
	int len = _strlen(str);

	while (len >= 0)
	{
		_putchar(*str);
		str = +2;
		len++;
	}
	_putchar('\n');
}
