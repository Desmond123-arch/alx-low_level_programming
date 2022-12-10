#include <stdio.h>
/**
 * main - print all possible combinations of single digit numbers
 * @l - stores first number
 * @c - stores last number
 * TODO:try using only one variable
 * Return: 0 always (success)
*/
int main(void)
{
	int l = 0;
	int counter = 0;
	int c  = 10;

	while (l <= 10)
	{
		putchar((l % 10) + '0');
		putchar(',');
		putchar(' ');
		if (counter)
		{
			while (c <= 0)
			{
				putchar((l % 10) + '0');
				c--;
			}
		}
		counter = 1;
		l++;
	}
	return (0);
}





