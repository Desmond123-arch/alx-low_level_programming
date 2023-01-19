#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @separator : string used to seperate the numbers
 * @n: numbers of arguments to be used
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && (i + 1) != n)
		{
			j = 0;
			while (separator[j] != '\0')
			{
				printf("%c", separator[j++]);
			}
		}

	}
	printf("\n");
	va_end(args);
}
