#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
int i;

printf("base digits 10:\n");
for (i = 0; i < 10; i++)
{
printf("%c", '0' + i);
}

return (0);
}
