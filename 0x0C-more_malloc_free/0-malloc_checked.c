#include "main.h"
/*
 * malloc_checked - allocate memory using malloc
 *
 * @b: integer to store and print
 *
 * Return: pointer to allocated memeory
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (malloc_checked);
}
