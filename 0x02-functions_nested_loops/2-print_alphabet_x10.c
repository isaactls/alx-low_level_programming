#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * print alphabet: 'print alphabet in lowercase'
 *
 * return: no return (Success)
 */

void print_alphabet_x10(void)
{
int b;
for (b = 1; b <=10; b++)
{
int a;
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
