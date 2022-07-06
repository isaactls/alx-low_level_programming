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
int b;
if (a < 0)
a = n % 10;
b = '0' + a;
_putchar(b);
return (1);
}
