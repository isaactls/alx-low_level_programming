#include "main.h"
/**
 * print_last_digit - entry poitn
 * @n: variable
 *
 * Return: 0 (seccess)
 */
int print_last_digit(int n)
{
int a;
if (n < 0)
n = -n;
a = n % 10;
_putchar('0' + a);
return (0);
}
