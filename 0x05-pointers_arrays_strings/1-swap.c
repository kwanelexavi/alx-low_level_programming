#include "main.h"

/**
 * swap_int - swap two integers
 * @a: value to swap
 * @b: value to swap
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
