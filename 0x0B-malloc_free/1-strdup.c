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
	char *ch;
	/* check for NULL cases */
	if (str == NULL)
		return (NULL);
	ch = (char *) malloc(sizeof(char) * (strlen(str) + 1));
	if (ch == NULL)
		return (NULL);
	strcpy(ch, str);
	return (ch);
}
