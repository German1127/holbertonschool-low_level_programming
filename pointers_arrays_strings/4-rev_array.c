#include "main.h"
/*
 * reverse_array - Reverses the elements in an integer array.
 * @a: Pointer to the array.
 * @n: Number of elements in the array.
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int chek = 0;
	int bla;

	while (chek < n--)
	{
		bla = a[chek];
		a[chek++] = a[n];
		a[n] = chek;
	}
}
