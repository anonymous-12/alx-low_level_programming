#include <stdio.h>
/**
 * main - Prints all letters except q and e
 *
 * Return: 0 (success)
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != 'e' && lower != 'q')
			putchar(lower);
	}
	putchar('\n');
	return (0);
}
