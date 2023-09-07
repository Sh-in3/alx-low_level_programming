#include <stdio.h>

int main(void)
{
	int i;
	char c;
	long int li;
	long long int lli;
	float f;

	printf("Size of char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of long int: %lu.\n", (unsigned long)sizeof(li));
	printf("Size of long long int: %lu.\n", (unsigned long)sizeof(lli));
	printf("Size of float: %lu.\n", (unsigned long)sizeof(f));
	return 0;
}
