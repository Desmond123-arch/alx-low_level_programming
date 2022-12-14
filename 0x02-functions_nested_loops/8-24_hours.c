#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 *
*/
void jack_bauer(void)
{
	int i, j;
	int temp;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			temp = i / 10;

			_putchar(temp + '0');

			temp = i % 10;

		       _putchar(temp + '0');
		       _putchar(':');

			temp = j / 10;

			_putchar(temp + '0');

			temp = j % 10;

			_putchar(temp + '0');
			_putchar('\n');
		}
	}

}
