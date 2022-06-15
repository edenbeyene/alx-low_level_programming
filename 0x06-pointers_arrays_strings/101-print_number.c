#include "main.h"

/**
 *print_number - Prints any integer with putchar
 *@n: Number to prints
 *Return: Nothing
 */
void print_number(int n)
{
unsigned int p;

	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}

	p = n;

	if (p / 10)
		print_number(p / 10);

	putchar(p % 10 + '0');

}
