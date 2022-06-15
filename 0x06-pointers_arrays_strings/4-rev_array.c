#include "main.h"

/**
 *reverse_array - function with to int pointer
 *@a : int array to be reversed
 *@n : number of array size
 *Return : no return statment
 */
void reverse_array(int *a, int n)
{
int *p, i, aux, k;

p = a;

for (i = 1; i < n; i++)
{
p++;
}

for (k = 0; k < i / 2; k++)
{
aux = a[k];
a[k] = *p;
*p = aux;
p--;
}
}


