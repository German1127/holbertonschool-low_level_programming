#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
char letter;
for(letter = 'a'; letter <= 'z'; letter++)
{
if(letter != 'q' && letter != 'e')
{
printf("%c", letter);
}
}
printf("\n")
return (0);
}
