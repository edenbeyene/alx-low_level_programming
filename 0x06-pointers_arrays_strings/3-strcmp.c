#include "main.h"

/**
 *_strcmp - function with to char s1 and s2
 *@s1 : char s1
 *@s2 : char s2
 *Return: if its greater 15 , -15 if its less , 0 if its equal
 */

int _strcmp(char *s1, char *s2)
{
int i, j, c = 0, r = 0, lim;
int count1 = 0;
int count2 = 0;
for (i = 0; s1[i] != '\0'; i++)
{
count1++;
}
for (j = 0 ; s2[j] != '\0'; j++)
{
count2++;
}
if (count1 <= count2)
{
lim = count1;
}
else
{
lim = count2;
}
while (c <= lim)
{
if (s1[c] == s2[c])
{
c++;
continue;
}
else
{
r = s1[c] - s2[c];
break;
}
c++;
}
return (r);
}

