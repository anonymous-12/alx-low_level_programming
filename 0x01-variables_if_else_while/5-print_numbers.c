#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 (success)
 */
int main(void)
{
	int single;

	for (single = 0; single < 9; single++)
		printf("%d", single);

	printf("\n");

	return (0);
}
