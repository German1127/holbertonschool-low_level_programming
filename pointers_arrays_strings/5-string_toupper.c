#include "main.h"
/**
 * string_toupper - Convierte una cadena de caracteres a mayúsculas
 * @s: La cadena de caracteres a convertir
 *
 * Return: Puntero a la cadena convertida
 */
char *string_toupper(char *s)
{
	char *x = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32; // el -32 es la convercion del codigo ascii
		s++; // para que si son minusculas pasen a mayusculas
	}
	return (x);
}
