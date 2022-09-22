#include "main.h"
/**
 * strncpy - copies a string
 * @dest: stores copy string
 * @src: string to be copied
 * Return: a pointer to dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
 	int j;

	while (src[i++])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = j; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
