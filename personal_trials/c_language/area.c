#include <stdio.h>

/**
* main - A program that calculates the area of a circle
*
* Return: Always 0.
*/

int main(void)
{
	int radius; /* The distance from outside to the center of the circle */

	printf("Please enter a radius: ");
	scanf("%i", &radius); /* address of operator */

	double area = 3.14159 * (radius * radius);

	printf("The area of a circle with radius %i is %f\n", radius, area);

	return (0);
}
