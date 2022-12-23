#include "main.h"
#include "5-string_toupper.c"
/**
 * leet - encodes character with 1337
 * @s: pointer to first char of string
 * Return: pointer to first char
 */
char *leet(char *s)
{
	char a[] = "AaEeOoTtLl";
	char c[] = "4433007711";
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (a[j] == s[i])
			{
				s[i] = c[j];
			}
		}
	}
	return (s);
}
