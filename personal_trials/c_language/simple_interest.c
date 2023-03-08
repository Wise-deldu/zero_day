#include <stdio.h>

/**
* main - A program that prints simple interest.
*
* Return: 0 Always
*/

int main(void)
{
	int p, n;
	float r, si;

	printf("Enter value of p: \n");
	scanf("%d", &p);
	printf("Enter value of n: \n");
	scanf("%d", &n);
	printf("Enter value of r: \n");
	scanf("%f", &r);
	si = p * n * r / 100;
	printf("The value of the simple interest is: %f\n", si);

	return (0);
}
