#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		int j = '0';

		for (j = '0'; j <= '9'; j++)
		{
			if (!((i == j) || (j > i)))
			{
				putchar(j);
				putchar(i);
                                if (!(i == '9' && j == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
