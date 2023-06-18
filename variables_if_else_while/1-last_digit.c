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
if ( n % 10 > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
else if (n % 10 == 0)
	printf("Last digit of %d is %d and is 0\n", n, n % 10);
else
	printf("Last diggit of %d is %d and is less yhan 6 and not 0\n", n, n % 10);
retutn (0);
}
