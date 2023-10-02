/**
 * main - print number of arguments passed into it
 *
 * @argc: number of arguments
 * @argv: pointer that stores actual arguments
 *
 * Return: always 0
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc);


	for (i = 0; i < argc; i++)
	{
		printf("argc[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
