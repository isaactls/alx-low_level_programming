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
for (a = 48; a < 58; a++)
{
for (b = 48; b <= a; b ++)
{
if (b > a)
{
putchar(a);
putchar(b);
putchar(44);
putchar(32);
}
}
}
putchar(10);
return (0);
}
