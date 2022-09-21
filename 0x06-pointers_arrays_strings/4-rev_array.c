#include "main.h"

/**
 *reverse_array - a function that reverse an array.
 *@a: an input array
 *@n: number of elements of array
 *Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, last;

	last = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		int start, end;
		start = a[i];
		a[i] = end;
		a[last] = start;
		last--;
	}
}
