#include <stdio.h>
/*
* main - entry point
*
* Return: always 0 (success)
*/
int main (void)
{
	int number;

	printf("Single-sigit numbers in base 10:\n ");
	for (number = 0; number < 10; number++)
	{
		printf("%d ", number);
	}
	printf("\n");
	return(0);
}
