#include "main.h"


/**
 * _isdigit - Check for digits (0 through 9)
 * @c: int type param
 * Return: 1 if digit, else 0
 */
int _isdigit(int c)
{
if (c < 48 || c > 57)
return (0);

return (1);
}
