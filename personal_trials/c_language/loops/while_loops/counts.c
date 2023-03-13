#include <stdio.h>

/**
  * main - A program that prints indefinite loop.
  *
  * Return: Always 0.
  */

int main(void)
{
	int i = 1;

	while (i <= 10)
	{
		printf("%d\n", i);
		i = i + 1;
	}
	return (0);
}
