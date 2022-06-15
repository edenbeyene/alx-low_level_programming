#include "main.h"

/**
 *cap_string - function which conver lowercase to uppercase
 *@n: string to be modified
 *
 *Return: char var
 */
char *cap_string(char *n)
{
int i;
for (i = 0; n[i] != '\0'; i++)
{
if (n[i] >= 'A' && n[i] <= 'Z')
{
n[i] += 32;
}
}
return (n);
}

