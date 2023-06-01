#include "main.h"
/**
 *leet -  encodes a string into 1337
 *
 *Return: a pointer to str
 */
char *leet(char *)
{
	int count, j;
	char m[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char n[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char numbers[] = {'4', '3', '0', '7', '1', '\0'};

	for (count = 0; changed[count] != '\0'; ++count)
	{
		for (j = 0; j < 5; j++)
		{
			if (changed[count] == m[j] || changed[count] == n[j])
			{
				changed[count] = numbers[j];
			}
		}
	}
	return (changed);
}

