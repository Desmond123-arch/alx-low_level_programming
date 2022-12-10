#include <stdio.h>
/**
 * main - print all possible combinations of single digit numbers
 * @i - stores first number
 * @j - second number
 * @k - third number
 * TODO:try using only one variable
 * Return: 0 always (success)
*/
int main(void)
{
	int i, j;

	for (i = 1; i <= 9; i++)
{
	for (j = 0; j < pow(10, i); j++)
	{
	int k;
		for (k = 0; k < i; k++)
		{
			putchar('0' + j / pow(10, k) % 10);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	}
	return (0);
}

