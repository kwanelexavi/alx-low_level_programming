#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @n: the int to extract the last digit from
* Return: value of the last digit
*/
int print_last_digit(int n)
{
	int la;

	la = n % 10;
	if (la < 0)
	{
		la += -1;
	}
	_putchar(la + '0');
	return (la);
}
