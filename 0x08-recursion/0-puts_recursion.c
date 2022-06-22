#include "main.h"

/**
 *_puts_recursion - function print string
 *@s: string value
 *
 *Return: nothing return
 */
void _puts_recursion(char *s)
{

	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
