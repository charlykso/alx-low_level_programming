#include "main.h"
/**
 * print_rev - a function that prints string in reverse
 * @s: a functions parameter
 *
 * Return: zero 0
 */
void print_rev(char *s)
{
	int len, x, y;

	x = 0;
	y = 0;
	while (s[y] != '\0')
	{
		y++;
	}
	len = y;
	while (x <= len)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
