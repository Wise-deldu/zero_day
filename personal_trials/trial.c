#include <stdio.h>

/**
 * main - A code to represent how some functions behave when you print them
 * Return: 0 (Successful)
 */
int main(void)
{
	printf("%lu byte\n", sizeof(char));
	printf("%lu bytes\n", sizeof(int));
	printf("%zu bytes\n", sizeof(float));
	printf("%zu bytes\n", sizeof(double));
	printf("%zu byte\n", sizeof(void));
	return (0);
}
