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



void print_alphabet_x10(void)
{

char alphabet;
alphabet = 'a';
int a;


while (a <= 10)
{
a = 1;
a++;

while (alphabet <= 'z')
{
_putchar(alphabet);
}
}
_putchar('\n');

}
