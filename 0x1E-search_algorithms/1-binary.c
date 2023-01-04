#include "search.h"
#include "stdio.h"
void print_search(int *array, int first, int last);

/**
 * binary_search - function that searches for a
 * value in a sorted array of integers using the BSA
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int start = 0;
	unsigned int end = size - 1;
	unsigned int middle;

	if (array && value)
	{
		while (start <= end)
		{
			middle = start + (end - start) / 2;
			print_search(array, start, end);
			if (array[middle] == value)
				return (middle);
			if (array[middle] > value)
				end = middle - 1;
			else
				start = middle + 1;
		}
	}
	return (-1);
}


/**
 * print_search - Prints arrayand side of array
 *
 * @array: Array to search
 *
 * @first: left hand side of array
 *
 * @last: right hand side of array
 *
 * Return: Void
 */

void print_search(int *array, int first, int last)
{
	int index = 0;

	printf("Searching in array: ");

	while (first <= last)
	{
		if (index > 0)
		{
			printf(", ");
		}
		index = first++;
		printf("%d", array[index++]);
	}
	printf("\n");
}
