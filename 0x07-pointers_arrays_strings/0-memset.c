#include "main.h"
/**
 * *_memset - fills blocks of memory witha specific value
 * @b: constant byte
 * @s: the pointer to the buffer
 * @n: size of bytes to be filled
 * Return: Returns a pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
