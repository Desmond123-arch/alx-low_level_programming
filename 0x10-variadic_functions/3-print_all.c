#include "variadic_functions.h"
#include "string.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments to be passed in
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list type;
	char *str;

	va_start(type, format);
	while (i < strlen(format))
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
				printf("%s", str);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
			format[i] == 's') && format[i] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(type);
}
