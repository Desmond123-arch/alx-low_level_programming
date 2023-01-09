#include "stdio.h"
#include "stdlib.h"
/**
 * main - multiplies the two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	int result = a * b;

	printf("%d\n", result);
	return (0);
}
