#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int a;
for (int a = 97; a <= 122; a++)
_putchar(a);
}
int main(void)
{
print_alphabet();
_putchar(10);
return (0);
}
