#include <stdio.h>

/**
  * main - Ramesh’s basic salary is input through the keyboard
  * His dearness allowance is 40% of basic salary, and house rent
  * allowance is 20% of basic salary. Write a program to calculate
  * his gross salary.”
  *
  * Return: Always 0.
  */

int main(void)
{
	float bs, da, ra, grpay;

	printf("\nEnter Basic Salary of Ramesh: ");
	scanf("%f", &bs);
	da = 0.4 * bs;
	ra = 0.2 * bs;
	grpay = bs + da + ra;

	printf("Basic Salary of Ramesh = %f\n", bs);
	printf("Dearness Allowance = %f\n", da);
	printf("House Rent Allowance = %f\n", ra);
	printf("Gross Pay of Ramesh is %f\n", grpay);

	return (0);
}
