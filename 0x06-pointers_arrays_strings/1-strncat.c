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

int i, j = 0;
char *temp;
temp = dest;
for (i = 0; dest[i] != '\0'; i++)
;
while (n > 0)
{
dest[i] = src[j];
i++;
j++;
n--;
}
dest[i] = '\0';
return (temp);
}

