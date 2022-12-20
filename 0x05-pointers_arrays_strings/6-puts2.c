#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - prints every other character of a string
 * @str: pointer to first character
 */
void puts2(char *str)
{
	int len = _strlen(str);
	int i = 0;

	while (len > 0)
	{
		_putchar(*str);
		if (i > len)
		{
			break;
		}
		else
		{
			str = str + 2;
		}
		i++;
		len--;
	}
	_putchar('\n');
}
