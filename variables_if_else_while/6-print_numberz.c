#include <unistd.h>
/*
* main - entry point
*
* Return: always 0 (success)
*/
int main (void)
{
	int number;
	char buffer[2]

	write(1,"Base 10 single digit numbers	10:\n ",32);
	for (number = 0; number < 10; number++)
	{
		buffer[0] = '0' + number;
		buffer[1] = ' ';
		write(1, buffer, 2);
	}
	write(1,"\n", 1);
	return(0);
}
