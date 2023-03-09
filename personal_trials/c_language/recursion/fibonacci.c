#include <stdio.h>

/**
* fibonacci - A program that generates the Fibonacci series for a given number
* recursion function
*
* @i: input value
*
* Return: 0 Always
*/

int fibonacci(int i)
{
	if (i == 0)
	{
		return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	return (fibonacci(i - 1) + fibonacci(i - 2));
}

/**
* main - entry point
*
* Return: 0 Always
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d\t\n", fibonacci(i));
	}
	return (0);
}
