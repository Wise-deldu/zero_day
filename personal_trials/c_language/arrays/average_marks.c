#include <stdio.h>

/**
  * main - A “program to find average marks obtained by a class of 30
  * students in a test
  *
  * Return: Always 0.
  */

int main(void)
{
	int avg, sum = 0;
	int i;
	int marks[30]; /* array declaration */

	for (i = 0; i <= 29; i++)
	{
		printf("Enter marks ");
		scanf("%d", &marks[i]); /* store data in array */
	}
	for (i = 0; i <= 29; i++)
		sum = sum + marks[i]; /* read data from an array */
	avg = sum / 30;
	printf("Average marks = %d\n", avg);

	return (0);
}
