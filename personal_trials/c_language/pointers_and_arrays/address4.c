#include <stdio.h>

/**
* main - entry point
*
* Return: Always 0
*/

int main(void)
{
	int a = 5;
	int *p; /* pointer declaration */

	p = &a; /* copying address of variable a to the pointer p */
	*p = 10; /* indiretion or use of pointer to change the value of variable a */
	printf("%d\n", a);
	printf("%d\n", *p);
	printf("%d\n", *(&a));

	return (0);
}
