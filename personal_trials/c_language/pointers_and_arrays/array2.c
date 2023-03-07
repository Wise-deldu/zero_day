#include <stdio.h>

/**
* main - A code that prints character array
*
* Return: Always 0.
*/

int main(void)
{
	char name[31]; /* null terminator - to ensure limitation */

	printf("Sweetheart, enter your name: ");
	scanf("%s", name);

	printf("Hello sister %s!\nYou look very nice and pretty today.\n", name);

	return (0);
}
