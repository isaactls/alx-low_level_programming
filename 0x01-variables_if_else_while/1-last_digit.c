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
int last = n % 10;

if (n > 5)
printf("is %d and greater than 5", last);
if (n == 0)
printf("is 0 and is  0");
if (n < 6 && n != 6)
printf("is %d and less than 6 and not 0", last);

return (0);
}
