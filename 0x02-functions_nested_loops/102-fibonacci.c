#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long int fib1 = 1, fib2 = 2, next;

	printf("%lu, ", fib1);
	for (i = 0; i < 50; i++)
	{
		printf("%lu", fib2);
		next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;
		if (i != 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
