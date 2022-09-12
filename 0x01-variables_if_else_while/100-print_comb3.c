#include <stdio.h>

/**
 * main - Prints single digit numbers from 0
 *
 * Return: returns zero at the end
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			if (b > a)
			{
				putchar(a + '0');
				putchar(b + '0');
				if (a != 8)
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

