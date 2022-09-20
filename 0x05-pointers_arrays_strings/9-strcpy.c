#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies a string including the string terminator
 * @src: The source 
 * @dest: the destination
 * Return: the pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
