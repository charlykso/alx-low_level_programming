#include "main.h"
#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			if ((i % 5) == 0)
			{
				printf("FIZZBUZZ ");
				continue;
			}
			printf("FIZZ ");
			continue;
		}
		else if ((i % 5) == 0)
		{
			printf("BUZZ ");
			continue;
		}
		printf("%d ", i);
	}
	printf("\n");
	return (0);
}
