#include "main.h"
#include "stdlib.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to first letter in string
 * @c: character being searched for
 * Return: pointer to first occurance of character
 * when not found returns NULL
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
