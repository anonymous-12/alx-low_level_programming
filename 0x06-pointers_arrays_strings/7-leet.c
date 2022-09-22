include "main.h"
/**
 * encodes string to 1337
 * @c: character
 * Return: Character
 */
char *leet(char *c)
{
	int i, ii;
	char s1[] = "aeotl";
	char S1[] = "AEOTL";
	char s2[] = "43071";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (ii = 0; ii < 5; ii++)
		{
			if (c[i] == s1[ii] || c[i] == S1[ii])
			{
				c[i] = s2[ii];
				break;
			}
		}
	}
	return (c);
