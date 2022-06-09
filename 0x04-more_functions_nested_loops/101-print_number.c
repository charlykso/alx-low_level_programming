#include "main.h"
/**
 * print_number - this function prints integer
 * @n: n is a parameter of the function
 *
 * Return: always 0
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		i = -n;
		_putchar('_');
	}
	else
	{
		i = n;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
