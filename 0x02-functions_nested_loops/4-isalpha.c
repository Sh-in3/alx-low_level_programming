#include"main.h"

/**
 * _isalpha - function to check if
 *           character is uppercase
 *
 * @c: checks input of function
 *
 * Return: returns 1 if `c` is uppercase
 *         otherwise always 0 (Success)
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
