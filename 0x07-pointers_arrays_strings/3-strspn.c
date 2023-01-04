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
	unsigned int len = 0;
	int i = 0;
	int j = 0;

	while (i <= _strlen(s) )
	{
		if (s[i] != '\0')
		{
			while(j <= _strlen(accept))
			{
				if (accept[j] == s[i])
				{
					len++;
				}
				j++;
			}
		}
		else
			return (len);
		i++;
	}
	return (len);
}
