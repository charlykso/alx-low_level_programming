#include <stdio.h>
#include <stdlib.h>

/**
 * main - a main function that takes argument
 * @argc: argument count; contains the number of argument passed in the program
 * @argv: argument vector; one dimensional string array
 *
 * Return: integer
 */
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i, leastcents = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			for (i = 0; i < 5; i++)
			{
				leastcents += money / cents[i];
				money = money % cents[i];
				if (money % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
