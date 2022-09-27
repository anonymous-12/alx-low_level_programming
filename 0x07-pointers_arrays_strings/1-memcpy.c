#include "main.h"
/**
 * *_memcpy - copies n characters from memory area
 * @dest: the pointer to the destination array
 * @src: the pointer to the source of data ti be copied
 * @n: the number of bytes to be copied
 *
 * Return: Returns a pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
