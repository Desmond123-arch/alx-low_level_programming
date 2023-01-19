#include "variadic_functions.h"
#include "string.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments to be passed in
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j;
	va_list type;
	char *str;
	int flag = 1;

	va_start(type, format);
	while (i < strlen(format))
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(type, int));
				break;
			case 'i':
				printf("%d", va_arg(type, int));
				break;
			case 'f':
				printf("%f", va_arg(type, double));
				break;
			case 's':
				str = va_arg(type, char *);
				if (str == NULL)
				{
					printf("(nil)");
					flag = 0;
				}
				j = 0;
				while (str[j] != '\0' && flag)
				{
					printf("%c", str[j++]);
				}
				break;
		}
		if (i != 0 && (i + 1) != strlen(format))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
