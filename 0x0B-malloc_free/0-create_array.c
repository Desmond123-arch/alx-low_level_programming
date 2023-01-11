#include "main.h"
#include "string.h"
/**
 * create_array - creates an array of chars,
 *and initializes it with a specific char
 * @size: size of array
 * @c: character to intialed in array
 * Return:Null if size = 0 and
 * pointer to the array if size fails(size != NULL)
 */
char *create_array(unsigned int size, char c)
{
	/* pointer to allocated memory */
	char *ch = (char *)malloc(sizeof(char) * size);

	if (ch == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	memset(ch, c, size);

	return (ch);
}

