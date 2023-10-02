/**
 * main - prints the min number of coins to make change for an amount of money
 *
 * @argc: amount of arguments passed
 *
 * @argv: actual arguments
 *
 * Return: always 0
 */

#include "main.h"

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int cents, i, num_coins;
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	num_coins = sizeof(coins) / sizeof(coins[0]);

	for (i = 0; i < num_coins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
