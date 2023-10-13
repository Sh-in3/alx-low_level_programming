#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: s, d, c, i
 */

void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0;
	char c;
	char *s;
	int int_arg;
	double double_arg;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			int_arg = va_arg(args, int);
			printf("%d", int_arg);
		}
		else if (format[i] == 'f')
		{
			double_arg = va_arg(args, double);
			printf("%f", double_arg);
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (s != NULL)
			{
				printf("%s", s);
			}
			else
			{
				printf("(nil)");
			}
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
