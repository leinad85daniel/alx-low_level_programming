#include <stdio.h>
/**
 *main - print lowercase a-z
 *Return: Always 0 (Success)
 */
int main(void)
{
char alphabet;
alphabet = 'a';



	while (alphabet <= 'z')
{
		if ((alphabet != 'q') && (alphabet != 'e'))
		{
			putchar(alphabet);
		}
alphabet++;
	}
	putchar ('\n');
return (0);
}
