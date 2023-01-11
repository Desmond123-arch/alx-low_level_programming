#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"
/**
 * main - calculate number of cents needed to be given to someone
 * @argc: argument counter
 * @argv: amount of cent
 * Return: number of cents to be given
 */
int main(int argc, char *argv[])
{
	int coins, cents = 0;
	int i;

	/*array to store values of coins*/
	int value[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coins = atoi(argv[1]);

	if (coins <= 0)
	{
		printf("0\n");
		return (1);
	}
	/*use a for loop to loop through array */
	for (i = 0; i < 5 && coins != 0; i++)
	{
		/*divide and modulate to chage value of coins left */
		if (value[i] <= coins)
		{
			cents += coins / value[i];
			coins = coins % value[i];
		}
	}
	printf("%d\n", cents);
	return (0);
}
