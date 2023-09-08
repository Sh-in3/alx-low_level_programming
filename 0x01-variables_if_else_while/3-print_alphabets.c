#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
*/

int main(void)
{
	char i = 'a';

	while (i <= 'Z')
	{
		putchar(i);
		++i;
	}
	putchar('\n');
	return (0);
}
