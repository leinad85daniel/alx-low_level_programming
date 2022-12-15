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

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');

}
