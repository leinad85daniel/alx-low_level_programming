#include "main.h"
/**
 * swap_int - rswap two numbers
 * @a: the first number
 * @b: the second number
 */
void swap_int(int *a, int *b)
{

*a = *a + *b; /* a = 140 (98 + 42) */
*b = *a - *b; /* b = 98 (140 - 42) */
*a = *a - *b; /* a = 42 (140 - 98) */

}
