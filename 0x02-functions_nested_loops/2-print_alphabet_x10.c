#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 * Description - print the alphabet
 * Return - Always 0 (Success)
 */

void print_alphabet(void)
{

char alphabet;
alphabet = 'a';
int a;
a = 1;

while (alphabet <= 'z')
{
_putchar(alphabet);

while (a <= 10)
{
a++;
}
alphabet++;

}
_putchar('\n');

}
