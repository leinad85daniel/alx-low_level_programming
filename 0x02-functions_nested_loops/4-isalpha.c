#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: The character to be checked
 * Return: 1 for lowercase character or 0 for anything else
*/

int _isalpha(int c)

{
if ((c >= 65) && c <= 122)
{
    if (c >= 91 && c <= 96)
    {
        return (0);
    }
return (1);
}

else
{
return (0);
}
}