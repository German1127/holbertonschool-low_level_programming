#include <unistd.h>
/*
* main - entry point
*
* Return: always 0 (success)
*/
int main() 
{
int numero;
char numeros[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
char espacio = ' ';

write(1, "Números de un dígito en base 10: ", 32);

for (numero = 0; numero < 10; numero++) {
write(1, &(numeros[numero]), 1);
write(1, &espacio, 1);
}

write(1, "\n", 1);

return 0;
}
