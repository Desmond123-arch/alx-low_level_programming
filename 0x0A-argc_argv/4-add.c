#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"
/**
 * main - adds two numbers
 * @argc: arguement counter
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (isalpha(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	return (0);
}					
