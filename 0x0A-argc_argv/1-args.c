#include "stdio.h"
/**
 * main- prints the number of arguments passed
 * @argc: argument counter
 * @argv:argument vector
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{

	/** prints the number of arguments passed */
	printf("%d\n",argc - 1);
	return (0);
}
