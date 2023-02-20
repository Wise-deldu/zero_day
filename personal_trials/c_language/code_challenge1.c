#include <stdio.h>

/**
 * main - A code that displays the various sizes of data types
 * in a simplier form
 * Return: 0 (Successful)
 */
int main(void)
{
	int a;
	char b;
	float c;
	double d;

	printf("Size of \"int\" is %lu bytes\n", sizeof(a));
	printf("Size of \"char\" is %lu byte\n", sizeof(b));
	printf("Size of \"float\" is %lu bytes\n", sizeof(c));
	printf("Size of \"double\" is %lu bytes\n", sizeof(d));
	return (0);
}
