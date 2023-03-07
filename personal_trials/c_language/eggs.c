#include <stdio.h>

/**
* main - A program that tells a chicken company how many
* dozens of eggs are produced in a day.
*
* Return: 0 Always
*/

int main(void)
{
	printf("The number of eggs for the day: ");

	int eggs;
	scanf("%i", &eggs);

	double dozen = eggs / 12.0;

	printf("You have %f dozen eggs.\n", dozen);

	double dozen2 = (double) eggs / 12; /* using type casting */         
	printf("You have %f dozen eggs.\n", dozen2);

	return (0);
}
