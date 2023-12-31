#include "main.h"

/**
 * clear_bit - Function making the bits 0
 * @n: int
 * @index:  the index
 * Return: allways
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
