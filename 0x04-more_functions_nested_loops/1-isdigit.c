#include "main.h"
/**
 * _isupper - is a function that checks if a character is uppercase
 * @c: c is a parameter in the function
 *
 * Return: will return an integer
 */
int _isupper(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
