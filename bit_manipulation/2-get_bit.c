#include "main.h"

/**
 * get_bit - Funct to get ind
 * @n: int
 * @index: the index
 * Return: allways
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	return (n >> index & 1);
}
