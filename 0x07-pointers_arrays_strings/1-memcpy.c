#include "main.h"
/**
 * _memcpy- copies memory area
 * @dest: location area is copied to
 * @src: source of area
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n)
	{
		*dest = *src;
		dest++;
		n--;
	}
	return (dest);
}

