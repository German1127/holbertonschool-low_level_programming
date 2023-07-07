#include "main.h"
#include <stdlib.h>
/**
 * create_array - Function to create an array
 * @size: The size of array
 * @c: A letter to inicialice the array
 *
 * Return: Pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n = 0;
	char *ar;

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (n < size)
	{
		ar[n] = c;
		n++;
	}
return (ar);

}
