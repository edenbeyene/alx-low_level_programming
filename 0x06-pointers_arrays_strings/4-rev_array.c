#include "main.h"

/**
 *reverse_array - function with to int pointer
 *@a : int array to be reversed
 *@n : number of array size
 *Return : no return statment
 */
void reverse_array(int *a, int n)
{
int i;
for (i = n - 1; i >= 0; --i)
{
printf("%d", a[i]);
if (i != 0)
{
printf(", ");
}
}
printf("\n");
}

