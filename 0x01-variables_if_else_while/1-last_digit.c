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
int a;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);

a = n % 10;
if (n > 5)
printf(" %d and greater than 5\n", a);
if (n == 0)
printf(" 0 and is  0\n");
if (n < 6 && n != 6)
printf(" %d and less than 6 and not 0\n", a);

return (0);
}
