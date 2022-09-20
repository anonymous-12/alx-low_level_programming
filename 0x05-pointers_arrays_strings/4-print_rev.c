#include "main.h"
#include <stdio.h> 
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @str: the string to be printed
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);

	int l;

	for (l = i; l > 0; l--)
		putchar(s[l]);
}

