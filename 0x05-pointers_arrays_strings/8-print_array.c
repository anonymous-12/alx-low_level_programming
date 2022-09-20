#include "main.h"
#include <stdio.h>
/**
 * print_arrays - prints elements of an array of ints
 * @a: pointer 
 *@n: number of times to print the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
