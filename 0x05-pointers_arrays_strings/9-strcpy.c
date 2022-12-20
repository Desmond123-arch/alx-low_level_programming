#include "main.h"
#include "2-strlen.c"
/**
 * *_strcpy - copies one string to another
 * @dest: destination of copied string
 * @src: source of string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char temp;
	int len = _strlen(src);
	int i = 0;

	while (i <= len)
	{
		temp = *(src + i);
		*(dest + i) = temp;
		i++;
	}
	return (dest);
}
