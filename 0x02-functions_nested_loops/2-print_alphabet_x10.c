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
a = 10; 


while (a <= 10)
{
    while (alphabet <= 'z')
    {
        _putchar(alphabet);
        alphabet++;
    }
_putchar('\n');
a++;
}

}
