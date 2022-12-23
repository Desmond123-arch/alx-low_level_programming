#include "main.h"
/*
 * cap_string - capitalizes the first letter in a string
 * @s: pointer to first char in string
 * Return: char pointer to string
 */
char *cap_string(char *string)
{
	int i = 0;
	while (string[i] != '\0')
	{
		if (string[0] >= 97 && string[0] <= 122)
				string[0] = string[0] - 32;
		if (string[i] == ' ' || string[i] == '\t' || string[i] == '\n'
		    || string[i] == ',' || string[i] == ';' || string[i] == '.'
		    || string[i] == '.' || string[i] == '!' || string[i] == '?'
		    || string[i] == '"' || string[i] == '(' || string[i] == ')'
		    || string[i] == '{' || string[i] == '}')
		{
			if(string[i + 1] >= 97  && string[i + 1] <= 122)
				string[i + 1] = string[i + 1] - 32;
		}
	      i++;
	}

	return (string);
}


