#include "main.h"
/**
 *string_toupper - Changes all lowercase letters of a string to uppercase.
 *@str: The string to be changed.
 *
 *Return: A pointer to @str.
 */
char *string_toupper(char *str)
{
	int count = 0;

	while (str[count])
	{
		if (str[count] >= 'a' && str[count] <= 'z')
			str[count] -= 32;
		count++;
	}
	return (str);
}
