#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"
/**
 * main - calculate number of cents needed to be given to someone
 * @argc: argument counter 
 * @argv: amount of cents
 * Return: number of cents to be given
 */
int main(int argc, char *argv[])
{
	int coins;
	int cents = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	coins = atoi(argv[1]);

	if (coins < 0)
	{
		printf("Error\n");
		return (1);
	}
	while (coins)
	{
		if (coins >= 25)
		{
			cents += coins / 25;
			coins = coins % 25;
		}
		if (coins >= 10)
		{
			cents += coins / 10;
			coins = coins % 10;
		}
		if (coins >= 5)
		{
			cents += coins / 5;
			coins = coins % 5;
		}
		if (coins >= 2)
		{
			cents += coins / 2;
			coins = coins % 2;
		}
		if (coins >= 1)
		{
			cents += coins;
			coins = coins % 1;
		}
	}

	printf("%d\n",cents);
	return (0);
}

