#include "main.h"
/**
 * leet -  encodesa string into 1337
 * @str: the string to be encoded
 * Return: a pointer to str
 */
char *leet(char *str)
{
	int indx1 = 0, indx2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[count])
	{
		for (index = 0; index <= 7; index++)
		{
			if (str[count] == leet[index] || str[count] - 32 == leet[index])
				str[count] = index + '0';
		}
		count++
	}

	return (str);
}
