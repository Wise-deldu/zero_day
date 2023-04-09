#include <stdio.h>

/**
  * main - A program that prints XOR function.
  *
  * Return: 0 Always.
  */

int main(void)
{
	int a = 4;
	int b = 3;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("After XOR, a = %d and b = %d\n", a, b);

	return (0);
}
