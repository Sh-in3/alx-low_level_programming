#include "main.h"

/**
 * array_range - generate array between min and max
 *
 * @min: minimum
 * @max: maximum
 *
 * Return: pointer to memory
 */
int *array_range(int min, int max)
{
	int *mem, i;

	if (min > max)
		return (NULL);

	mem = malloc(sizeof(int) * (max - min + 1));

	if (mem == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		mem[i - min] = i;

	return (mem);
}
