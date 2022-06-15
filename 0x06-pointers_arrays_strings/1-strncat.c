#include "main.h"

/**
 *_strncat - function with two pointer char and one int
 *@dest: character holds hello
 *@src : character holds world!
 *@n : integer valu the value copy
 *Return: pointer to 'dest'
 */
char *_strncat(char *dest, char *src, int n)
{

int i = 0, j = 0;
while (dest[i])
{
i++;
}
while (j < n && src[j])
{
dest[i] = src[j];
i++;
j++;
}
dest[i + n + 1] = '\0';
return (dest);
}

