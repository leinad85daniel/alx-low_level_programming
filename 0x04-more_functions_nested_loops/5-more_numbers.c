#include "main.h"
/**
 * more_numbers - prints 0..14 10x followed by a newline
 * @void: no return value
 * Description: prints 0 to 14 10 times followed by a newline.
 * Return: Always 0 (Success);
 */

void more_numbers(void)
{
char n, lines;
lines = 0;
for (lines = 0; lines < 10; lines++)
{
for (n = 0; n < 15; n++)
{
if (n > 9)
_putchar('1');
_putchar ((n % 10) + '0');
}
_putchar('\n');
}
}
