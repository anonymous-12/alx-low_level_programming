#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: stores copy string
 * @src: string to be copied
 * @n: an integer
 * Return: a pointer to dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
