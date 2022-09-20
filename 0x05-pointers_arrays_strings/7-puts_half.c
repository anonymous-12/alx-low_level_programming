#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string followed by a new line
 * @str: the string 
 */
void puts_half(char *str)
{
	int n;
	int i;

	while (str[n])
	{
		n++;
	}

	if (n % 2 == 1)
	{
		i = (n - 1) / 2;
		i = n - i;
	}

	else
	{
		i = n / 2;
	}

	for (; str[i]; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
