#include "main.h"
/**
 * _sqrt - raiz cuadrada
 * @n: int
 * @m: int
 * Return: 0
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
	 * @n: int
	 * Return: 0
	 */
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, n / 2));
}
