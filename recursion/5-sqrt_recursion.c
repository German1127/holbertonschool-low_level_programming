#include "main.h"
/**
 * _sqrt - Calculates the square root of a number.
 * @n: The number to calculate the square root of.
 * @m: The current value being tested for square root.
 * Return: The square root of the given number.
 */
int _sqrt(int n, int m)
{
	if ((n * 10000) - (m * m) <= 0)
	{
		return (m / 100);
	}
	else
		return (_sqrt(n, m + 1));

/**
 * _sqrt_recursion - Calculates the square root of a number using recursion.
 * @n: The number to calculate the square root of.
 * Return: The square root of the given number.
 */
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, n / 2));
}
