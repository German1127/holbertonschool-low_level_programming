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
	int f = 0, x;

	while (f < n--)
	{
		x = a[f];
		a[f++] = a[n];
		a[n] = x;
	}
}
