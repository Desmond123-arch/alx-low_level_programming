#include "main.h"
#include "string.h"
/**
 * str_concat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: Pointer to newly allocated space  which contains
 *the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	size_t len = strlen(s1) + strlen(s2);
	int i, j;
	char *newstring = (char *)malloc(len * sizeof(char));

	if (s1  == NULL || s2 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		newstring[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		newstring[i] = s2[j];
		i++;
	}
	return (newstring);
}
