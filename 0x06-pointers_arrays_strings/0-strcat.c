#include "main.h"
#include "strlen.c"
/**
 * _strcat - takes two parameters and concatenates them
 * @dest:string is appended to this string
 * @src:string that appends after the des
 * Return: pointer to the dest string
 */
char *_strcat(char *dest, char *src)
{
	int len1 = _strlen(dest);
	int len2 = _strlen(src);
	int i;

	for (i = 0; i < len2; i++)
	{
		dest[len1] = src[i];
		len1++;
	}
	return (dest);
}
