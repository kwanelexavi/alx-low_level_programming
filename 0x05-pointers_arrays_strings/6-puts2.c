#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * followed by a new line
 * @str: string
 */
void puts2(char *str)
{
	int i = 0;
	int t = 0;
	char *y = str;
	int k;

	while (*y != '\0')
	{
		y++;
		i++;
	}

	t = i - 1;

	for (k = 0; k <= t; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
