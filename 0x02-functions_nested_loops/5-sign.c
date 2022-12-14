#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n - the number to be checked
 * Return: 1 for positive numbers , 0 for zero and -1 for negative numbers
*/
int print_sign(int n)

{
if (n >= 1)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}

else
{
_putchar('-');
return (-1);
}
}
