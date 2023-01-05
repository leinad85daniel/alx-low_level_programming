#include "main.h"
/**
 * _puts_recursion - Prints a string
 * @s: The string to be printed
*/

void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
_putchar('\n');
}
