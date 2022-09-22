#include "main.h"
/**
 * _strncat - concatenates a string and uses the n byte.
 * @dest: a string
 * @src: a string
 * @n: a variable
 * Return: Concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];

	return (dest);
}
