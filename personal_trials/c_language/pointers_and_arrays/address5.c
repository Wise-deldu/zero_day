#include <stdio.h>

/**
* main - A code that prints the pointer of another pointer.
*
* Return: Always 0.
*/

int main(void)
{
	int var;
	int *ptr;
	int **pptr;

	var = 3000;

	/* take the addres of var */
	ptr = &var;

	/* take the address of ptr using address of operator & */
	pptr = &ptr;

	/* take the value using pptr */
	printf("Value of var = %d\n", var);
	printf("Value available at *ptr = %d\n", *ptr);
	printf("Value available at **pptr = %d\n", **pptr);

	return (0);
}
