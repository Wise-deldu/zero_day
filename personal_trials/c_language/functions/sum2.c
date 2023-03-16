#include <stdio.h>

/**
  * main - Functions without arguments and with return values
  *
  * Return: c
  */

int main(void)
{
	int sum ();
	int c;

	c = sum ();
	printf("sum = %d\n", c);
}

int sum ()
{
	int a, b, c;
	printf("Enter 2 numbers:");
	scanf("%d%d", &a, &b);
	c = a + b;
	return (c);
}
