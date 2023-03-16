#include <stdio.h>

/**
  * main - Functions without arguments and without return values
  *
  *
  */

int main(void)
{
	void sum ();
	sum ();
}

void sum ()
{
	int a, b, c;
	printf("Enter 2 numbers: ");
	scanf("%d\n%d", &a, &b);
	c = a + b;
	printf("sum = %d\n", c);
}
