#include "main.h"
/**
 * leet - encodes character with 1337
 * @s: pointer to first char of string
 * Return: pointer to first char
 */
char *leet(char *s)
{
	char *a = "AEOTL";
	char *b = "aeotl";
	char *c = "43071";
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (s[i] == a[j] || s[i] == b[j])
			{
				s[i] = c[j];
			}
		}
	}
	return s;
}
