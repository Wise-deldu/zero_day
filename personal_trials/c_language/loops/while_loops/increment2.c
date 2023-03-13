#include <stdio.h>

/**
  * main - A program that prints a while loop using decrement and float.
  *
  * Return: Always 0.
  */

int main(void)
{
	float k = 10.0;

	while (k <= 10.5)
	{
		printf("Raindrops on roses...");
		printf("...and whiskers on kittens\n");
		k = k + 0.2;
	}
	return (0);
}

