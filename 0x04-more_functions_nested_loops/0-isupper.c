#include "main.h"
/**
 * _isupper - is a function that checks if a character is uppercase
 * @c: c is a parameter in the function
 *
 * Return: will return an integer
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
