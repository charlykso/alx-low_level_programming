#include <stdio.h>

void myStartupFun (void) __attribute__ ((constructor));

/**
* myStartupFun - a function that prints before the main
*
* Return: void
*/

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("\nI bore my house upon my back!\n");
}
