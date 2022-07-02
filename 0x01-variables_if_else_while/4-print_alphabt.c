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
for (a = 97; a <= 122; a++)
{
if (a != 101 && a != 113)
{
putchar(a);
}

putchar(10);
}
return (0);
}
