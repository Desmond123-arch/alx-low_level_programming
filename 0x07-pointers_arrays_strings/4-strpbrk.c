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
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0;
	int found = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			found = 0;
			if (s[i] == accept[j])
			{
				found = 1;
			}
			if (found)
				break;
		}
		if (found == 1)
			break;
	}
	if (found)
		return (s + i);
	else
		return ('\0');

}
