#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int a;
int b;
for (a = 48; a <= 57; a++)
{
for (b = 49; b <= a; b++)
{
if (b > a)
{
putchar(a);
putchar(b);
if (a != 56 || b != 57)
{
putchar(44);
putchar(32);
}
}
}
}
putchar(10);
return (0);
}
