#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of integers/ elements
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	n -= 1;
	while (i <= n)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n--] = temp;
	}
}
