#include "main.h"

/**
 *_memset - function fills the first n bytes
 *@s: pointer filled by b
 *@b: pointer copied
 *@n: number of time b copied
 *
 * Return: char s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i, j;
i = 0;
j = 0;
while (i < n)
{
s[i] = b;
i++;
}
while (s[j] != '\0')
{
j++;
}
return (s);
}
