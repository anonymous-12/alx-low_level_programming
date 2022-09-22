#include "main.h"
/**
 * string_toupper - changes all lowercase letters to upppercase
 * @str: string to be modified
 * Return: Always 0
 */
char *string_toupper(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
