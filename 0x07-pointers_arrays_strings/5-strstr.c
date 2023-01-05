#include "main.h"
#include "strlen.c"
/**
 * _strstr - searches for a string for any set of bytes
 * @haystack: pointer to first character in first string
 * @needle: pointer to character in substring
 * Return:pointer to the begining byte in hasystack that matches
 * one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	for (i = 0; i < _strlen(haystack); i++)
	{
		for (j = 0; j < _strlen(needle); j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (j == _strlen(needle))
			return (haystack + i);

	}
	return ('\0');
}
