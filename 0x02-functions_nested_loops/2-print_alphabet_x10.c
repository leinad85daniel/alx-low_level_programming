#include "main.h"

/**
 * print_alphabet_x10 - this function prints alphabet 10 times
 *Description: print alphabet 10 times.
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int a;
char alphabet;
alphabet = 'a';


while (a <= 10)
a = 1;
a++;
{
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
}
_putchar('\n');
}
