#include "main.h"
#include <string.h>
/**
 * _strlen - Program entry point
 * @s: int
 * Return: Returns 0 if the execution was successful
 */
int _strlen(char *s)
{
int i;
int cont = 0;
for (i = 0; s[i] != '\0'; i++);
cont++;
return (cont);
}
