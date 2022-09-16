#include "main.h"

/**
 * main - checks the last digit of a number
 * 
 * Return: returns the last value of the digit
 */
int print_last_digit(int j)
{
	int i;

	i = j % 10;

	if (i < 0)
	{
		i *= -1;
	}
	_putchar(i + '0');
	return (i);
}
