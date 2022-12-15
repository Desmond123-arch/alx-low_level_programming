#include "main.h"
/**
 * more_numbers - print 0 to 14 10 times
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 15; i++)
	{
		if (i > 9)
		{
			_putchar((i / 10) + '0');
			i = i % 10;
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}

