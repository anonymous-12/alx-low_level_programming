#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @n: number of elements of the array
 * @a: array of integers
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int t[];

	n--;
	while (i <= n)
	{
		t[n - i] = a[i];
		i++;
	}
	while (j <= n)
	{
		a[j] = t[j];
		j++;
	}
}
