#include <stdio.h>

/**
  * main - “If the marks obtained by a student in five different subjects are
  * input through the keyboard, write a program to find out the aggregate
  * marks and percentage marks obtained by the student. Assume that the
  * maximum marks that can be obtained by a student in each subject is 100.”
  *
  * Return: Always 0.
  */

int main(void)
{
	float fir, sec, thr, fou, fif;

	printf("Enter the mark of first subject: ");
	scanf("%f", &fir);
	printf("Enter the mark of second subject: ");
	scanf("%f", &sec);
	printf("Enter the mark of third subject: ");
	scanf("%f", &thr);
	printf("Enter the mark of fourth subject: ");
	scanf("%f", &fou);
	printf("Enter the mark of fifth subject: ");
	scanf("%f", &fif);

	float agg = fir + sec + thr + fou + fif;

	float first, second, third, fourth, fifth;

	first = (fir / 20) * 100;
	second = (sec / 20) * 100;
	third = (thr / 20) * 100;
	fourth = (fou / 20) * 100;
	fifth = (fif / 20) * 100;

	printf("\nThe aggregates of the marks is %0.2f.\n", agg);
	printf("The percentage of the first mark is %0.2f%%\n", first);
	printf("The percentage of the second mark is %0.2f%%\n", second);
	printf("The percentage of the third mark is %0.2f%%\n", third);
	printf("The percentage of the fourth mark is %0.2f%%\n", fourth);
	printf("The percentage of the fifth mark is %0.2f%%\n", fifth);

	return (0);
}
