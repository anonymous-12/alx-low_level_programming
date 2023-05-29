#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string to be reversed
 */
void print_rev(char *s)
{
	int length = 0;
	char *end = s;

	while (*end != '\0')
	{
		length++;
		end++;
	}
	while (length > 0)
	{
		end--;
		_putchar(*end);
		length--;
	}
	_putchar('\n');
}
