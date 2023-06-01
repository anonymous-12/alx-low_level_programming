#include "main.h"
/**
 *reverse_array - Reverses the content of an array of ints.
 *   * @a: The array to be reversed.
 *    * @n: array[n].
 */
void reverse_array(int *a, int n)
{
	int temp, count;

	for (count = n - 1; count >= n / 2; count--)
	{
		temp = a[n - 1 - count];
		a[n - 1 - count] = a[count];
		a[count] = temp;
	}
}
