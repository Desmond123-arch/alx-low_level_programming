#include "main.h"
#include "5-string_toupper.c"
#include <ctype.h>
/*
 * cap_string - capitalizes the first letter in a string
 * @s: pointer to first char in string
 * Return: char pointer to string
 */
char *cap_string(char *s)
{
	int i = 0;
	int flag = 0;

	while (s[i] != '\0')
	{
		if (isspace(s[i]))
		{
			flag = 1;
		}
		else if (flag)
		{
			s[i] = toupper(s[i]);
			flag = 0;
		}
		i++;
	}


	return (s);
}


