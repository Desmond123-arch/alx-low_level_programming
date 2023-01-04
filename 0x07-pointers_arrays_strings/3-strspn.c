#include "main.h"
#include "strlen.c"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to first char in string
 * @accept: pointer to second string being compared to
 * Return:number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
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
		if (found == 0)
			return (i);
	}
	return ('\0');
}
