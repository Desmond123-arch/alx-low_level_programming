#include "main.h"
#include "strlen.c"
/**
 * _strncpy - copies a string
 * @dest: destination of copied string
 * @src: source to be copied from
 * @n: number of characters to be copied
 * Return: dest(pointer)
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[n] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
