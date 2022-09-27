#include "main.h"
/**
 * _sprspn - Returns thelength of the initial substring of a string
 * @s: The string to be searched
 * @accept: Contains the character to be matched
 *
 * Return: The number of bytes in s that match accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i];i++)
		{
			if (*s == accept[i])
			{
				k++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (k);
		}
		s++;
	}
	return (k);
}
