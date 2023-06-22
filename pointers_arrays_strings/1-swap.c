#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b);
{
int a = 98;
int b = 42;

_putchar("a=%d, b=%d\n", a, b);
swap_int(&a, &b);
_putchar("a=%d, b=%d\n", a, b);
return (0);
}
