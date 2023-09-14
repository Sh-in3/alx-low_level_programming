#include "main.h"

/**
 * print_numbers - print nubers from 0 -9
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
