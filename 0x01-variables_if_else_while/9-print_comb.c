#include <stdio.h>
/**
 * main - prints numbers in ascending order
 * @i - first initializer
 *
 * Return: 0 always(sucess)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}
