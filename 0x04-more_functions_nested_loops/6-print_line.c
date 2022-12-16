#include "main.h"
/**
 * print_line - print the character "_" n times to draw a line
 * @n: number of characters to draw
 */
void print_line(int n)
{
int c = n;
for (c = n; c > 0; c--)
_putchar('_');
}
