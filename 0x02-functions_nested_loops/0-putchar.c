#include "main.h"
/**
 * main - prints _putchar
 *@p - array used to store _putchar
 * Return: 0 always
*/
int main(void)
{
	char p[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(p[i]);
		
	}
	_putchar('\n');
	return (0);
}
