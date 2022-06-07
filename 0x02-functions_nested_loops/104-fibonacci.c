#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, f1 = 1, f2 = 2, sum;

	printf("%d, %d, ", f1, f2);

	for (i = 2; i < 98; i++)
{
		sum = f1 + f2;
		printf("%d,", sum);

		f1 = f2;
		f2 = sum;
}
	return (0);
}
