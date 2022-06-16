#include "main.h"
#include <stdio.h>
/**
 * reverse_array - a function that reverses and array
 * @a: the array
 * @n: number of elements in the array
 *
 * Return: void 0
 */
void reverse_array(int *a, int n)
{
	int i, x;

	i = 0;
	x = n - 1;
	while (x >= i)
	{
		printf("%d", a[x]);
		if (x > 0)
		{
			printf(", ");
		}
		x--;
	}
	printf("\n");
}
