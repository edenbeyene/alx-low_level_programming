#include "main.h"

/**
 *leet - function to in code
 *@n: char to be modified
 *Return: char var
 */
char *leet(char *n)
{
int i;
for (i = 0; n[i] != '\0'; i++)
{
if (n[i] == 'a' || n[i] == 'A')
{
n[i] = (4 + '0');
}
else if (n[i] == 'e' || n[i] == 'E')
{
n[i] = (3 + '0');
}
else if (n[i] == 'O' || n[i] == 'o')
{
n[i] = (0 + '0');
}
else if (n[i] == 't' || n[i] == 'T')
{
n[i] = (7 + '0');
}
else if (n[i] == 'l' || n[i] == 'L')
{
n[i] = 1;
}
}
return (n);

}

