/**
 * main - program to print it's name and a new line
 *
 * @argc:  argument 1
 * @argv: argument 2
 *
 * Return: Always 0
 */

#include "main.h"

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		_putchar(*argv[0]);
	}

	return (0);
}
