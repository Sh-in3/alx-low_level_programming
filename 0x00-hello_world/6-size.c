#include <stdio.h>

/**
* main:Entry point
* Return: always return 0
*/

int main(void)
{
	int i;
	char c;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
