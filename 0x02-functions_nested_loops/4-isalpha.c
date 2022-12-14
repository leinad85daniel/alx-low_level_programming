#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: The character to be checked
 * Return: 1 for lowercase character or 0 for anything else
*/

int _isalpha(int c)
{
    while (c <= 122)
    {
        if (c >= 65 && c <= 90 && c >= 97)
        {
            return (1);
        }
        return (0);
    }
}
