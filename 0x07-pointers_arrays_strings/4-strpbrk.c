#include "main.h"
/**
 * _strpbrk - finds the first character in s that matches the specified
 *		character in accept
 * @s: the string to be scanned
 * @accept: the string with the specified characters
 *
 * Return: a pointer to the character in s that matches one of the chars in
 *		accepts or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
