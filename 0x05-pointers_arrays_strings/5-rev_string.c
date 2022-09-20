#include "main.h"
#include <stdio.h>
/**
 *rev_string - reverses a string
 *
 * @s: the string to be reversed
 *
 */
void rev_string(char *s)

{
	int i;
	int j;
	int storage;
	int len_str;

	while (s[i] != 0)
	{
		i++;
											}
	len_str = i;
	i = 0;
	j = len_str - 1;
	while (i < j)
											{
												storage = s[i];
												s[i] = s[j];
												s[j] = storage;

												i++;
												j--;
}
