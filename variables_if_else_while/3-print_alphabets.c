#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
printf("%c", letter);
}

for (letter = 'A'; letter <= 'Z'; letter++)
{
printf("%c", letter);
}

printf("\n");

return (0);
}
