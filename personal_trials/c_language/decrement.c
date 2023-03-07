#include <stdio.h>

/**
* main - A code that prints the decrement of a value
*
* Return: Always 0.
*/

int main(void)
{
	int a = 5;

	/*Post-decrement */
	printf("%d\n", a--); /* assigns the value a, 5 */
	printf("%d\n", a); /* prints the new decrement value */
	printf("%d\n", --a); /* prints the new decrement value */
	printf("%d\n", a); /* assigns the the value a */

	return (0);
}
