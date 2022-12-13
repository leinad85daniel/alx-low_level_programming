#include <stdio.h>
/**
 *main - print lowercase a-z
 *Return: Always 0 (Success)
 */
int main(void)
{
char alphabet;
alphabet = 'a';

    print_alphabet(alphabet);

	while (alphabet <= 'z')
	{
		putchar (alphabet);
		alphabet++;
	}
	putchar ('\n');
return (0);
}
