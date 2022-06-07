#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
long double fibonacci[98];

	fibonacci[0] = 1;
	fibonacci[1] = 2;
	printf("%lf, %lf, ", fibonacci[0], fibonacci[1]);

	for (i = 2; i < 98; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		if (i == 97)
			printf("%lf\n", fibonacci[i]);
		else
			printf("%lf, ", fibonacci[i]);
	}

	return (0);
}
