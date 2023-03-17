#include <stdio.h>

/**
  * main - The distance between two cities (in km.) is input through the
  * keyboard. Write a program to convert and print this distance in meters,
  * feet, inches and centimeters.”
  *
  * Return: Always 0.
  */

int main(void)
{
	float km, m, ft, inch, cm;

	printf("Enter the distance between the two cities in km: ");
	scanf("%f", &km);

	m = 1000 * km; /* 1km = 1000m */
	ft = 3280.84 * km; /* 1km = 3280.84ft */
	inch = 39370.1 * km; /* 1km = 39370.1inch */
	cm = 100000 * km; /* 1km = 100000 */

	printf("The distance between the two cities in meters is %f\n", m);
	printf("The distance between the two cities in feet is %f\n", ft);
	printf("The distance between the two cities in inches is %f\n", inch);
	printf("The distance between the two cities in centimeters is %f\n", cm);

	return (0);
}
