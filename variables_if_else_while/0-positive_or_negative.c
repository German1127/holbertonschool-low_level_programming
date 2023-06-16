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
printf("The number %d is", n);
if (n > 0){
printf("positive");
}else if (n < 0) {
printf("negative");
}else{
printf("zero");
}
return (0);
}
