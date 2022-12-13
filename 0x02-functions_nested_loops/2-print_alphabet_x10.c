#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	print_alphabet_x10();
	return (0);
}



void print_alphabet(void)
{

char alphabet;
alphabet = 'a';
int a = 1;

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
