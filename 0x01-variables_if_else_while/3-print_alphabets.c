#include <stdio.h>
/**
 * main - Prints alphabets in lowercase,and then in uppercase.
 *
 * Return: Always 0
 */

int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);

	for (lower = 'A'; lower <= 'Z'; lower++)
		putchar(letter);

	putchar('\n');

	return (0);
}
