#include "main.h"
/**
 * 1-swap - swaps the values of two integers
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 */
void swap_int(int *a, int *b)
{
	int t = *b;
	*b = *a;
	*a = t;
}
