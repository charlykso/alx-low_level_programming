#include "main.h"
/**
 * print_times_table - prints times tables
 * @n: n is a parameter for the function
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, mult;

	if (!(n < 0 || n > 15))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mult = j * i;
				if (j == 0)
				{
					_putchar(mult + '0');
				}
				if (mult < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(mult + '0');
				}
				else if (mult >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
