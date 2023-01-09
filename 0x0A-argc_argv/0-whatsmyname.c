#include "stdio.h"
#include "stdlib.h"

/**
 * main- prints the programs name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(__attribute__((unused))int argc, char *argv[])
{

	/*print the program name*/
	printf("%s\n", argv[0]);

	return (0);
}
