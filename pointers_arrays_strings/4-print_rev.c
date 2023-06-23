#include <stdio.h>
#include "main.h"
/**
 * print_rev - longitud
 * @s: int
 *
 * Return: void
 */
void print_rev(char *s)
{
int i;
int size = strlen(s);

for (i = size - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
