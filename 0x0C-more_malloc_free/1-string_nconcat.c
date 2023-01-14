#include "main.h"
/**
 * string_nconcat - newly allocated space in memory,
 *  which contains s1, followed by the first n bytes
 *  of s2, and null terminated
 *  @s1:pointer to first stirng
 *  @s2:poiner to second string
 *  @n: number of s2 bytes to be copied
 *  Return: return a pointer to the newly allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	if (n >= sizeof(s2))
		 n = strlen(s2);
	/*set null strings to empty */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str = malloc ((strlen(s1) + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	strcpy(str, s1);

	strncat(str, s2, n);
	return (str);

}
