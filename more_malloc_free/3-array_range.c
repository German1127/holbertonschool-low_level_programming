#include "main.h"
#include <stdlib.h>
/**
 * array_range - Function that creates an array of integers.
 * @min: Min number
 * @max: Max number
 * Return: Pointer
 */
int *array_range(int min, int max)
{
	int *xar;
	int x, y;

	if (min > max)
		return (NULL);

	x = max - min;

	xar = malloc((x + 1) * sizeof(int));
	if (xar == NULL)
		return (NULL);

	for (y = 0; y <= x; y++)
		xar[y] = min++;
	return (xar);
}
