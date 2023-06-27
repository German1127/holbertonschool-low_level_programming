#include "main.h"
/**
 * reverse_array - Reverses the order of elements in an integer array.
 * @a: Pointer to the array.
 * @n: Number of elements in the array.
 *
 * Description: This function takes an integer array and its size and reverses
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
