#include "main.h"
#include <stdlib.h>
/**
  * create_array - creates an array of chars, and initializes it with a
  * specific char
  * @size: size of the array to be created
  * @c: the character to initialize the array
  *
  * Return: NULL if size = 0 or fails
  *		returns a pointer to the array
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
