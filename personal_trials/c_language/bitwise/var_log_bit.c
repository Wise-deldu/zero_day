#include <stdio.h>

/**
  * main - A program that differentiates between bitwise and logical.
  *
  * Return: Always 0.
  */

int main(void)
{
	char x = 1;  /* x in 8 bits is 00000001 */
	char y = 2;  /* y in 8 bits is 00000010 */

	if (x & y) /* x & y is 00000000 = FALSE = 0 */
		printf("The bitwise operation is true\n");
	if (x && y) /* x && y is TRUE & TRUE = TRUE = 1 */
		printf("The logical operation is true\n");

	return (0);
}
