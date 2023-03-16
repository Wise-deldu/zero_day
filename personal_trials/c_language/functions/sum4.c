#include <stdio.h>

/**
  * main - Functions with arguments and with return values
  *
  * Return: c
  */

int main(void)
{
	int sum (int, int);
	int a, b, c;
	printf("Enter 2 numbers:");
	scanf("%d%d", &a, &b);
	c = sum (a, b);
	printf("Sum = %d\n", c);
}

int sum (int a, int b)
{
	int c;
	c = a + b;
	return (c);
}
