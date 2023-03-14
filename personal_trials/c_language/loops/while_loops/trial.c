#include <stdio.h>

/**
  * main - A program that prints the sum of two integers.
  *
  * Return: Always 0.
  */

int main(void)
{
	int i = 1;
	int number1, sum;

	while (i <= 2)
	{
		printf("Enter an integer: ");
		scanf("%d", &number1);
		i++;
	}

	/*calculate the sum */
	sum = number1 + number1;

	printf("%d + %d = %d\n", number1, number, sum);

	return (0);
}
