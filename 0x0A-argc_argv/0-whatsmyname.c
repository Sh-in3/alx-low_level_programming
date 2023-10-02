/**
 * main - program to print it's name and a new line
 *
 * @argc:  argument 1
 * @argv: argument 2
 *
 * Return: Always 0
 */

#include "main.h"
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
