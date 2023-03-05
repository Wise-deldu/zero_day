#include <stdio.h>

/**
* main - entry point
*
* Return: Always 0
*/

int main(void)
{
	int var = 17;
	int *ptr;

	ptr = &var; /* assigned ptr to the address of var */

	/* we can print the value of var in three different ways */
	printf("Value of var is : %d\n", var);
	printf("Value of var is : %d\n", *ptr);
	printf("Value of var is : %d\n", *(&var));

	/* we can print the address of var in two different ways */
	printf("Address of var is : %p\n", &var);
	printf("Address of var is : %p\n", ptr);

	/* we can print the address of ptr in this way */
	printf("Address of ptr is : %p\n", &ptr);

	return (0);
}
