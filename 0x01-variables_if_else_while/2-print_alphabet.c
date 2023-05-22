#include <stdio.h>
/**
 * main - Prints alphabets in lower case
 *
 * Return: 0 (success)
 */
int main(void)
{
	char lower_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)

		putchar(lower_case);

	putchar('\n');

	return (0);
}
