#include <stdio.h>
#include <unistd.h>

/**
  * main - A program that prints a PPID.
  *
  * Return: 0 Always.
  */

int main(void)
{
	int a = 11;
	int b = 5;
	int diff = a - b;
	pid_t ppid;

	ppid = getppid();

	printf("Difference is %d\n", diff);
	printf("ppid is %u\n", ppid);

	return (0);
}
