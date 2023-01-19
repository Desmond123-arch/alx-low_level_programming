#include "3-calc.h"
/**
 * main - contains the main function
 * @argc: argument counter
 * @argv: argument vector
 * Return: 1 success
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	int A,B;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error");
		exit(99);
	}
	A = atoi(argv[1]);
	B = atoi(argv[3]);
	printf("%d\n",operation(A, B));
	return (0);
}
