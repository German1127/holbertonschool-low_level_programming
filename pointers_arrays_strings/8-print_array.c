#include <stdio.h>
/**
 * print_array - Prints the elements of an array.
 * @a: Pointer to the array.
 * @n: Number of elements in the array.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
}
printf("\n");
}
