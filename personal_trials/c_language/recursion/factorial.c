#include <stdio.h>

/**
* factorial - A program that calculates the factorial of a given number using
* recursion function
*
* @i: the given number to input
*
* Return: 0 Always.
*/

unsigned long long int factorial(unsigned int i)
{
	if (i <= 1)
	{
		return (1);
	}
	return (i * factorial(i - 1));
}

/**
* main - entry point
*
* Return: always 0.
*/

int main(void)
{
	int i = 12;

	printf("Factorial of %d is %lld\n", i, factorial(i));
	return (0);
}
