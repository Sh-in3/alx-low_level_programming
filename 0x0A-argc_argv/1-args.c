/**
 * main - print number of arguments passed into it
 *
 * @argc: number of arguments
 * @argv: pointer that stores actual arguments
 *
 * Return: always 0
 */

#include "main.h"

int main(int argc, char __attribute__((unused)) *argv[])
{
	if (argc > 0)
	{
		argc--;
	}

		printf("%d\n", argc);

	return (0);
}
