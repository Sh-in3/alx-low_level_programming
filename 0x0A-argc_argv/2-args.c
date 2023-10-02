/**
 * main - print number of arguments passed into it
 *
 * @argc: number of arguments
 * @argv: pointer that stores actual arguments
 *
 * Return: always 0
 */

#include "main.h"

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
