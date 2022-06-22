#include "main.h"

/**
 *puts_recursion - function print string
 *@s: string value
 *
 *Return: nothing return
 */
void _puts_recursion(char *s)
{
int i = 0;
while (s[i] != '\0')
{
_putchar(*s);
s++;
}
_putchar('\n');
}
