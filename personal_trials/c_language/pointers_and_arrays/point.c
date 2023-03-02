#include <stdio.h>

/**
* main - A program that prints the address of a variable
* Return: 0 Always
*/

int main(void)
{
	int x; /* normal variable of type int */
	int *ptr; /* declaring a pointer => pointer is an address of a variable */

	x = 5;
	ptr = &x; /* Prints address of x */

	printf("x is : %d\n", x); /* print the value of x */
	printf("Memory address of x is: %p\n", ptr); /* address where x is */
	/* located */
	return (0);
}
