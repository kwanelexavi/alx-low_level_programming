#include "main.h"

/**
 * *rot13 - encodes a string using rot13.
 * @s: pointer
 * Return: s
 */
char *rot13(char *s)
{
	int i, j;
	char arr1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arr2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == arr1[j])
			{
				s[i] = arr2[j];
				break;
			}
		}
	}
	return (s);
}
