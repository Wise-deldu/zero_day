#include <stdio.h>

/**
  * main - A program that prints the average of three marks using type casting
  *
  * Return: Always 0.
  */

int main(void)
{
	int scores1 = 72;
	int scores2 = 73;
	int scores3 = 33;

	printf("Average: %f\n", (scores1 + scores2 + scores3) / (float) 3);

	return (0);
}
