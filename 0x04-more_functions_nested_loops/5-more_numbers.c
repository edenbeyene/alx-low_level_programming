#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 * Description: Can only use _putchar 3 times
 */
void more_numbers(void)
{
int i;
int j;
for (i = 0; i <= 10; i++)
{
for (j = 0; j <= 14; j++)
{
_putchar(j + '0');
}
_putchar('\n');
}
}