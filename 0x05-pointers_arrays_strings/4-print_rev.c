#include "main.h"
#include <stdio.h> 
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @str_len: the string to be printed
 * @s: stores the string
 * Return: Returns string in reverse 
 */
void print_rev(char *s)
{
	int i;

 	i = str_len(s) - 1;
	while (i >= 0)
	{
		putchar(s[i]);
			i--;
	}
	putchar('\n');
}}

