#include <stdio.h>

/**
  * main - Functions with arguments and without return values
  *
  */

int main(void)
{
	void sum (int, int);
	int a, b;
	printf("Enter 2 numbers: ");
	scanf("%d%d", &a, &b);
	sum (a, b);
}
void sum(int a, int b)
{
	int c;
	c = a + b;
	printf("sum = %d\n", c);
}
