#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @s: pointer
 * Return: s
 */
char *leet(char *s)
{
	int i, j;
	char lletter[] = "aAeEoOtTlL";
	char lnum[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (lletter[j] == s[i])
			{
				s[i] = lnum[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
