#include "main.h"

/**
 * _isalpha: entry point
 * @c: variable for character to be checked
 *
 * return: 0 or 1
 **/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
