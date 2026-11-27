#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_all - print anything
* @format: a list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	unsigned int i;
	char *separator;

	va_start(args, format);

	i = 0;
	separator = "";
	while (format != NULL && format[i] != '\0')
	{
	switch(format[i])
	{
	case 'c':
		printf("%s%c", separator, va_arg(args, int));
		separator = ", ";
		break;
	case 'i':
		printf("%s%d", separator,va_arg(args, int));
		separator = ", ";
		break;
	case 'f':
		printf("%s%f", separator, va_arg(args, double));
		separator = ", ";
		break;
	case 's':
		str = va_arg(args, char *);
		if (str == NULL)
		{
		printf("(nil)");
		}
		printf("%s%s", separator, str);
		separator = ", ";
		break;
	}
	i++;
	}
	printf("\n");
	va_end(args);
}
