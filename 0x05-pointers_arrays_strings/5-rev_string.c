#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: a string to reversed
 */

void rev_string(char *s)
{
	char revS = s[0];
	int a = 0;
	int i;

	while (s[a] != '\0')
	{
		a++;
		for (i = 0; i < a; i++)
		{
			a--;
			revS = s[i];
			s[i] = s[a];
			s[a] = revS;
		}
	}
}
