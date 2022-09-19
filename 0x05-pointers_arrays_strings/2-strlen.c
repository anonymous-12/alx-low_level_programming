#include "main.h"
/**
 * strlen - returns the length of a string
 * @str: The string whose length is to be printed
 * @s: is str
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s++ != '\0'; ++i);

	return (i);
}
