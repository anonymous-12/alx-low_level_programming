#include "main.h"
#include <stdio.h>
/**
 *
 *puts2 - prints every other character of a string
 *@str: the string to be printed
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i;
	while (str[i])
	{
		if (i % 2 ==0)
		{
			putchar(str[i]);
		}		
	
		i++;
	}
	putchar('\n');
}
