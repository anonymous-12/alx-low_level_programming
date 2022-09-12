#include <stdio.h>
/**
 * main - Print lowercase letters except q and e
 *
 * Return: Always 0
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
