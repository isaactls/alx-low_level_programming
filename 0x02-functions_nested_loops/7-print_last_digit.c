#include "main.h"
/**
 * print_last_digit - entry poitn
 * @n: variable
 *
 * Return: 0 (seccess)
 */
int print_last_digit(int n)
{
if (n < 0)
{
n = -n;
}
n = n % 10;
return (n);
}
