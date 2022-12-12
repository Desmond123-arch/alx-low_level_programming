#include <stdio.h>
/**
 * main - prints possible combinations of 2 2-digit numbers
 * @i - first intializer
 * @j - second intializer
 * @k - third intializer
 * @l - fourth intializer
 *
 * Return:0 always
*/
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
