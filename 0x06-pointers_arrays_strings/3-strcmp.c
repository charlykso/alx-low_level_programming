#include "main.h"
#include <string.h>

/**
 * _strcmp - a function that compares two strings
 * @s1: a functions variable that takes the first string
 * @s2: the second functions variable that takes a string
 *
 * Return: integer value
 */
int _strcmp(char *s1, char *s2)
{
	int i, sum;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			sum = s1[i] - s2[i];
			break;
		}
		else
		{
			return (0);
		}
	}
	return (sum);
}
