#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: pointer to area to be filled
 * @n: number of bytes to be filled
 * @b: constant byte filling the memory area provided
 *
 * Return: pointet to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
