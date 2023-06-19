#include "main.h"
/**
 * times_table - Checker
 *
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c < 10)
			{
				if (b != 0)
					_putchar(' ');
				_putchar(c + 48);

				if (b == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + (c / 10));
				_putchar('0' + (c % 10));
				if (b == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
