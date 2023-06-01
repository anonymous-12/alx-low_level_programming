#include "main.h"
/**
 * _strncat - Concatenates two strings using n > 0 bytes from src
 * @dest: the string to be appended
 * @src: the sourcestring to be appended to dest
 * @n: thhe number of bytes to  be appended to dest
 *
 * Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';
	return (dest);
}

