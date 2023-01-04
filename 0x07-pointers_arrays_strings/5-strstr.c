#include "main.h"
#include "strlen.c"
/**
 * _strpbrk - searches for a string for any set of bytes
 * @s: pointer to first character in first string
 * @accept: pointer to character in string being compared
 * Return:pointer to the byte in s that matches 
 * one of the bytes in accept, 
 * or NULL if no such byte is found
 */
char *_strpbrk(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int found;
	char *ptr;

	while (i <= _strlen(haystack))
	{
		found = 0;
		while (j <= _strlen(needle))
		{
			if (haystack[i] == needle[j])
			{
				found = 1;
			}
			if (!found)
				break;
			else
			{
				ptr = &(s[i]);
				break;
			}
			j++;
		}
		i++;
	}

	return (ptr);
}	
