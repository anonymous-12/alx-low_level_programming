#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: the copied string
 * @src: the string to be copied
 * @n: number of bytes copied from src
 *
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, s_len = 0;

	while (src[i++])
		s_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = s_len; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
