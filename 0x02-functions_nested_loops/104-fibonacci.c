#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
float fibonacci[98];

	fibonacci[0] = 1;
	fibonacci[1] = 2;
	printf("%f, %f, ", fibonacci[0], fibonacci[1]);

	for (i = 2; i < 98; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		if (i == 97)
			printf("%f\n", fibonacci[i]);
		else
			printf("%f, ", fibonacci[i]);
	}

	return (0);
}
