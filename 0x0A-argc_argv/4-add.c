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
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (isdigit(argv[i][0]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
