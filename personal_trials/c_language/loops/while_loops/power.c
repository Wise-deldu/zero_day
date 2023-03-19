#include <stdio.h>

/**
  * main - Two numbers are entered through the keyboard. Write a program to
  * find the value of one number raised to the power of another.
  *
  * Return: Always 0.
  */

int main(void)
{
	float v, power;
	int m, y;

	printf("\nEnter two numbers: ");
	scanf("%f%d", &v, &m);
	power = y = 1;
	while (y <= m)
	{
		power = power * v;
		y++;
	}
	printf("%f to the power %d is %f\n", v, m, power);

	return (0);
}
