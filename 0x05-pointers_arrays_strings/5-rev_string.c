#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - reverses a string
 * @s: pointer to first string character
 */
void rev_string(char *s)
{
	int len = _strlen(s) - 1;
	int i = 0;
	char temp;

	while (i < (len / 2))
	{
		temp = *(s + i);
		*(s + i) = *(s + (len - i));
		*(s + (len - i)) = temp;
		i++;
	}
}
