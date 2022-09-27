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
	int i;
	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((s + i));
		i++;
	}
	if (c == '\0')
		return ((s + i));
	return (NULL);
}
