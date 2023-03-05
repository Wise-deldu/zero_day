#include <stdio.h>

/**
* main - entry point
*
* Return: always 0
*/

int main(void)
{
	/* declare variables and initialize them */
	int a = 4;
	int b = 17;
	char c = 'c';

	/* print the addresses of the above variables */
	printf("Address of a is : %p\n", &a);
	printf("Address of b is : %p\n", &b);
	printf("Address of c is : %p\n", &c);

	return (0);
}
