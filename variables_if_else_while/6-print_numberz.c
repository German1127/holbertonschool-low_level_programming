#include <stdio.h>
/*
 * main - Main function of the program
 *
 * Return: Always returns 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}
	putchar('\n');
	return (0);
}
