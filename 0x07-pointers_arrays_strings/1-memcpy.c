#include "main.h"
#include <string.h>
#include <stdio.h>
int _strlen(char *s);
/**
 * _memcpy - function copies n bytes from memory area src to
 * memory area dest.  The memory areas must not overlap
 * @dest: a function parameter that holds the destination string
 * @src: a function parameter that hold the source string
 * @n: a function parameter that holds the n bytes of memory
 *
 * Return: character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	i = 0;
	j = _strlen(dest);
	while (i < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}

/**
 * _strlen - a function that returns string length
 * @s: a function parameter s
 *
 * Return: integer
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
