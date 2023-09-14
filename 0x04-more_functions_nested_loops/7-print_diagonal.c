#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: number of spaces
 *
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int i, space;

	if (n <= 0)
	{
		_putchar ('\n');
	}

	else
	{
		for (i = 1; i <= n; ++i)
		{
			for (space = 1; space <= i; ++space)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
