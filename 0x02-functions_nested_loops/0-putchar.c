#include <unistd.h>
#include "main.h"
/**
 * _putchar - write a program prints _putchar 
 * @c: The character to print
 *
 * Return: On success 0.
*/



int main (void)
{
char word[8] = "_putchar";
int i;

for (i = 0; i < 8; i++)
{
	_putchar(word[i]);
        _putchar('\n');
}
        return (0);
}

