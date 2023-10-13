#include "variadic_functions.h"
/**
 * print_numbers - print numbers followed by a new line
 * @separator: string to be printed between numbes
 * @n: number of intergers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		printf("%d", num);

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
