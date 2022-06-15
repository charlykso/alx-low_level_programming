#include "main.h"
/**
 * _strncpy - a function that coppies a string
 * @dest: a function parameter(destination)
 * @src: a function parameter(source)
 * @n: a funtions parameter the dectects the number of char to copy
 *
 * Return: character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
