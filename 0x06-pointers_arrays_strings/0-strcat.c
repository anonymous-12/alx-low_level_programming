#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: a pointer to the string to be concatenated upon
 * @src: a pointer to the source string
 * Return: a pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
