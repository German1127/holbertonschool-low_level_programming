#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
int n;
int lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;

lastDigit = abs(n) % 10;

printf("last digit of %d is %d\n", n, lastDigit);

return (0);
}
