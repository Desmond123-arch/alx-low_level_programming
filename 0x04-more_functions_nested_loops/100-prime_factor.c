#include <stdio.h>
/**
 * main - finds the largest prime factor of a number
 *
 *
 * Return: 0(success)
*/
int main(void)
{
	int i = 2;
	long n = 612852475143;

	while (i * i <= n)
	{
		if (n % i)
			i++;
		else
			n /= i;
	}
	printf("%ld\n", n);
	return (0);
}
