#include "main.h"
/**
 * string_nconcat - concatenate 2 string
 *
 * @s1: string 1
 * @s2: string 2
 * @n: memory lcoation
 * Return: Pointer to a newly allocated space in memory, which contains s1,
 *		followed by the first n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = len2 = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	mem = malloc(len1 + n + 1);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		mem[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		mem[i] = s2[j];
	mem[i] = '\0';
	return (mem);
}
