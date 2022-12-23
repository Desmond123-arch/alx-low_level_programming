#include "main.h"
/**
 * rot13 - encodes characters using the rot13 cipher
 * @s: pointer to first char in string
 * Return: pointer to first char
 */
char *rot13(char *s)
{
	char a[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while ( a[j] != '\0')
		{
			if (s[i] == a[i] && (a[j] != 'N' || a[j] != 'n' ))
				s[i] = a[j + 13];
			else
				s[i] = a[j - 13];
			j++;
		}
		i++;
	}
	return s;
}
