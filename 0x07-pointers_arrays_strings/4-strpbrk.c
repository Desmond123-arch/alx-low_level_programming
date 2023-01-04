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
	int i = 0;
	int j = 0;
	int pos = 0;
	int found;

	while (*(s + i))
		i++;
	pos = i;
	i = 0;
	while (*(accept + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (accept[i] == s[j])
			{
				if (j <= pos)
				{
					pos = j;
					found = 1;
				}
			}
			j++;
		}
		i++;
	}
	if (found == 1)
		return (&s[pos]);
	return ('\0');

}
