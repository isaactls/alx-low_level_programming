#include "main.h"
#include <stdio.h>
/**
 * puts_half - check the code for alx School students.
 * @str: pointer int type
 * Return: Always 0.
 */
void puts_half(char *str)
{
int i;
for (i = 0; *str != '\0'; i++)
str++;

i = i / 2;

for (i = i; i != 0; i--)
putchar(*(str - i));

putchar('\n');
}
