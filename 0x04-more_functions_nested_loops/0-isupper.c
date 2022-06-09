#include "main.h"
/**
 * _isupper - is a function that checks if a character is uppercase
 * @c: c is a parameter in the function
 *
 * Return: will return an integer
 */
int _isupper(int c)
{
	if (c >= 64 && c <= 91)
		return (1);
	return (0);
}
