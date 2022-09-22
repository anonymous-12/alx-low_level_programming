#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: a string
 * @src: a string
 * Return: Returns a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int length;
	int j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[length] = src[j];

		length++;
		j++;
	}
	dest[length] = '\0';
	return (dest);

}
