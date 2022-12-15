#include "main.h"
/**
 * more_numbers - print 0 to 14 10 times
 */
void more_numbers(void)
{
	int i = 0;
	int temp; 
	int times = 10;
	while(times)
	{
		for (i = 0; i < 15; i++)
		{
			temp = i;
			if (i > 9)
			{

			_putchar((i / 10) + '0');
			temp = i % 10;
			}
		_putchar(temp + '0');
		}
		times--;
		_putchar('\n');
	}
}

