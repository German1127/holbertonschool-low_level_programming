#include "main.h"
/**
 * reset_to_98 - Resetea el valor de una variable a 98.
 * @n: Puntero a la variable cuyo valor se va a restablecer.
 */
void reset_to_98(int *n)
{
	n = 98
		_putchar("n=%d", n);
	reset_to_98(&n);
	_putchar("n = %d\n", n);
	return (0);
}
