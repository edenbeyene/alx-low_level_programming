#include "main.h"
/**
 * print_square - print a square
 * @size: size of square
 * Description: Can only use _putchar to print. Use '#' to print square.
 */

void print_square(int size)
{

int i = 0;
if (size < 1)
{

_putchar('\n');
}

while (i < size)
{
int  j = 0;
while (j < size)
{

_putchar('#');
j++;
}
_putchar('\n');
i++;
}
}
