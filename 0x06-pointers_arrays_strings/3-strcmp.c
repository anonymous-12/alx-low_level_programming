#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: a string to be compared
 * @s2: same as above
 * Return: return -1
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			i = 1;
		}
		s1++;
		s2++;
	}
	return (0);
	else
	return (1);
}
