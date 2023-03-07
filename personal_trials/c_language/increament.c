#include <stdio.h>

/**
* main - A code that prints an increament value
*
* Return: Always 0.
*/

int main(void)
{
	int a = 5;

	/* Post-increment */
	printf("\n%d\n", a++); /* prints the value of 5 */
	printf("%d\n", a); /* increment made by 1, value is 6 */

	/* Pre-increment */
	printf("%d\n", ++a); /* prints new value */
	printf("%d\n\n", a); /* assigns the value of a */

	return (0);
}
