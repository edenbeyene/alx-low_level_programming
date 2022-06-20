#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: the memory area
 *@src: the memory area copied to be
 *@n: number of bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i, j;
for (i = 0; dest[i] != '\0'; i++)
;
j = 0;
while (j < n)
{
if (j != 5)
{
	dest[i] = src[j];
	i++;
	j++;
}
else
{
dest[i] = src[6];
i++;
j++;
}
}
return (dest);
}
