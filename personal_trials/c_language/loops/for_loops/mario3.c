#include <stdio.h>

/**
  * main - A code that prints several bricks in rows and columns
  *
  * Return: Always 0.
  */

int main(void)
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			printf("#");
		}
		printf("\n");
	}
	return (0);
}
