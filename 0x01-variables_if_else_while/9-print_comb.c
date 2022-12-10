#include <stdio.h>
/**
 * main - print all possible combinations of single digit numbers
 * @l - stores first number
 * TODO:try using only one variable
 * Return: 0 always (success)
*/
int main(void)
{
	int l = 0;

	while (l < 10)
	{
		putchar((l % 10) + '0');
		if (l == 9)
		{
			putchar (' ');
			break;
		}
		putchar(',');
		putchar(' ');
		l++;
	}
	return (0);
}





