#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: separator used by strings
 * @n: number of string to be passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/* declaration of variables */
	unsigned int i, j, k;
	char *string;
	va_list str;

	va_start(str, n);
	/* loop to print string */
	for (i = 0; i < n; i++)
	{
		/* va_arg will call the next string ptr */
		string = va_arg(str, char *);
		for (j = 0; string[j] != '\0'; j++)
		{
			printf("%c", string[j]);
		}
		/* check for mutiple serapartors and separators != NULL */
		if (separator != NULL && (i + 1) != n)
		{
			k = 0;
			while (separator[k] != '\0')
			{
				printf("%c", separator[k]);
				k++;
			}
		}
	}
	printf("\n");
}
