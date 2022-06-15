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
	char *temp;

	temp = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (temp);
}
