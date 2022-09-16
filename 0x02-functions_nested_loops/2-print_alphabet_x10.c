#include "main.h"

/**
* main - Prints 10 times the alphabet, in lowercase.
*/

void print_alphabet_x10(void)
{
	char i, a;

	for (a = 0; a <= 9; a++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
