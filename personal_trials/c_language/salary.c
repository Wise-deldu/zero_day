#include <stdio.h>

/**
  * main - Ramesh’s basic salary is input through the keyboard.
  * His dearness allowance is 40% of basic salary, and house rent
  * allowance is 20% of basic salary. Write a program to calculate
  * his gross salary.
  *
  * Return: Always 0.
  */

int main(void)
{
	int user;

	printf("Enter your basic salary: ");
	scanf("%d", &user);

	float dear_a = 0.4 * user;
	float rent_a = 0.2 * user;

	float Total = user + dear_a + rent_a;

	printf("The total Salary that Ramesh received was: %f\n", Total);
	return (0);
}
