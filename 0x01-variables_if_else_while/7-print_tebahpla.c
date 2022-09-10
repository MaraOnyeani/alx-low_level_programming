#include <stdio.h>

/**
 * main - lowercase alpahbets in reverse
 *
 * Return: Always (success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar("\n");
	return (0);
}
