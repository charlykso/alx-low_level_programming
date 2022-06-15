#include "main.h"

/**
 * _strncat - a finction that concatinates two strings
 * @dest: parameter for the function
 * @src: another parameter for the function
 * @n: this takes the number of character that will be
 * joined 
 *
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, i, len;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	x = len;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[x + i] = src[i];
	}
	dest[x + i] = '\0';

	return (dest);
}
