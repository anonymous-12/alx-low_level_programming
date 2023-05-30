#include "main.h"
/**
 * puts_half - prints half the length of a string
 * @str: the string in question
 */
void puts_half(char *str)
{
	int count = 0, length = 0, i;

	while (str[count++])
		length++;
	if ((length % 2) == 0)
		i = length / 2;
	else
		i = (length + 1) / 2;
	for (count = i; count < length; count++)
		_putchar(str[count]);
	_putchar('\n');
}

