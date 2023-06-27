#include <stdio.h>
/**
 *
 *
 *
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
