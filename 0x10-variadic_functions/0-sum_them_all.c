#include "variadic_functions.h"

/**
 * sum_them_all - takes intergers and adds them
 *
 * @n: number of integers to be added
 * Return: return sum of integers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int add = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		if (n == 0)
			return (0);

		else
		{
			add = add + x;
		}
	}

	va_end(args);

	return (add);
}
