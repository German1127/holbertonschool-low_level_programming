#include "main.h"
/*
 *
 *This function prints the second half of a string.
 *It takes a pointer to a character array as input.
 */
void puts_half(char *str)
{
int a = 0;
int b = 0;

while (str[a] != '\0')
	a++;

a -= 1;

if (a % 2 == 0)
{
	b = (a + 1) / 2;
}
else
{
	b = (a + 1) / 2;
}
while (str[b] != '\0')
{
_putchar(str[b]);
	b++;
}
_putchar('\n');
}
