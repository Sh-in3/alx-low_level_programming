#include "main.h"

/**
 * _calloc - function allocates memory for an array of nmemb elements of size
 *		bytes each and returns a pointer to the allocated memory
 *
 * @nmemb: number of items in array
 * @size: size of array
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	mem = malloc(nmemb * sizeof(size));
	if (nmemb == 0)
		return (NULL);

	if (mem == NULL)
		exit(1);

	return (mem);
}
