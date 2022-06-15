#include "main.h"

/**
* _strncpy - copy memory area
* @dest: char array to copy into
* @src: char array to copy from
* @n: number of elements to copy
* Return: pointer to `dest`
*/

char *_strncpy(char *dest, char *src, int n)
{
int a = 0, b = 0;
while (src[b])
{
b++;
}
while (n > a && src[a])
{
dest[a] = src[a];
a++;
}
while (a < n)
{
dest[a] = '\0';
a++;
}

return (dest);
}

