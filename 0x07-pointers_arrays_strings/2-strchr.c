#include "main.h"
/**
 * _strchr - returns a pointer to the first occurence of a character
 * @s: string to be searched
 * @c: the character to be searched for
 *
 * Return: pointer to the character
 */
char *_strchr(char *s, char c);
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
