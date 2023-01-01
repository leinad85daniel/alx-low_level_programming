#include "main.h"'

/**
* _strcat - concatenate two strings
* @dest: string to be appended to
* @src: string to append
* Return: concatenated string
*/

char *_strcat(char *dest, char *src)
{
char *p = dest;

/* Find the end of the dest string */
while (*p)
p++;

/* Append src string to the end of dest string */
while (*src)
{
*p = *src;
p++;
src++;
}
*p = '\0';
return dest;
}
