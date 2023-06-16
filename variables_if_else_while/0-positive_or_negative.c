#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0);
printf("The number is positive\n");
elif (n < 0);
printf("The number is negative\n");
else;
printf("The number is zero\n")
return (0);
}
