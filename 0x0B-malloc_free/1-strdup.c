#include "main.h"
#include "string.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memeory
 *  which contains a copy of the string given as parameter
 *  @str: string whose copy is produced
 *  Return: pointer to newly allocated space
 *   NULL if str == NULL
 */
char *_strdup(char *str)
{
	size_t i;
	char *ch;
	/* check for NULL cases */
	if (str == NULL)
		return (NULL);

	for (i = 0; i < strlen(str); i++)
	{
		ch = (char *) malloc(sizeof(char) * (i + 1));
		if (ch == NULL)
			return NULL;
	}

	strcpy(ch, str);
	return (ch);
}
