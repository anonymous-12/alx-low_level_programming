#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: a string to be compared
 * @s2: same as above
 * Return: return -1
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{

		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
