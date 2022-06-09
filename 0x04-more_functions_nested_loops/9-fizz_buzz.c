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
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FIZZBUZZ ");
		}
		else if (i % 3 == 0)
		{
			printf("FIZZ ");
		}
		else if (i % 5 == 0)
		{
			if (i < 100)
			{
				printf("BUZZ ");
			}
			else
			{
				printf("BUZZ");
			}
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
