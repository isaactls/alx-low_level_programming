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
a = n % 10;
if (a < 0)
a *= -a;
b = a + '0';
_putchar(b);
return (1);
}
