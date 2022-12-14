#include "main.h"

/**
 * print_alphabet_x10 - this function prints alphabet 10 times
 *Description: print alphabet 10 times.
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int a = 0;
char alphabet;

while (a < 10)
{
alphabet = 'a';
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}

_putchar('\n');
a++;
}

}
