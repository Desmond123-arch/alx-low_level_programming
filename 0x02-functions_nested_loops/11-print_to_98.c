#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print number to 98 starting with parameter
 *
 * @n: funtion parameter
 * Return : 0 (success)
*/
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{

			printf("%d, ", n);
			n--;
		}
		else if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}

	}
	printf("%i\n", 98);
}
