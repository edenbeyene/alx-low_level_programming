#include "main.h"

/**
 *string_toupper - changes all lowercase letters  to uppercase
 *@n: the string to be modified
 *Return: char var
 *
 */

char *string_toupper(char *n)
{
int i;
for (i = 0; n[i] != '\0'; i++)
{
if (n[i] >= 'a' && n[i] <= 'z')
{
n[i] -= 32;
}
}
return (n);
}

