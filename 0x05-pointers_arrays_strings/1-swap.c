#include "main.h"
/**
 * swap_int - is gonna swap to integers value
 * @a: first varibale 
 * @b: second varible
 *
 * return: void
 */
void swap_int(int *a, int *b)
{
int *c;
*c = *a;
*a = *b;
*b = *c;
}
