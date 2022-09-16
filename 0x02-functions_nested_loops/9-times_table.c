#include "main.h"

/**
 * main - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int num, num1, num2;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (num1 = 1; num1 <= 9; num1++)
		{
			_putchar(',');
			_putchar(' ');

			num2 = num * num1;

			if (num2 <= 9)
				_putchar(' ');
			else
				_putchar((num2 / 10) + '0');

			_putchar((num2 % 10) + '0');
		}
		_putchar('\n');
	}
}
