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

	for (i = 0; s[i] != '\0'; i--)
		_putchar(s[i]);
}
