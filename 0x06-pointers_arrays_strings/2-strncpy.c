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
	char *ptr = dest;

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
	return (dest);
}
