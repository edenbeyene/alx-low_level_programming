#include "main.h"

/**
*_strcat - function accept dest and src
* @dest: char Hello
* @src: char world
*Description: concatenates dest and src Hello World
*save on dest
*Return: dest
*/

char *_strcat(char *dest, char *src)
{
int i, j;

for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}
