#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(i + '0');
		++i;
	}
	putchar('\n');

	return (0);
}
