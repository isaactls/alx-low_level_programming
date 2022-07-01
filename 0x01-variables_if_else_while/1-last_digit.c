#include <stdlib.h>
#include <time.h>
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
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Last digit of %d is ", n);

if (n > 5)
printf("greater than 5");
if (n == 0)
printf("is 0");
if (n < 6 && n != 6)
printf("is less than 6 and not 0");

return (0);
}
