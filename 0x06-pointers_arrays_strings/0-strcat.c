#include "main.h"

/**
 * _strcat - a finction that concatinates two strings
 * @dest: parameter for the function
 * @src: another parameter for the function
 *
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int x, i, len;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	x = len;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[x + i] = src[i];
	}
	dest[x + i] = '\0';

	return (dest);
}
