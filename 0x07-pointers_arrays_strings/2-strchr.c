#include "main.h"
/**
 * _strchr - returns a pointer to the first occurence of a character
 * @s: string to be searched
 * @c: the character to be searched for
 *
 * Return: pointer to the character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
