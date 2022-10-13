#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print all valid arguments passed
 * @format: string containing format
 * @...: optional number of arguments
*/
void print_all(const char * const format, ...)
{
	int j, k;
	char *str;
	va_list list;

	j = k = 0;
	while (format && format[k])
		k++;
	va_start(list, format);
	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
			{
				printf("%c", va_arg(list, int));
				break;
			}
			case 'i':
			{
				printf("%d", va_arg(list, int));
				break;
			}
			case 'f':
			{
				printf("%f", va_arg(list, double));
				break;
			}
			case 's':
			{
				str = va_arg(list, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			}
		}
			j++;
			if (j < k)
				printf(" ");
	}
	va_end(list);
	printf("\n");
}
