#include "main.h"
#include "2-strlen.c"

/**
 * _strcat - takes two parameters and concatenates them
 * @dest:string is appended to this string
 * @src:string that appends after the des
 * Return: pointer to the dest string
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int src_len = _strlen(src);
	int i;

	for (i = 0; i < src_len; i++)
	{
		dest[dest_len] = src[i];
		dest_len++;
	}
	return (dest);
}
