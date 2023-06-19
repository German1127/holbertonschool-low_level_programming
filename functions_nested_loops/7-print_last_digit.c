#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @x: The number whose last digit will be printed.
 *
 * Return: The last digit of the number.
 */
int print_last_digit(int x)
{
	int n = x % 10;

	if (n < 0)
		n = -n;

	_putchar(n + '0');

	return (n);
}
