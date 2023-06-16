#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0);
printf("El numero es positivo\n");
elif (n < 0);
printf("El numero es negativo\n");
else;
printf("El numero es cero\n")
return (0);
}
