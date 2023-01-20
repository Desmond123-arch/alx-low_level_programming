#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments to be passed in
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j;
	va_list type;
	char *str;

	va_start(type, format);
	while (format[i] != '\0' && format != NULL)
	{
		/*check particular string */
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(type, int));
				break;
			case 'i':
				printf("%i", va_arg(type, int));
				break;
			case 'f':
				printf("%f", va_arg(type, double));
				break;
			case 's':
				str = va_arg(type, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				j = 0;
				while (str[j] != '\0')
				{
					printf("%c", str[j++]);
				}
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
			|| format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(type);
}
