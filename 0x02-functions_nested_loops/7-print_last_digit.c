#include "main.h"
/**
 * print_last_digit - print the last digit of integers
 * @n: integer argument
 * Return: last digit
 */
int print_last_digit(int n)

{
    int last = n % 10;
        _putchar(last + last);
        return(last);
}