#include <stdio.h>
/*
* main - entry point
*
* Return: always 0 (success)
*/
int putchar(int c);

int main(void) 
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}
	putchar('\n');
	return(0);
}
