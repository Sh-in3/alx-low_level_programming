#include "variadic_functions.h"
/**
 * print_strings - print strings followed by a new line
 * @separator: string to be printed between numbes
 * @n: number of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(args, const char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

	if (i < n - 1)
	{
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	}

	va_end(args);
	printf("\n");
}
