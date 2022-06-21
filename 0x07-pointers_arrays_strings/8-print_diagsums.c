#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of a 2D array
 * @a: the array
 * @size: the size of the array
 *
 * Return: void 0
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (size * i) + i);
		sum2 += *(a + (size * i + size - 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
