#include "main.h"

/**
 * _islower - entry point
 * @c: is where the variable to be check
 *
 * _islower - check for lowercase of characters
 *
 * return: 1 for lower case and 0 based on the letter
 **/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')

return (1);

else

return (0);
}
