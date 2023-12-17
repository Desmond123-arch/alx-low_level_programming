#include "main.h"
/**
 * _strncat - works the same as strcat function
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be conacatenated
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len] = src[i];
		dest_len++;
	}
	return (dest);
}
