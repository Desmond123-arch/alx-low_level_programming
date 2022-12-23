#include "main.h"
/**
 * cap_string - capitalizes the letters of a string taking seperators
 *
 * @s: pointer to fist letter
 * Return:pointer to first letter
 */
char *cap_string(char *s)
{
	int i = 0;

	if (s[0] >= 97 && s[0] <= 122)
		s[0] = s[0] - 32;

	while (s[i] != '\0')
	{
		if (s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' ||
				s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{'
				|| s[i] == '}' || s[i] == '\n' || s[i] == ' ' || s[i] == '\t')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
		i++;

	}
	return (s);
}
