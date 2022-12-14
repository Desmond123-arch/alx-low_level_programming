#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * @i - intializer
*/
void print_alphabet_x10(void)
{
	int i = 10;

	while (i)
	{
		print_alphabet();
		i--;
	}
}

