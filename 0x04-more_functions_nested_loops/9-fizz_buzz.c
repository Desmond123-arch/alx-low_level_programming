#include <stdio.h>
/**
 * main - prints fizz buzz or fizzbuzz
 *
 * Return: 0 sucess
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
