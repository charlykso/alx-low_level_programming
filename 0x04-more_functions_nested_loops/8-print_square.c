#include "main.h"
/**
 * print_square - is a function that print square
 * @n: n is a functions parameter
 *
 * Return: void 0
 */
void print_square(int n)
{
	int i, j;

	i = 1;
	while (i < n)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		i++;
		_putchar('\n');
	}
}
