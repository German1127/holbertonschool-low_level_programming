#include "main.h"
/**
 * _strncpy - Copia la cadena src en la cadena dest, limitada por n bytes.
 * @dest: Cadena de destino.
 * @src: Cadena de origen.
 * @n: Número máximo de bytes a copiar.
 *
 * Return: Puntero a la cadena de destino (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
	    int i;

		for (i = 0; i < n && src[i] != '\0'; i++)
		{
			dest[i] = src[i];

		}

		while (i < n)
		{
			dest[i] = '\0';
			i++;

		}

		return (dest);
}
