#include "main.h"

/**
 * _puts - print a string, followed by a line
 * @str: a string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++)
	}
	_putchar('\n')
}
