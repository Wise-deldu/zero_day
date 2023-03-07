#include <stdio.h>

/**
* main - A code that prompts a user to enter a disatnce of a radius.
*
* Return: Always 0.
*/

int main(void)
{
	int radius; /* The distance from the outside to the center of the circle */

	printf("Please enter a radius: ");
	scanf("%i", &radius); /* address of the operator */
	printf("The given radius is: %i\n", radius);

	return (0);
}
