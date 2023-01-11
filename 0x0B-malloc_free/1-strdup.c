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
	/* pointer to memory allocated */
	char *ch = (char *) malloc(sizeof(str));
	/* check for NULL cases */
	if (ch == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);
	/* use strcpy function to copy string */
	strcpy(ch, str);
	return (ch);
}
