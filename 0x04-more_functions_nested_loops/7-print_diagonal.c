#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: number of times the '\' char is printed
 * Description: Can only use _putchar to print
 */
void print_diagonal(int n)
{
int i, c = 0;
if (n < 1)
{

_putchar('\n');
}

while (n > 0)
{
 
i = c;
while (i > 0)
{

_putchar(' ');
i--;
}
_putchar('\\');
_putchar('\n');
c++;
n--;
}
}
