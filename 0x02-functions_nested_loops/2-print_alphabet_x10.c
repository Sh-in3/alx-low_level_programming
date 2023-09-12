#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet from 'a' to 'z' 10 times.
 *
 * Return: Always void.
 */
void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
