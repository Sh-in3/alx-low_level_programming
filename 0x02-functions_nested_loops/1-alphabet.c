#include "main.h"
/**
 * main - check the code
 *
 * print_alphabet(void): Use _putchar function to print a - z
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
