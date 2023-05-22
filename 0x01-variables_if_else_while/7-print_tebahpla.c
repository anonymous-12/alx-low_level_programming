#include <stdio.h>
/**
 * main - print the alphabets in reverse
 *
 * Return: 0 (success)
 */
int main(void)
{
	char rev_alphabet;

	for (rev_alphabet = 'z'; rev_alphabet <= 'a'; rev_alphabet--)
		putchar(rev_alphabet);
	putchar('\n');

	return (0);
}
